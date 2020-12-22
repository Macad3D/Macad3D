// Generated wrapper code for package ShapeCustom

#pragma once

#include "BRepTools.h"
#include "ShapeCustom.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeCustom_RestrictionParameters
//---------------------------------------------------------------------
public ref class ShapeCustom_RestrictionParameters sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeCustom_RestrictionParameters_h
public:
	Include_ShapeCustom_RestrictionParameters_h
#endif

public:
	ShapeCustom_RestrictionParameters(::ShapeCustom_RestrictionParameters* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeCustom_RestrictionParameters(::ShapeCustom_RestrictionParameters& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeCustom_RestrictionParameters* NativeInstance
	{
		::ShapeCustom_RestrictionParameters* get()
		{
			return static_cast<::ShapeCustom_RestrictionParameters*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_RestrictionParameters^ CreateDowncasted(::ShapeCustom_RestrictionParameters* instance);

public:
	ShapeCustom_RestrictionParameters();
	ShapeCustom_RestrictionParameters(Macad::Occt::ShapeCustom_RestrictionParameters^ parameter1);
	int GMaxDegree();
	int GMaxSeg();
	bool ConvertPlane();
	bool ConvertBezierSurf();
	bool ConvertRevolutionSurf();
	bool ConvertExtrusionSurf();
	bool ConvertOffsetSurf();
	bool ConvertCylindricalSurf();
	bool ConvertConicalSurf();
	bool ConvertToroidalSurf();
	bool ConvertSphericalSurf();
	bool SegmentSurfaceMode();
	bool ConvertCurve3d();
	bool ConvertOffsetCurv3d();
	bool ConvertCurve2d();
	bool ConvertOffsetCurv2d();
}; // class ShapeCustom_RestrictionParameters

//---------------------------------------------------------------------
//  Class  ShapeCustom_Surface
//---------------------------------------------------------------------
public ref class ShapeCustom_Surface sealed : public BaseClass<::ShapeCustom_Surface>
{

#ifdef Include_ShapeCustom_Surface_h
public:
	Include_ShapeCustom_Surface_h
#endif

public:
	ShapeCustom_Surface(::ShapeCustom_Surface* nativeInstance)
		: BaseClass<::ShapeCustom_Surface>( nativeInstance, true )
	{}

	ShapeCustom_Surface(::ShapeCustom_Surface& nativeInstance)
		: BaseClass<::ShapeCustom_Surface>( &nativeInstance, false )
	{}

	property ::ShapeCustom_Surface* NativeInstance
	{
		::ShapeCustom_Surface* get()
		{
			return static_cast<::ShapeCustom_Surface*>(_NativeInstance);
		}
	}

public:
	ShapeCustom_Surface();
	ShapeCustom_Surface(Macad::Occt::Geom_Surface^ S);
	ShapeCustom_Surface(Macad::Occt::ShapeCustom_Surface^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ S);
	double Gap();
	Macad::Occt::Geom_Surface^ ConvertToAnalytical(double tol, bool substitute);
	Macad::Occt::Geom_Surface^ ConvertToPeriodic(bool substitute, double preci);
	Macad::Occt::Geom_Surface^ ConvertToPeriodic(bool substitute);
}; // class ShapeCustom_Surface

//---------------------------------------------------------------------
//  Class  ShapeCustom_Curve
//---------------------------------------------------------------------
public ref class ShapeCustom_Curve sealed : public BaseClass<::ShapeCustom_Curve>
{

#ifdef Include_ShapeCustom_Curve_h
public:
	Include_ShapeCustom_Curve_h
#endif

public:
	ShapeCustom_Curve(::ShapeCustom_Curve* nativeInstance)
		: BaseClass<::ShapeCustom_Curve>( nativeInstance, true )
	{}

	ShapeCustom_Curve(::ShapeCustom_Curve& nativeInstance)
		: BaseClass<::ShapeCustom_Curve>( &nativeInstance, false )
	{}

	property ::ShapeCustom_Curve* NativeInstance
	{
		::ShapeCustom_Curve* get()
		{
			return static_cast<::ShapeCustom_Curve*>(_NativeInstance);
		}
	}

public:
	ShapeCustom_Curve();
	ShapeCustom_Curve(Macad::Occt::Geom_Curve^ C);
	ShapeCustom_Curve(Macad::Occt::ShapeCustom_Curve^ parameter1);
	void Init(Macad::Occt::Geom_Curve^ C);
	Macad::Occt::Geom_Curve^ ConvertToPeriodic(bool substitute, double preci);
	Macad::Occt::Geom_Curve^ ConvertToPeriodic(bool substitute);
}; // class ShapeCustom_Curve

//---------------------------------------------------------------------
//  Class  ShapeCustom_Curve2d
//---------------------------------------------------------------------
public ref class ShapeCustom_Curve2d sealed : public BaseClass<::ShapeCustom_Curve2d>
{

#ifdef Include_ShapeCustom_Curve2d_h
public:
	Include_ShapeCustom_Curve2d_h
#endif

public:
	ShapeCustom_Curve2d(::ShapeCustom_Curve2d* nativeInstance)
		: BaseClass<::ShapeCustom_Curve2d>( nativeInstance, true )
	{}

	ShapeCustom_Curve2d(::ShapeCustom_Curve2d& nativeInstance)
		: BaseClass<::ShapeCustom_Curve2d>( &nativeInstance, false )
	{}

	property ::ShapeCustom_Curve2d* NativeInstance
	{
		::ShapeCustom_Curve2d* get()
		{
			return static_cast<::ShapeCustom_Curve2d*>(_NativeInstance);
		}
	}

public:
	ShapeCustom_Curve2d();
	ShapeCustom_Curve2d(Macad::Occt::ShapeCustom_Curve2d^ parameter1);
	static bool IsLinear(Macad::Occt::TColgp_Array1OfPnt2d^ thePoles, double theTolerance, double% theDeviation);
	static Macad::Occt::Geom2d_Line^ ConvertToLine2d(Macad::Occt::Geom2d_Curve^ theCurve, double theFirstIn, double theLastIn, double theTolerance, double% theNewFirst, double% theNewLast, double% theDeviation);
	static bool SimplifyBSpline2d(Macad::Occt::Geom2d_BSplineCurve^ theBSpline2d, double theTolerance);
}; // class ShapeCustom_Curve2d

//---------------------------------------------------------------------
//  Class  ShapeCustom_Modification
//---------------------------------------------------------------------
public ref class ShapeCustom_Modification : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_ShapeCustom_Modification_h
public:
	Include_ShapeCustom_Modification_h
#endif

protected:
	ShapeCustom_Modification(InitMode init)
		: Macad::Occt::BRepTools_Modification( init )
	{}

public:
	ShapeCustom_Modification(::ShapeCustom_Modification* nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	ShapeCustom_Modification(::ShapeCustom_Modification& nativeInstance)
		: Macad::Occt::BRepTools_Modification( nativeInstance )
	{}

	property ::ShapeCustom_Modification* NativeInstance
	{
		::ShapeCustom_Modification* get()
		{
			return static_cast<::ShapeCustom_Modification*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_Modification^ CreateDowncasted(::ShapeCustom_Modification* instance);

public:
	ShapeCustom_Modification(Macad::Occt::ShapeCustom_Modification^ parameter1);
	ShapeCustom_Modification();
	void SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg);
	Macad::Occt::ShapeExtend_BasicMsgRegistrator^ MsgRegistrator();
	void SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity);
	void SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message);
}; // class ShapeCustom_Modification

//---------------------------------------------------------------------
//  Class  ShapeCustom_DirectModification
//---------------------------------------------------------------------
public ref class ShapeCustom_DirectModification sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_DirectModification_h
public:
	Include_ShapeCustom_DirectModification_h
#endif

public:
	ShapeCustom_DirectModification(::ShapeCustom_DirectModification* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_DirectModification(::ShapeCustom_DirectModification& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_DirectModification* NativeInstance
	{
		::ShapeCustom_DirectModification* get()
		{
			return static_cast<::ShapeCustom_DirectModification*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_DirectModification^ CreateDowncasted(::ShapeCustom_DirectModification* instance);

public:
	ShapeCustom_DirectModification();
	ShapeCustom_DirectModification(Macad::Occt::ShapeCustom_DirectModification^ parameter1);
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class ShapeCustom_DirectModification

//---------------------------------------------------------------------
//  Class  ShapeCustom_TrsfModification
//---------------------------------------------------------------------
public ref class ShapeCustom_TrsfModification sealed : public Macad::Occt::BRepTools_TrsfModification
{

#ifdef Include_ShapeCustom_TrsfModification_h
public:
	Include_ShapeCustom_TrsfModification_h
#endif

public:
	ShapeCustom_TrsfModification(::ShapeCustom_TrsfModification* nativeInstance)
		: Macad::Occt::BRepTools_TrsfModification( nativeInstance )
	{}

	ShapeCustom_TrsfModification(::ShapeCustom_TrsfModification& nativeInstance)
		: Macad::Occt::BRepTools_TrsfModification( nativeInstance )
	{}

	property ::ShapeCustom_TrsfModification* NativeInstance
	{
		::ShapeCustom_TrsfModification* get()
		{
			return static_cast<::ShapeCustom_TrsfModification*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_TrsfModification^ CreateDowncasted(::ShapeCustom_TrsfModification* instance);

public:
	ShapeCustom_TrsfModification(Macad::Occt::Trsf T);
	ShapeCustom_TrsfModification(Macad::Occt::ShapeCustom_TrsfModification^ parameter1);
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
}; // class ShapeCustom_TrsfModification

//---------------------------------------------------------------------
//  Class  ShapeCustom_BSplineRestriction
//---------------------------------------------------------------------
public ref class ShapeCustom_BSplineRestriction sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_BSplineRestriction_h
public:
	Include_ShapeCustom_BSplineRestriction_h
#endif

public:
	ShapeCustom_BSplineRestriction(::ShapeCustom_BSplineRestriction* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_BSplineRestriction(::ShapeCustom_BSplineRestriction& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_BSplineRestriction* NativeInstance
	{
		::ShapeCustom_BSplineRestriction* get()
		{
			return static_cast<::ShapeCustom_BSplineRestriction*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_BSplineRestriction^ CreateDowncasted(::ShapeCustom_BSplineRestriction* instance);

public:
	ShapeCustom_BSplineRestriction();
	ShapeCustom_BSplineRestriction(bool anApproxSurfaceFlag, bool anApproxCurve3dFlag, bool anApproxCurve2dFlag, double aTol3d, double aTol2d, Macad::Occt::GeomAbs_Shape aContinuity3d, Macad::Occt::GeomAbs_Shape aContinuity2d, int aMaxDegree, int aNbMaxSeg, bool Degree, bool Rational);
	ShapeCustom_BSplineRestriction(bool anApproxSurfaceFlag, bool anApproxCurve3dFlag, bool anApproxCurve2dFlag, double aTol3d, double aTol2d, Macad::Occt::GeomAbs_Shape aContinuity3d, Macad::Occt::GeomAbs_Shape aContinuity2d, int aMaxDegree, int aNbMaxSeg, bool Degree, bool Rational, Macad::Occt::ShapeCustom_RestrictionParameters^ aModes);
	ShapeCustom_BSplineRestriction(Macad::Occt::ShapeCustom_BSplineRestriction^ parameter1);
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool ConvertSurface(Macad::Occt::Geom_Surface^ aSurface, Macad::Occt::Geom_Surface^ S, double UF, double UL, double VF, double VL, bool IsOf);
	bool ConvertSurface(Macad::Occt::Geom_Surface^ aSurface, Macad::Occt::Geom_Surface^ S, double UF, double UL, double VF, double VL);
	bool ConvertCurve(Macad::Occt::Geom_Curve^ aCurve, Macad::Occt::Geom_Curve^ C, bool IsConvert, double First, double Last, double% TolCur, bool IsOf);
	bool ConvertCurve(Macad::Occt::Geom_Curve^ aCurve, Macad::Occt::Geom_Curve^ C, bool IsConvert, double First, double Last, double% TolCur);
	bool ConvertCurve2d(Macad::Occt::Geom2d_Curve^ aCurve, Macad::Occt::Geom2d_Curve^ C, bool IsConvert, double First, double Last, double% TolCur, bool IsOf);
	bool ConvertCurve2d(Macad::Occt::Geom2d_Curve^ aCurve, Macad::Occt::Geom2d_Curve^ C, bool IsConvert, double First, double Last, double% TolCur);
	void SetTol3d(double Tol3d);
	void SetTol2d(double Tol2d);
	bool ModifyApproxSurfaceFlag();
	bool ModifyApproxCurve3dFlag();
	bool ModifyApproxCurve2dFlag();
	void SetContinuity3d(Macad::Occt::GeomAbs_Shape Continuity3d);
	void SetContinuity2d(Macad::Occt::GeomAbs_Shape Continuity2d);
	void SetMaxDegree(int MaxDegree);
	void SetMaxNbSegments(int MaxNbSegments);
	void SetPriority(bool Degree);
	void SetConvRational(bool Rational);
	Macad::Occt::ShapeCustom_RestrictionParameters^ GetRestrictionParameters();
	void SetRestrictionParameters(Macad::Occt::ShapeCustom_RestrictionParameters^ aModes);
	double Curve3dError();
	double Curve2dError();
	double SurfaceError();
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
	double MaxErrors(double% aCurve3dErr, double% aCurve2dErr);
	int NbOfSpan();
}; // class ShapeCustom_BSplineRestriction

//---------------------------------------------------------------------
//  Class  ShapeCustom_ConvertToRevolution
//---------------------------------------------------------------------
public ref class ShapeCustom_ConvertToRevolution sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_ConvertToRevolution_h
public:
	Include_ShapeCustom_ConvertToRevolution_h
#endif

public:
	ShapeCustom_ConvertToRevolution(::ShapeCustom_ConvertToRevolution* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_ConvertToRevolution(::ShapeCustom_ConvertToRevolution& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_ConvertToRevolution* NativeInstance
	{
		::ShapeCustom_ConvertToRevolution* get()
		{
			return static_cast<::ShapeCustom_ConvertToRevolution*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_ConvertToRevolution^ CreateDowncasted(::ShapeCustom_ConvertToRevolution* instance);

public:
	ShapeCustom_ConvertToRevolution();
	ShapeCustom_ConvertToRevolution(Macad::Occt::ShapeCustom_ConvertToRevolution^ parameter1);
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class ShapeCustom_ConvertToRevolution

//---------------------------------------------------------------------
//  Class  ShapeCustom_SweptToElementary
//---------------------------------------------------------------------
public ref class ShapeCustom_SweptToElementary sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_SweptToElementary_h
public:
	Include_ShapeCustom_SweptToElementary_h
#endif

public:
	ShapeCustom_SweptToElementary(::ShapeCustom_SweptToElementary* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_SweptToElementary(::ShapeCustom_SweptToElementary& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_SweptToElementary* NativeInstance
	{
		::ShapeCustom_SweptToElementary* get()
		{
			return static_cast<::ShapeCustom_SweptToElementary*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_SweptToElementary^ CreateDowncasted(::ShapeCustom_SweptToElementary* instance);

public:
	ShapeCustom_SweptToElementary();
	ShapeCustom_SweptToElementary(Macad::Occt::ShapeCustom_SweptToElementary^ parameter1);
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class ShapeCustom_SweptToElementary

//---------------------------------------------------------------------
//  Class  ShapeCustom_ConvertToBSpline
//---------------------------------------------------------------------
public ref class ShapeCustom_ConvertToBSpline sealed : public Macad::Occt::ShapeCustom_Modification
{

#ifdef Include_ShapeCustom_ConvertToBSpline_h
public:
	Include_ShapeCustom_ConvertToBSpline_h
#endif

public:
	ShapeCustom_ConvertToBSpline(::ShapeCustom_ConvertToBSpline* nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	ShapeCustom_ConvertToBSpline(::ShapeCustom_ConvertToBSpline& nativeInstance)
		: Macad::Occt::ShapeCustom_Modification( nativeInstance )
	{}

	property ::ShapeCustom_ConvertToBSpline* NativeInstance
	{
		::ShapeCustom_ConvertToBSpline* get()
		{
			return static_cast<::ShapeCustom_ConvertToBSpline*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeCustom_ConvertToBSpline^ CreateDowncasted(::ShapeCustom_ConvertToBSpline* instance);

public:
	ShapeCustom_ConvertToBSpline();
	ShapeCustom_ConvertToBSpline(Macad::Occt::ShapeCustom_ConvertToBSpline^ parameter1);
	void SetExtrusionMode(bool extrMode);
	void SetRevolutionMode(bool revolMode);
	void SetOffsetMode(bool offsetMode);
	void SetPlaneMode(bool planeMode);
	bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
	bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
	bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
	bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
	bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
	Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
}; // class ShapeCustom_ConvertToBSpline

//---------------------------------------------------------------------
//  Class  ShapeCustom
//---------------------------------------------------------------------
public ref class ShapeCustom sealed : public BaseClass<::ShapeCustom>
{

#ifdef Include_ShapeCustom_h
public:
	Include_ShapeCustom_h
#endif

public:
	ShapeCustom(::ShapeCustom* nativeInstance)
		: BaseClass<::ShapeCustom>( nativeInstance, true )
	{}

	ShapeCustom(::ShapeCustom& nativeInstance)
		: BaseClass<::ShapeCustom>( &nativeInstance, false )
	{}

	property ::ShapeCustom* NativeInstance
	{
		::ShapeCustom* get()
		{
			return static_cast<::ShapeCustom*>(_NativeInstance);
		}
	}

public:
	ShapeCustom();
	ShapeCustom(Macad::Occt::ShapeCustom^ parameter1);
	/* Method skipped due to unknown mapping: TopoDS_Shape ApplyModifier(TopoDS_Shape S, BRepTools_Modification M, TopTools_DataMapOfShapeShape context, BRepTools_Modifier MD, Message_ProgressIndicator aProgress, ShapeBuild_ReShape aReShape, ) */
	/* Method skipped due to unknown mapping: TopoDS_Shape ApplyModifier(TopoDS_Shape S, BRepTools_Modification M, TopTools_DataMapOfShapeShape context, BRepTools_Modifier MD, Message_ProgressIndicator aProgress, ShapeBuild_ReShape aReShape, ) */
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ context, Macad::Occt::BRepTools_Modifier^ MD);
	static Macad::Occt::TopoDS_Shape^ DirectFaces(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Shape^ ScaleShape(Macad::Occt::TopoDS_Shape^ S, double scale);
	static Macad::Occt::TopoDS_Shape^ BSplineRestriction(Macad::Occt::TopoDS_Shape^ S, double Tol3d, double Tol2d, int MaxDegree, int MaxNbSegment, Macad::Occt::GeomAbs_Shape Continuity3d, Macad::Occt::GeomAbs_Shape Continuity2d, bool Degree, bool Rational, Macad::Occt::ShapeCustom_RestrictionParameters^ aParameters);
	static Macad::Occt::TopoDS_Shape^ ConvertToRevolution(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Shape^ SweptToElementary(Macad::Occt::TopoDS_Shape^ S);
	static Macad::Occt::TopoDS_Shape^ ConvertToBSpline(Macad::Occt::TopoDS_Shape^ S, bool extrMode, bool revolMode, bool offsetMode, bool planeMode);
	static Macad::Occt::TopoDS_Shape^ ConvertToBSpline(Macad::Occt::TopoDS_Shape^ S, bool extrMode, bool revolMode, bool offsetMode);
}; // class ShapeCustom

}; // namespace Occt
}; // namespace Macad
