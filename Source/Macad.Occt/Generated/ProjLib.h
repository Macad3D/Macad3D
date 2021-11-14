// Generated wrapper code for package ProjLib

#pragma once

#include "Adaptor3d.h"
#include "Adaptor2d.h"
#include "ProjLib.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ProjLib_SequenceOfHSequenceOfPnt
//---------------------------------------------------------------------
public ref class ProjLib_SequenceOfHSequenceOfPnt sealed : public BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>
{

#ifdef Include_ProjLib_SequenceOfHSequenceOfPnt_h
public:
	Include_ProjLib_SequenceOfHSequenceOfPnt_h
#endif

public:
	ProjLib_SequenceOfHSequenceOfPnt(::ProjLib_SequenceOfHSequenceOfPnt* nativeInstance)
		: BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>( nativeInstance, true )
	{}

	ProjLib_SequenceOfHSequenceOfPnt(::ProjLib_SequenceOfHSequenceOfPnt& nativeInstance)
		: BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>( &nativeInstance, false )
	{}

	property ::ProjLib_SequenceOfHSequenceOfPnt* NativeInstance
	{
		::ProjLib_SequenceOfHSequenceOfPnt* get()
		{
			return static_cast<::ProjLib_SequenceOfHSequenceOfPnt*>(_NativeInstance);
		}
	}

public:
	ProjLib_SequenceOfHSequenceOfPnt();
	ProjLib_SequenceOfHSequenceOfPnt(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	ProjLib_SequenceOfHSequenceOfPnt(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theOther);
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
	Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ Assign(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	void Append(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq);
	void Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	void Prepend(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TColgp_HSequenceOfPnt theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	void Split(int theIndex, Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq);
	Macad::Occt::TColgp_HSequenceOfPnt^ First();
	Macad::Occt::TColgp_HSequenceOfPnt^ ChangeFirst();
	Macad::Occt::TColgp_HSequenceOfPnt^ Last();
	Macad::Occt::TColgp_HSequenceOfPnt^ ChangeLast();
	Macad::Occt::TColgp_HSequenceOfPnt^ Value(int theIndex);
	Macad::Occt::TColgp_HSequenceOfPnt^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
}; // class ProjLib_SequenceOfHSequenceOfPnt

//---------------------------------------------------------------------
//  Class  ProjLib_ProjectOnPlane
//---------------------------------------------------------------------
public ref class ProjLib_ProjectOnPlane sealed : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_ProjLib_ProjectOnPlane_h
public:
	Include_ProjLib_ProjectOnPlane_h
#endif

public:
	ProjLib_ProjectOnPlane(::ProjLib_ProjectOnPlane* nativeInstance)
		: Macad::Occt::Adaptor3d_Curve( nativeInstance )
	{}

	ProjLib_ProjectOnPlane(::ProjLib_ProjectOnPlane& nativeInstance)
		: Macad::Occt::Adaptor3d_Curve( nativeInstance )
	{}

	property ::ProjLib_ProjectOnPlane* NativeInstance
	{
		::ProjLib_ProjectOnPlane* get()
		{
			return static_cast<::ProjLib_ProjectOnPlane*>(_NativeInstance);
		}
	}

	static Macad::Occt::ProjLib_ProjectOnPlane^ CreateDowncasted(::ProjLib_ProjectOnPlane* instance);

public:
	ProjLib_ProjectOnPlane();
	ProjLib_ProjectOnPlane(Macad::Occt::Ax3 Pl);
	ProjLib_ProjectOnPlane(Macad::Occt::Ax3 Pl, Macad::Occt::Dir D);
	ProjLib_ProjectOnPlane(Macad::Occt::ProjLib_ProjectOnPlane^ parameter1);
	Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
	void Load(Macad::Occt::Adaptor3d_Curve^ C, double Tolerance, bool KeepParametrization);
	void Load(Macad::Occt::Adaptor3d_Curve^ C, double Tolerance);
	Macad::Occt::Ax3 GetPlane();
	Macad::Occt::Dir GetDirection();
	Macad::Occt::Adaptor3d_Curve^ GetCurve();
	Macad::Occt::GeomAdaptor_Curve^ GetResult();
	double FirstParameter();
	double LastParameter();
	Macad::Occt::GeomAbs_Shape Continuity();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::Pnt Value(double U);
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	double Resolution(double R3d);
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	Macad::Occt::gp_Lin^ Line();
	Macad::Occt::gp_Circ^ Circle();
	Macad::Occt::gp_Elips^ Ellipse();
	Macad::Occt::gp_Hypr^ Hyperbola();
	Macad::Occt::gp_Parab^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	Macad::Occt::Geom_BezierCurve^ Bezier();
	Macad::Occt::Geom_BSplineCurve^ BSpline();
}; // class ProjLib_ProjectOnPlane

//---------------------------------------------------------------------
//  Class  ProjLib_ProjectOnSurface
//---------------------------------------------------------------------
public ref class ProjLib_ProjectOnSurface sealed : public BaseClass<::ProjLib_ProjectOnSurface>
{

#ifdef Include_ProjLib_ProjectOnSurface_h
public:
	Include_ProjLib_ProjectOnSurface_h
#endif

public:
	ProjLib_ProjectOnSurface(::ProjLib_ProjectOnSurface* nativeInstance)
		: BaseClass<::ProjLib_ProjectOnSurface>( nativeInstance, true )
	{}

	ProjLib_ProjectOnSurface(::ProjLib_ProjectOnSurface& nativeInstance)
		: BaseClass<::ProjLib_ProjectOnSurface>( &nativeInstance, false )
	{}

	property ::ProjLib_ProjectOnSurface* NativeInstance
	{
		::ProjLib_ProjectOnSurface* get()
		{
			return static_cast<::ProjLib_ProjectOnSurface*>(_NativeInstance);
		}
	}

public:
	ProjLib_ProjectOnSurface();
	ProjLib_ProjectOnSurface(Macad::Occt::Adaptor3d_Surface^ S);
	ProjLib_ProjectOnSurface(Macad::Occt::ProjLib_ProjectOnSurface^ parameter1);
	void Load(Macad::Occt::Adaptor3d_Surface^ S);
	void Load(Macad::Occt::Adaptor3d_Curve^ C, double Tolerance);
	bool IsDone();
	Macad::Occt::Geom_BSplineCurve^ BSpline();
}; // class ProjLib_ProjectOnSurface

//---------------------------------------------------------------------
//  Class  ProjLib_ComputeApprox
//---------------------------------------------------------------------
public ref class ProjLib_ComputeApprox sealed : public BaseClass<::ProjLib_ComputeApprox>
{

#ifdef Include_ProjLib_ComputeApprox_h
public:
	Include_ProjLib_ComputeApprox_h
#endif

public:
	ProjLib_ComputeApprox(::ProjLib_ComputeApprox* nativeInstance)
		: BaseClass<::ProjLib_ComputeApprox>( nativeInstance, true )
	{}

	ProjLib_ComputeApprox(::ProjLib_ComputeApprox& nativeInstance)
		: BaseClass<::ProjLib_ComputeApprox>( &nativeInstance, false )
	{}

	property ::ProjLib_ComputeApprox* NativeInstance
	{
		::ProjLib_ComputeApprox* get()
		{
			return static_cast<::ProjLib_ComputeApprox*>(_NativeInstance);
		}
	}

public:
	ProjLib_ComputeApprox();
	ProjLib_ComputeApprox(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double Tol);
	ProjLib_ComputeApprox(Macad::Occt::ProjLib_ComputeApprox^ parameter1);
	void Perform(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S);
	void SetTolerance(double theTolerance);
	void SetDegree(int theDegMin, int theDegMax);
	void SetMaxSegments(int theMaxSegments);
	/* Method skipped due to unknown mapping: void SetBndPnt(AppParCurves_Constraint theBndPnt, ) */
	Macad::Occt::Geom2d_BSplineCurve^ BSpline();
	Macad::Occt::Geom2d_BezierCurve^ Bezier();
	double Tolerance();
}; // class ProjLib_ComputeApprox

//---------------------------------------------------------------------
//  Class  ProjLib_ComputeApproxOnPolarSurface
//---------------------------------------------------------------------
public ref class ProjLib_ComputeApproxOnPolarSurface sealed : public BaseClass<::ProjLib_ComputeApproxOnPolarSurface>
{

#ifdef Include_ProjLib_ComputeApproxOnPolarSurface_h
public:
	Include_ProjLib_ComputeApproxOnPolarSurface_h
#endif

public:
	ProjLib_ComputeApproxOnPolarSurface(::ProjLib_ComputeApproxOnPolarSurface* nativeInstance)
		: BaseClass<::ProjLib_ComputeApproxOnPolarSurface>( nativeInstance, true )
	{}

	ProjLib_ComputeApproxOnPolarSurface(::ProjLib_ComputeApproxOnPolarSurface& nativeInstance)
		: BaseClass<::ProjLib_ComputeApproxOnPolarSurface>( &nativeInstance, false )
	{}

	property ::ProjLib_ComputeApproxOnPolarSurface* NativeInstance
	{
		::ProjLib_ComputeApproxOnPolarSurface* get()
		{
			return static_cast<::ProjLib_ComputeApproxOnPolarSurface*>(_NativeInstance);
		}
	}

public:
	ProjLib_ComputeApproxOnPolarSurface();
	ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double Tol);
	ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S);
	ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor2d_Curve2d^ InitCurve2d, Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double Tol);
	ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor2d_Curve2d^ InitCurve2d, Macad::Occt::Adaptor2d_Curve2d^ InitCurve2dBis, Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double Tol);
	ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::ProjLib_ComputeApproxOnPolarSurface^ parameter1);
	void SetDegree(int theDegMin, int theDegMax);
	void SetMaxSegments(int theMaxSegments);
	/* Method skipped due to unknown mapping: void SetBndPnt(AppParCurves_Constraint theBndPnt, ) */
	void SetMaxDist(double theMaxDist);
	void SetTolerance(double theTolerance);
	void Perform(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S);
	Macad::Occt::Geom2d_BSplineCurve^ Perform(Macad::Occt::Adaptor2d_Curve2d^ InitCurve2d, Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S);
	Macad::Occt::Adaptor2d_Curve2d^ BuildInitialCurve2d(Macad::Occt::Adaptor3d_Curve^ Curve, Macad::Occt::Adaptor3d_Surface^ S);
	Macad::Occt::Geom2d_BSplineCurve^ ProjectUsingInitialCurve2d(Macad::Occt::Adaptor3d_Curve^ Curve, Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor2d_Curve2d^ InitCurve2d);
	Macad::Occt::Geom2d_BSplineCurve^ BSpline();
	Macad::Occt::Geom2d_Curve^ Curve2d();
	bool IsDone();
	double Tolerance();
}; // class ProjLib_ComputeApproxOnPolarSurface

//---------------------------------------------------------------------
//  Class  ProjLib_ProjectedCurve
//---------------------------------------------------------------------
public ref class ProjLib_ProjectedCurve sealed : public Macad::Occt::Adaptor2d_Curve2d
{

#ifdef Include_ProjLib_ProjectedCurve_h
public:
	Include_ProjLib_ProjectedCurve_h
#endif

public:
	ProjLib_ProjectedCurve(::ProjLib_ProjectedCurve* nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	ProjLib_ProjectedCurve(::ProjLib_ProjectedCurve& nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	property ::ProjLib_ProjectedCurve* NativeInstance
	{
		::ProjLib_ProjectedCurve* get()
		{
			return static_cast<::ProjLib_ProjectedCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::ProjLib_ProjectedCurve^ CreateDowncasted(::ProjLib_ProjectedCurve* instance);

public:
	ProjLib_ProjectedCurve();
	ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S);
	ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C);
	ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C, double Tol);
	ProjLib_ProjectedCurve(Macad::Occt::ProjLib_ProjectedCurve^ parameter1);
	Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
	void Load(double Tolerance);
	void Load(Macad::Occt::Adaptor3d_Surface^ S);
	void Perform(Macad::Occt::Adaptor3d_Curve^ C);
	void SetDegree(int theDegMin, int theDegMax);
	void SetMaxSegments(int theMaxSegments);
	/* Method skipped due to unknown mapping: void SetBndPnt(AppParCurves_Constraint theBndPnt, ) */
	void SetMaxDist(double theMaxDist);
	Macad::Occt::Adaptor3d_Surface^ GetSurface();
	Macad::Occt::Adaptor3d_Curve^ GetCurve();
	double GetTolerance();
	double FirstParameter();
	double LastParameter();
	Macad::Occt::GeomAbs_Shape Continuity();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::Pnt2d Value(double U);
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	double Resolution(double R3d);
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	Macad::Occt::gp_Lin2d^ Line();
	Macad::Occt::gp_Circ2d^ Circle();
	Macad::Occt::gp_Elips2d^ Ellipse();
	Macad::Occt::gp_Hypr2d^ Hyperbola();
	Macad::Occt::gp_Parab2d^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	Macad::Occt::Geom2d_BezierCurve^ Bezier();
	Macad::Occt::Geom2d_BSplineCurve^ BSpline();
}; // class ProjLib_ProjectedCurve

//---------------------------------------------------------------------
//  Class  ProjLib_CompProjectedCurve
//---------------------------------------------------------------------
public ref class ProjLib_CompProjectedCurve sealed : public Macad::Occt::Adaptor2d_Curve2d
{

#ifdef Include_ProjLib_CompProjectedCurve_h
public:
	Include_ProjLib_CompProjectedCurve_h
#endif

public:
	ProjLib_CompProjectedCurve(::ProjLib_CompProjectedCurve* nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	ProjLib_CompProjectedCurve(::ProjLib_CompProjectedCurve& nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	property ::ProjLib_CompProjectedCurve* NativeInstance
	{
		::ProjLib_CompProjectedCurve* get()
		{
			return static_cast<::ProjLib_CompProjectedCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::ProjLib_CompProjectedCurve^ CreateDowncasted(::ProjLib_CompProjectedCurve* instance);

public:
	ProjLib_CompProjectedCurve();
	ProjLib_CompProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C, double TolU, double TolV);
	ProjLib_CompProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C, double TolU, double TolV, double MaxDist);
	ProjLib_CompProjectedCurve(double Tol3d, Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C, double MaxDist);
	ProjLib_CompProjectedCurve(double Tol3d, Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C);
	ProjLib_CompProjectedCurve(Macad::Occt::ProjLib_CompProjectedCurve^ parameter1);
	Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
	void Init();
	void Perform();
	void SetTol3d(double theTol3d);
	void SetContinuity(Macad::Occt::GeomAbs_Shape theContinuity);
	void SetMaxDegree(int theMaxDegree);
	void SetMaxSeg(int theMaxSeg);
	void SetProj2d(bool theProj2d);
	void SetProj3d(bool theProj3d);
	void Load(Macad::Occt::Adaptor3d_Surface^ S);
	void Load(Macad::Occt::Adaptor3d_Curve^ C);
	Macad::Occt::Adaptor3d_Surface^ GetSurface();
	Macad::Occt::Adaptor3d_Curve^ GetCurve();
	void GetTolerance(double% TolU, double% TolV);
	int NbCurves();
	void Bounds(int Index, double% Udeb, double% Ufin);
	bool IsSinglePnt(int Index, Macad::Occt::Pnt2d% P);
	bool IsUIso(int Index, double% U);
	bool IsVIso(int Index, double% V);
	Macad::Occt::Pnt2d Value(double U);
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	Macad::Occt::Vec2d DN(double U, int N);
	double FirstParameter();
	double LastParameter();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor2d_Curve2d^ Trim(double FirstParam, double LastParam, double Tol);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	double MaxDistance(int Index);
	Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ GetSequence();
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	bool ResultIsPoint(int theIndex);
	double GetResult2dUApproxError(int theIndex);
	double GetResult2dVApproxError(int theIndex);
	double GetResult3dApproxError(int theIndex);
	Macad::Occt::Geom2d_Curve^ GetResult2dC(int theIndex);
	Macad::Occt::Geom_Curve^ GetResult3dC(int theIndex);
	Macad::Occt::Pnt2d GetResult2dP(int theIndex);
	Macad::Occt::Pnt GetResult3dP(int theIndex);
	bool GetProj2d();
	bool GetProj3d();
}; // class ProjLib_CompProjectedCurve

//---------------------------------------------------------------------
//  Class  ProjLib_PrjResolve
//---------------------------------------------------------------------
public ref class ProjLib_PrjResolve sealed : public BaseClass<::ProjLib_PrjResolve>
{

#ifdef Include_ProjLib_PrjResolve_h
public:
	Include_ProjLib_PrjResolve_h
#endif

public:
	ProjLib_PrjResolve(::ProjLib_PrjResolve* nativeInstance)
		: BaseClass<::ProjLib_PrjResolve>( nativeInstance, true )
	{}

	ProjLib_PrjResolve(::ProjLib_PrjResolve& nativeInstance)
		: BaseClass<::ProjLib_PrjResolve>( &nativeInstance, false )
	{}

	property ::ProjLib_PrjResolve* NativeInstance
	{
		::ProjLib_PrjResolve* get()
		{
			return static_cast<::ProjLib_PrjResolve*>(_NativeInstance);
		}
	}

public:
	ProjLib_PrjResolve(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, int Fix);
	ProjLib_PrjResolve(Macad::Occt::ProjLib_PrjResolve^ parameter1);
	void Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup, double FTol, bool StrictInside);
	void Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup, double FTol);
	void Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup);
	bool IsDone();
	Macad::Occt::Pnt2d Solution();
}; // class ProjLib_PrjResolve

//---------------------------------------------------------------------
//  Class  ProjLib_Projector
//---------------------------------------------------------------------
public ref class ProjLib_Projector : public BaseClass<::ProjLib_Projector>
{

#ifdef Include_ProjLib_Projector_h
public:
	Include_ProjLib_Projector_h
#endif

protected:
	ProjLib_Projector(InitMode init)
		: BaseClass<::ProjLib_Projector>( init )
	{}

public:
	ProjLib_Projector(::ProjLib_Projector* nativeInstance)
		: BaseClass<::ProjLib_Projector>( nativeInstance, true )
	{}

	ProjLib_Projector(::ProjLib_Projector& nativeInstance)
		: BaseClass<::ProjLib_Projector>( &nativeInstance, false )
	{}

	property ::ProjLib_Projector* NativeInstance
	{
		::ProjLib_Projector* get()
		{
			return static_cast<::ProjLib_Projector*>(_NativeInstance);
		}
	}

public:
	ProjLib_Projector();
	ProjLib_Projector(Macad::Occt::ProjLib_Projector^ parameter1);
	bool IsDone();
	void Done();
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	void SetBSpline(Macad::Occt::Geom2d_BSplineCurve^ C);
	void SetBezier(Macad::Occt::Geom2d_BezierCurve^ C);
	void SetType(Macad::Occt::GeomAbs_CurveType Type);
	bool IsPeriodic();
	void SetPeriodic();
	Macad::Occt::gp_Lin2d^ Line();
	Macad::Occt::gp_Circ2d^ Circle();
	Macad::Occt::gp_Elips2d^ Ellipse();
	Macad::Occt::gp_Hypr2d^ Hyperbola();
	Macad::Occt::gp_Parab2d^ Parabola();
	Macad::Occt::Geom2d_BezierCurve^ Bezier();
	Macad::Occt::Geom2d_BSplineCurve^ BSpline();
	void Project(Macad::Occt::gp_Lin^ L);
	void Project(Macad::Occt::gp_Circ^ C);
	void Project(Macad::Occt::gp_Elips^ E);
	void Project(Macad::Occt::gp_Parab^ P);
	void Project(Macad::Occt::gp_Hypr^ H);
	void UFrame(double CFirst, double CLast, double UFirst, double Period);
	void VFrame(double CFirst, double CLast, double VFirst, double Period);
}; // class ProjLib_Projector

//---------------------------------------------------------------------
//  Class  ProjLib_Plane
//---------------------------------------------------------------------
public ref class ProjLib_Plane sealed : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Plane_h
public:
	Include_ProjLib_Plane_h
#endif

public:
	ProjLib_Plane(::ProjLib_Plane* nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	ProjLib_Plane(::ProjLib_Plane& nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	property ::ProjLib_Plane* NativeInstance
	{
		::ProjLib_Plane* get()
		{
			return static_cast<::ProjLib_Plane*>(_NativeInstance);
		}
	}

public:
	ProjLib_Plane();
	ProjLib_Plane(Macad::Occt::Pln Pl);
	ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Lin^ L);
	ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Circ^ C);
	ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Elips^ E);
	ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Parab^ P);
	ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Hypr^ H);
	ProjLib_Plane(Macad::Occt::ProjLib_Plane^ parameter1);
	void Init(Macad::Occt::Pln Pl);
	void Project(Macad::Occt::gp_Lin^ L);
	void Project(Macad::Occt::gp_Circ^ C);
	void Project(Macad::Occt::gp_Elips^ E);
	void Project(Macad::Occt::gp_Parab^ P);
	void Project(Macad::Occt::gp_Hypr^ H);
}; // class ProjLib_Plane

//---------------------------------------------------------------------
//  Class  ProjLib_Cylinder
//---------------------------------------------------------------------
public ref class ProjLib_Cylinder sealed : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Cylinder_h
public:
	Include_ProjLib_Cylinder_h
#endif

public:
	ProjLib_Cylinder(::ProjLib_Cylinder* nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	ProjLib_Cylinder(::ProjLib_Cylinder& nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	property ::ProjLib_Cylinder* NativeInstance
	{
		::ProjLib_Cylinder* get()
		{
			return static_cast<::ProjLib_Cylinder*>(_NativeInstance);
		}
	}

public:
	ProjLib_Cylinder();
	ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl);
	ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Lin^ L);
	ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Circ^ C);
	ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Elips^ E);
	ProjLib_Cylinder(Macad::Occt::ProjLib_Cylinder^ parameter1);
	void Init(Macad::Occt::gp_Cylinder^ Cyl);
	void Project(Macad::Occt::gp_Lin^ L);
	void Project(Macad::Occt::gp_Circ^ C);
	void Project(Macad::Occt::gp_Elips^ E);
	void Project(Macad::Occt::gp_Parab^ P);
	void Project(Macad::Occt::gp_Hypr^ H);
}; // class ProjLib_Cylinder

//---------------------------------------------------------------------
//  Class  ProjLib_Cone
//---------------------------------------------------------------------
public ref class ProjLib_Cone sealed : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Cone_h
public:
	Include_ProjLib_Cone_h
#endif

public:
	ProjLib_Cone(::ProjLib_Cone* nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	ProjLib_Cone(::ProjLib_Cone& nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	property ::ProjLib_Cone* NativeInstance
	{
		::ProjLib_Cone* get()
		{
			return static_cast<::ProjLib_Cone*>(_NativeInstance);
		}
	}

public:
	ProjLib_Cone();
	ProjLib_Cone(Macad::Occt::gp_Cone^ Co);
	ProjLib_Cone(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Lin^ L);
	ProjLib_Cone(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Circ^ C);
	ProjLib_Cone(Macad::Occt::ProjLib_Cone^ parameter1);
	void Init(Macad::Occt::gp_Cone^ Co);
	void Project(Macad::Occt::gp_Lin^ L);
	void Project(Macad::Occt::gp_Circ^ C);
	void Project(Macad::Occt::gp_Elips^ E);
	void Project(Macad::Occt::gp_Parab^ P);
	void Project(Macad::Occt::gp_Hypr^ H);
}; // class ProjLib_Cone

//---------------------------------------------------------------------
//  Class  ProjLib_Sphere
//---------------------------------------------------------------------
public ref class ProjLib_Sphere sealed : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Sphere_h
public:
	Include_ProjLib_Sphere_h
#endif

public:
	ProjLib_Sphere(::ProjLib_Sphere* nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	ProjLib_Sphere(::ProjLib_Sphere& nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	property ::ProjLib_Sphere* NativeInstance
	{
		::ProjLib_Sphere* get()
		{
			return static_cast<::ProjLib_Sphere*>(_NativeInstance);
		}
	}

public:
	ProjLib_Sphere();
	ProjLib_Sphere(Macad::Occt::gp_Sphere^ Sp);
	ProjLib_Sphere(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::gp_Circ^ C);
	ProjLib_Sphere(Macad::Occt::ProjLib_Sphere^ parameter1);
	void Init(Macad::Occt::gp_Sphere^ Sp);
	void Project(Macad::Occt::gp_Lin^ L);
	void Project(Macad::Occt::gp_Circ^ C);
	void Project(Macad::Occt::gp_Elips^ E);
	void Project(Macad::Occt::gp_Parab^ P);
	void Project(Macad::Occt::gp_Hypr^ H);
	void SetInBounds(double U);
}; // class ProjLib_Sphere

//---------------------------------------------------------------------
//  Class  ProjLib_Torus
//---------------------------------------------------------------------
public ref class ProjLib_Torus sealed : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Torus_h
public:
	Include_ProjLib_Torus_h
#endif

public:
	ProjLib_Torus(::ProjLib_Torus* nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	ProjLib_Torus(::ProjLib_Torus& nativeInstance)
		: Macad::Occt::ProjLib_Projector( nativeInstance )
	{}

	property ::ProjLib_Torus* NativeInstance
	{
		::ProjLib_Torus* get()
		{
			return static_cast<::ProjLib_Torus*>(_NativeInstance);
		}
	}

public:
	ProjLib_Torus();
	ProjLib_Torus(Macad::Occt::gp_Torus^ To);
	ProjLib_Torus(Macad::Occt::gp_Torus^ To, Macad::Occt::gp_Circ^ C);
	ProjLib_Torus(Macad::Occt::ProjLib_Torus^ parameter1);
	void Init(Macad::Occt::gp_Torus^ To);
	void Project(Macad::Occt::gp_Lin^ L);
	void Project(Macad::Occt::gp_Circ^ C);
	void Project(Macad::Occt::gp_Elips^ E);
	void Project(Macad::Occt::gp_Parab^ P);
	void Project(Macad::Occt::gp_Hypr^ H);
}; // class ProjLib_Torus

//---------------------------------------------------------------------
//  Class  ProjLib
//---------------------------------------------------------------------
public ref class ProjLib sealed : public BaseClass<::ProjLib>
{

#ifdef Include_ProjLib_h
public:
	Include_ProjLib_h
#endif

public:
	ProjLib(::ProjLib* nativeInstance)
		: BaseClass<::ProjLib>( nativeInstance, true )
	{}

	ProjLib(::ProjLib& nativeInstance)
		: BaseClass<::ProjLib>( &nativeInstance, false )
	{}

	property ::ProjLib* NativeInstance
	{
		::ProjLib* get()
		{
			return static_cast<::ProjLib*>(_NativeInstance);
		}
	}

public:
	ProjLib();
	ProjLib(Macad::Occt::ProjLib^ parameter1);
	static Macad::Occt::Pnt2d Project(Macad::Occt::Pln Pl, Macad::Occt::Pnt P);
	static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Lin^ L);
	static Macad::Occt::gp_Circ2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Circ^ C);
	static Macad::Occt::gp_Elips2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Elips^ E);
	static Macad::Occt::gp_Parab2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Parab^ P);
	static Macad::Occt::gp_Hypr2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Hypr^ H);
	static Macad::Occt::Pnt2d Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::Pnt P);
	static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::gp_Lin^ L);
	static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::gp_Circ^ Ci);
	static Macad::Occt::Pnt2d Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::Pnt P);
	static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Lin^ L);
	static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Circ^ Ci);
	static Macad::Occt::Pnt2d Project(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::Pnt P);
	static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::gp_Circ^ Ci);
	static Macad::Occt::Pnt2d Project(Macad::Occt::gp_Torus^ To, Macad::Occt::Pnt P);
	static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Torus^ To, Macad::Occt::gp_Circ^ Ci);
	static void MakePCurveOfType(Macad::Occt::ProjLib_ProjectedCurve^ PC, Macad::Occt::Geom2d_Curve^ aC);
	static bool IsAnaSurf(Macad::Occt::Adaptor3d_Surface^ theAS);
}; // class ProjLib

//---------------------------------------------------------------------
//  Class  ProjLib_HSequenceOfHSequenceOfPnt
//---------------------------------------------------------------------
public ref class ProjLib_HSequenceOfHSequenceOfPnt sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_ProjLib_HSequenceOfHSequenceOfPnt_h
public:
	Include_ProjLib_HSequenceOfHSequenceOfPnt_h
#endif

public:
	ProjLib_HSequenceOfHSequenceOfPnt(::ProjLib_HSequenceOfHSequenceOfPnt* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ProjLib_HSequenceOfHSequenceOfPnt(::ProjLib_HSequenceOfHSequenceOfPnt& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ProjLib_HSequenceOfHSequenceOfPnt* NativeInstance
	{
		::ProjLib_HSequenceOfHSequenceOfPnt* get()
		{
			return static_cast<::ProjLib_HSequenceOfHSequenceOfPnt*>(_NativeInstance);
		}
	}

	static Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ CreateDowncasted(::ProjLib_HSequenceOfHSequenceOfPnt* instance);

public:
	ProjLib_HSequenceOfHSequenceOfPnt();
	ProjLib_HSequenceOfHSequenceOfPnt(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theOther);
	ProjLib_HSequenceOfHSequenceOfPnt(Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ parameter1);
	Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ Sequence();
	void Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	void Append(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSequence);
	Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ ChangeSequence();
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt>> Assign(NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt>> theSeq, ) */
	void Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TColgp_HSequenceOfPnt theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt>> theSeq, ) */
	Macad::Occt::TColgp_HSequenceOfPnt^ First();
	Macad::Occt::TColgp_HSequenceOfPnt^ ChangeFirst();
	Macad::Occt::TColgp_HSequenceOfPnt^ Last();
	Macad::Occt::TColgp_HSequenceOfPnt^ ChangeLast();
	Macad::Occt::TColgp_HSequenceOfPnt^ Value(int theIndex);
	Macad::Occt::TColgp_HSequenceOfPnt^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
}; // class ProjLib_HSequenceOfHSequenceOfPnt

}; // namespace Occt
}; // namespace Macad
