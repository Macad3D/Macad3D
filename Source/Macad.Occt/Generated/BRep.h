// Generated wrapper code for package BRep

#pragma once

#include "TopoDS.h"
#include "BRep.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRep_ListOfPointRepresentation
//---------------------------------------------------------------------
public ref class BRep_ListOfPointRepresentation sealed : public BaseClass<::BRep_ListOfPointRepresentation>
{

#ifdef Include_BRep_ListOfPointRepresentation_h
public:
	Include_BRep_ListOfPointRepresentation_h
#endif

public:
	BRep_ListOfPointRepresentation(::BRep_ListOfPointRepresentation* nativeInstance)
		: BaseClass<::BRep_ListOfPointRepresentation>( nativeInstance, true )
	{}

	BRep_ListOfPointRepresentation(::BRep_ListOfPointRepresentation& nativeInstance)
		: BaseClass<::BRep_ListOfPointRepresentation>( &nativeInstance, false )
	{}

	property ::BRep_ListOfPointRepresentation* NativeInstance
	{
		::BRep_ListOfPointRepresentation* get()
		{
			return static_cast<::BRep_ListOfPointRepresentation*>(_NativeInstance);
		}
	}

public:
	BRep_ListOfPointRepresentation();
	BRep_ListOfPointRepresentation(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRep_ListOfPointRepresentation(Macad::Occt::BRep_ListOfPointRepresentation^ theOther);
	int Size();
	Macad::Occt::BRep_ListOfPointRepresentation^ Assign(Macad::Occt::BRep_ListOfPointRepresentation^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::BRep_PointRepresentation^ First();
	Macad::Occt::BRep_PointRepresentation^ Last();
	Macad::Occt::BRep_PointRepresentation^ Append(Macad::Occt::BRep_PointRepresentation^ theItem);
	/* Method skipped due to unknown mapping: void Append(BRep_PointRepresentation theItem, Iterator theIter, ) */
	void Append(Macad::Occt::BRep_ListOfPointRepresentation^ theOther);
	Macad::Occt::BRep_PointRepresentation^ Prepend(Macad::Occt::BRep_PointRepresentation^ theItem);
	void Prepend(Macad::Occt::BRep_ListOfPointRepresentation^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: BRep_PointRepresentation InsertBefore(BRep_PointRepresentation theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(BRep_ListOfPointRepresentation theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: BRep_PointRepresentation InsertAfter(BRep_PointRepresentation theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(BRep_ListOfPointRepresentation theOther, Iterator theIter, ) */
	void Reverse();
}; // class BRep_ListOfPointRepresentation

//---------------------------------------------------------------------
//  Class  BRep_ListOfCurveRepresentation
//---------------------------------------------------------------------
public ref class BRep_ListOfCurveRepresentation sealed : public BaseClass<::BRep_ListOfCurveRepresentation>
{

#ifdef Include_BRep_ListOfCurveRepresentation_h
public:
	Include_BRep_ListOfCurveRepresentation_h
#endif

public:
	BRep_ListOfCurveRepresentation(::BRep_ListOfCurveRepresentation* nativeInstance)
		: BaseClass<::BRep_ListOfCurveRepresentation>( nativeInstance, true )
	{}

	BRep_ListOfCurveRepresentation(::BRep_ListOfCurveRepresentation& nativeInstance)
		: BaseClass<::BRep_ListOfCurveRepresentation>( &nativeInstance, false )
	{}

	property ::BRep_ListOfCurveRepresentation* NativeInstance
	{
		::BRep_ListOfCurveRepresentation* get()
		{
			return static_cast<::BRep_ListOfCurveRepresentation*>(_NativeInstance);
		}
	}

public:
	BRep_ListOfCurveRepresentation();
	BRep_ListOfCurveRepresentation(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	BRep_ListOfCurveRepresentation(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther);
	int Size();
	Macad::Occt::BRep_ListOfCurveRepresentation^ Assign(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::BRep_CurveRepresentation^ First();
	Macad::Occt::BRep_CurveRepresentation^ Last();
	Macad::Occt::BRep_CurveRepresentation^ Append(Macad::Occt::BRep_CurveRepresentation^ theItem);
	/* Method skipped due to unknown mapping: void Append(BRep_CurveRepresentation theItem, Iterator theIter, ) */
	void Append(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther);
	Macad::Occt::BRep_CurveRepresentation^ Prepend(Macad::Occt::BRep_CurveRepresentation^ theItem);
	void Prepend(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: BRep_CurveRepresentation InsertBefore(BRep_CurveRepresentation theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(BRep_ListOfCurveRepresentation theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: BRep_CurveRepresentation InsertAfter(BRep_CurveRepresentation theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(BRep_ListOfCurveRepresentation theOther, Iterator theIter, ) */
	void Reverse();
}; // class BRep_ListOfCurveRepresentation

//---------------------------------------------------------------------
//  Class  BRep_Builder
//---------------------------------------------------------------------
public ref class BRep_Builder sealed : public Macad::Occt::TopoDS_Builder
{

#ifdef Include_BRep_Builder_h
public:
	Include_BRep_Builder_h
#endif

public:
	BRep_Builder(::BRep_Builder* nativeInstance)
		: Macad::Occt::TopoDS_Builder( nativeInstance )
	{}

	BRep_Builder(::BRep_Builder& nativeInstance)
		: Macad::Occt::TopoDS_Builder( nativeInstance )
	{}

	property ::BRep_Builder* NativeInstance
	{
		::BRep_Builder* get()
		{
			return static_cast<::BRep_Builder*>(_NativeInstance);
		}
	}

public:
	BRep_Builder();
	BRep_Builder(Macad::Occt::BRep_Builder^ parameter1);
	void MakeFace(Macad::Occt::TopoDS_Face^ F);
	void MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, double Tol);
	void MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
	/* Method skipped due to unknown mapping: void MakeFace(TopoDS_Face theFace, Poly_Triangulation theTriangulation, ) */
	/* Method skipped due to unknown mapping: void MakeFace(TopoDS_Face theFace, Poly_ListOfTriangulation theTriangulations, Poly_Triangulation theActiveTriangulation, ) */
	/* Method skipped due to unknown mapping: void MakeFace(TopoDS_Face theFace, Poly_ListOfTriangulation theTriangulations, Poly_Triangulation theActiveTriangulation, ) */
	void UpdateFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
	/* Method skipped due to unknown mapping: void UpdateFace(TopoDS_Face theFace, Poly_Triangulation theTriangulation, Standard_Boolean theToReset, ) */
	/* Method skipped due to unknown mapping: void UpdateFace(TopoDS_Face theFace, Poly_Triangulation theTriangulation, Standard_Boolean theToReset, ) */
	void UpdateFace(Macad::Occt::TopoDS_Face^ F, double Tol);
	void NaturalRestriction(Macad::Occt::TopoDS_Face^ F, bool N);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ E);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, double Tol);
	void MakeEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double Tol);
	/* Method skipped due to unknown mapping: void MakeEdge(TopoDS_Edge E, Poly_Polygon3D P, ) */
	/* Method skipped due to unknown mapping: void MakeEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N, Poly_Triangulation T, ) */
	/* Method skipped due to unknown mapping: void MakeEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N, Poly_Triangulation T, TopLoc_Location L, ) */
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, double Tol);
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double Tol);
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Face^ F, double Tol);
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::TopoDS_Face^ F, double Tol);
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol, Macad::Occt::Pnt2d Pf, Macad::Occt::Pnt2d Pl);
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol, Macad::Occt::Pnt2d Pf, Macad::Occt::Pnt2d Pl);
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon3D P, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon3D P, TopLoc_Location L, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N, Poly_Triangulation T, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N, Poly_Triangulation T, TopLoc_Location L, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N1, Poly_PolygonOnTriangulation N2, Poly_Triangulation T, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N1, Poly_PolygonOnTriangulation N2, Poly_Triangulation T, TopLoc_Location L, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon2D P, TopoDS_Face S, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon2D P, Geom_Surface S, TopLoc_Location T, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon2D P1, Poly_Polygon2D P2, TopoDS_Face S, ) */
	/* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon2D P1, Poly_Polygon2D P2, Geom_Surface S, TopLoc_Location L, ) */
	void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, double Tol);
	void Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::GeomAbs_Shape C);
	void Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2, Macad::Occt::GeomAbs_Shape C);
	void SameParameter(Macad::Occt::TopoDS_Edge^ E, bool S);
	void SameRange(Macad::Occt::TopoDS_Edge^ E, bool S);
	void Degenerated(Macad::Occt::TopoDS_Edge^ E, bool D);
	void Range(Macad::Occt::TopoDS_Edge^ E, double First, double Last, bool Only3d);
	void Range(Macad::Occt::TopoDS_Edge^ E, double First, double Last);
	void Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double First, double Last);
	void Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double First, double Last);
	void Transfert(Macad::Occt::TopoDS_Edge^ Ein, Macad::Occt::TopoDS_Edge^ Eout);
	void MakeVertex(Macad::Occt::TopoDS_Vertex^ V);
	void MakeVertex(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt P, double Tol);
	void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt P, double Tol);
	void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, double Tol);
	void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double Tol);
	void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
	void UpdateVertex(Macad::Occt::TopoDS_Vertex^ Ve, double U, double V, Macad::Occt::TopoDS_Face^ F, double Tol);
	void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double Tol);
	void Transfert(Macad::Occt::TopoDS_Edge^ Ein, Macad::Occt::TopoDS_Edge^ Eout, Macad::Occt::TopoDS_Vertex^ Vin, Macad::Occt::TopoDS_Vertex^ Vout);
}; // class BRep_Builder

//---------------------------------------------------------------------
//  Class  BRep_TFace
//---------------------------------------------------------------------
public ref class BRep_TFace sealed : public Macad::Occt::TopoDS_TFace
{

#ifdef Include_BRep_TFace_h
public:
	Include_BRep_TFace_h
#endif

public:
	BRep_TFace(::BRep_TFace* nativeInstance)
		: Macad::Occt::TopoDS_TFace( nativeInstance )
	{}

	BRep_TFace(::BRep_TFace& nativeInstance)
		: Macad::Occt::TopoDS_TFace( nativeInstance )
	{}

	property ::BRep_TFace* NativeInstance
	{
		::BRep_TFace* get()
		{
			return static_cast<::BRep_TFace*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_TFace^ CreateDowncasted(::BRep_TFace* instance);

public:
	BRep_TFace();
	BRep_TFace(Macad::Occt::BRep_TFace^ parameter1);
	Macad::Occt::Geom_Surface^ Surface();
	void Surface(Macad::Occt::Geom_Surface^ theSurface);
	Macad::Occt::TopLoc_Location^ Location();
	void Location(Macad::Occt::TopLoc_Location^ theLocation);
	double Tolerance();
	void Tolerance(double theTolerance);
	bool NaturalRestriction();
	void NaturalRestriction(bool theRestriction);
	/* Method skipped due to unknown mapping: Poly_Triangulation Triangulation(unsigned int thePurpose, ) */
	/* Method skipped due to unknown mapping: Poly_Triangulation Triangulation(unsigned int thePurpose, ) */
	/* Method skipped due to unknown mapping: void Triangulation(Poly_Triangulation theTriangulation, Standard_Boolean theToReset, ) */
	/* Method skipped due to unknown mapping: void Triangulation(Poly_Triangulation theTriangulation, Standard_Boolean theToReset, ) */
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: Poly_ListOfTriangulation Triangulations() */
	/* Method skipped due to unknown mapping: void Triangulations(Poly_ListOfTriangulation theTriangulations, Poly_Triangulation theActiveTriangulation, ) */
	int NbTriangulations();
	/* Method skipped due to unknown mapping: Poly_Triangulation ActiveTriangulation() */
}; // class BRep_TFace

//---------------------------------------------------------------------
//  Class  BRep_PointRepresentation
//---------------------------------------------------------------------
public ref class BRep_PointRepresentation : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRep_PointRepresentation_h
public:
	Include_BRep_PointRepresentation_h
#endif

protected:
	BRep_PointRepresentation(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	BRep_PointRepresentation(::BRep_PointRepresentation* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	BRep_PointRepresentation(::BRep_PointRepresentation& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::BRep_PointRepresentation* NativeInstance
	{
		::BRep_PointRepresentation* get()
		{
			return static_cast<::BRep_PointRepresentation*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PointRepresentation^ CreateDowncasted(::BRep_PointRepresentation* instance);

public:
	BRep_PointRepresentation(Macad::Occt::BRep_PointRepresentation^ parameter1);
	bool IsPointOnCurve();
	bool IsPointOnCurveOnSurface();
	bool IsPointOnSurface();
	bool IsPointOnCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L);
	bool IsPointOnCurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	bool IsPointOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	Macad::Occt::TopLoc_Location^ Location();
	void Location(Macad::Occt::TopLoc_Location^ L);
	double Parameter();
	void Parameter(double P);
	double Parameter2();
	void Parameter2(double P);
	Macad::Occt::Geom_Curve^ Curve();
	void Curve(Macad::Occt::Geom_Curve^ C);
	Macad::Occt::Geom2d_Curve^ PCurve();
	void PCurve(Macad::Occt::Geom2d_Curve^ C);
	Macad::Occt::Geom_Surface^ Surface();
	void Surface(Macad::Occt::Geom_Surface^ S);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_PointRepresentation

//---------------------------------------------------------------------
//  Class  BRep_TVertex
//---------------------------------------------------------------------
public ref class BRep_TVertex sealed : public Macad::Occt::TopoDS_TVertex
{

#ifdef Include_BRep_TVertex_h
public:
	Include_BRep_TVertex_h
#endif

public:
	BRep_TVertex(::BRep_TVertex* nativeInstance)
		: Macad::Occt::TopoDS_TVertex( nativeInstance )
	{}

	BRep_TVertex(::BRep_TVertex& nativeInstance)
		: Macad::Occt::TopoDS_TVertex( nativeInstance )
	{}

	property ::BRep_TVertex* NativeInstance
	{
		::BRep_TVertex* get()
		{
			return static_cast<::BRep_TVertex*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_TVertex^ CreateDowncasted(::BRep_TVertex* instance);

public:
	BRep_TVertex();
	BRep_TVertex(Macad::Occt::BRep_TVertex^ parameter1);
	double Tolerance();
	void Tolerance(double T);
	void UpdateTolerance(double T);
	Macad::Occt::Pnt Pnt();
	void Pnt(Macad::Occt::Pnt P);
	Macad::Occt::BRep_ListOfPointRepresentation^ Points();
	Macad::Occt::BRep_ListOfPointRepresentation^ ChangePoints();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_TVertex

//---------------------------------------------------------------------
//  Class  BRep_Tool
//---------------------------------------------------------------------
public ref class BRep_Tool sealed : public BaseClass<::BRep_Tool>
{

#ifdef Include_BRep_Tool_h
public:
	Include_BRep_Tool_h
#endif

public:
	BRep_Tool(::BRep_Tool* nativeInstance)
		: BaseClass<::BRep_Tool>( nativeInstance, true )
	{}

	BRep_Tool(::BRep_Tool& nativeInstance)
		: BaseClass<::BRep_Tool>( &nativeInstance, false )
	{}

	property ::BRep_Tool* NativeInstance
	{
		::BRep_Tool* get()
		{
			return static_cast<::BRep_Tool*>(_NativeInstance);
		}
	}

public:
	BRep_Tool();
	BRep_Tool(Macad::Occt::BRep_Tool^ parameter1);
	static bool IsClosed(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::Geom_Surface^ Surface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopLoc_Location^ L);
	static Macad::Occt::Geom_Surface^ Surface(Macad::Occt::TopoDS_Face^ F);
	/* Method skipped due to unknown mapping: Poly_Triangulation Triangulation(TopoDS_Face theFace, TopLoc_Location theLocation, unsigned int theMeshPurpose, ) */
	/* Method skipped due to unknown mapping: Poly_Triangulation Triangulation(TopoDS_Face theFace, TopLoc_Location theLocation, unsigned int theMeshPurpose, ) */
	/* Method skipped due to unknown mapping: Poly_ListOfTriangulation Triangulations(TopoDS_Face theFace, TopLoc_Location theLocation, ) */
	static double Tolerance(Macad::Occt::TopoDS_Face^ F);
	static bool NaturalRestriction(Macad::Occt::TopoDS_Face^ F);
	static bool IsGeometric(Macad::Occt::TopoDS_Face^ F);
	static bool IsGeometric(Macad::Occt::TopoDS_Edge^ E);
	static Macad::Occt::Geom_Curve^ Curve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
	static Macad::Occt::Geom_Curve^ Curve(Macad::Occt::TopoDS_Edge^ E, double% First, double% Last);
	/* Method skipped due to unknown mapping: Poly_Polygon3D Polygon3D(TopoDS_Edge E, TopLoc_Location L, ) */
	static Macad::Occt::Geom2d_Curve^ CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last, bool% theIsStored);
	static Macad::Occt::Geom2d_Curve^ CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last);
	static Macad::Occt::Geom2d_Curve^ CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last, bool% theIsStored);
	static Macad::Occt::Geom2d_Curve^ CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
	static Macad::Occt::Geom2d_Curve^ CurveOnPlane(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
	static void CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
	static void CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last, int Index);
	/* Method skipped due to unknown mapping: Poly_Polygon2D PolygonOnSurface(TopoDS_Edge E, TopoDS_Face F, ) */
	/* Method skipped due to unknown mapping: Poly_Polygon2D PolygonOnSurface(TopoDS_Edge E, Geom_Surface S, TopLoc_Location L, ) */
	/* Method skipped due to unknown mapping: void PolygonOnSurface(TopoDS_Edge E, Poly_Polygon2D C, Geom_Surface S, TopLoc_Location L, ) */
	/* Method skipped due to unknown mapping: void PolygonOnSurface(TopoDS_Edge E, Poly_Polygon2D C, Geom_Surface S, TopLoc_Location L, Standard_Integer Index, ) */
	/* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation(TopoDS_Edge E, Poly_Triangulation T, TopLoc_Location L, ) */
	/* Method skipped due to unknown mapping: void PolygonOnTriangulation(TopoDS_Edge E, Poly_PolygonOnTriangulation P, Poly_Triangulation T, TopLoc_Location L, ) */
	/* Method skipped due to unknown mapping: void PolygonOnTriangulation(TopoDS_Edge E, Poly_PolygonOnTriangulation P, Poly_Triangulation T, TopLoc_Location L, Standard_Integer Index, ) */
	static bool IsClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	static bool IsClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	/* Method skipped due to unknown mapping: Standard_Boolean IsClosed(TopoDS_Edge E, Poly_Triangulation T, TopLoc_Location L, ) */
	static double Tolerance(Macad::Occt::TopoDS_Edge^ E);
	static bool SameParameter(Macad::Occt::TopoDS_Edge^ E);
	static bool SameRange(Macad::Occt::TopoDS_Edge^ E);
	static bool Degenerated(Macad::Occt::TopoDS_Edge^ E);
	static void Range(Macad::Occt::TopoDS_Edge^ E, double% First, double% Last);
	static void Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
	static void Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last);
	static void UVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::Pnt2d% PFirst, Macad::Occt::Pnt2d% PLast);
	static void UVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt2d% PFirst, Macad::Occt::Pnt2d% PLast);
	static void SetUVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::Pnt2d PFirst, Macad::Occt::Pnt2d PLast);
	static void SetUVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt2d PFirst, Macad::Occt::Pnt2d PLast);
	static bool HasContinuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
	static bool HasContinuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
	static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
	static bool HasContinuity(Macad::Occt::TopoDS_Edge^ E);
	static Macad::Occt::GeomAbs_Shape MaxContinuity(Macad::Occt::TopoDS_Edge^ theEdge);
	static Macad::Occt::Pnt Pnt(Macad::Occt::TopoDS_Vertex^ V);
	static double Tolerance(Macad::Occt::TopoDS_Vertex^ V);
	static bool Parameter(Macad::Occt::TopoDS_Vertex^ theV, Macad::Occt::TopoDS_Edge^ theE, double% theParam);
	static double Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E);
	static double Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
	static double Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	static Macad::Occt::Pnt2d Parameters(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Face^ F);
	static double MaxTolerance(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theSubShape);
}; // class BRep_Tool

//---------------------------------------------------------------------
//  Class  BRep_CurveRepresentation
//---------------------------------------------------------------------
public ref class BRep_CurveRepresentation : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRep_CurveRepresentation_h
public:
	Include_BRep_CurveRepresentation_h
#endif

protected:
	BRep_CurveRepresentation(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	BRep_CurveRepresentation(::BRep_CurveRepresentation* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	BRep_CurveRepresentation(::BRep_CurveRepresentation& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::BRep_CurveRepresentation* NativeInstance
	{
		::BRep_CurveRepresentation* get()
		{
			return static_cast<::BRep_CurveRepresentation*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_CurveRepresentation^ CreateDowncasted(::BRep_CurveRepresentation* instance);

public:
	BRep_CurveRepresentation(Macad::Occt::BRep_CurveRepresentation^ parameter1);
	bool IsCurve3D();
	bool IsCurveOnSurface();
	bool IsRegularity();
	bool IsCurveOnClosedSurface();
	bool IsCurveOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	bool IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
	bool IsPolygon3D();
	bool IsPolygonOnTriangulation();
	/* Method skipped due to unknown mapping: Standard_Boolean IsPolygonOnTriangulation(Poly_Triangulation T, TopLoc_Location L, ) */
	bool IsPolygonOnClosedTriangulation();
	bool IsPolygonOnSurface();
	bool IsPolygonOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	bool IsPolygonOnClosedSurface();
	Macad::Occt::TopLoc_Location^ Location();
	void Location(Macad::Occt::TopLoc_Location^ L);
	Macad::Occt::Geom_Curve^ Curve3D();
	void Curve3D(Macad::Occt::Geom_Curve^ C);
	Macad::Occt::Geom_Surface^ Surface();
	Macad::Occt::Geom2d_Curve^ PCurve();
	void PCurve(Macad::Occt::Geom2d_Curve^ C);
	Macad::Occt::Geom2d_Curve^ PCurve2();
	void PCurve2(Macad::Occt::Geom2d_Curve^ C);
	/* Method skipped due to unknown mapping: Poly_Polygon3D Polygon3D() */
	/* Method skipped due to unknown mapping: void Polygon3D(Poly_Polygon3D P, ) */
	/* Method skipped due to unknown mapping: Poly_Polygon2D Polygon() */
	/* Method skipped due to unknown mapping: void Polygon(Poly_Polygon2D P, ) */
	/* Method skipped due to unknown mapping: Poly_Polygon2D Polygon2() */
	/* Method skipped due to unknown mapping: void Polygon2(Poly_Polygon2D P, ) */
	/* Method skipped due to unknown mapping: Poly_Triangulation Triangulation() */
	/* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation() */
	/* Method skipped due to unknown mapping: void PolygonOnTriangulation(Poly_PolygonOnTriangulation P, ) */
	/* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation2() */
	/* Method skipped due to unknown mapping: void PolygonOnTriangulation2(Poly_PolygonOnTriangulation P2, ) */
	Macad::Occt::Geom_Surface^ Surface2();
	Macad::Occt::TopLoc_Location^ Location2();
	Macad::Occt::GeomAbs_Shape Continuity();
	void Continuity(Macad::Occt::GeomAbs_Shape C);
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_CurveRepresentation

//---------------------------------------------------------------------
//  Class  BRep_GCurve
//---------------------------------------------------------------------
public ref class BRep_GCurve : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_GCurve_h
public:
	Include_BRep_GCurve_h
#endif

protected:
	BRep_GCurve(InitMode init)
		: Macad::Occt::BRep_CurveRepresentation( init )
	{}

public:
	BRep_GCurve(::BRep_GCurve* nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	BRep_GCurve(::BRep_GCurve& nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	property ::BRep_GCurve* NativeInstance
	{
		::BRep_GCurve* get()
		{
			return static_cast<::BRep_GCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_GCurve^ CreateDowncasted(::BRep_GCurve* instance);

public:
	BRep_GCurve(Macad::Occt::BRep_GCurve^ parameter1);
	void SetRange(double First, double Last);
	void Range(double% First, double% Last);
	double First();
	double Last();
	void First(double F);
	void Last(double L);
	void D0(double U, Macad::Occt::Pnt% P);
	void Update();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_GCurve

//---------------------------------------------------------------------
//  Class  BRep_Curve3D
//---------------------------------------------------------------------
public ref class BRep_Curve3D sealed : public Macad::Occt::BRep_GCurve
{

#ifdef Include_BRep_Curve3D_h
public:
	Include_BRep_Curve3D_h
#endif

public:
	BRep_Curve3D(::BRep_Curve3D* nativeInstance)
		: Macad::Occt::BRep_GCurve( nativeInstance )
	{}

	BRep_Curve3D(::BRep_Curve3D& nativeInstance)
		: Macad::Occt::BRep_GCurve( nativeInstance )
	{}

	property ::BRep_Curve3D* NativeInstance
	{
		::BRep_Curve3D* get()
		{
			return static_cast<::BRep_Curve3D*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_Curve3D^ CreateDowncasted(::BRep_Curve3D* instance);

public:
	BRep_Curve3D(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L);
	BRep_Curve3D(Macad::Occt::BRep_Curve3D^ parameter1);
	void D0(double U, Macad::Occt::Pnt% P);
	bool IsCurve3D();
	Macad::Occt::Geom_Curve^ Curve3D();
	void Curve3D(Macad::Occt::Geom_Curve^ C);
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_Curve3D

//---------------------------------------------------------------------
//  Class  BRep_CurveOn2Surfaces
//---------------------------------------------------------------------
public ref class BRep_CurveOn2Surfaces sealed : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_CurveOn2Surfaces_h
public:
	Include_BRep_CurveOn2Surfaces_h
#endif

public:
	BRep_CurveOn2Surfaces(::BRep_CurveOn2Surfaces* nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	BRep_CurveOn2Surfaces(::BRep_CurveOn2Surfaces& nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	property ::BRep_CurveOn2Surfaces* NativeInstance
	{
		::BRep_CurveOn2Surfaces* get()
		{
			return static_cast<::BRep_CurveOn2Surfaces*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_CurveOn2Surfaces^ CreateDowncasted(::BRep_CurveOn2Surfaces* instance);

public:
	BRep_CurveOn2Surfaces(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2, Macad::Occt::GeomAbs_Shape C);
	BRep_CurveOn2Surfaces(Macad::Occt::BRep_CurveOn2Surfaces^ parameter1);
	bool IsRegularity();
	bool IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
	void D0(double U, Macad::Occt::Pnt% P);
	Macad::Occt::Geom_Surface^ Surface();
	Macad::Occt::Geom_Surface^ Surface2();
	Macad::Occt::TopLoc_Location^ Location2();
	Macad::Occt::GeomAbs_Shape Continuity();
	void Continuity(Macad::Occt::GeomAbs_Shape C);
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_CurveOn2Surfaces

//---------------------------------------------------------------------
//  Class  BRep_CurveOnSurface
//---------------------------------------------------------------------
public ref class BRep_CurveOnSurface : public Macad::Occt::BRep_GCurve
{

#ifdef Include_BRep_CurveOnSurface_h
public:
	Include_BRep_CurveOnSurface_h
#endif

protected:
	BRep_CurveOnSurface(InitMode init)
		: Macad::Occt::BRep_GCurve( init )
	{}

public:
	BRep_CurveOnSurface(::BRep_CurveOnSurface* nativeInstance)
		: Macad::Occt::BRep_GCurve( nativeInstance )
	{}

	BRep_CurveOnSurface(::BRep_CurveOnSurface& nativeInstance)
		: Macad::Occt::BRep_GCurve( nativeInstance )
	{}

	property ::BRep_CurveOnSurface* NativeInstance
	{
		::BRep_CurveOnSurface* get()
		{
			return static_cast<::BRep_CurveOnSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_CurveOnSurface^ CreateDowncasted(::BRep_CurveOnSurface* instance);

public:
	BRep_CurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	BRep_CurveOnSurface(Macad::Occt::BRep_CurveOnSurface^ parameter1);
	void SetUVPoints(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	void UVPoints(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
	void D0(double U, Macad::Occt::Pnt% P);
	bool IsCurveOnSurface();
	bool IsCurveOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	Macad::Occt::Geom_Surface^ Surface();
	Macad::Occt::Geom2d_Curve^ PCurve();
	void PCurve(Macad::Occt::Geom2d_Curve^ C);
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	void Update();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_CurveOnSurface

//---------------------------------------------------------------------
//  Class  BRep_CurveOnClosedSurface
//---------------------------------------------------------------------
public ref class BRep_CurveOnClosedSurface sealed : public Macad::Occt::BRep_CurveOnSurface
{

#ifdef Include_BRep_CurveOnClosedSurface_h
public:
	Include_BRep_CurveOnClosedSurface_h
#endif

public:
	BRep_CurveOnClosedSurface(::BRep_CurveOnClosedSurface* nativeInstance)
		: Macad::Occt::BRep_CurveOnSurface( nativeInstance )
	{}

	BRep_CurveOnClosedSurface(::BRep_CurveOnClosedSurface& nativeInstance)
		: Macad::Occt::BRep_CurveOnSurface( nativeInstance )
	{}

	property ::BRep_CurveOnClosedSurface* NativeInstance
	{
		::BRep_CurveOnClosedSurface* get()
		{
			return static_cast<::BRep_CurveOnClosedSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_CurveOnClosedSurface^ CreateDowncasted(::BRep_CurveOnClosedSurface* instance);

public:
	BRep_CurveOnClosedSurface(Macad::Occt::Geom2d_Curve^ PC1, Macad::Occt::Geom2d_Curve^ PC2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::GeomAbs_Shape C);
	BRep_CurveOnClosedSurface(Macad::Occt::BRep_CurveOnClosedSurface^ parameter1);
	void SetUVPoints2(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	void UVPoints2(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
	bool IsCurveOnClosedSurface();
	bool IsRegularity();
	bool IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
	Macad::Occt::Geom2d_Curve^ PCurve2();
	Macad::Occt::Geom_Surface^ Surface2();
	Macad::Occt::TopLoc_Location^ Location2();
	Macad::Occt::GeomAbs_Shape Continuity();
	void Continuity(Macad::Occt::GeomAbs_Shape C);
	void PCurve2(Macad::Occt::Geom2d_Curve^ C);
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	void Update();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_CurveOnClosedSurface

//---------------------------------------------------------------------
//  Class  BRep_PointOnCurve
//---------------------------------------------------------------------
public ref class BRep_PointOnCurve sealed : public Macad::Occt::BRep_PointRepresentation
{

#ifdef Include_BRep_PointOnCurve_h
public:
	Include_BRep_PointOnCurve_h
#endif

public:
	BRep_PointOnCurve(::BRep_PointOnCurve* nativeInstance)
		: Macad::Occt::BRep_PointRepresentation( nativeInstance )
	{}

	BRep_PointOnCurve(::BRep_PointOnCurve& nativeInstance)
		: Macad::Occt::BRep_PointRepresentation( nativeInstance )
	{}

	property ::BRep_PointOnCurve* NativeInstance
	{
		::BRep_PointOnCurve* get()
		{
			return static_cast<::BRep_PointOnCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PointOnCurve^ CreateDowncasted(::BRep_PointOnCurve* instance);

public:
	BRep_PointOnCurve(double P, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L);
	BRep_PointOnCurve(Macad::Occt::BRep_PointOnCurve^ parameter1);
	bool IsPointOnCurve();
	bool IsPointOnCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L);
	Macad::Occt::Geom_Curve^ Curve();
	void Curve(Macad::Occt::Geom_Curve^ C);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_PointOnCurve

//---------------------------------------------------------------------
//  Class  BRep_PointsOnSurface
//---------------------------------------------------------------------
public ref class BRep_PointsOnSurface : public Macad::Occt::BRep_PointRepresentation
{

#ifdef Include_BRep_PointsOnSurface_h
public:
	Include_BRep_PointsOnSurface_h
#endif

protected:
	BRep_PointsOnSurface(InitMode init)
		: Macad::Occt::BRep_PointRepresentation( init )
	{}

public:
	BRep_PointsOnSurface(::BRep_PointsOnSurface* nativeInstance)
		: Macad::Occt::BRep_PointRepresentation( nativeInstance )
	{}

	BRep_PointsOnSurface(::BRep_PointsOnSurface& nativeInstance)
		: Macad::Occt::BRep_PointRepresentation( nativeInstance )
	{}

	property ::BRep_PointsOnSurface* NativeInstance
	{
		::BRep_PointsOnSurface* get()
		{
			return static_cast<::BRep_PointsOnSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PointsOnSurface^ CreateDowncasted(::BRep_PointsOnSurface* instance);

public:
	BRep_PointsOnSurface(Macad::Occt::BRep_PointsOnSurface^ parameter1);
	Macad::Occt::Geom_Surface^ Surface();
	void Surface(Macad::Occt::Geom_Surface^ S);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_PointsOnSurface

//---------------------------------------------------------------------
//  Class  BRep_PointOnCurveOnSurface
//---------------------------------------------------------------------
public ref class BRep_PointOnCurveOnSurface sealed : public Macad::Occt::BRep_PointsOnSurface
{

#ifdef Include_BRep_PointOnCurveOnSurface_h
public:
	Include_BRep_PointOnCurveOnSurface_h
#endif

public:
	BRep_PointOnCurveOnSurface(::BRep_PointOnCurveOnSurface* nativeInstance)
		: Macad::Occt::BRep_PointsOnSurface( nativeInstance )
	{}

	BRep_PointOnCurveOnSurface(::BRep_PointOnCurveOnSurface& nativeInstance)
		: Macad::Occt::BRep_PointsOnSurface( nativeInstance )
	{}

	property ::BRep_PointOnCurveOnSurface* NativeInstance
	{
		::BRep_PointOnCurveOnSurface* get()
		{
			return static_cast<::BRep_PointOnCurveOnSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PointOnCurveOnSurface^ CreateDowncasted(::BRep_PointOnCurveOnSurface* instance);

public:
	BRep_PointOnCurveOnSurface(double P, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	BRep_PointOnCurveOnSurface(Macad::Occt::BRep_PointOnCurveOnSurface^ parameter1);
	bool IsPointOnCurveOnSurface();
	bool IsPointOnCurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	Macad::Occt::Geom2d_Curve^ PCurve();
	void PCurve(Macad::Occt::Geom2d_Curve^ C);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_PointOnCurveOnSurface

//---------------------------------------------------------------------
//  Class  BRep_PointOnSurface
//---------------------------------------------------------------------
public ref class BRep_PointOnSurface sealed : public Macad::Occt::BRep_PointsOnSurface
{

#ifdef Include_BRep_PointOnSurface_h
public:
	Include_BRep_PointOnSurface_h
#endif

public:
	BRep_PointOnSurface(::BRep_PointOnSurface* nativeInstance)
		: Macad::Occt::BRep_PointsOnSurface( nativeInstance )
	{}

	BRep_PointOnSurface(::BRep_PointOnSurface& nativeInstance)
		: Macad::Occt::BRep_PointsOnSurface( nativeInstance )
	{}

	property ::BRep_PointOnSurface* NativeInstance
	{
		::BRep_PointOnSurface* get()
		{
			return static_cast<::BRep_PointOnSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PointOnSurface^ CreateDowncasted(::BRep_PointOnSurface* instance);

public:
	BRep_PointOnSurface(double P1, double P2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	BRep_PointOnSurface(Macad::Occt::BRep_PointOnSurface^ parameter1);
	bool IsPointOnSurface();
	bool IsPointOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	double Parameter2();
	void Parameter2(double P);
}; // class BRep_PointOnSurface

//---------------------------------------------------------------------
//  Class  BRep_Polygon3D
//---------------------------------------------------------------------
public ref class BRep_Polygon3D sealed : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_Polygon3D_h
public:
	Include_BRep_Polygon3D_h
#endif

public:
	BRep_Polygon3D(::BRep_Polygon3D* nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	BRep_Polygon3D(::BRep_Polygon3D& nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	property ::BRep_Polygon3D* NativeInstance
	{
		::BRep_Polygon3D* get()
		{
			return static_cast<::BRep_Polygon3D*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_Polygon3D^ CreateDowncasted(::BRep_Polygon3D* instance);

public:
	/* Method skipped due to unknown mapping: void BRep_Polygon3D(Poly_Polygon3D P, TopLoc_Location L, ) */
	BRep_Polygon3D(Macad::Occt::BRep_Polygon3D^ parameter1);
	bool IsPolygon3D();
	/* Method skipped due to unknown mapping: Poly_Polygon3D Polygon3D() */
	/* Method skipped due to unknown mapping: void Polygon3D(Poly_Polygon3D P, ) */
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_Polygon3D

//---------------------------------------------------------------------
//  Class  BRep_PolygonOnSurface
//---------------------------------------------------------------------
public ref class BRep_PolygonOnSurface : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_PolygonOnSurface_h
public:
	Include_BRep_PolygonOnSurface_h
#endif

protected:
	BRep_PolygonOnSurface(InitMode init)
		: Macad::Occt::BRep_CurveRepresentation( init )
	{}

public:
	BRep_PolygonOnSurface(::BRep_PolygonOnSurface* nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	BRep_PolygonOnSurface(::BRep_PolygonOnSurface& nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	property ::BRep_PolygonOnSurface* NativeInstance
	{
		::BRep_PolygonOnSurface* get()
		{
			return static_cast<::BRep_PolygonOnSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PolygonOnSurface^ CreateDowncasted(::BRep_PolygonOnSurface* instance);

public:
	/* Method skipped due to unknown mapping: void BRep_PolygonOnSurface(Poly_Polygon2D P, Geom_Surface S, TopLoc_Location L, ) */
	BRep_PolygonOnSurface(Macad::Occt::BRep_PolygonOnSurface^ parameter1);
	bool IsPolygonOnSurface();
	bool IsPolygonOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
	Macad::Occt::Geom_Surface^ Surface();
	/* Method skipped due to unknown mapping: Poly_Polygon2D Polygon() */
	/* Method skipped due to unknown mapping: void Polygon(Poly_Polygon2D P, ) */
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_PolygonOnSurface

//---------------------------------------------------------------------
//  Class  BRep_PolygonOnClosedSurface
//---------------------------------------------------------------------
public ref class BRep_PolygonOnClosedSurface sealed : public Macad::Occt::BRep_PolygonOnSurface
{

#ifdef Include_BRep_PolygonOnClosedSurface_h
public:
	Include_BRep_PolygonOnClosedSurface_h
#endif

public:
	BRep_PolygonOnClosedSurface(::BRep_PolygonOnClosedSurface* nativeInstance)
		: Macad::Occt::BRep_PolygonOnSurface( nativeInstance )
	{}

	BRep_PolygonOnClosedSurface(::BRep_PolygonOnClosedSurface& nativeInstance)
		: Macad::Occt::BRep_PolygonOnSurface( nativeInstance )
	{}

	property ::BRep_PolygonOnClosedSurface* NativeInstance
	{
		::BRep_PolygonOnClosedSurface* get()
		{
			return static_cast<::BRep_PolygonOnClosedSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PolygonOnClosedSurface^ CreateDowncasted(::BRep_PolygonOnClosedSurface* instance);

public:
	/* Method skipped due to unknown mapping: void BRep_PolygonOnClosedSurface(Poly_Polygon2D P1, Poly_Polygon2D P2, Geom_Surface S, TopLoc_Location L, ) */
	BRep_PolygonOnClosedSurface(Macad::Occt::BRep_PolygonOnClosedSurface^ parameter1);
	bool IsPolygonOnClosedSurface();
	/* Method skipped due to unknown mapping: Poly_Polygon2D Polygon2() */
	/* Method skipped due to unknown mapping: void Polygon2(Poly_Polygon2D P, ) */
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_PolygonOnClosedSurface

//---------------------------------------------------------------------
//  Class  BRep_PolygonOnTriangulation
//---------------------------------------------------------------------
public ref class BRep_PolygonOnTriangulation : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_PolygonOnTriangulation_h
public:
	Include_BRep_PolygonOnTriangulation_h
#endif

protected:
	BRep_PolygonOnTriangulation(InitMode init)
		: Macad::Occt::BRep_CurveRepresentation( init )
	{}

public:
	BRep_PolygonOnTriangulation(::BRep_PolygonOnTriangulation* nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	BRep_PolygonOnTriangulation(::BRep_PolygonOnTriangulation& nativeInstance)
		: Macad::Occt::BRep_CurveRepresentation( nativeInstance )
	{}

	property ::BRep_PolygonOnTriangulation* NativeInstance
	{
		::BRep_PolygonOnTriangulation* get()
		{
			return static_cast<::BRep_PolygonOnTriangulation*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PolygonOnTriangulation^ CreateDowncasted(::BRep_PolygonOnTriangulation* instance);

public:
	/* Method skipped due to unknown mapping: void BRep_PolygonOnTriangulation(Poly_PolygonOnTriangulation P, Poly_Triangulation T, TopLoc_Location L, ) */
	BRep_PolygonOnTriangulation(Macad::Occt::BRep_PolygonOnTriangulation^ parameter1);
	bool IsPolygonOnTriangulation();
	/* Method skipped due to unknown mapping: Standard_Boolean IsPolygonOnTriangulation(Poly_Triangulation T, TopLoc_Location L, ) */
	/* Method skipped due to unknown mapping: void PolygonOnTriangulation(Poly_PolygonOnTriangulation P, ) */
	/* Method skipped due to unknown mapping: Poly_Triangulation Triangulation() */
	/* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation() */
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_PolygonOnTriangulation

//---------------------------------------------------------------------
//  Class  BRep_PolygonOnClosedTriangulation
//---------------------------------------------------------------------
public ref class BRep_PolygonOnClosedTriangulation sealed : public Macad::Occt::BRep_PolygonOnTriangulation
{

#ifdef Include_BRep_PolygonOnClosedTriangulation_h
public:
	Include_BRep_PolygonOnClosedTriangulation_h
#endif

public:
	BRep_PolygonOnClosedTriangulation(::BRep_PolygonOnClosedTriangulation* nativeInstance)
		: Macad::Occt::BRep_PolygonOnTriangulation( nativeInstance )
	{}

	BRep_PolygonOnClosedTriangulation(::BRep_PolygonOnClosedTriangulation& nativeInstance)
		: Macad::Occt::BRep_PolygonOnTriangulation( nativeInstance )
	{}

	property ::BRep_PolygonOnClosedTriangulation* NativeInstance
	{
		::BRep_PolygonOnClosedTriangulation* get()
		{
			return static_cast<::BRep_PolygonOnClosedTriangulation*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_PolygonOnClosedTriangulation^ CreateDowncasted(::BRep_PolygonOnClosedTriangulation* instance);

public:
	/* Method skipped due to unknown mapping: void BRep_PolygonOnClosedTriangulation(Poly_PolygonOnTriangulation P1, Poly_PolygonOnTriangulation P2, Poly_Triangulation Tr, TopLoc_Location L, ) */
	BRep_PolygonOnClosedTriangulation(Macad::Occt::BRep_PolygonOnClosedTriangulation^ parameter1);
	bool IsPolygonOnClosedTriangulation();
	/* Method skipped due to unknown mapping: void PolygonOnTriangulation2(Poly_PolygonOnTriangulation P2, ) */
	/* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation2() */
	Macad::Occt::BRep_CurveRepresentation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_PolygonOnClosedTriangulation

//---------------------------------------------------------------------
//  Class  BRep_TEdge
//---------------------------------------------------------------------
public ref class BRep_TEdge sealed : public Macad::Occt::TopoDS_TEdge
{

#ifdef Include_BRep_TEdge_h
public:
	Include_BRep_TEdge_h
#endif

public:
	BRep_TEdge(::BRep_TEdge* nativeInstance)
		: Macad::Occt::TopoDS_TEdge( nativeInstance )
	{}

	BRep_TEdge(::BRep_TEdge& nativeInstance)
		: Macad::Occt::TopoDS_TEdge( nativeInstance )
	{}

	property ::BRep_TEdge* NativeInstance
	{
		::BRep_TEdge* get()
		{
			return static_cast<::BRep_TEdge*>(_NativeInstance);
		}
	}

	static Macad::Occt::BRep_TEdge^ CreateDowncasted(::BRep_TEdge* instance);

public:
	BRep_TEdge();
	BRep_TEdge(Macad::Occt::BRep_TEdge^ parameter1);
	double Tolerance();
	void Tolerance(double T);
	void UpdateTolerance(double T);
	bool SameParameter();
	void SameParameter(bool S);
	bool SameRange();
	void SameRange(bool S);
	bool Degenerated();
	void Degenerated(bool S);
	Macad::Occt::BRep_ListOfCurveRepresentation^ Curves();
	Macad::Occt::BRep_ListOfCurveRepresentation^ ChangeCurves();
	Macad::Occt::TopoDS_TShape^ EmptyCopy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class BRep_TEdge

}; // namespace Occt
}; // namespace Macad
