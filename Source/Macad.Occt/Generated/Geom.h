// Generated wrapper code for package Geom

#pragma once

#include "Geom.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom_SequenceOfBSplineSurface
//---------------------------------------------------------------------
public ref class Geom_SequenceOfBSplineSurface sealed : public BaseClass<::Geom_SequenceOfBSplineSurface>
{

#ifdef Include_Geom_SequenceOfBSplineSurface_h
public:
	Include_Geom_SequenceOfBSplineSurface_h
#endif

public:
	Geom_SequenceOfBSplineSurface(::Geom_SequenceOfBSplineSurface* nativeInstance)
		: BaseClass<::Geom_SequenceOfBSplineSurface>( nativeInstance, true )
	{}

	Geom_SequenceOfBSplineSurface(::Geom_SequenceOfBSplineSurface& nativeInstance)
		: BaseClass<::Geom_SequenceOfBSplineSurface>( &nativeInstance, false )
	{}

	property ::Geom_SequenceOfBSplineSurface* NativeInstance
	{
		::Geom_SequenceOfBSplineSurface* get()
		{
			return static_cast<::Geom_SequenceOfBSplineSurface*>(_NativeInstance);
		}
	}

public:
	Geom_SequenceOfBSplineSurface();
	Geom_SequenceOfBSplineSurface(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Geom_SequenceOfBSplineSurface(Macad::Occt::Geom_SequenceOfBSplineSurface^ theOther);
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
	Macad::Occt::Geom_SequenceOfBSplineSurface^ Assign(Macad::Occt::Geom_SequenceOfBSplineSurface^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Geom_BSplineSurface^ theItem);
	void Append(Macad::Occt::Geom_SequenceOfBSplineSurface^ theSeq);
	void Prepend(Macad::Occt::Geom_BSplineSurface^ theItem);
	void Prepend(Macad::Occt::Geom_SequenceOfBSplineSurface^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Geom_SequenceOfBSplineSurface^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Geom_BSplineSurface theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Geom_SequenceOfBSplineSurface^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
	void Split(int theIndex, Macad::Occt::Geom_SequenceOfBSplineSurface^ theSeq);
	Macad::Occt::Geom_BSplineSurface^ First();
	Macad::Occt::Geom_BSplineSurface^ ChangeFirst();
	Macad::Occt::Geom_BSplineSurface^ Last();
	Macad::Occt::Geom_BSplineSurface^ ChangeLast();
	Macad::Occt::Geom_BSplineSurface^ Value(int theIndex);
	Macad::Occt::Geom_BSplineSurface^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
}; // class Geom_SequenceOfBSplineSurface

//---------------------------------------------------------------------
//  Class  Geom_Geometry
//---------------------------------------------------------------------
public ref class Geom_Geometry : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom_Geometry_h
public:
	Include_Geom_Geometry_h
#endif

protected:
	Geom_Geometry(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Geom_Geometry(::Geom_Geometry* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Geom_Geometry(::Geom_Geometry& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Geom_Geometry* NativeInstance
	{
		::Geom_Geometry* get()
		{
			return static_cast<::Geom_Geometry*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Geometry^ CreateDowncasted(::Geom_Geometry* instance);

public:
	Geom_Geometry(Macad::Occt::Geom_Geometry^ parameter1);
	Geom_Geometry();
	void Mirror(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	void Translate(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Mirrored(Macad::Occt::Pnt P);
	Macad::Occt::Geom_Geometry^ Mirrored(Macad::Occt::Ax1 A1);
	Macad::Occt::Geom_Geometry^ Mirrored(Macad::Occt::Ax2 A2);
	Macad::Occt::Geom_Geometry^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::Geom_Geometry^ Scaled(Macad::Occt::Pnt P, double S);
	Macad::Occt::Geom_Geometry^ Transformed(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Translated(Macad::Occt::Vec V);
	Macad::Occt::Geom_Geometry^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Geometry

//---------------------------------------------------------------------
//  Class  Geom_AxisPlacement
//---------------------------------------------------------------------
public ref class Geom_AxisPlacement : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_AxisPlacement_h
public:
	Include_Geom_AxisPlacement_h
#endif

protected:
	Geom_AxisPlacement(InitMode init)
		: Macad::Occt::Geom_Geometry( init )
	{}

public:
	Geom_AxisPlacement(::Geom_AxisPlacement* nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	Geom_AxisPlacement(::Geom_AxisPlacement& nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	property ::Geom_AxisPlacement* NativeInstance
	{
		::Geom_AxisPlacement* get()
		{
			return static_cast<::Geom_AxisPlacement*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_AxisPlacement^ CreateDowncasted(::Geom_AxisPlacement* instance);

public:
	Geom_AxisPlacement();
	Geom_AxisPlacement(Macad::Occt::Geom_AxisPlacement^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetDirection(Macad::Occt::Dir V);
	void SetLocation(Macad::Occt::Pnt P);
	double Angle(Macad::Occt::Geom_AxisPlacement^ Other);
	Macad::Occt::Ax1 Axis();
	Macad::Occt::Dir Direction();
	Macad::Occt::Pnt Location();
}; // class Geom_AxisPlacement

//---------------------------------------------------------------------
//  Class  Geom_Axis1Placement
//---------------------------------------------------------------------
public ref class Geom_Axis1Placement sealed : public Macad::Occt::Geom_AxisPlacement
{

#ifdef Include_Geom_Axis1Placement_h
public:
	Include_Geom_Axis1Placement_h
#endif

public:
	Geom_Axis1Placement(::Geom_Axis1Placement* nativeInstance)
		: Macad::Occt::Geom_AxisPlacement( nativeInstance )
	{}

	Geom_Axis1Placement(::Geom_Axis1Placement& nativeInstance)
		: Macad::Occt::Geom_AxisPlacement( nativeInstance )
	{}

	property ::Geom_Axis1Placement* NativeInstance
	{
		::Geom_Axis1Placement* get()
		{
			return static_cast<::Geom_Axis1Placement*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Axis1Placement^ CreateDowncasted(::Geom_Axis1Placement* instance);

public:
	Geom_Axis1Placement(Macad::Occt::Ax1 A1);
	Geom_Axis1Placement(Macad::Occt::Pnt P, Macad::Occt::Dir V);
	Geom_Axis1Placement(Macad::Occt::Geom_Axis1Placement^ parameter1);
	Macad::Occt::Ax1 Ax1();
	void Reverse();
	Macad::Occt::Geom_Axis1Placement^ Reversed();
	void SetDirection(Macad::Occt::Dir V);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
}; // class Geom_Axis1Placement

//---------------------------------------------------------------------
//  Class  Geom_Axis2Placement
//---------------------------------------------------------------------
public ref class Geom_Axis2Placement sealed : public Macad::Occt::Geom_AxisPlacement
{

#ifdef Include_Geom_Axis2Placement_h
public:
	Include_Geom_Axis2Placement_h
#endif

public:
	Geom_Axis2Placement(::Geom_Axis2Placement* nativeInstance)
		: Macad::Occt::Geom_AxisPlacement( nativeInstance )
	{}

	Geom_Axis2Placement(::Geom_Axis2Placement& nativeInstance)
		: Macad::Occt::Geom_AxisPlacement( nativeInstance )
	{}

	property ::Geom_Axis2Placement* NativeInstance
	{
		::Geom_Axis2Placement* get()
		{
			return static_cast<::Geom_Axis2Placement*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Axis2Placement^ CreateDowncasted(::Geom_Axis2Placement* instance);

public:
	Geom_Axis2Placement(Macad::Occt::Ax2 A2);
	Geom_Axis2Placement(Macad::Occt::Pnt P, Macad::Occt::Dir N, Macad::Occt::Dir Vx);
	Geom_Axis2Placement(Macad::Occt::Geom_Axis2Placement^ parameter1);
	void SetAx2(Macad::Occt::Ax2 A2);
	void SetDirection(Macad::Occt::Dir V);
	void SetXDirection(Macad::Occt::Dir Vx);
	void SetYDirection(Macad::Occt::Dir Vy);
	Macad::Occt::Ax2 Ax2();
	Macad::Occt::Dir XDirection();
	Macad::Occt::Dir YDirection();
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
}; // class Geom_Axis2Placement

//---------------------------------------------------------------------
//  Class  Geom_Curve
//---------------------------------------------------------------------
public ref class Geom_Curve : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_Curve_h
public:
	Include_Geom_Curve_h
#endif

protected:
	Geom_Curve(InitMode init)
		: Macad::Occt::Geom_Geometry( init )
	{}

public:
	Geom_Curve(::Geom_Curve* nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	Geom_Curve(::Geom_Curve& nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	property ::Geom_Curve* NativeInstance
	{
		::Geom_Curve* get()
		{
			return static_cast<::Geom_Curve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Curve^ CreateDowncasted(::Geom_Curve* instance);

public:
	Geom_Curve(Macad::Occt::Geom_Curve^ parameter1);
	Geom_Curve();
	void Reverse();
	double ReversedParameter(double U);
	double TransformedParameter(double U, Macad::Occt::Trsf T);
	double ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Curve^ Reversed();
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCN(int N);
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	Macad::Occt::Pnt Value(double U);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Curve

//---------------------------------------------------------------------
//  Class  Geom_BoundedCurve
//---------------------------------------------------------------------
public ref class Geom_BoundedCurve : public Macad::Occt::Geom_Curve
{

#ifdef Include_Geom_BoundedCurve_h
public:
	Include_Geom_BoundedCurve_h
#endif

protected:
	Geom_BoundedCurve(InitMode init)
		: Macad::Occt::Geom_Curve( init )
	{}

public:
	Geom_BoundedCurve(::Geom_BoundedCurve* nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	Geom_BoundedCurve(::Geom_BoundedCurve& nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	property ::Geom_BoundedCurve* NativeInstance
	{
		::Geom_BoundedCurve* get()
		{
			return static_cast<::Geom_BoundedCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_BoundedCurve^ CreateDowncasted(::Geom_BoundedCurve* instance);

public:
	Geom_BoundedCurve(Macad::Occt::Geom_BoundedCurve^ parameter1);
	Geom_BoundedCurve();
	Macad::Occt::Pnt EndPoint();
	Macad::Occt::Pnt StartPoint();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_BoundedCurve

//---------------------------------------------------------------------
//  Class  Geom_BezierCurve
//---------------------------------------------------------------------
public ref class Geom_BezierCurve sealed : public Macad::Occt::Geom_BoundedCurve
{

#ifdef Include_Geom_BezierCurve_h
public:
	Include_Geom_BezierCurve_h
#endif

public:
	Geom_BezierCurve(::Geom_BezierCurve* nativeInstance)
		: Macad::Occt::Geom_BoundedCurve( nativeInstance )
	{}

	Geom_BezierCurve(::Geom_BezierCurve& nativeInstance)
		: Macad::Occt::Geom_BoundedCurve( nativeInstance )
	{}

	property ::Geom_BezierCurve* NativeInstance
	{
		::Geom_BezierCurve* get()
		{
			return static_cast<::Geom_BezierCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_BezierCurve^ CreateDowncasted(::Geom_BezierCurve* instance);

public:
	Geom_BezierCurve(Macad::Occt::TColgp_Array1OfPnt^ CurvePoles);
	Geom_BezierCurve(Macad::Occt::TColgp_Array1OfPnt^ CurvePoles, Macad::Occt::TColStd_Array1OfReal^ PoleWeights);
	Geom_BezierCurve(Macad::Occt::Geom_BezierCurve^ parameter1);
	void Increase(int Degree);
	void InsertPoleAfter(int Index, Macad::Occt::Pnt P);
	void InsertPoleAfter(int Index, Macad::Occt::Pnt P, double Weight);
	void InsertPoleBefore(int Index, Macad::Occt::Pnt P);
	void InsertPoleBefore(int Index, Macad::Occt::Pnt P, double Weight);
	void RemovePole(int Index);
	void Reverse();
	double ReversedParameter(double U);
	void Segment(double U1, double U2);
	void SetPole(int Index, Macad::Occt::Pnt P);
	void SetPole(int Index, Macad::Occt::Pnt P, double Weight);
	void SetWeight(int Index, double Weight);
	bool IsClosed();
	bool IsCN(int N);
	bool IsPeriodic();
	bool IsRational();
	Macad::Occt::GeomAbs_Shape Continuity();
	int Degree();
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	Macad::Occt::Pnt StartPoint();
	Macad::Occt::Pnt EndPoint();
	double FirstParameter();
	double LastParameter();
	int NbPoles();
	Macad::Occt::Pnt Pole(int Index);
	void Poles(Macad::Occt::TColgp_Array1OfPnt^ P);
	Macad::Occt::TColgp_Array1OfPnt^ Poles();
	double Weight(int Index);
	void Weights(Macad::Occt::TColStd_Array1OfReal^ W);
	Macad::Occt::TColStd_Array1OfReal^ Weights();
	void Transform(Macad::Occt::Trsf T);
	static int MaxDegree();
	void Resolution(double Tolerance3D, double% UTolerance);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_BezierCurve

//---------------------------------------------------------------------
//  Class  Geom_Surface
//---------------------------------------------------------------------
public ref class Geom_Surface : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_Surface_h
public:
	Include_Geom_Surface_h
#endif

protected:
	Geom_Surface(InitMode init)
		: Macad::Occt::Geom_Geometry( init )
	{}

public:
	Geom_Surface(::Geom_Surface* nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	Geom_Surface(::Geom_Surface& nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	property ::Geom_Surface* NativeInstance
	{
		::Geom_Surface* get()
		{
			return static_cast<::Geom_Surface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Surface^ CreateDowncasted(::Geom_Surface* instance);

public:
	Geom_Surface(Macad::Occt::Geom_Surface^ parameter1);
	Geom_Surface();
	void UReverse();
	Macad::Occt::Geom_Surface^ UReversed();
	double UReversedParameter(double U);
	void VReverse();
	Macad::Occt::Geom_Surface^ VReversed();
	double VReversedParameter(double V);
	void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
	Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	double UPeriod();
	bool IsVPeriodic();
	double VPeriod();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCNu(int N);
	bool IsCNv(int N);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	Macad::Occt::Pnt Value(double U, double V);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Surface

//---------------------------------------------------------------------
//  Class  Geom_BoundedSurface
//---------------------------------------------------------------------
public ref class Geom_BoundedSurface : public Macad::Occt::Geom_Surface
{

#ifdef Include_Geom_BoundedSurface_h
public:
	Include_Geom_BoundedSurface_h
#endif

protected:
	Geom_BoundedSurface(InitMode init)
		: Macad::Occt::Geom_Surface( init )
	{}

public:
	Geom_BoundedSurface(::Geom_BoundedSurface* nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	Geom_BoundedSurface(::Geom_BoundedSurface& nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	property ::Geom_BoundedSurface* NativeInstance
	{
		::Geom_BoundedSurface* get()
		{
			return static_cast<::Geom_BoundedSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_BoundedSurface^ CreateDowncasted(::Geom_BoundedSurface* instance);

public:
	Geom_BoundedSurface(Macad::Occt::Geom_BoundedSurface^ parameter1);
	Geom_BoundedSurface();
}; // class Geom_BoundedSurface

//---------------------------------------------------------------------
//  Class  Geom_BezierSurface
//---------------------------------------------------------------------
public ref class Geom_BezierSurface sealed : public Macad::Occt::Geom_BoundedSurface
{

#ifdef Include_Geom_BezierSurface_h
public:
	Include_Geom_BezierSurface_h
#endif

public:
	Geom_BezierSurface(::Geom_BezierSurface* nativeInstance)
		: Macad::Occt::Geom_BoundedSurface( nativeInstance )
	{}

	Geom_BezierSurface(::Geom_BezierSurface& nativeInstance)
		: Macad::Occt::Geom_BoundedSurface( nativeInstance )
	{}

	property ::Geom_BezierSurface* NativeInstance
	{
		::Geom_BezierSurface* get()
		{
			return static_cast<::Geom_BezierSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_BezierSurface^ CreateDowncasted(::Geom_BezierSurface* instance);

public:
	Geom_BezierSurface(Macad::Occt::TColgp_Array2OfPnt^ SurfacePoles);
	Geom_BezierSurface(Macad::Occt::TColgp_Array2OfPnt^ SurfacePoles, Macad::Occt::TColStd_Array2OfReal^ PoleWeights);
	Geom_BezierSurface(Macad::Occt::Geom_BezierSurface^ parameter1);
	void ExchangeUV();
	void Increase(int UDeg, int VDeg);
	void InsertPoleColAfter(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
	void InsertPoleColAfter(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void InsertPoleColBefore(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
	void InsertPoleColBefore(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void InsertPoleRowAfter(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
	void InsertPoleRowAfter(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void InsertPoleRowBefore(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
	void InsertPoleRowBefore(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void RemovePoleCol(int VIndex);
	void RemovePoleRow(int UIndex);
	void Segment(double U1, double U2, double V1, double V2);
	void SetPole(int UIndex, int VIndex, Macad::Occt::Pnt P);
	void SetPole(int UIndex, int VIndex, Macad::Occt::Pnt P, double Weight);
	void SetPoleCol(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
	void SetPoleCol(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void SetPoleRow(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
	void SetPoleRow(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void SetWeight(int UIndex, int VIndex, double Weight);
	void SetWeightCol(int VIndex, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void SetWeightRow(int UIndex, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void UReverse();
	double UReversedParameter(double U);
	void VReverse();
	double VReversedParameter(double V);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	Macad::Occt::GeomAbs_Shape Continuity();
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	int NbUPoles();
	int NbVPoles();
	Macad::Occt::Pnt Pole(int UIndex, int VIndex);
	void Poles(Macad::Occt::TColgp_Array2OfPnt^ P);
	Macad::Occt::TColgp_Array2OfPnt^ Poles();
	int UDegree();
	Macad::Occt::Geom_Curve^ UIso(double U);
	int VDegree();
	Macad::Occt::Geom_Curve^ VIso(double V);
	double Weight(int UIndex, int VIndex);
	void Weights(Macad::Occt::TColStd_Array2OfReal^ W);
	Macad::Occt::TColStd_Array2OfReal^ Weights();
	bool IsUClosed();
	bool IsVClosed();
	bool IsCNu(int N);
	bool IsCNv(int N);
	bool IsUPeriodic();
	bool IsVPeriodic();
	bool IsURational();
	bool IsVRational();
	void Transform(Macad::Occt::Trsf T);
	static int MaxDegree();
	void Resolution(double Tolerance3D, double% UTolerance, double% VTolerance);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_BezierSurface

//---------------------------------------------------------------------
//  Class  Geom_BSplineCurve
//---------------------------------------------------------------------
public ref class Geom_BSplineCurve sealed : public Macad::Occt::Geom_BoundedCurve
{

#ifdef Include_Geom_BSplineCurve_h
public:
	Include_Geom_BSplineCurve_h
#endif

public:
	Geom_BSplineCurve(::Geom_BSplineCurve* nativeInstance)
		: Macad::Occt::Geom_BoundedCurve( nativeInstance )
	{}

	Geom_BSplineCurve(::Geom_BSplineCurve& nativeInstance)
		: Macad::Occt::Geom_BoundedCurve( nativeInstance )
	{}

	property ::Geom_BSplineCurve* NativeInstance
	{
		::Geom_BSplineCurve* get()
		{
			return static_cast<::Geom_BSplineCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_BSplineCurve^ CreateDowncasted(::Geom_BSplineCurve* instance);

public:
	Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic);
	Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree);
	Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic, bool CheckRational);
	Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic);
	Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree);
	Geom_BSplineCurve(Macad::Occt::Geom_BSplineCurve^ parameter1);
	void IncreaseDegree(int Degree);
	void IncreaseMultiplicity(int Index, int M);
	void IncreaseMultiplicity(int I1, int I2, int M);
	void IncrementMultiplicity(int I1, int I2, int M);
	void InsertKnot(double U, int M, double ParametricTolerance, bool Add);
	void InsertKnot(double U, int M, double ParametricTolerance);
	void InsertKnot(double U, int M);
	void InsertKnot(double U);
	void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add);
	void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance);
	void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	bool RemoveKnot(int Index, int M, double Tolerance);
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
	void SetOrigin(double U, double Tol);
	void SetNotPeriodic();
	void SetPole(int Index, Macad::Occt::Pnt P);
	void SetPole(int Index, Macad::Occt::Pnt P, double Weight);
	void SetWeight(int Index, double Weight);
	void MovePoint(double U, Macad::Occt::Pnt P, int Index1, int Index2, int% FirstModifiedPole, int% LastModifiedPole);
	void MovePointAndTangent(double U, Macad::Occt::Pnt P, Macad::Occt::Vec Tangent, double Tolerance, int StartingCondition, int EndingCondition, int% ErrorStatus);
	bool IsCN(int N);
	bool IsG1(double theTf, double theTl, double theAngTol);
	bool IsClosed();
	bool IsPeriodic();
	bool IsRational();
	Macad::Occt::GeomAbs_Shape Continuity();
	int Degree();
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	Macad::Occt::Pnt LocalValue(double U, int FromK1, int ToK2);
	void LocalD0(double U, int FromK1, int ToK2, Macad::Occt::Pnt% P);
	void LocalD1(double U, int FromK1, int ToK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void LocalD2(double U, int FromK1, int ToK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void LocalD3(double U, int FromK1, int ToK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec LocalDN(double U, int FromK1, int ToK2, int N);
	Macad::Occt::Pnt EndPoint();
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
	Macad::Occt::Pnt Pole(int Index);
	void Poles(Macad::Occt::TColgp_Array1OfPnt^ P);
	Macad::Occt::TColgp_Array1OfPnt^ Poles();
	Macad::Occt::Pnt StartPoint();
	double Weight(int Index);
	void Weights(Macad::Occt::TColStd_Array1OfReal^ W);
	Macad::Occt::TColStd_Array1OfReal^ Weights();
	void Transform(Macad::Occt::Trsf T);
	static int MaxDegree();
	void Resolution(double Tolerance3D, double% UTolerance);
	Macad::Occt::Geom_Geometry^ Copy();
	bool IsEqual(Macad::Occt::Geom_BSplineCurve^ theOther, double thePreci);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_BSplineCurve

//---------------------------------------------------------------------
//  Class  Geom_BSplineSurface
//---------------------------------------------------------------------
public ref class Geom_BSplineSurface sealed : public Macad::Occt::Geom_BoundedSurface
{

#ifdef Include_Geom_BSplineSurface_h
public:
	Include_Geom_BSplineSurface_h
#endif

public:
	Geom_BSplineSurface(::Geom_BSplineSurface* nativeInstance)
		: Macad::Occt::Geom_BoundedSurface( nativeInstance )
	{}

	Geom_BSplineSurface(::Geom_BSplineSurface& nativeInstance)
		: Macad::Occt::Geom_BoundedSurface( nativeInstance )
	{}

	property ::Geom_BSplineSurface* NativeInstance
	{
		::Geom_BSplineSurface* get()
		{
			return static_cast<::Geom_BSplineSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_BSplineSurface^ CreateDowncasted(::Geom_BSplineSurface* instance);

public:
	Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic, bool VPeriodic);
	Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic);
	Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree);
	Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic, bool VPeriodic);
	Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic);
	Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree);
	Geom_BSplineSurface(Macad::Occt::Geom_BSplineSurface^ parameter1);
	void ExchangeUV();
	void SetUPeriodic();
	void SetVPeriodic();
	void PeriodicNormalization(double% U, double% V);
	void SetUOrigin(int Index);
	void SetVOrigin(int Index);
	void SetUNotPeriodic();
	void SetVNotPeriodic();
	void UReverse();
	void VReverse();
	double UReversedParameter(double U);
	double VReversedParameter(double V);
	void IncreaseDegree(int UDegree, int VDegree);
	void InsertUKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add);
	void InsertUKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance);
	void InsertUKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	void InsertVKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add);
	void InsertVKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance);
	void InsertVKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	bool RemoveUKnot(int Index, int M, double Tolerance);
	bool RemoveVKnot(int Index, int M, double Tolerance);
	void IncreaseUMultiplicity(int UIndex, int M);
	void IncreaseUMultiplicity(int FromI1, int ToI2, int M);
	void IncrementUMultiplicity(int FromI1, int ToI2, int Step);
	void IncreaseVMultiplicity(int VIndex, int M);
	void IncreaseVMultiplicity(int FromI1, int ToI2, int M);
	void IncrementVMultiplicity(int FromI1, int ToI2, int Step);
	void InsertUKnot(double U, int M, double ParametricTolerance, bool Add);
	void InsertUKnot(double U, int M, double ParametricTolerance);
	void InsertVKnot(double V, int M, double ParametricTolerance, bool Add);
	void InsertVKnot(double V, int M, double ParametricTolerance);
	void Segment(double U1, double U2, double V1, double V2, double theUTolerance, double theVTolerance);
	void Segment(double U1, double U2, double V1, double V2, double theUTolerance);
	void Segment(double U1, double U2, double V1, double V2);
	void CheckAndSegment(double U1, double U2, double V1, double V2, double theUTolerance, double theVTolerance);
	void CheckAndSegment(double U1, double U2, double V1, double V2, double theUTolerance);
	void CheckAndSegment(double U1, double U2, double V1, double V2);
	void SetUKnot(int UIndex, double K);
	void SetUKnots(Macad::Occt::TColStd_Array1OfReal^ UK);
	void SetUKnot(int UIndex, double K, int M);
	void SetVKnot(int VIndex, double K);
	void SetVKnots(Macad::Occt::TColStd_Array1OfReal^ VK);
	void SetVKnot(int VIndex, double K, int M);
	void LocateU(double U, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition);
	void LocateU(double U, double ParametricTolerance, int% I1, int% I2);
	void LocateV(double V, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition);
	void LocateV(double V, double ParametricTolerance, int% I1, int% I2);
	void SetPole(int UIndex, int VIndex, Macad::Occt::Pnt P);
	void SetPole(int UIndex, int VIndex, Macad::Occt::Pnt P, double Weight);
	void SetPoleCol(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
	void SetPoleCol(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void SetPoleRow(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void SetPoleRow(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
	void SetWeight(int UIndex, int VIndex, double Weight);
	void SetWeightCol(int VIndex, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void SetWeightRow(int UIndex, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
	void MovePoint(double U, double V, Macad::Occt::Pnt P, int UIndex1, int UIndex2, int VIndex1, int VIndex2, int% UFirstIndex, int% ULastIndex, int% VFirstIndex, int% VLastIndex);
	bool IsUClosed();
	bool IsVClosed();
	bool IsCNu(int N);
	bool IsCNv(int N);
	bool IsUPeriodic();
	bool IsURational();
	bool IsVPeriodic();
	bool IsVRational();
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	Macad::Occt::GeomAbs_Shape Continuity();
	int FirstUKnotIndex();
	int FirstVKnotIndex();
	int LastUKnotIndex();
	int LastVKnotIndex();
	int NbUKnots();
	int NbUPoles();
	int NbVKnots();
	int NbVPoles();
	Macad::Occt::Pnt Pole(int UIndex, int VIndex);
	void Poles(Macad::Occt::TColgp_Array2OfPnt^ P);
	Macad::Occt::TColgp_Array2OfPnt^ Poles();
	int UDegree();
	double UKnot(int UIndex);
	Macad::Occt::GeomAbs_BSplKnotDistribution UKnotDistribution();
	void UKnots(Macad::Occt::TColStd_Array1OfReal^ Ku);
	Macad::Occt::TColStd_Array1OfReal^ UKnots();
	void UKnotSequence(Macad::Occt::TColStd_Array1OfReal^ Ku);
	Macad::Occt::TColStd_Array1OfReal^ UKnotSequence();
	int UMultiplicity(int UIndex);
	void UMultiplicities(Macad::Occt::TColStd_Array1OfInteger^ Mu);
	Macad::Occt::TColStd_Array1OfInteger^ UMultiplicities();
	int VDegree();
	double VKnot(int VIndex);
	Macad::Occt::GeomAbs_BSplKnotDistribution VKnotDistribution();
	void VKnots(Macad::Occt::TColStd_Array1OfReal^ Kv);
	Macad::Occt::TColStd_Array1OfReal^ VKnots();
	void VKnotSequence(Macad::Occt::TColStd_Array1OfReal^ Kv);
	Macad::Occt::TColStd_Array1OfReal^ VKnotSequence();
	int VMultiplicity(int VIndex);
	void VMultiplicities(Macad::Occt::TColStd_Array1OfInteger^ Mv);
	Macad::Occt::TColStd_Array1OfInteger^ VMultiplicities();
	double Weight(int UIndex, int VIndex);
	void Weights(Macad::Occt::TColStd_Array2OfReal^ W);
	Macad::Occt::TColStd_Array2OfReal^ Weights();
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void LocalD0(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, Macad::Occt::Pnt% P);
	void LocalD1(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void LocalD2(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void LocalD3(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec LocalDN(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, int Nu, int Nv);
	Macad::Occt::Pnt LocalValue(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2);
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	Macad::Occt::Geom_Curve^ UIso(double U, bool CheckRational);
	Macad::Occt::Geom_Curve^ VIso(double V, bool CheckRational);
	void Transform(Macad::Occt::Trsf T);
	static int MaxDegree();
	void Resolution(double Tolerance3D, double% UTolerance, double% VTolerance);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_BSplineSurface

//---------------------------------------------------------------------
//  Class  Geom_Point
//---------------------------------------------------------------------
public ref class Geom_Point : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_Point_h
public:
	Include_Geom_Point_h
#endif

protected:
	Geom_Point(InitMode init)
		: Macad::Occt::Geom_Geometry( init )
	{}

public:
	Geom_Point(::Geom_Point* nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	Geom_Point(::Geom_Point& nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	property ::Geom_Point* NativeInstance
	{
		::Geom_Point* get()
		{
			return static_cast<::Geom_Point*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Point^ CreateDowncasted(::Geom_Point* instance);

public:
	Geom_Point();
	Geom_Point(Macad::Occt::Geom_Point^ parameter1);
	void Coord(double% X, double% Y, double% Z);
	Macad::Occt::Pnt Pnt();
	double X();
	double Y();
	double Z();
	double Distance(Macad::Occt::Geom_Point^ Other);
	double SquareDistance(Macad::Occt::Geom_Point^ Other);
}; // class Geom_Point

//---------------------------------------------------------------------
//  Class  Geom_CartesianPoint
//---------------------------------------------------------------------
public ref class Geom_CartesianPoint sealed : public Macad::Occt::Geom_Point
{

#ifdef Include_Geom_CartesianPoint_h
public:
	Include_Geom_CartesianPoint_h
#endif

public:
	Geom_CartesianPoint(::Geom_CartesianPoint* nativeInstance)
		: Macad::Occt::Geom_Point( nativeInstance )
	{}

	Geom_CartesianPoint(::Geom_CartesianPoint& nativeInstance)
		: Macad::Occt::Geom_Point( nativeInstance )
	{}

	property ::Geom_CartesianPoint* NativeInstance
	{
		::Geom_CartesianPoint* get()
		{
			return static_cast<::Geom_CartesianPoint*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_CartesianPoint^ CreateDowncasted(::Geom_CartesianPoint* instance);

public:
	Geom_CartesianPoint(Macad::Occt::Pnt P);
	Geom_CartesianPoint(double X, double Y, double Z);
	Geom_CartesianPoint(Macad::Occt::Geom_CartesianPoint^ parameter1);
	void SetCoord(double X, double Y, double Z);
	void SetPnt(Macad::Occt::Pnt P);
	void SetX(double X);
	void SetY(double Y);
	void SetZ(double Z);
	void Coord(double% X, double% Y, double% Z);
	Macad::Occt::Pnt Pnt();
	double X();
	double Y();
	double Z();
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
}; // class Geom_CartesianPoint

//---------------------------------------------------------------------
//  Class  Geom_Conic
//---------------------------------------------------------------------
public ref class Geom_Conic : public Macad::Occt::Geom_Curve
{

#ifdef Include_Geom_Conic_h
public:
	Include_Geom_Conic_h
#endif

protected:
	Geom_Conic(InitMode init)
		: Macad::Occt::Geom_Curve( init )
	{}

public:
	Geom_Conic(::Geom_Conic* nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	Geom_Conic(::Geom_Conic& nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	property ::Geom_Conic* NativeInstance
	{
		::Geom_Conic* get()
		{
			return static_cast<::Geom_Conic*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Conic^ CreateDowncasted(::Geom_Conic* instance);

public:
	Geom_Conic();
	Geom_Conic(Macad::Occt::Geom_Conic^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetLocation(Macad::Occt::Pnt theP);
	void SetPosition(Macad::Occt::Ax2 theA2);
	Macad::Occt::Ax1 Axis();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax2 Position();
	double Eccentricity();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Reverse();
	double ReversedParameter(double U);
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCN(int N);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Conic

//---------------------------------------------------------------------
//  Class  Geom_Circle
//---------------------------------------------------------------------
public ref class Geom_Circle sealed : public Macad::Occt::Geom_Conic
{

#ifdef Include_Geom_Circle_h
public:
	Include_Geom_Circle_h
#endif

public:
	Geom_Circle(::Geom_Circle* nativeInstance)
		: Macad::Occt::Geom_Conic( nativeInstance )
	{}

	Geom_Circle(::Geom_Circle& nativeInstance)
		: Macad::Occt::Geom_Conic( nativeInstance )
	{}

	property ::Geom_Circle* NativeInstance
	{
		::Geom_Circle* get()
		{
			return static_cast<::Geom_Circle*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Circle^ CreateDowncasted(::Geom_Circle* instance);

public:
	Geom_Circle(Macad::Occt::gp_Circ^ C);
	Geom_Circle(Macad::Occt::Ax2 A2, double Radius);
	Geom_Circle(Macad::Occt::Geom_Circle^ parameter1);
	void SetCirc(Macad::Occt::gp_Circ^ C);
	void SetRadius(double R);
	Macad::Occt::gp_Circ^ Circ();
	double Radius();
	double ReversedParameter(double U);
	double Eccentricity();
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Circle

//---------------------------------------------------------------------
//  Class  Geom_ElementarySurface
//---------------------------------------------------------------------
public ref class Geom_ElementarySurface : public Macad::Occt::Geom_Surface
{

#ifdef Include_Geom_ElementarySurface_h
public:
	Include_Geom_ElementarySurface_h
#endif

protected:
	Geom_ElementarySurface(InitMode init)
		: Macad::Occt::Geom_Surface( init )
	{}

public:
	Geom_ElementarySurface(::Geom_ElementarySurface* nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	Geom_ElementarySurface(::Geom_ElementarySurface& nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	property ::Geom_ElementarySurface* NativeInstance
	{
		::Geom_ElementarySurface* get()
		{
			return static_cast<::Geom_ElementarySurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_ElementarySurface^ CreateDowncasted(::Geom_ElementarySurface* instance);

public:
	Geom_ElementarySurface();
	Geom_ElementarySurface(Macad::Occt::Geom_ElementarySurface^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetLocation(Macad::Occt::Pnt theLoc);
	void SetPosition(Macad::Occt::Ax3 theAx3);
	Macad::Occt::Ax1 Axis();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	void UReverse();
	double UReversedParameter(double U);
	void VReverse();
	double VReversedParameter(double V);
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCNu(int N);
	bool IsCNv(int N);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_ElementarySurface

//---------------------------------------------------------------------
//  Class  Geom_ConicalSurface
//---------------------------------------------------------------------
public ref class Geom_ConicalSurface sealed : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_ConicalSurface_h
public:
	Include_Geom_ConicalSurface_h
#endif

public:
	Geom_ConicalSurface(::Geom_ConicalSurface* nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	Geom_ConicalSurface(::Geom_ConicalSurface& nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	property ::Geom_ConicalSurface* NativeInstance
	{
		::Geom_ConicalSurface* get()
		{
			return static_cast<::Geom_ConicalSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_ConicalSurface^ CreateDowncasted(::Geom_ConicalSurface* instance);

public:
	Geom_ConicalSurface(Macad::Occt::Ax3 A3, double Ang, double Radius);
	Geom_ConicalSurface(Macad::Occt::gp_Cone^ C);
	Geom_ConicalSurface(Macad::Occt::Geom_ConicalSurface^ parameter1);
	void SetCone(Macad::Occt::gp_Cone^ C);
	void SetRadius(double R);
	void SetSemiAngle(double Ang);
	Macad::Occt::gp_Cone^ Cone();
	double UReversedParameter(double U);
	double VReversedParameter(double V);
	void VReverse();
	void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
	Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Pnt Apex();
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
	double RefRadius();
	double SemiAngle();
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_ConicalSurface

//---------------------------------------------------------------------
//  Class  Geom_CylindricalSurface
//---------------------------------------------------------------------
public ref class Geom_CylindricalSurface sealed : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_CylindricalSurface_h
public:
	Include_Geom_CylindricalSurface_h
#endif

public:
	Geom_CylindricalSurface(::Geom_CylindricalSurface* nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	Geom_CylindricalSurface(::Geom_CylindricalSurface& nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	property ::Geom_CylindricalSurface* NativeInstance
	{
		::Geom_CylindricalSurface* get()
		{
			return static_cast<::Geom_CylindricalSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_CylindricalSurface^ CreateDowncasted(::Geom_CylindricalSurface* instance);

public:
	Geom_CylindricalSurface(Macad::Occt::Ax3 A3, double Radius);
	Geom_CylindricalSurface(Macad::Occt::gp_Cylinder^ C);
	Geom_CylindricalSurface(Macad::Occt::Geom_CylindricalSurface^ parameter1);
	void SetCylinder(Macad::Occt::gp_Cylinder^ C);
	void SetRadius(double R);
	Macad::Occt::gp_Cylinder^ Cylinder();
	double UReversedParameter(double U);
	double VReversedParameter(double V);
	void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
	Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
	double Radius();
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_CylindricalSurface

//---------------------------------------------------------------------
//  Class  Geom_Vector
//---------------------------------------------------------------------
public ref class Geom_Vector : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_Vector_h
public:
	Include_Geom_Vector_h
#endif

protected:
	Geom_Vector(InitMode init)
		: Macad::Occt::Geom_Geometry( init )
	{}

public:
	Geom_Vector(::Geom_Vector* nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	Geom_Vector(::Geom_Vector& nativeInstance)
		: Macad::Occt::Geom_Geometry( nativeInstance )
	{}

	property ::Geom_Vector* NativeInstance
	{
		::Geom_Vector* get()
		{
			return static_cast<::Geom_Vector*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Vector^ CreateDowncasted(::Geom_Vector* instance);

public:
	Geom_Vector();
	Geom_Vector(Macad::Occt::Geom_Vector^ parameter1);
	void Reverse();
	Macad::Occt::Geom_Vector^ Reversed();
	double Angle(Macad::Occt::Geom_Vector^ Other);
	double AngleWithRef(Macad::Occt::Geom_Vector^ Other, Macad::Occt::Geom_Vector^ VRef);
	void Coord(double% X, double% Y, double% Z);
	double Magnitude();
	double SquareMagnitude();
	double X();
	double Y();
	double Z();
	void Cross(Macad::Occt::Geom_Vector^ Other);
	Macad::Occt::Geom_Vector^ Crossed(Macad::Occt::Geom_Vector^ Other);
	void CrossCross(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
	Macad::Occt::Geom_Vector^ CrossCrossed(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
	double Dot(Macad::Occt::Geom_Vector^ Other);
	double DotCross(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
	Macad::Occt::Vec Vec();
}; // class Geom_Vector

//---------------------------------------------------------------------
//  Class  Geom_Direction
//---------------------------------------------------------------------
public ref class Geom_Direction sealed : public Macad::Occt::Geom_Vector
{

#ifdef Include_Geom_Direction_h
public:
	Include_Geom_Direction_h
#endif

public:
	Geom_Direction(::Geom_Direction* nativeInstance)
		: Macad::Occt::Geom_Vector( nativeInstance )
	{}

	Geom_Direction(::Geom_Direction& nativeInstance)
		: Macad::Occt::Geom_Vector( nativeInstance )
	{}

	property ::Geom_Direction* NativeInstance
	{
		::Geom_Direction* get()
		{
			return static_cast<::Geom_Direction*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Direction^ CreateDowncasted(::Geom_Direction* instance);

public:
	Geom_Direction(double X, double Y, double Z);
	Geom_Direction(Macad::Occt::Dir V);
	Geom_Direction(Macad::Occt::Geom_Direction^ parameter1);
	void SetCoord(double X, double Y, double Z);
	void SetDir(Macad::Occt::Dir V);
	void SetX(double X);
	void SetY(double Y);
	void SetZ(double Z);
	Macad::Occt::Dir Dir();
	double Magnitude();
	double SquareMagnitude();
	void Cross(Macad::Occt::Geom_Vector^ Other);
	void CrossCross(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
	Macad::Occt::Geom_Vector^ Crossed(Macad::Occt::Geom_Vector^ Other);
	Macad::Occt::Geom_Vector^ CrossCrossed(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
}; // class Geom_Direction

//---------------------------------------------------------------------
//  Class  Geom_Ellipse
//---------------------------------------------------------------------
public ref class Geom_Ellipse sealed : public Macad::Occt::Geom_Conic
{

#ifdef Include_Geom_Ellipse_h
public:
	Include_Geom_Ellipse_h
#endif

public:
	Geom_Ellipse(::Geom_Ellipse* nativeInstance)
		: Macad::Occt::Geom_Conic( nativeInstance )
	{}

	Geom_Ellipse(::Geom_Ellipse& nativeInstance)
		: Macad::Occt::Geom_Conic( nativeInstance )
	{}

	property ::Geom_Ellipse* NativeInstance
	{
		::Geom_Ellipse* get()
		{
			return static_cast<::Geom_Ellipse*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Ellipse^ CreateDowncasted(::Geom_Ellipse* instance);

public:
	Geom_Ellipse(Macad::Occt::gp_Elips^ E);
	Geom_Ellipse(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
	Geom_Ellipse(Macad::Occt::Geom_Ellipse^ parameter1);
	void SetElips(Macad::Occt::gp_Elips^ E);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	Macad::Occt::gp_Elips^ Elips();
	double ReversedParameter(double U);
	Macad::Occt::Ax1 Directrix1();
	Macad::Occt::Ax1 Directrix2();
	double Eccentricity();
	double Focal();
	Macad::Occt::Pnt Focus1();
	Macad::Occt::Pnt Focus2();
	double MajorRadius();
	double MinorRadius();
	double Parameter();
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Ellipse

//---------------------------------------------------------------------
//  Class  Geom_HSequenceOfBSplineSurface
//---------------------------------------------------------------------
public ref class Geom_HSequenceOfBSplineSurface sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom_HSequenceOfBSplineSurface_h
public:
	Include_Geom_HSequenceOfBSplineSurface_h
#endif

public:
	Geom_HSequenceOfBSplineSurface(::Geom_HSequenceOfBSplineSurface* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Geom_HSequenceOfBSplineSurface(::Geom_HSequenceOfBSplineSurface& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Geom_HSequenceOfBSplineSurface* NativeInstance
	{
		::Geom_HSequenceOfBSplineSurface* get()
		{
			return static_cast<::Geom_HSequenceOfBSplineSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_HSequenceOfBSplineSurface^ CreateDowncasted(::Geom_HSequenceOfBSplineSurface* instance);

public:
	Geom_HSequenceOfBSplineSurface();
	Geom_HSequenceOfBSplineSurface(Macad::Occt::Geom_SequenceOfBSplineSurface^ theOther);
	Geom_HSequenceOfBSplineSurface(Macad::Occt::Geom_HSequenceOfBSplineSurface^ parameter1);
	Macad::Occt::Geom_SequenceOfBSplineSurface^ Sequence();
	void Append(Macad::Occt::Geom_BSplineSurface^ theItem);
	void Append(Macad::Occt::Geom_SequenceOfBSplineSurface^ theSequence);
	Macad::Occt::Geom_SequenceOfBSplineSurface^ ChangeSequence();
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Geom_BSplineSurface>> Assign(NCollection_Sequence<opencascade::handle<Geom_BSplineSurface>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<Geom_BSplineSurface>> theSeq, ) */
	void Prepend(Macad::Occt::Geom_BSplineSurface^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<Geom_BSplineSurface>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Geom_BSplineSurface>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Geom_BSplineSurface theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Geom_BSplineSurface>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Geom_BSplineSurface>> theSeq, ) */
	Macad::Occt::Geom_BSplineSurface^ First();
	Macad::Occt::Geom_BSplineSurface^ ChangeFirst();
	Macad::Occt::Geom_BSplineSurface^ Last();
	Macad::Occt::Geom_BSplineSurface^ ChangeLast();
	Macad::Occt::Geom_BSplineSurface^ Value(int theIndex);
	Macad::Occt::Geom_BSplineSurface^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
}; // class Geom_HSequenceOfBSplineSurface

//---------------------------------------------------------------------
//  Class  Geom_Hyperbola
//---------------------------------------------------------------------
public ref class Geom_Hyperbola sealed : public Macad::Occt::Geom_Conic
{

#ifdef Include_Geom_Hyperbola_h
public:
	Include_Geom_Hyperbola_h
#endif

public:
	Geom_Hyperbola(::Geom_Hyperbola* nativeInstance)
		: Macad::Occt::Geom_Conic( nativeInstance )
	{}

	Geom_Hyperbola(::Geom_Hyperbola& nativeInstance)
		: Macad::Occt::Geom_Conic( nativeInstance )
	{}

	property ::Geom_Hyperbola* NativeInstance
	{
		::Geom_Hyperbola* get()
		{
			return static_cast<::Geom_Hyperbola*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Hyperbola^ CreateDowncasted(::Geom_Hyperbola* instance);

public:
	Geom_Hyperbola(Macad::Occt::gp_Hypr^ H);
	Geom_Hyperbola(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
	Geom_Hyperbola(Macad::Occt::Geom_Hyperbola^ parameter1);
	void SetHypr(Macad::Occt::gp_Hypr^ H);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	Macad::Occt::gp_Hypr^ Hypr();
	double ReversedParameter(double U);
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	Macad::Occt::Ax1 Asymptote1();
	Macad::Occt::Ax1 Asymptote2();
	Macad::Occt::gp_Hypr^ ConjugateBranch1();
	Macad::Occt::gp_Hypr^ ConjugateBranch2();
	Macad::Occt::Ax1 Directrix1();
	Macad::Occt::Ax1 Directrix2();
	double Eccentricity();
	double Focal();
	Macad::Occt::Pnt Focus1();
	Macad::Occt::Pnt Focus2();
	double MajorRadius();
	double MinorRadius();
	Macad::Occt::gp_Hypr^ OtherBranch();
	double Parameter();
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Hyperbola

//---------------------------------------------------------------------
//  Class  Geom_Line
//---------------------------------------------------------------------
public ref class Geom_Line sealed : public Macad::Occt::Geom_Curve
{

#ifdef Include_Geom_Line_h
public:
	Include_Geom_Line_h
#endif

public:
	Geom_Line(::Geom_Line* nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	Geom_Line(::Geom_Line& nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	property ::Geom_Line* NativeInstance
	{
		::Geom_Line* get()
		{
			return static_cast<::Geom_Line*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Line^ CreateDowncasted(::Geom_Line* instance);

public:
	Geom_Line(Macad::Occt::Ax1 A1);
	Geom_Line(Macad::Occt::gp_Lin^ L);
	Geom_Line(Macad::Occt::Pnt P, Macad::Occt::Dir V);
	Geom_Line(Macad::Occt::Geom_Line^ parameter1);
	void SetLin(Macad::Occt::gp_Lin^ L);
	void SetDirection(Macad::Occt::Dir V);
	void SetLocation(Macad::Occt::Pnt P);
	void SetPosition(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Lin^ Lin();
	Macad::Occt::Ax1 Position();
	void Reverse();
	double ReversedParameter(double U);
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCN(int N);
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	void Transform(Macad::Occt::Trsf T);
	double TransformedParameter(double U, Macad::Occt::Trsf T);
	double ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Line

//---------------------------------------------------------------------
//  Class  Geom_OffsetCurve
//---------------------------------------------------------------------
public ref class Geom_OffsetCurve sealed : public Macad::Occt::Geom_Curve
{

#ifdef Include_Geom_OffsetCurve_h
public:
	Include_Geom_OffsetCurve_h
#endif

public:
	Geom_OffsetCurve(::Geom_OffsetCurve* nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	Geom_OffsetCurve(::Geom_OffsetCurve& nativeInstance)
		: Macad::Occt::Geom_Curve( nativeInstance )
	{}

	property ::Geom_OffsetCurve* NativeInstance
	{
		::Geom_OffsetCurve* get()
		{
			return static_cast<::Geom_OffsetCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_OffsetCurve^ CreateDowncasted(::Geom_OffsetCurve* instance);

public:
	Geom_OffsetCurve(Macad::Occt::Geom_Curve^ C, double Offset, Macad::Occt::Dir V, bool isNotCheckC0);
	Geom_OffsetCurve(Macad::Occt::Geom_Curve^ C, double Offset, Macad::Occt::Dir V);
	Geom_OffsetCurve(Macad::Occt::Geom_OffsetCurve^ parameter1);
	void Reverse();
	double ReversedParameter(double U);
	void SetBasisCurve(Macad::Occt::Geom_Curve^ C, bool isNotCheckC0);
	void SetBasisCurve(Macad::Occt::Geom_Curve^ C);
	void SetDirection(Macad::Occt::Dir V);
	void SetOffsetValue(double D);
	Macad::Occt::Geom_Curve^ BasisCurve();
	Macad::Occt::GeomAbs_Shape Continuity();
	Macad::Occt::Dir Direction();
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	double FirstParameter();
	double LastParameter();
	double Offset();
	bool IsClosed();
	bool IsCN(int N);
	bool IsPeriodic();
	double Period();
	void Transform(Macad::Occt::Trsf T);
	double TransformedParameter(double U, Macad::Occt::Trsf T);
	double ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	Macad::Occt::GeomAbs_Shape GetBasisCurveContinuity();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_OffsetCurve

//---------------------------------------------------------------------
//  Class  Geom_OsculatingSurface
//---------------------------------------------------------------------
public ref class Geom_OsculatingSurface sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom_OsculatingSurface_h
public:
	Include_Geom_OsculatingSurface_h
#endif

public:
	Geom_OsculatingSurface(::Geom_OsculatingSurface* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Geom_OsculatingSurface(::Geom_OsculatingSurface& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Geom_OsculatingSurface* NativeInstance
	{
		::Geom_OsculatingSurface* get()
		{
			return static_cast<::Geom_OsculatingSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_OsculatingSurface^ CreateDowncasted(::Geom_OsculatingSurface* instance);

public:
	Geom_OsculatingSurface();
	Geom_OsculatingSurface(Macad::Occt::Geom_Surface^ BS, double Tol);
	Geom_OsculatingSurface(Macad::Occt::Geom_OsculatingSurface^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ BS, double Tol);
	Macad::Occt::Geom_Surface^ BasisSurface();
	double Tolerance();
	bool UOscSurf(double U, double V, bool% t, Macad::Occt::Geom_BSplineSurface^ L);
	bool VOscSurf(double U, double V, bool% t, Macad::Occt::Geom_BSplineSurface^ L);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_OsculatingSurface

//---------------------------------------------------------------------
//  Class  Geom_OffsetSurface
//---------------------------------------------------------------------
public ref class Geom_OffsetSurface sealed : public Macad::Occt::Geom_Surface
{

#ifdef Include_Geom_OffsetSurface_h
public:
	Include_Geom_OffsetSurface_h
#endif

public:
	Geom_OffsetSurface(::Geom_OffsetSurface* nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	Geom_OffsetSurface(::Geom_OffsetSurface& nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	property ::Geom_OffsetSurface* NativeInstance
	{
		::Geom_OffsetSurface* get()
		{
			return static_cast<::Geom_OffsetSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_OffsetSurface^ CreateDowncasted(::Geom_OffsetSurface* instance);

public:
	Geom_OffsetSurface(Macad::Occt::Geom_Surface^ S, double Offset, bool isNotCheckC0);
	Geom_OffsetSurface(Macad::Occt::Geom_Surface^ S, double Offset);
	Geom_OffsetSurface(Macad::Occt::Geom_OffsetSurface^ parameter1);
	void SetBasisSurface(Macad::Occt::Geom_Surface^ S, bool isNotCheckC0);
	void SetBasisSurface(Macad::Occt::Geom_Surface^ S);
	void SetOffsetValue(double D);
	double Offset();
	Macad::Occt::Geom_Surface^ BasisSurface();
	Macad::Occt::Geom_OsculatingSurface^ OsculatingSurface();
	void UReverse();
	double UReversedParameter(double U);
	void VReverse();
	double VReversedParameter(double V);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCNu(int N);
	bool IsCNv(int N);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	double UPeriod();
	bool IsVPeriodic();
	double VPeriod();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
	Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	Macad::Occt::Geom_Surface^ Surface();
	bool UOsculatingSurface(double U, double V, bool% IsOpposite, Macad::Occt::Geom_BSplineSurface^ UOsculSurf);
	bool VOsculatingSurface(double U, double V, bool% IsOpposite, Macad::Occt::Geom_BSplineSurface^ VOsculSurf);
	Macad::Occt::GeomAbs_Shape GetBasisSurfContinuity();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_OffsetSurface

//---------------------------------------------------------------------
//  Class  Geom_Parabola
//---------------------------------------------------------------------
public ref class Geom_Parabola sealed : public Macad::Occt::Geom_Conic
{

#ifdef Include_Geom_Parabola_h
public:
	Include_Geom_Parabola_h
#endif

public:
	Geom_Parabola(::Geom_Parabola* nativeInstance)
		: Macad::Occt::Geom_Conic( nativeInstance )
	{}

	Geom_Parabola(::Geom_Parabola& nativeInstance)
		: Macad::Occt::Geom_Conic( nativeInstance )
	{}

	property ::Geom_Parabola* NativeInstance
	{
		::Geom_Parabola* get()
		{
			return static_cast<::Geom_Parabola*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Parabola^ CreateDowncasted(::Geom_Parabola* instance);

public:
	Geom_Parabola(Macad::Occt::gp_Parab^ Prb);
	Geom_Parabola(Macad::Occt::Ax2 A2, double Focal);
	Geom_Parabola(Macad::Occt::Ax1 D, Macad::Occt::Pnt F);
	Geom_Parabola(Macad::Occt::Geom_Parabola^ parameter1);
	void SetFocal(double Focal);
	void SetParab(Macad::Occt::gp_Parab^ Prb);
	Macad::Occt::gp_Parab^ Parab();
	double ReversedParameter(double U);
	double FirstParameter();
	double LastParameter();
	bool IsClosed();
	bool IsPeriodic();
	Macad::Occt::Ax1 Directrix();
	double Eccentricity();
	Macad::Occt::Pnt Focus();
	double Focal();
	double Parameter();
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	void Transform(Macad::Occt::Trsf T);
	double TransformedParameter(double U, Macad::Occt::Trsf T);
	double ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Parabola

//---------------------------------------------------------------------
//  Class  Geom_Plane
//---------------------------------------------------------------------
public ref class Geom_Plane sealed : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_Plane_h
public:
	Include_Geom_Plane_h
#endif

public:
	Geom_Plane(::Geom_Plane* nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	Geom_Plane(::Geom_Plane& nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	property ::Geom_Plane* NativeInstance
	{
		::Geom_Plane* get()
		{
			return static_cast<::Geom_Plane*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Plane^ CreateDowncasted(::Geom_Plane* instance);

public:
	Geom_Plane(Macad::Occt::Ax3 A3);
	Geom_Plane(Macad::Occt::Pln Pl);
	Geom_Plane(Macad::Occt::Pnt P, Macad::Occt::Dir V);
	Geom_Plane(double A, double B, double C, double D);
	Geom_Plane(Macad::Occt::Geom_Plane^ parameter1);
	void SetPln(Macad::Occt::Pln Pl);
	Macad::Occt::Pln Pln();
	void UReverse();
	double UReversedParameter(double U);
	void VReverse();
	double VReversedParameter(double V);
	void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
	Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	void Coefficients(double% A, double% B, double% C, double% D);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Plane

//---------------------------------------------------------------------
//  Class  Geom_RectangularTrimmedSurface
//---------------------------------------------------------------------
public ref class Geom_RectangularTrimmedSurface sealed : public Macad::Occt::Geom_BoundedSurface
{

#ifdef Include_Geom_RectangularTrimmedSurface_h
public:
	Include_Geom_RectangularTrimmedSurface_h
#endif

public:
	Geom_RectangularTrimmedSurface(::Geom_RectangularTrimmedSurface* nativeInstance)
		: Macad::Occt::Geom_BoundedSurface( nativeInstance )
	{}

	Geom_RectangularTrimmedSurface(::Geom_RectangularTrimmedSurface& nativeInstance)
		: Macad::Occt::Geom_BoundedSurface( nativeInstance )
	{}

	property ::Geom_RectangularTrimmedSurface* NativeInstance
	{
		::Geom_RectangularTrimmedSurface* get()
		{
			return static_cast<::Geom_RectangularTrimmedSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_RectangularTrimmedSurface^ CreateDowncasted(::Geom_RectangularTrimmedSurface* instance);

public:
	Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double U1, double U2, double V1, double V2, bool USense, bool VSense);
	Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double U1, double U2, double V1, double V2, bool USense);
	Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double U1, double U2, double V1, double V2);
	Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double Param1, double Param2, bool UTrim, bool Sense);
	Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double Param1, double Param2, bool UTrim);
	Geom_RectangularTrimmedSurface(Macad::Occt::Geom_RectangularTrimmedSurface^ parameter1);
	void SetTrim(double U1, double U2, double V1, double V2, bool USense, bool VSense);
	void SetTrim(double U1, double U2, double V1, double V2, bool USense);
	void SetTrim(double U1, double U2, double V1, double V2);
	void SetTrim(double Param1, double Param2, bool UTrim, bool Sense);
	void SetTrim(double Param1, double Param2, bool UTrim);
	Macad::Occt::Geom_Surface^ BasisSurface();
	void UReverse();
	double UReversedParameter(double U);
	void VReverse();
	double VReversedParameter(double V);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsUClosed();
	bool IsVClosed();
	bool IsCNu(int N);
	bool IsCNv(int N);
	bool IsUPeriodic();
	double UPeriod();
	bool IsVPeriodic();
	double VPeriod();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
	Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_RectangularTrimmedSurface

//---------------------------------------------------------------------
//  Class  Geom_SphericalSurface
//---------------------------------------------------------------------
public ref class Geom_SphericalSurface sealed : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_SphericalSurface_h
public:
	Include_Geom_SphericalSurface_h
#endif

public:
	Geom_SphericalSurface(::Geom_SphericalSurface* nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	Geom_SphericalSurface(::Geom_SphericalSurface& nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	property ::Geom_SphericalSurface* NativeInstance
	{
		::Geom_SphericalSurface* get()
		{
			return static_cast<::Geom_SphericalSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_SphericalSurface^ CreateDowncasted(::Geom_SphericalSurface* instance);

public:
	Geom_SphericalSurface(Macad::Occt::Ax3 A3, double Radius);
	Geom_SphericalSurface(Macad::Occt::gp_Sphere^ S);
	Geom_SphericalSurface(Macad::Occt::Geom_SphericalSurface^ parameter1);
	void SetRadius(double R);
	void SetSphere(Macad::Occt::gp_Sphere^ S);
	Macad::Occt::gp_Sphere^ Sphere();
	double UReversedParameter(double U);
	double VReversedParameter(double V);
	double Area();
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
	double Radius();
	double Volume();
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_SphericalSurface

//---------------------------------------------------------------------
//  Class  Geom_SweptSurface
//---------------------------------------------------------------------
public ref class Geom_SweptSurface : public Macad::Occt::Geom_Surface
{

#ifdef Include_Geom_SweptSurface_h
public:
	Include_Geom_SweptSurface_h
#endif

protected:
	Geom_SweptSurface(InitMode init)
		: Macad::Occt::Geom_Surface( init )
	{}

public:
	Geom_SweptSurface(::Geom_SweptSurface* nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	Geom_SweptSurface(::Geom_SweptSurface& nativeInstance)
		: Macad::Occt::Geom_Surface( nativeInstance )
	{}

	property ::Geom_SweptSurface* NativeInstance
	{
		::Geom_SweptSurface* get()
		{
			return static_cast<::Geom_SweptSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_SweptSurface^ CreateDowncasted(::Geom_SweptSurface* instance);

public:
	Geom_SweptSurface(Macad::Occt::Geom_SweptSurface^ parameter1);
	Geom_SweptSurface();
	Macad::Occt::GeomAbs_Shape Continuity();
	Macad::Occt::Dir Direction();
	Macad::Occt::Geom_Curve^ BasisCurve();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_SweptSurface

//---------------------------------------------------------------------
//  Class  Geom_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------
public ref class Geom_SurfaceOfLinearExtrusion sealed : public Macad::Occt::Geom_SweptSurface
{

#ifdef Include_Geom_SurfaceOfLinearExtrusion_h
public:
	Include_Geom_SurfaceOfLinearExtrusion_h
#endif

public:
	Geom_SurfaceOfLinearExtrusion(::Geom_SurfaceOfLinearExtrusion* nativeInstance)
		: Macad::Occt::Geom_SweptSurface( nativeInstance )
	{}

	Geom_SurfaceOfLinearExtrusion(::Geom_SurfaceOfLinearExtrusion& nativeInstance)
		: Macad::Occt::Geom_SweptSurface( nativeInstance )
	{}

	property ::Geom_SurfaceOfLinearExtrusion* NativeInstance
	{
		::Geom_SurfaceOfLinearExtrusion* get()
		{
			return static_cast<::Geom_SurfaceOfLinearExtrusion*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_SurfaceOfLinearExtrusion^ CreateDowncasted(::Geom_SurfaceOfLinearExtrusion* instance);

public:
	Geom_SurfaceOfLinearExtrusion(Macad::Occt::Geom_Curve^ C, Macad::Occt::Dir V);
	Geom_SurfaceOfLinearExtrusion(Macad::Occt::Geom_SurfaceOfLinearExtrusion^ parameter1);
	void SetDirection(Macad::Occt::Dir V);
	void SetBasisCurve(Macad::Occt::Geom_Curve^ C);
	void UReverse();
	double UReversedParameter(double U);
	void VReverse();
	double VReversedParameter(double V);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	bool IsUClosed();
	bool IsVClosed();
	bool IsCNu(int N);
	bool IsCNv(int N);
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
	Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_SurfaceOfLinearExtrusion

//---------------------------------------------------------------------
//  Class  Geom_SurfaceOfRevolution
//---------------------------------------------------------------------
public ref class Geom_SurfaceOfRevolution sealed : public Macad::Occt::Geom_SweptSurface
{

#ifdef Include_Geom_SurfaceOfRevolution_h
public:
	Include_Geom_SurfaceOfRevolution_h
#endif

public:
	Geom_SurfaceOfRevolution(::Geom_SurfaceOfRevolution* nativeInstance)
		: Macad::Occt::Geom_SweptSurface( nativeInstance )
	{}

	Geom_SurfaceOfRevolution(::Geom_SurfaceOfRevolution& nativeInstance)
		: Macad::Occt::Geom_SweptSurface( nativeInstance )
	{}

	property ::Geom_SurfaceOfRevolution* NativeInstance
	{
		::Geom_SurfaceOfRevolution* get()
		{
			return static_cast<::Geom_SurfaceOfRevolution*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_SurfaceOfRevolution^ CreateDowncasted(::Geom_SurfaceOfRevolution* instance);

public:
	Geom_SurfaceOfRevolution(Macad::Occt::Geom_Curve^ C, Macad::Occt::Ax1 A1);
	Geom_SurfaceOfRevolution(Macad::Occt::Geom_SurfaceOfRevolution^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetDirection(Macad::Occt::Dir V);
	void SetBasisCurve(Macad::Occt::Geom_Curve^ C);
	void SetLocation(Macad::Occt::Pnt P);
	Macad::Occt::Ax1 Axis();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax2 ReferencePlane();
	void UReverse();
	double UReversedParameter(double U);
	void VReverse();
	double VReversedParameter(double V);
	void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
	Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	bool IsUClosed();
	bool IsVClosed();
	bool IsCNu(int N);
	bool IsCNv(int N);
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_SurfaceOfRevolution

//---------------------------------------------------------------------
//  Class  Geom_ToroidalSurface
//---------------------------------------------------------------------
public ref class Geom_ToroidalSurface sealed : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_ToroidalSurface_h
public:
	Include_Geom_ToroidalSurface_h
#endif

public:
	Geom_ToroidalSurface(::Geom_ToroidalSurface* nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	Geom_ToroidalSurface(::Geom_ToroidalSurface& nativeInstance)
		: Macad::Occt::Geom_ElementarySurface( nativeInstance )
	{}

	property ::Geom_ToroidalSurface* NativeInstance
	{
		::Geom_ToroidalSurface* get()
		{
			return static_cast<::Geom_ToroidalSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_ToroidalSurface^ CreateDowncasted(::Geom_ToroidalSurface* instance);

public:
	Geom_ToroidalSurface(Macad::Occt::Ax3 A3, double MajorRadius, double MinorRadius);
	Geom_ToroidalSurface(Macad::Occt::gp_Torus^ T);
	Geom_ToroidalSurface(Macad::Occt::Geom_ToroidalSurface^ parameter1);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	void SetTorus(Macad::Occt::gp_Torus^ T);
	Macad::Occt::gp_Torus^ Torus();
	double UReversedParameter(double U);
	double VReversedParameter(double U);
	double Area();
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	void Coefficients(Macad::Occt::TColStd_Array1OfReal^ Coef);
	double MajorRadius();
	double MinorRadius();
	double Volume();
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Geom_Curve^ UIso(double U);
	Macad::Occt::Geom_Curve^ VIso(double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_ToroidalSurface

//---------------------------------------------------------------------
//  Class  Geom_Transformation
//---------------------------------------------------------------------
public ref class Geom_Transformation sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom_Transformation_h
public:
	Include_Geom_Transformation_h
#endif

public:
	Geom_Transformation(::Geom_Transformation* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Geom_Transformation(::Geom_Transformation& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Geom_Transformation* NativeInstance
	{
		::Geom_Transformation* get()
		{
			return static_cast<::Geom_Transformation*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_Transformation^ CreateDowncasted(::Geom_Transformation* instance);

public:
	Geom_Transformation();
	Geom_Transformation(Macad::Occt::Trsf T);
	Geom_Transformation(Macad::Occt::Geom_Transformation^ parameter1);
	void SetMirror(Macad::Occt::Pnt thePnt);
	void SetMirror(Macad::Occt::Ax1 theA1);
	void SetMirror(Macad::Occt::Ax2 theA2);
	void SetRotation(Macad::Occt::Ax1 theA1, double theAng);
	void SetScale(Macad::Occt::Pnt thePnt, double theScale);
	void SetTransformation(Macad::Occt::Ax3 theFromSystem1, Macad::Occt::Ax3 theToSystem2);
	void SetTransformation(Macad::Occt::Ax3 theToSystem);
	void SetTranslation(Macad::Occt::Vec theVec);
	void SetTranslation(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	void SetTrsf(Macad::Occt::Trsf theTrsf);
	bool IsNegative();
	Macad::Occt::TrsfForm Form();
	double ScaleFactor();
	Macad::Occt::Trsf Trsf();
	double Value(int theRow, int theCol);
	void Invert();
	Macad::Occt::Geom_Transformation^ Inverted();
	Macad::Occt::Geom_Transformation^ Multiplied(Macad::Occt::Geom_Transformation^ Other);
	void Multiply(Macad::Occt::Geom_Transformation^ theOther);
	void Power(int N);
	Macad::Occt::Geom_Transformation^ Powered(int N);
	void PreMultiply(Macad::Occt::Geom_Transformation^ Other);
	void Transforms(double% theX, double% theY, double% theZ);
	Macad::Occt::Geom_Transformation^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_Transformation

//---------------------------------------------------------------------
//  Class  Geom_TrimmedCurve
//---------------------------------------------------------------------
public ref class Geom_TrimmedCurve sealed : public Macad::Occt::Geom_BoundedCurve
{

#ifdef Include_Geom_TrimmedCurve_h
public:
	Include_Geom_TrimmedCurve_h
#endif

public:
	Geom_TrimmedCurve(::Geom_TrimmedCurve* nativeInstance)
		: Macad::Occt::Geom_BoundedCurve( nativeInstance )
	{}

	Geom_TrimmedCurve(::Geom_TrimmedCurve& nativeInstance)
		: Macad::Occt::Geom_BoundedCurve( nativeInstance )
	{}

	property ::Geom_TrimmedCurve* NativeInstance
	{
		::Geom_TrimmedCurve* get()
		{
			return static_cast<::Geom_TrimmedCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_TrimmedCurve^ CreateDowncasted(::Geom_TrimmedCurve* instance);

public:
	Geom_TrimmedCurve(Macad::Occt::Geom_Curve^ C, double U1, double U2, bool Sense, bool theAdjustPeriodic);
	Geom_TrimmedCurve(Macad::Occt::Geom_Curve^ C, double U1, double U2, bool Sense);
	Geom_TrimmedCurve(Macad::Occt::Geom_Curve^ C, double U1, double U2);
	Geom_TrimmedCurve(Macad::Occt::Geom_TrimmedCurve^ parameter1);
	void Reverse();
	double ReversedParameter(double U);
	void SetTrim(double U1, double U2, bool Sense, bool theAdjustPeriodic);
	void SetTrim(double U1, double U2, bool Sense);
	void SetTrim(double U1, double U2);
	Macad::Occt::Geom_Curve^ BasisCurve();
	Macad::Occt::GeomAbs_Shape Continuity();
	bool IsCN(int N);
	Macad::Occt::Pnt EndPoint();
	double FirstParameter();
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	double LastParameter();
	Macad::Occt::Pnt StartPoint();
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	void Transform(Macad::Occt::Trsf T);
	double TransformedParameter(double U, Macad::Occt::Trsf T);
	double ParametricTransformation(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Geom_TrimmedCurve

//---------------------------------------------------------------------
//  Class  Geom_UndefinedDerivative
//---------------------------------------------------------------------
public ref class Geom_UndefinedDerivative sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Geom_UndefinedDerivative_h
public:
	Include_Geom_UndefinedDerivative_h
#endif

public:
	Geom_UndefinedDerivative(::Geom_UndefinedDerivative* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Geom_UndefinedDerivative(::Geom_UndefinedDerivative& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Geom_UndefinedDerivative* NativeInstance
	{
		::Geom_UndefinedDerivative* get()
		{
			return static_cast<::Geom_UndefinedDerivative*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_UndefinedDerivative^ CreateDowncasted(::Geom_UndefinedDerivative* instance);

public:
	Geom_UndefinedDerivative();
	Geom_UndefinedDerivative(System::String^ theMessage);
	Geom_UndefinedDerivative(System::String^ theMessage, System::String^ theStackTrace);
	Geom_UndefinedDerivative(Macad::Occt::Geom_UndefinedDerivative^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Geom_UndefinedDerivative^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Geom_UndefinedDerivative^ NewInstance();
	static Macad::Occt::Geom_UndefinedDerivative^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Geom_UndefinedDerivative

//---------------------------------------------------------------------
//  Class  Geom_UndefinedValue
//---------------------------------------------------------------------
public ref class Geom_UndefinedValue sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Geom_UndefinedValue_h
public:
	Include_Geom_UndefinedValue_h
#endif

public:
	Geom_UndefinedValue(::Geom_UndefinedValue* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Geom_UndefinedValue(::Geom_UndefinedValue& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Geom_UndefinedValue* NativeInstance
	{
		::Geom_UndefinedValue* get()
		{
			return static_cast<::Geom_UndefinedValue*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_UndefinedValue^ CreateDowncasted(::Geom_UndefinedValue* instance);

public:
	Geom_UndefinedValue();
	Geom_UndefinedValue(System::String^ theMessage);
	Geom_UndefinedValue(System::String^ theMessage, System::String^ theStackTrace);
	Geom_UndefinedValue(Macad::Occt::Geom_UndefinedValue^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Geom_UndefinedValue^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Geom_UndefinedValue^ NewInstance();
	static Macad::Occt::Geom_UndefinedValue^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Geom_UndefinedValue

//---------------------------------------------------------------------
//  Class  Geom_VectorWithMagnitude
//---------------------------------------------------------------------
public ref class Geom_VectorWithMagnitude sealed : public Macad::Occt::Geom_Vector
{

#ifdef Include_Geom_VectorWithMagnitude_h
public:
	Include_Geom_VectorWithMagnitude_h
#endif

public:
	Geom_VectorWithMagnitude(::Geom_VectorWithMagnitude* nativeInstance)
		: Macad::Occt::Geom_Vector( nativeInstance )
	{}

	Geom_VectorWithMagnitude(::Geom_VectorWithMagnitude& nativeInstance)
		: Macad::Occt::Geom_Vector( nativeInstance )
	{}

	property ::Geom_VectorWithMagnitude* NativeInstance
	{
		::Geom_VectorWithMagnitude* get()
		{
			return static_cast<::Geom_VectorWithMagnitude*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom_VectorWithMagnitude^ CreateDowncasted(::Geom_VectorWithMagnitude* instance);

public:
	Geom_VectorWithMagnitude(Macad::Occt::Vec V);
	Geom_VectorWithMagnitude(double X, double Y, double Z);
	Geom_VectorWithMagnitude(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Geom_VectorWithMagnitude(Macad::Occt::Geom_VectorWithMagnitude^ parameter1);
	void SetCoord(double X, double Y, double Z);
	void SetVec(Macad::Occt::Vec V);
	void SetX(double X);
	void SetY(double Y);
	void SetZ(double Z);
	double Magnitude();
	double SquareMagnitude();
	void Add(Macad::Occt::Geom_Vector^ Other);
	Macad::Occt::Geom_VectorWithMagnitude^ Added(Macad::Occt::Geom_Vector^ Other);
	void Cross(Macad::Occt::Geom_Vector^ Other);
	Macad::Occt::Geom_Vector^ Crossed(Macad::Occt::Geom_Vector^ Other);
	void CrossCross(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
	Macad::Occt::Geom_Vector^ CrossCrossed(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
	void Divide(double Scalar);
	Macad::Occt::Geom_VectorWithMagnitude^ Divided(double Scalar);
	Macad::Occt::Geom_VectorWithMagnitude^ Multiplied(double Scalar);
	void Multiply(double Scalar);
	void Normalize();
	Macad::Occt::Geom_VectorWithMagnitude^ Normalized();
	void Subtract(Macad::Occt::Geom_Vector^ Other);
	Macad::Occt::Geom_VectorWithMagnitude^ Subtracted(Macad::Occt::Geom_Vector^ Other);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::Geom_Geometry^ Copy();
}; // class Geom_VectorWithMagnitude

}; // namespace Occt
}; // namespace Macad
