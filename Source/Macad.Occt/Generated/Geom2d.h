// Generated wrapper code for package Geom2d

#pragma once

#include "Geom2d.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom2d_Geometry
//---------------------------------------------------------------------
public ref class Geom2d_Geometry : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom2d_Geometry_h
public:
	Include_Geom2d_Geometry_h
#endif

protected:
	Geom2d_Geometry(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Geom2d_Geometry(::Geom2d_Geometry* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Geom2d_Geometry(::Geom2d_Geometry& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Geom2d_Geometry* NativeInstance
	{
		::Geom2d_Geometry* get()
		{
			return static_cast<::Geom2d_Geometry*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Geometry^ CreateDowncasted(::Geom2d_Geometry* instance);

public:
	Geom2d_Geometry(Macad::Occt::Geom2d_Geometry^ parameter1);
	Geom2d_Geometry();
	void Mirror(Macad::Occt::Pnt2d P);
	void Mirror(Macad::Occt::Ax2d A);
	void Rotate(Macad::Occt::Pnt2d P, double Ang);
	void Scale(Macad::Occt::Pnt2d P, double S);
	void Translate(Macad::Occt::Vec2d V);
	void Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Mirrored(Macad::Occt::Pnt2d P);
	Macad::Occt::Geom2d_Geometry^ Mirrored(Macad::Occt::Ax2d A);
	Macad::Occt::Geom2d_Geometry^ Rotated(Macad::Occt::Pnt2d P, double Ang);
	Macad::Occt::Geom2d_Geometry^ Scaled(Macad::Occt::Pnt2d P, double S);
	Macad::Occt::Geom2d_Geometry^ Transformed(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Translated(Macad::Occt::Vec2d V);
	Macad::Occt::Geom2d_Geometry^ Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Geometry

//---------------------------------------------------------------------
//  Class  Geom2d_AxisPlacement
//---------------------------------------------------------------------
public ref class Geom2d_AxisPlacement sealed : public Macad::Occt::Geom2d_Geometry
{

#ifdef Include_Geom2d_AxisPlacement_h
public:
	Include_Geom2d_AxisPlacement_h
#endif

public:
	Geom2d_AxisPlacement(::Geom2d_AxisPlacement* nativeInstance)
		: Macad::Occt::Geom2d_Geometry( nativeInstance )
	{}

	Geom2d_AxisPlacement(::Geom2d_AxisPlacement& nativeInstance)
		: Macad::Occt::Geom2d_Geometry( nativeInstance )
	{}

	property ::Geom2d_AxisPlacement* NativeInstance
	{
		::Geom2d_AxisPlacement* get()
		{
			return static_cast<::Geom2d_AxisPlacement*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_AxisPlacement^ CreateDowncasted(::Geom2d_AxisPlacement* instance);

public:
	Geom2d_AxisPlacement(Macad::Occt::Ax2d A);
	Geom2d_AxisPlacement(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V);
	Geom2d_AxisPlacement(Macad::Occt::Geom2d_AxisPlacement^ parameter1);
	void Reverse();
	Macad::Occt::Geom2d_AxisPlacement^ Reversed();
	void SetAxis(Macad::Occt::Ax2d A);
	void SetDirection(Macad::Occt::Dir2d V);
	void SetLocation(Macad::Occt::Pnt2d P);
	double Angle(Macad::Occt::Geom2d_AxisPlacement^ Other);
	Macad::Occt::Ax2d Ax2d();
	Macad::Occt::Dir2d Direction();
	Macad::Occt::Pnt2d Location();
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
}; // class Geom2d_AxisPlacement

//---------------------------------------------------------------------
//  Class  Geom2d_UndefinedDerivative
//---------------------------------------------------------------------
public ref class Geom2d_UndefinedDerivative sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Geom2d_UndefinedDerivative_h
public:
	Include_Geom2d_UndefinedDerivative_h
#endif

public:
	Geom2d_UndefinedDerivative(::Geom2d_UndefinedDerivative* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Geom2d_UndefinedDerivative(::Geom2d_UndefinedDerivative& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Geom2d_UndefinedDerivative* NativeInstance
	{
		::Geom2d_UndefinedDerivative* get()
		{
			return static_cast<::Geom2d_UndefinedDerivative*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_UndefinedDerivative^ CreateDowncasted(::Geom2d_UndefinedDerivative* instance);

public:
	Geom2d_UndefinedDerivative();
	Geom2d_UndefinedDerivative(System::String^ theMessage);
	Geom2d_UndefinedDerivative(Macad::Occt::Geom2d_UndefinedDerivative^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Geom2d_UndefinedDerivative^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Geom2d_UndefinedDerivative^ NewInstance();
}; // class Geom2d_UndefinedDerivative

//---------------------------------------------------------------------
//  Class  Geom2d_UndefinedValue
//---------------------------------------------------------------------
public ref class Geom2d_UndefinedValue sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Geom2d_UndefinedValue_h
public:
	Include_Geom2d_UndefinedValue_h
#endif

public:
	Geom2d_UndefinedValue(::Geom2d_UndefinedValue* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Geom2d_UndefinedValue(::Geom2d_UndefinedValue& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Geom2d_UndefinedValue* NativeInstance
	{
		::Geom2d_UndefinedValue* get()
		{
			return static_cast<::Geom2d_UndefinedValue*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_UndefinedValue^ CreateDowncasted(::Geom2d_UndefinedValue* instance);

public:
	Geom2d_UndefinedValue();
	Geom2d_UndefinedValue(System::String^ theMessage);
	Geom2d_UndefinedValue(Macad::Occt::Geom2d_UndefinedValue^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Geom2d_UndefinedValue^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Geom2d_UndefinedValue^ NewInstance();
}; // class Geom2d_UndefinedValue

//---------------------------------------------------------------------
//  Class  Geom2d_Curve
//---------------------------------------------------------------------
public ref class Geom2d_Curve : public Macad::Occt::Geom2d_Geometry
{

#ifdef Include_Geom2d_Curve_h
public:
	Include_Geom2d_Curve_h
#endif

protected:
	Geom2d_Curve(InitMode init)
		: Macad::Occt::Geom2d_Geometry( init )
	{}

public:
	Geom2d_Curve(::Geom2d_Curve* nativeInstance)
		: Macad::Occt::Geom2d_Geometry( nativeInstance )
	{}

	Geom2d_Curve(::Geom2d_Curve& nativeInstance)
		: Macad::Occt::Geom2d_Geometry( nativeInstance )
	{}

	property ::Geom2d_Curve* NativeInstance
	{
		::Geom2d_Curve* get()
		{
			return static_cast<::Geom2d_Curve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Curve^ CreateDowncasted(::Geom2d_Curve* instance);

public:
	Geom2d_Curve(Macad::Occt::Geom2d_Curve^ parameter1);
	Geom2d_Curve();
	void Reverse();
	double ReversedParameter(double U);
	double TransformedParameter(double U, Macad::Occt::Trsf2d T);
	double ParametricTransformation(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Curve^ Reversed();
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCN(int N);
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	Macad::Occt::Pnt2d Value(double U);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Curve

//---------------------------------------------------------------------
//  Class  Geom2d_BoundedCurve
//---------------------------------------------------------------------
public ref class Geom2d_BoundedCurve : public Macad::Occt::Geom2d_Curve
{

#ifdef Include_Geom2d_BoundedCurve_h
public:
	Include_Geom2d_BoundedCurve_h
#endif

protected:
	Geom2d_BoundedCurve(InitMode init)
		: Macad::Occt::Geom2d_Curve( init )
	{}

public:
	Geom2d_BoundedCurve(::Geom2d_BoundedCurve* nativeInstance)
		: Macad::Occt::Geom2d_Curve( nativeInstance )
	{}

	Geom2d_BoundedCurve(::Geom2d_BoundedCurve& nativeInstance)
		: Macad::Occt::Geom2d_Curve( nativeInstance )
	{}

	property ::Geom2d_BoundedCurve* NativeInstance
	{
		::Geom2d_BoundedCurve* get()
		{
			return static_cast<::Geom2d_BoundedCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_BoundedCurve^ CreateDowncasted(::Geom2d_BoundedCurve* instance);

public:
	Geom2d_BoundedCurve(Macad::Occt::Geom2d_BoundedCurve^ parameter1);
	Geom2d_BoundedCurve();
	Macad::Occt::Pnt2d EndPoint();
	Macad::Occt::Pnt2d StartPoint();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_BoundedCurve

//---------------------------------------------------------------------
//  Class  Geom2d_BezierCurve
//---------------------------------------------------------------------
public ref class Geom2d_BezierCurve sealed : public Macad::Occt::Geom2d_BoundedCurve
{

#ifdef Include_Geom2d_BezierCurve_h
public:
	Include_Geom2d_BezierCurve_h
#endif

public:
	Geom2d_BezierCurve(::Geom2d_BezierCurve* nativeInstance)
		: Macad::Occt::Geom2d_BoundedCurve( nativeInstance )
	{}

	Geom2d_BezierCurve(::Geom2d_BezierCurve& nativeInstance)
		: Macad::Occt::Geom2d_BoundedCurve( nativeInstance )
	{}

	property ::Geom2d_BezierCurve* NativeInstance
	{
		::Geom2d_BezierCurve* get()
		{
			return static_cast<::Geom2d_BezierCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_BezierCurve^ CreateDowncasted(::Geom2d_BezierCurve* instance);

public:
	Geom2d_BezierCurve(Macad::Occt::TColgp_Array1OfPnt2d^ CurvePoles);
	Geom2d_BezierCurve(Macad::Occt::TColgp_Array1OfPnt2d^ CurvePoles, Macad::Occt::TColStd_Array1OfReal^ PoleWeights);
	Geom2d_BezierCurve(Macad::Occt::Geom2d_BezierCurve^ parameter1);
	void Increase(int Degree);
	void InsertPoleAfter(int Index, Macad::Occt::Pnt2d P, double Weight);
	void InsertPoleAfter(int Index, Macad::Occt::Pnt2d P);
	void InsertPoleBefore(int Index, Macad::Occt::Pnt2d P, double Weight);
	void InsertPoleBefore(int Index, Macad::Occt::Pnt2d P);
	void RemovePole(int Index);
	void Reverse();
	double ReversedParameter(double U);
	void Segment(double U1, double U2);
	void SetPole(int Index, Macad::Occt::Pnt2d P);
	void SetPole(int Index, Macad::Occt::Pnt2d P, double Weight);
	void SetWeight(int Index, double Weight);
	bool IsClosed();
	bool IsCN(int N);
	bool IsPeriodic();
	bool IsRational();
	Macad::Occt::GeomAbs_Shape Continuity();
	int Degree();
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	Macad::Occt::Pnt2d EndPoint();
	double FirstParameter();
	double LastParameter();
	int NbPoles();
	Macad::Occt::Pnt2d Pole(int Index);
	void Poles(Macad::Occt::TColgp_Array1OfPnt2d^ P);
	Macad::Occt::TColgp_Array1OfPnt2d^ Poles();
	Macad::Occt::Pnt2d StartPoint();
	double Weight(int Index);
	void Weights(Macad::Occt::TColStd_Array1OfReal^ W);
	Macad::Occt::TColStd_Array1OfReal^ Weights();
	void Transform(Macad::Occt::Trsf2d T);
	static int MaxDegree();
	void Resolution(double ToleranceUV, double% UTolerance);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_BezierCurve

//---------------------------------------------------------------------
//  Class  Geom2d_BSplineCurve
//---------------------------------------------------------------------
public ref class Geom2d_BSplineCurve sealed : public Macad::Occt::Geom2d_BoundedCurve
{

#ifdef Include_Geom2d_BSplineCurve_h
public:
	Include_Geom2d_BSplineCurve_h
#endif

public:
	Geom2d_BSplineCurve(::Geom2d_BSplineCurve* nativeInstance)
		: Macad::Occt::Geom2d_BoundedCurve( nativeInstance )
	{}

	Geom2d_BSplineCurve(::Geom2d_BSplineCurve& nativeInstance)
		: Macad::Occt::Geom2d_BoundedCurve( nativeInstance )
	{}

	property ::Geom2d_BSplineCurve* NativeInstance
	{
		::Geom2d_BSplineCurve* get()
		{
			return static_cast<::Geom2d_BSplineCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_BSplineCurve^ CreateDowncasted(::Geom2d_BSplineCurve* instance);

public:
	Geom2d_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic);
	Geom2d_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree);
	Geom2d_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic);
	Geom2d_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree);
	Geom2d_BSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ parameter1);
	void IncreaseDegree(int Degree);
	void IncreaseMultiplicity(int Index, int M);
	void IncreaseMultiplicity(int I1, int I2, int M);
	void IncrementMultiplicity(int I1, int I2, int M);
	void InsertKnot(double U, int M, double ParametricTolerance);
	void InsertKnot(double U, int M);
	void InsertKnot(double U);
	void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add);
	void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance);
	void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	bool RemoveKnot(int Index, int M, double Tolerance);
	void InsertPoleAfter(int Index, Macad::Occt::Pnt2d P, double Weight);
	void InsertPoleAfter(int Index, Macad::Occt::Pnt2d P);
	void InsertPoleBefore(int Index, Macad::Occt::Pnt2d P, double Weight);
	void InsertPoleBefore(int Index, Macad::Occt::Pnt2d P);
	void RemovePole(int Index);
	void Reverse();
	double ReversedParameter(double U);
	void Segment(double U1, double U2, double theTolerance);
	void Segment(double U1, double U2);
	void SetKnot(int Index, double K);
	void SetKnots(Macad::Occt::TColStd_Array1OfReal^ K);
	void SetKnot(int Index, double K, int M);
	void PeriodicNormalization(double% U);
	void SetPeriodic();
	void SetOrigin(int Index);
	void SetNotPeriodic();
	void SetPole(int Index, Macad::Occt::Pnt2d P);
	void SetPole(int Index, Macad::Occt::Pnt2d P, double Weight);
	void SetWeight(int Index, double Weight);
	void MovePoint(double U, Macad::Occt::Pnt2d P, int Index1, int Index2, int% FirstModifiedPole, int% LastModifiedPole);
	void MovePointAndTangent(double U, Macad::Occt::Pnt2d P, Macad::Occt::Vec2d Tangent, double Tolerance, int StartingCondition, int EndingCondition, int% ErrorStatus);
	bool IsCN(int N);
	bool IsG1(double theTf, double theTl, double theAngTol);
	bool IsClosed();
	bool IsPeriodic();
	bool IsRational();
	Macad::Occt::GeomAbs_Shape Continuity();
	int Degree();
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	Macad::Occt::Pnt2d LocalValue(double U, int FromK1, int ToK2);
	void LocalD0(double U, int FromK1, int ToK2, Macad::Occt::Pnt2d% P);
	void LocalD1(double U, int FromK1, int ToK2, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void LocalD2(double U, int FromK1, int ToK2, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void LocalD3(double U, int FromK1, int ToK2, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d LocalDN(double U, int FromK1, int ToK2, int N);
	Macad::Occt::Pnt2d EndPoint();
	int FirstUKnotIndex();
	double FirstParameter();
	double Knot(int Index);
	void Knots(Macad::Occt::TColStd_Array1OfReal^ K);
	Macad::Occt::TColStd_Array1OfReal^ Knots();
	void KnotSequence(Macad::Occt::TColStd_Array1OfReal^ K);
	Macad::Occt::TColStd_Array1OfReal^ KnotSequence();
	Macad::Occt::GeomAbs_BSplKnotDistribution KnotDistribution();
	int LastUKnotIndex();
	double LastParameter();
	void LocateU(double U, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition);
	void LocateU(double U, double ParametricTolerance, int% I1, int% I2);
	int Multiplicity(int Index);
	void Multiplicities(Macad::Occt::TColStd_Array1OfInteger^ M);
	Macad::Occt::TColStd_Array1OfInteger^ Multiplicities();
	int NbKnots();
	int NbPoles();
	Macad::Occt::Pnt2d Pole(int Index);
	void Poles(Macad::Occt::TColgp_Array1OfPnt2d^ P);
	Macad::Occt::TColgp_Array1OfPnt2d^ Poles();
	Macad::Occt::Pnt2d StartPoint();
	double Weight(int Index);
	void Weights(Macad::Occt::TColStd_Array1OfReal^ W);
	Macad::Occt::TColStd_Array1OfReal^ Weights();
	void Transform(Macad::Occt::Trsf2d T);
	static int MaxDegree();
	void Resolution(double ToleranceUV, double% UTolerance);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_BSplineCurve

//---------------------------------------------------------------------
//  Class  Geom2d_Point
//---------------------------------------------------------------------
public ref class Geom2d_Point : public Macad::Occt::Geom2d_Geometry
{

#ifdef Include_Geom2d_Point_h
public:
	Include_Geom2d_Point_h
#endif

protected:
	Geom2d_Point(InitMode init)
		: Macad::Occt::Geom2d_Geometry( init )
	{}

public:
	Geom2d_Point(::Geom2d_Point* nativeInstance)
		: Macad::Occt::Geom2d_Geometry( nativeInstance )
	{}

	Geom2d_Point(::Geom2d_Point& nativeInstance)
		: Macad::Occt::Geom2d_Geometry( nativeInstance )
	{}

	property ::Geom2d_Point* NativeInstance
	{
		::Geom2d_Point* get()
		{
			return static_cast<::Geom2d_Point*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Point^ CreateDowncasted(::Geom2d_Point* instance);

public:
	Geom2d_Point(Macad::Occt::Geom2d_Point^ parameter1);
	Geom2d_Point();
	void Coord(double% X, double% Y);
	Macad::Occt::Pnt2d Pnt2d();
	double X();
	double Y();
	double Distance(Macad::Occt::Geom2d_Point^ Other);
	double SquareDistance(Macad::Occt::Geom2d_Point^ Other);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Point

//---------------------------------------------------------------------
//  Class  Geom2d_CartesianPoint
//---------------------------------------------------------------------
public ref class Geom2d_CartesianPoint sealed : public Macad::Occt::Geom2d_Point
{

#ifdef Include_Geom2d_CartesianPoint_h
public:
	Include_Geom2d_CartesianPoint_h
#endif

public:
	Geom2d_CartesianPoint(::Geom2d_CartesianPoint* nativeInstance)
		: Macad::Occt::Geom2d_Point( nativeInstance )
	{}

	Geom2d_CartesianPoint(::Geom2d_CartesianPoint& nativeInstance)
		: Macad::Occt::Geom2d_Point( nativeInstance )
	{}

	property ::Geom2d_CartesianPoint* NativeInstance
	{
		::Geom2d_CartesianPoint* get()
		{
			return static_cast<::Geom2d_CartesianPoint*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_CartesianPoint^ CreateDowncasted(::Geom2d_CartesianPoint* instance);

public:
	Geom2d_CartesianPoint(Macad::Occt::Pnt2d P);
	Geom2d_CartesianPoint(double X, double Y);
	Geom2d_CartesianPoint(Macad::Occt::Geom2d_CartesianPoint^ parameter1);
	void SetCoord(double X, double Y);
	void SetPnt2d(Macad::Occt::Pnt2d P);
	void SetX(double X);
	void SetY(double Y);
	void Coord(double% X, double% Y);
	Macad::Occt::Pnt2d Pnt2d();
	double X();
	double Y();
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_CartesianPoint

//---------------------------------------------------------------------
//  Class  Geom2d_Conic
//---------------------------------------------------------------------
public ref class Geom2d_Conic : public Macad::Occt::Geom2d_Curve
{

#ifdef Include_Geom2d_Conic_h
public:
	Include_Geom2d_Conic_h
#endif

protected:
	Geom2d_Conic(InitMode init)
		: Macad::Occt::Geom2d_Curve( init )
	{}

public:
	Geom2d_Conic(::Geom2d_Conic* nativeInstance)
		: Macad::Occt::Geom2d_Curve( nativeInstance )
	{}

	Geom2d_Conic(::Geom2d_Conic& nativeInstance)
		: Macad::Occt::Geom2d_Curve( nativeInstance )
	{}

	property ::Geom2d_Conic* NativeInstance
	{
		::Geom2d_Conic* get()
		{
			return static_cast<::Geom2d_Conic*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Conic^ CreateDowncasted(::Geom2d_Conic* instance);

public:
	Geom2d_Conic(Macad::Occt::Geom2d_Conic^ parameter1);
	Geom2d_Conic();
	void SetAxis(Macad::Occt::Ax22d theA);
	void SetXAxis(Macad::Occt::Ax2d theAX);
	void SetYAxis(Macad::Occt::Ax2d theAY);
	void SetLocation(Macad::Occt::Pnt2d theP);
	Macad::Occt::Ax2d XAxis();
	Macad::Occt::Ax2d YAxis();
	double Eccentricity();
	Macad::Occt::Pnt2d Location();
	Macad::Occt::Ax22d Position();
	void Reverse();
	double ReversedParameter(double U);
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCN(int N);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Conic

//---------------------------------------------------------------------
//  Class  Geom2d_Circle
//---------------------------------------------------------------------
public ref class Geom2d_Circle sealed : public Macad::Occt::Geom2d_Conic
{

#ifdef Include_Geom2d_Circle_h
public:
	Include_Geom2d_Circle_h
#endif

public:
	Geom2d_Circle(::Geom2d_Circle* nativeInstance)
		: Macad::Occt::Geom2d_Conic( nativeInstance )
	{}

	Geom2d_Circle(::Geom2d_Circle& nativeInstance)
		: Macad::Occt::Geom2d_Conic( nativeInstance )
	{}

	property ::Geom2d_Circle* NativeInstance
	{
		::Geom2d_Circle* get()
		{
			return static_cast<::Geom2d_Circle*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Circle^ CreateDowncasted(::Geom2d_Circle* instance);

public:
	Geom2d_Circle(Macad::Occt::gp_Circ2d^ C);
	Geom2d_Circle(Macad::Occt::Ax2d A, double Radius, bool Sense);
	Geom2d_Circle(Macad::Occt::Ax2d A, double Radius);
	Geom2d_Circle(Macad::Occt::Ax22d A, double Radius);
	Geom2d_Circle(Macad::Occt::Geom2d_Circle^ parameter1);
	void SetCirc2d(Macad::Occt::gp_Circ2d^ C);
	void SetRadius(double R);
	Macad::Occt::gp_Circ2d^ Circ2d();
	double Radius();
	double ReversedParameter(double U);
	double Eccentricity();
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Circle

//---------------------------------------------------------------------
//  Class  Geom2d_Vector
//---------------------------------------------------------------------
public ref class Geom2d_Vector : public Macad::Occt::Geom2d_Geometry
{

#ifdef Include_Geom2d_Vector_h
public:
	Include_Geom2d_Vector_h
#endif

protected:
	Geom2d_Vector(InitMode init)
		: Macad::Occt::Geom2d_Geometry( init )
	{}

public:
	Geom2d_Vector(::Geom2d_Vector* nativeInstance)
		: Macad::Occt::Geom2d_Geometry( nativeInstance )
	{}

	Geom2d_Vector(::Geom2d_Vector& nativeInstance)
		: Macad::Occt::Geom2d_Geometry( nativeInstance )
	{}

	property ::Geom2d_Vector* NativeInstance
	{
		::Geom2d_Vector* get()
		{
			return static_cast<::Geom2d_Vector*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Vector^ CreateDowncasted(::Geom2d_Vector* instance);

public:
	Geom2d_Vector(Macad::Occt::Geom2d_Vector^ parameter1);
	Geom2d_Vector();
	void Reverse();
	Macad::Occt::Geom2d_Vector^ Reversed();
	double Angle(Macad::Occt::Geom2d_Vector^ Other);
	void Coord(double% X, double% Y);
	double Magnitude();
	double SquareMagnitude();
	double X();
	double Y();
	double Crossed(Macad::Occt::Geom2d_Vector^ Other);
	double Dot(Macad::Occt::Geom2d_Vector^ Other);
	Macad::Occt::Vec2d Vec2d();
}; // class Geom2d_Vector

//---------------------------------------------------------------------
//  Class  Geom2d_Direction
//---------------------------------------------------------------------
public ref class Geom2d_Direction sealed : public Macad::Occt::Geom2d_Vector
{

#ifdef Include_Geom2d_Direction_h
public:
	Include_Geom2d_Direction_h
#endif

public:
	Geom2d_Direction(::Geom2d_Direction* nativeInstance)
		: Macad::Occt::Geom2d_Vector( nativeInstance )
	{}

	Geom2d_Direction(::Geom2d_Direction& nativeInstance)
		: Macad::Occt::Geom2d_Vector( nativeInstance )
	{}

	property ::Geom2d_Direction* NativeInstance
	{
		::Geom2d_Direction* get()
		{
			return static_cast<::Geom2d_Direction*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Direction^ CreateDowncasted(::Geom2d_Direction* instance);

public:
	Geom2d_Direction(double X, double Y);
	Geom2d_Direction(Macad::Occt::Dir2d V);
	Geom2d_Direction(Macad::Occt::Geom2d_Direction^ parameter1);
	void SetCoord(double X, double Y);
	void SetDir2d(Macad::Occt::Dir2d V);
	void SetX(double X);
	void SetY(double Y);
	Macad::Occt::Dir2d Dir2d();
	double Magnitude();
	double SquareMagnitude();
	double Crossed(Macad::Occt::Geom2d_Vector^ Other);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
}; // class Geom2d_Direction

//---------------------------------------------------------------------
//  Class  Geom2d_Ellipse
//---------------------------------------------------------------------
public ref class Geom2d_Ellipse sealed : public Macad::Occt::Geom2d_Conic
{

#ifdef Include_Geom2d_Ellipse_h
public:
	Include_Geom2d_Ellipse_h
#endif

public:
	Geom2d_Ellipse(::Geom2d_Ellipse* nativeInstance)
		: Macad::Occt::Geom2d_Conic( nativeInstance )
	{}

	Geom2d_Ellipse(::Geom2d_Ellipse& nativeInstance)
		: Macad::Occt::Geom2d_Conic( nativeInstance )
	{}

	property ::Geom2d_Ellipse* NativeInstance
	{
		::Geom2d_Ellipse* get()
		{
			return static_cast<::Geom2d_Ellipse*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Ellipse^ CreateDowncasted(::Geom2d_Ellipse* instance);

public:
	Geom2d_Ellipse(Macad::Occt::gp_Elips2d^ E);
	Geom2d_Ellipse(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
	Geom2d_Ellipse(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius);
	Geom2d_Ellipse(Macad::Occt::Ax22d Axis, double MajorRadius, double MinorRadius);
	Geom2d_Ellipse(Macad::Occt::Geom2d_Ellipse^ parameter1);
	void SetElips2d(Macad::Occt::gp_Elips2d^ E);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	Macad::Occt::gp_Elips2d^ Elips2d();
	double ReversedParameter(double U);
	Macad::Occt::Ax2d Directrix1();
	Macad::Occt::Ax2d Directrix2();
	double Eccentricity();
	double Focal();
	Macad::Occt::Pnt2d Focus1();
	Macad::Occt::Pnt2d Focus2();
	double MajorRadius();
	double MinorRadius();
	double Parameter();
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Ellipse

//---------------------------------------------------------------------
//  Class  Geom2d_Hyperbola
//---------------------------------------------------------------------
public ref class Geom2d_Hyperbola sealed : public Macad::Occt::Geom2d_Conic
{

#ifdef Include_Geom2d_Hyperbola_h
public:
	Include_Geom2d_Hyperbola_h
#endif

public:
	Geom2d_Hyperbola(::Geom2d_Hyperbola* nativeInstance)
		: Macad::Occt::Geom2d_Conic( nativeInstance )
	{}

	Geom2d_Hyperbola(::Geom2d_Hyperbola& nativeInstance)
		: Macad::Occt::Geom2d_Conic( nativeInstance )
	{}

	property ::Geom2d_Hyperbola* NativeInstance
	{
		::Geom2d_Hyperbola* get()
		{
			return static_cast<::Geom2d_Hyperbola*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Hyperbola^ CreateDowncasted(::Geom2d_Hyperbola* instance);

public:
	Geom2d_Hyperbola(Macad::Occt::gp_Hypr2d^ H);
	Geom2d_Hyperbola(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
	Geom2d_Hyperbola(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius);
	Geom2d_Hyperbola(Macad::Occt::Ax22d Axis, double MajorRadius, double MinorRadius);
	Geom2d_Hyperbola(Macad::Occt::Geom2d_Hyperbola^ parameter1);
	void SetHypr2d(Macad::Occt::gp_Hypr2d^ H);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	Macad::Occt::gp_Hypr2d^ Hypr2d();
	double ReversedParameter(double U);
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	Macad::Occt::Ax2d Asymptote1();
	Macad::Occt::Ax2d Asymptote2();
	Macad::Occt::gp_Hypr2d^ ConjugateBranch1();
	Macad::Occt::gp_Hypr2d^ ConjugateBranch2();
	Macad::Occt::Ax2d Directrix1();
	Macad::Occt::Ax2d Directrix2();
	double Eccentricity();
	double Focal();
	Macad::Occt::Pnt2d Focus1();
	Macad::Occt::Pnt2d Focus2();
	double MajorRadius();
	double MinorRadius();
	Macad::Occt::gp_Hypr2d^ OtherBranch();
	double Parameter();
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Hyperbola

//---------------------------------------------------------------------
//  Class  Geom2d_Line
//---------------------------------------------------------------------
public ref class Geom2d_Line sealed : public Macad::Occt::Geom2d_Curve
{

#ifdef Include_Geom2d_Line_h
public:
	Include_Geom2d_Line_h
#endif

public:
	Geom2d_Line(::Geom2d_Line* nativeInstance)
		: Macad::Occt::Geom2d_Curve( nativeInstance )
	{}

	Geom2d_Line(::Geom2d_Line& nativeInstance)
		: Macad::Occt::Geom2d_Curve( nativeInstance )
	{}

	property ::Geom2d_Line* NativeInstance
	{
		::Geom2d_Line* get()
		{
			return static_cast<::Geom2d_Line*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Line^ CreateDowncasted(::Geom2d_Line* instance);

public:
	Geom2d_Line(Macad::Occt::Ax2d A);
	Geom2d_Line(Macad::Occt::gp_Lin2d^ L);
	Geom2d_Line(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V);
	Geom2d_Line(Macad::Occt::Geom2d_Line^ parameter1);
	void SetLin2d(Macad::Occt::gp_Lin2d^ L);
	void SetDirection(Macad::Occt::Dir2d V);
	Macad::Occt::Dir2d Direction();
	void SetLocation(Macad::Occt::Pnt2d P);
	Macad::Occt::Pnt2d Location();
	void SetPosition(Macad::Occt::Ax2d A);
	Macad::Occt::Ax2d Position();
	Macad::Occt::gp_Lin2d^ Lin2d();
	void Reverse();
	double ReversedParameter(double U);
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	Macad::Occt::GeomAbs_Shape Continuity();
	double Distance(Macad::Occt::Pnt2d P);
	bool IsCN(int N);
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	void Transform(Macad::Occt::Trsf2d T);
	double TransformedParameter(double U, Macad::Occt::Trsf2d T);
	double ParametricTransformation(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Line

//---------------------------------------------------------------------
//  Class  Geom2d_OffsetCurve
//---------------------------------------------------------------------
public ref class Geom2d_OffsetCurve sealed : public Macad::Occt::Geom2d_Curve
{

#ifdef Include_Geom2d_OffsetCurve_h
public:
	Include_Geom2d_OffsetCurve_h
#endif

public:
	Geom2d_OffsetCurve(::Geom2d_OffsetCurve* nativeInstance)
		: Macad::Occt::Geom2d_Curve( nativeInstance )
	{}

	Geom2d_OffsetCurve(::Geom2d_OffsetCurve& nativeInstance)
		: Macad::Occt::Geom2d_Curve( nativeInstance )
	{}

	property ::Geom2d_OffsetCurve* NativeInstance
	{
		::Geom2d_OffsetCurve* get()
		{
			return static_cast<::Geom2d_OffsetCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_OffsetCurve^ CreateDowncasted(::Geom2d_OffsetCurve* instance);

public:
	Geom2d_OffsetCurve(Macad::Occt::Geom2d_Curve^ C, double Offset, bool isNotCheckC0);
	Geom2d_OffsetCurve(Macad::Occt::Geom2d_Curve^ C, double Offset);
	Geom2d_OffsetCurve(Macad::Occt::Geom2d_OffsetCurve^ parameter1);
	void Reverse();
	double ReversedParameter(double U);
	void SetBasisCurve(Macad::Occt::Geom2d_Curve^ C, bool isNotCheckC0);
	void SetBasisCurve(Macad::Occt::Geom2d_Curve^ C);
	void SetOffsetValue(double D);
	Macad::Occt::Geom2d_Curve^ BasisCurve();
	Macad::Occt::GeomAbs_Shape Continuity();
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	double FirstParameter();
	double LastParameter();
	double Offset();
	bool IsClosed();
	bool IsCN(int N);
	bool IsPeriodic();
	double Period();
	void Transform(Macad::Occt::Trsf2d T);
	double TransformedParameter(double U, Macad::Occt::Trsf2d T);
	double ParametricTransformation(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
	Macad::Occt::GeomAbs_Shape GetBasisCurveContinuity();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_OffsetCurve

//---------------------------------------------------------------------
//  Class  Geom2d_Parabola
//---------------------------------------------------------------------
public ref class Geom2d_Parabola sealed : public Macad::Occt::Geom2d_Conic
{

#ifdef Include_Geom2d_Parabola_h
public:
	Include_Geom2d_Parabola_h
#endif

public:
	Geom2d_Parabola(::Geom2d_Parabola* nativeInstance)
		: Macad::Occt::Geom2d_Conic( nativeInstance )
	{}

	Geom2d_Parabola(::Geom2d_Parabola& nativeInstance)
		: Macad::Occt::Geom2d_Conic( nativeInstance )
	{}

	property ::Geom2d_Parabola* NativeInstance
	{
		::Geom2d_Parabola* get()
		{
			return static_cast<::Geom2d_Parabola*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Parabola^ CreateDowncasted(::Geom2d_Parabola* instance);

public:
	Geom2d_Parabola(Macad::Occt::gp_Parab2d^ Prb);
	Geom2d_Parabola(Macad::Occt::Ax2d MirrorAxis, double Focal, bool Sense);
	Geom2d_Parabola(Macad::Occt::Ax2d MirrorAxis, double Focal);
	Geom2d_Parabola(Macad::Occt::Ax22d Axis, double Focal);
	Geom2d_Parabola(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F);
	Geom2d_Parabola(Macad::Occt::Geom2d_Parabola^ parameter1);
	void SetFocal(double Focal);
	void SetParab2d(Macad::Occt::gp_Parab2d^ Prb);
	Macad::Occt::gp_Parab2d^ Parab2d();
	double ReversedParameter(double U);
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	Macad::Occt::Ax2d Directrix();
	double Eccentricity();
	Macad::Occt::Pnt2d Focus();
	double Focal();
	double Parameter();
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	void Transform(Macad::Occt::Trsf2d T);
	double TransformedParameter(double U, Macad::Occt::Trsf2d T);
	double ParametricTransformation(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_Parabola

//---------------------------------------------------------------------
//  Class  Geom2d_Transformation
//---------------------------------------------------------------------
public ref class Geom2d_Transformation sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom2d_Transformation_h
public:
	Include_Geom2d_Transformation_h
#endif

public:
	Geom2d_Transformation(::Geom2d_Transformation* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Geom2d_Transformation(::Geom2d_Transformation& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Geom2d_Transformation* NativeInstance
	{
		::Geom2d_Transformation* get()
		{
			return static_cast<::Geom2d_Transformation*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_Transformation^ CreateDowncasted(::Geom2d_Transformation* instance);

public:
	Geom2d_Transformation();
	Geom2d_Transformation(Macad::Occt::Trsf2d T);
	Geom2d_Transformation(Macad::Occt::Geom2d_Transformation^ parameter1);
	void SetMirror(Macad::Occt::Pnt2d P);
	void SetMirror(Macad::Occt::Ax2d A);
	void SetRotation(Macad::Occt::Pnt2d P, double Ang);
	void SetScale(Macad::Occt::Pnt2d P, double S);
	void SetTransformation(Macad::Occt::Ax2d FromSystem1, Macad::Occt::Ax2d ToSystem2);
	void SetTransformation(Macad::Occt::Ax2d ToSystem);
	void SetTranslation(Macad::Occt::Vec2d V);
	void SetTranslation(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	void SetTrsf2d(Macad::Occt::Trsf2d T);
	bool IsNegative();
	Macad::Occt::TrsfForm Form();
	double ScaleFactor();
	Macad::Occt::Trsf2d Trsf2d();
	double Value(int Row, int Col);
	void Invert();
	Macad::Occt::Geom2d_Transformation^ Inverted();
	Macad::Occt::Geom2d_Transformation^ Multiplied(Macad::Occt::Geom2d_Transformation^ Other);
	void Multiply(Macad::Occt::Geom2d_Transformation^ Other);
	void Power(int N);
	Macad::Occt::Geom2d_Transformation^ Powered(int N);
	void PreMultiply(Macad::Occt::Geom2d_Transformation^ Other);
	void Transforms(double% X, double% Y);
	Macad::Occt::Geom2d_Transformation^ Copy();
}; // class Geom2d_Transformation

//---------------------------------------------------------------------
//  Class  Geom2d_TrimmedCurve
//---------------------------------------------------------------------
public ref class Geom2d_TrimmedCurve sealed : public Macad::Occt::Geom2d_BoundedCurve
{

#ifdef Include_Geom2d_TrimmedCurve_h
public:
	Include_Geom2d_TrimmedCurve_h
#endif

public:
	Geom2d_TrimmedCurve(::Geom2d_TrimmedCurve* nativeInstance)
		: Macad::Occt::Geom2d_BoundedCurve( nativeInstance )
	{}

	Geom2d_TrimmedCurve(::Geom2d_TrimmedCurve& nativeInstance)
		: Macad::Occt::Geom2d_BoundedCurve( nativeInstance )
	{}

	property ::Geom2d_TrimmedCurve* NativeInstance
	{
		::Geom2d_TrimmedCurve* get()
		{
			return static_cast<::Geom2d_TrimmedCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_TrimmedCurve^ CreateDowncasted(::Geom2d_TrimmedCurve* instance);

public:
	Geom2d_TrimmedCurve(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, bool Sense, bool theAdjustPeriodic);
	Geom2d_TrimmedCurve(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, bool Sense);
	Geom2d_TrimmedCurve(Macad::Occt::Geom2d_Curve^ C, double U1, double U2);
	Geom2d_TrimmedCurve(Macad::Occt::Geom2d_TrimmedCurve^ parameter1);
	void Reverse();
	double ReversedParameter(double U);
	void SetTrim(double U1, double U2, bool Sense, bool theAdjustPeriodic);
	void SetTrim(double U1, double U2, bool Sense);
	void SetTrim(double U1, double U2);
	Macad::Occt::Geom2d_Curve^ BasisCurve();
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCN(int N);
	Macad::Occt::Pnt2d EndPoint();
	double FirstParameter();
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	double LastParameter();
	Macad::Occt::Pnt2d StartPoint();
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	void Transform(Macad::Occt::Trsf2d T);
	double TransformedParameter(double U, Macad::Occt::Trsf2d T);
	double ParametricTransformation(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom2d_TrimmedCurve

//---------------------------------------------------------------------
//  Class  Geom2d_VectorWithMagnitude
//---------------------------------------------------------------------
public ref class Geom2d_VectorWithMagnitude sealed : public Macad::Occt::Geom2d_Vector
{

#ifdef Include_Geom2d_VectorWithMagnitude_h
public:
	Include_Geom2d_VectorWithMagnitude_h
#endif

public:
	Geom2d_VectorWithMagnitude(::Geom2d_VectorWithMagnitude* nativeInstance)
		: Macad::Occt::Geom2d_Vector( nativeInstance )
	{}

	Geom2d_VectorWithMagnitude(::Geom2d_VectorWithMagnitude& nativeInstance)
		: Macad::Occt::Geom2d_Vector( nativeInstance )
	{}

	property ::Geom2d_VectorWithMagnitude* NativeInstance
	{
		::Geom2d_VectorWithMagnitude* get()
		{
			return static_cast<::Geom2d_VectorWithMagnitude*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2d_VectorWithMagnitude^ CreateDowncasted(::Geom2d_VectorWithMagnitude* instance);

public:
	Geom2d_VectorWithMagnitude(Macad::Occt::Vec2d V);
	Geom2d_VectorWithMagnitude(double X, double Y);
	Geom2d_VectorWithMagnitude(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	Geom2d_VectorWithMagnitude(Macad::Occt::Geom2d_VectorWithMagnitude^ parameter1);
	void SetCoord(double X, double Y);
	void SetVec2d(Macad::Occt::Vec2d V);
	void SetX(double X);
	void SetY(double Y);
	double Magnitude();
	double SquareMagnitude();
	void Add(Macad::Occt::Geom2d_Vector^ Other);
	Macad::Occt::Geom2d_VectorWithMagnitude^ Added(Macad::Occt::Geom2d_Vector^ Other);
	double Crossed(Macad::Occt::Geom2d_Vector^ Other);
	void Divide(double Scalar);
	Macad::Occt::Geom2d_VectorWithMagnitude^ Divided(double Scalar);
	Macad::Occt::Geom2d_VectorWithMagnitude^ Multiplied(double Scalar);
	void Multiply(double Scalar);
	void Normalize();
	Macad::Occt::Geom2d_VectorWithMagnitude^ Normalized();
	void Subtract(Macad::Occt::Geom2d_Vector^ Other);
	Macad::Occt::Geom2d_VectorWithMagnitude^ Subtracted(Macad::Occt::Geom2d_Vector^ Other);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::Geom2d_Geometry^ Copy();
}; // class Geom2d_VectorWithMagnitude

}; // namespace Occt
}; // namespace Macad
