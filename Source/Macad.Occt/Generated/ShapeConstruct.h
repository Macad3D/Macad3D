// Generated wrapper code for package ShapeConstruct

#pragma once

#include "BRepBuilderAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeConstruct_Curve
//---------------------------------------------------------------------
public ref class ShapeConstruct_Curve sealed : public BaseClass<::ShapeConstruct_Curve>
{

#ifdef Include_ShapeConstruct_Curve_h
public:
	Include_ShapeConstruct_Curve_h
#endif

public:
	ShapeConstruct_Curve(::ShapeConstruct_Curve* nativeInstance)
		: BaseClass<::ShapeConstruct_Curve>( nativeInstance, true )
	{}

	ShapeConstruct_Curve(::ShapeConstruct_Curve& nativeInstance)
		: BaseClass<::ShapeConstruct_Curve>( &nativeInstance, false )
	{}

	property ::ShapeConstruct_Curve* NativeInstance
	{
		::ShapeConstruct_Curve* get()
		{
			return static_cast<::ShapeConstruct_Curve*>(_NativeInstance);
		}
	}

public:
	ShapeConstruct_Curve();
	ShapeConstruct_Curve(Macad::Occt::ShapeConstruct_Curve^ parameter1);
	bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool take1, bool take2);
	bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool take1);
	bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	bool AdjustCurveSegment(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double U1, double U2);
	bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool take1, bool take2);
	bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool take1);
	bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	Macad::Occt::Geom_BSplineCurve^ ConvertToBSpline(Macad::Occt::Geom_Curve^ C, double first, double last, double prec);
	Macad::Occt::Geom2d_BSplineCurve^ ConvertToBSpline(Macad::Occt::Geom2d_Curve^ C, double first, double last, double prec);
	static bool FixKnots(Macad::Occt::TColStd_HArray1OfReal^ knots);
	static bool FixKnots(Macad::Occt::TColStd_Array1OfReal^ knots);
}; // class ShapeConstruct_Curve

//---------------------------------------------------------------------
//  Class  ShapeConstruct_ProjectCurveOnSurface
//---------------------------------------------------------------------
public ref class ShapeConstruct_ProjectCurveOnSurface sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeConstruct_ProjectCurveOnSurface_h
public:
	Include_ShapeConstruct_ProjectCurveOnSurface_h
#endif

public:
	ShapeConstruct_ProjectCurveOnSurface(::ShapeConstruct_ProjectCurveOnSurface* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeConstruct_ProjectCurveOnSurface(::ShapeConstruct_ProjectCurveOnSurface& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeConstruct_ProjectCurveOnSurface* NativeInstance
	{
		::ShapeConstruct_ProjectCurveOnSurface* get()
		{
			return static_cast<::ShapeConstruct_ProjectCurveOnSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeConstruct_ProjectCurveOnSurface^ CreateDowncasted(::ShapeConstruct_ProjectCurveOnSurface* instance);

public:
	ShapeConstruct_ProjectCurveOnSurface();
	ShapeConstruct_ProjectCurveOnSurface(Macad::Occt::ShapeConstruct_ProjectCurveOnSurface^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ surf, double preci);
	void Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci);
	void SetSurface(Macad::Occt::Geom_Surface^ surf);
	void SetSurface(Macad::Occt::ShapeAnalysis_Surface^ surf);
	void SetPrecision(double preci);
	bool BuildCurveMode();
	int AdjustOverDegenMode();
	bool Status(Macad::Occt::ShapeExtend_Status theStatus);
	bool Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, double TolFirst, double TolLast);
	bool Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, double TolFirst);
	bool Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d);
	bool PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity, int maxdeg, int nbinterval);
	bool PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity, int maxdeg);
	bool PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity);
	bool PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d);
}; // class ShapeConstruct_ProjectCurveOnSurface

//---------------------------------------------------------------------
//  Class  ShapeConstruct_MakeTriangulation
//---------------------------------------------------------------------
public ref class ShapeConstruct_MakeTriangulation sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_ShapeConstruct_MakeTriangulation_h
public:
	Include_ShapeConstruct_MakeTriangulation_h
#endif

public:
	ShapeConstruct_MakeTriangulation(::ShapeConstruct_MakeTriangulation* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	ShapeConstruct_MakeTriangulation(::ShapeConstruct_MakeTriangulation& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::ShapeConstruct_MakeTriangulation* NativeInstance
	{
		::ShapeConstruct_MakeTriangulation* get()
		{
			return static_cast<::ShapeConstruct_MakeTriangulation*>(_NativeInstance);
		}
	}

public:
	ShapeConstruct_MakeTriangulation(Macad::Occt::TColgp_Array1OfPnt^ pnts, double prec);
	ShapeConstruct_MakeTriangulation(Macad::Occt::TColgp_Array1OfPnt^ pnts);
	ShapeConstruct_MakeTriangulation(Macad::Occt::TopoDS_Wire^ wire, double prec);
	ShapeConstruct_MakeTriangulation(Macad::Occt::TopoDS_Wire^ wire);
	ShapeConstruct_MakeTriangulation(Macad::Occt::ShapeConstruct_MakeTriangulation^ parameter1);
	void Build();
	bool IsDone();
}; // class ShapeConstruct_MakeTriangulation

//---------------------------------------------------------------------
//  Class  ShapeConstruct
//---------------------------------------------------------------------
public ref class ShapeConstruct sealed : public BaseClass<::ShapeConstruct>
{

#ifdef Include_ShapeConstruct_h
public:
	Include_ShapeConstruct_h
#endif

public:
	ShapeConstruct(::ShapeConstruct* nativeInstance)
		: BaseClass<::ShapeConstruct>( nativeInstance, true )
	{}

	ShapeConstruct(::ShapeConstruct& nativeInstance)
		: BaseClass<::ShapeConstruct>( &nativeInstance, false )
	{}

	property ::ShapeConstruct* NativeInstance
	{
		::ShapeConstruct* get()
		{
			return static_cast<::ShapeConstruct*>(_NativeInstance);
		}
	}

public:
	ShapeConstruct();
	ShapeConstruct(Macad::Occt::ShapeConstruct^ parameter1);
	static Macad::Occt::Geom_BSplineCurve^ ConvertCurveToBSpline(Macad::Occt::Geom_Curve^ C3D, double First, double Last, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
	static Macad::Occt::Geom2d_BSplineCurve^ ConvertCurveToBSpline(Macad::Occt::Geom2d_Curve^ C2D, double First, double Last, double Tol2d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
	static Macad::Occt::Geom_BSplineSurface^ ConvertSurfaceToBSpline(Macad::Occt::Geom_Surface^ surf, double UF, double UL, double VF, double VL, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
	static bool JoinPCurves(Macad::Occt::TopTools_HSequenceOfShape^ theEdges, Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge);
	static bool JoinCurves(Macad::Occt::Geom_Curve^ c3d1, Macad::Occt::Geom_Curve^ ac3d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom_Curve^ c3dOut, bool% isRev1, bool% isRev2);
	static bool JoinCurves(Macad::Occt::Geom2d_Curve^ c2d1, Macad::Occt::Geom2d_Curve^ ac2d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2, bool isError);
	static bool JoinCurves(Macad::Occt::Geom2d_Curve^ c2d1, Macad::Occt::Geom2d_Curve^ ac2d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2);
}; // class ShapeConstruct

}; // namespace Occt
}; // namespace Macad
