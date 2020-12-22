// Generated wrapper code for package IntAna

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  IntAna_ResultType
//---------------------------------------------------------------------
public enum class IntAna_ResultType
{
	IntAna_Point = 0,
	IntAna_Line = 1,
	IntAna_Circle = 2,
	IntAna_PointAndCircle = 3,
	IntAna_Ellipse = 4,
	IntAna_Parabola = 5,
	IntAna_Hyperbola = 6,
	IntAna_Empty = 7,
	IntAna_Same = 8,
	IntAna_NoGeometricSolution = 9
}; // enum  class IntAna_ResultType

//---------------------------------------------------------------------
//  Class  IntAna_ListOfCurve
//---------------------------------------------------------------------
public ref class IntAna_ListOfCurve sealed : public BaseClass<::IntAna_ListOfCurve>
{

#ifdef Include_IntAna_ListOfCurve_h
public:
	Include_IntAna_ListOfCurve_h
#endif

public:
	IntAna_ListOfCurve(::IntAna_ListOfCurve* nativeInstance)
		: BaseClass<::IntAna_ListOfCurve>( nativeInstance, true )
	{}

	IntAna_ListOfCurve(::IntAna_ListOfCurve& nativeInstance)
		: BaseClass<::IntAna_ListOfCurve>( &nativeInstance, false )
	{}

	property ::IntAna_ListOfCurve* NativeInstance
	{
		::IntAna_ListOfCurve* get()
		{
			return static_cast<::IntAna_ListOfCurve*>(_NativeInstance);
		}
	}

public:
	IntAna_ListOfCurve();
	IntAna_ListOfCurve(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	IntAna_ListOfCurve(Macad::Occt::IntAna_ListOfCurve^ theOther);
	int Size();
	Macad::Occt::IntAna_ListOfCurve^ Assign(Macad::Occt::IntAna_ListOfCurve^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::IntAna_Curve^ First();
	Macad::Occt::IntAna_Curve^ Last();
	Macad::Occt::IntAna_Curve^ Append(Macad::Occt::IntAna_Curve^ theItem);
	/* Method skipped due to unknown mapping: void Append(IntAna_Curve theItem, Iterator theIter, ) */
	void Append(Macad::Occt::IntAna_ListOfCurve^ theOther);
	Macad::Occt::IntAna_Curve^ Prepend(Macad::Occt::IntAna_Curve^ theItem);
	void Prepend(Macad::Occt::IntAna_ListOfCurve^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: IntAna_Curve InsertBefore(IntAna_Curve theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(IntAna_ListOfCurve theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: IntAna_Curve InsertAfter(IntAna_Curve theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(IntAna_ListOfCurve theOther, Iterator theIter, ) */
	void Reverse();
}; // class IntAna_ListOfCurve

//---------------------------------------------------------------------
//  Class  IntAna_Curve
//---------------------------------------------------------------------
public ref class IntAna_Curve sealed : public BaseClass<::IntAna_Curve>
{

#ifdef Include_IntAna_Curve_h
public:
	Include_IntAna_Curve_h
#endif

public:
	IntAna_Curve(::IntAna_Curve* nativeInstance)
		: BaseClass<::IntAna_Curve>( nativeInstance, true )
	{}

	IntAna_Curve(::IntAna_Curve& nativeInstance)
		: BaseClass<::IntAna_Curve>( &nativeInstance, false )
	{}

	property ::IntAna_Curve* NativeInstance
	{
		::IntAna_Curve* get()
		{
			return static_cast<::IntAna_Curve*>(_NativeInstance);
		}
	}

public:
	IntAna_Curve();
	IntAna_Curve(Macad::Occt::IntAna_Curve^ parameter1);
	void SetCylinderQuadValues(Macad::Occt::gp_Cylinder^ Cylinder, double Qxx, double Qyy, double Qzz, double Qxy, double Qxz, double Qyz, double Qx, double Qy, double Qz, double Q1, double Tol, double DomInf, double DomSup, bool TwoZForATheta, bool ZIsPositive);
	void SetConeQuadValues(Macad::Occt::gp_Cone^ Cone, double Qxx, double Qyy, double Qzz, double Qxy, double Qxz, double Qyz, double Qx, double Qy, double Qz, double Q1, double Tol, double DomInf, double DomSup, bool TwoZForATheta, bool ZIsPositive);
	bool IsOpen();
	void Domain(double% theFirst, double% theLast);
	bool IsConstant();
	bool IsFirstOpen();
	bool IsLastOpen();
	Macad::Occt::Pnt Value(double Theta);
	bool D1u(double Theta, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
	void FindParameter(Macad::Occt::Pnt P, Macad::Occt::TColStd_ListOfReal^ theParams);
	void SetIsFirstOpen(bool Flag);
	void SetIsLastOpen(bool Flag);
	void SetDomain(double theFirst, double theLast);
}; // class IntAna_Curve

//---------------------------------------------------------------------
//  Class  IntAna_Int3Pln
//---------------------------------------------------------------------
public ref class IntAna_Int3Pln sealed : public BaseClass<::IntAna_Int3Pln>
{

#ifdef Include_IntAna_Int3Pln_h
public:
	Include_IntAna_Int3Pln_h
#endif

public:
	IntAna_Int3Pln(::IntAna_Int3Pln* nativeInstance)
		: BaseClass<::IntAna_Int3Pln>( nativeInstance, true )
	{}

	IntAna_Int3Pln(::IntAna_Int3Pln& nativeInstance)
		: BaseClass<::IntAna_Int3Pln>( &nativeInstance, false )
	{}

	property ::IntAna_Int3Pln* NativeInstance
	{
		::IntAna_Int3Pln* get()
		{
			return static_cast<::IntAna_Int3Pln*>(_NativeInstance);
		}
	}

public:
	IntAna_Int3Pln();
	IntAna_Int3Pln(Macad::Occt::Pln P1, Macad::Occt::Pln P2, Macad::Occt::Pln P3);
	IntAna_Int3Pln(Macad::Occt::IntAna_Int3Pln^ parameter1);
	void Perform(Macad::Occt::Pln P1, Macad::Occt::Pln P2, Macad::Occt::Pln P3);
	bool IsDone();
	bool IsEmpty();
	Macad::Occt::Pnt Value();
}; // class IntAna_Int3Pln

//---------------------------------------------------------------------
//  Class  IntAna_Quadric
//---------------------------------------------------------------------
public ref class IntAna_Quadric sealed : public BaseClass<::IntAna_Quadric>
{

#ifdef Include_IntAna_Quadric_h
public:
	Include_IntAna_Quadric_h
#endif

public:
	IntAna_Quadric(::IntAna_Quadric* nativeInstance)
		: BaseClass<::IntAna_Quadric>( nativeInstance, true )
	{}

	IntAna_Quadric(::IntAna_Quadric& nativeInstance)
		: BaseClass<::IntAna_Quadric>( &nativeInstance, false )
	{}

	property ::IntAna_Quadric* NativeInstance
	{
		::IntAna_Quadric* get()
		{
			return static_cast<::IntAna_Quadric*>(_NativeInstance);
		}
	}

public:
	IntAna_Quadric();
	IntAna_Quadric(Macad::Occt::Pln P);
	IntAna_Quadric(Macad::Occt::gp_Sphere^ Sph);
	IntAna_Quadric(Macad::Occt::gp_Cylinder^ Cyl);
	IntAna_Quadric(Macad::Occt::gp_Cone^ Cone);
	IntAna_Quadric(Macad::Occt::IntAna_Quadric^ parameter1);
	void SetQuadric(Macad::Occt::Pln P);
	void SetQuadric(Macad::Occt::gp_Sphere^ Sph);
	void SetQuadric(Macad::Occt::gp_Cone^ Con);
	void SetQuadric(Macad::Occt::gp_Cylinder^ Cyl);
	void Coefficients(double% xCXX, double% xCYY, double% xCZZ, double% xCXY, double% xCXZ, double% xCYZ, double% xCX, double% xCY, double% xCZ, double% xCCte);
	void NewCoefficients(double% xCXX, double% xCYY, double% xCZZ, double% xCXY, double% xCXZ, double% xCYZ, double% xCX, double% xCY, double% xCZ, double% xCCte, Macad::Occt::Ax3 Axis);
	/* Method skipped due to unknown mapping: NCollection_List<gp_Pnt> SpecialPoints() */
}; // class IntAna_Quadric

//---------------------------------------------------------------------
//  Class  IntAna_IntConicQuad
//---------------------------------------------------------------------
public ref class IntAna_IntConicQuad sealed : public BaseClass<::IntAna_IntConicQuad>
{

#ifdef Include_IntAna_IntConicQuad_h
public:
	Include_IntAna_IntConicQuad_h
#endif

public:
	IntAna_IntConicQuad(::IntAna_IntConicQuad* nativeInstance)
		: BaseClass<::IntAna_IntConicQuad>( nativeInstance, true )
	{}

	IntAna_IntConicQuad(::IntAna_IntConicQuad& nativeInstance)
		: BaseClass<::IntAna_IntConicQuad>( &nativeInstance, false )
	{}

	property ::IntAna_IntConicQuad* NativeInstance
	{
		::IntAna_IntConicQuad* get()
		{
			return static_cast<::IntAna_IntConicQuad*>(_NativeInstance);
		}
	}

public:
	IntAna_IntConicQuad();
	IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::IntAna_Quadric^ Q);
	IntAna_IntConicQuad(Macad::Occt::gp_Circ^ C, Macad::Occt::IntAna_Quadric^ Q);
	IntAna_IntConicQuad(Macad::Occt::gp_Elips^ E, Macad::Occt::IntAna_Quadric^ Q);
	IntAna_IntConicQuad(Macad::Occt::gp_Parab^ P, Macad::Occt::IntAna_Quadric^ Q);
	IntAna_IntConicQuad(Macad::Occt::gp_Hypr^ H, Macad::Occt::IntAna_Quadric^ Q);
	IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol, double Len);
	IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol);
	IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang);
	IntAna_IntConicQuad(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln P, double Tolang, double Tol);
	IntAna_IntConicQuad(Macad::Occt::gp_Elips^ E, Macad::Occt::Pln P, double Tolang, double Tol);
	IntAna_IntConicQuad(Macad::Occt::gp_Parab^ Pb, Macad::Occt::Pln P, double Tolang);
	IntAna_IntConicQuad(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pln P, double Tolang);
	IntAna_IntConicQuad(Macad::Occt::IntAna_IntConicQuad^ parameter1);
	void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::IntAna_Quadric^ Q);
	void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::IntAna_Quadric^ Q);
	void Perform(Macad::Occt::gp_Elips^ E, Macad::Occt::IntAna_Quadric^ Q);
	void Perform(Macad::Occt::gp_Parab^ P, Macad::Occt::IntAna_Quadric^ Q);
	void Perform(Macad::Occt::gp_Hypr^ H, Macad::Occt::IntAna_Quadric^ Q);
	void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol, double Len);
	void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol);
	void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang);
	void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln P, double Tolang, double Tol);
	void Perform(Macad::Occt::gp_Elips^ E, Macad::Occt::Pln P, double Tolang, double Tol);
	void Perform(Macad::Occt::gp_Parab^ Pb, Macad::Occt::Pln P, double Tolang);
	void Perform(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pln P, double Tolang);
	bool IsDone();
	bool IsInQuadric();
	bool IsParallel();
	int NbPoints();
	Macad::Occt::Pnt Point(int N);
	double ParamOnConic(int N);
}; // class IntAna_IntConicQuad

//---------------------------------------------------------------------
//  Class  IntAna_IntLinTorus
//---------------------------------------------------------------------
public ref class IntAna_IntLinTorus sealed : public BaseClass<::IntAna_IntLinTorus>
{

#ifdef Include_IntAna_IntLinTorus_h
public:
	Include_IntAna_IntLinTorus_h
#endif

public:
	IntAna_IntLinTorus(::IntAna_IntLinTorus* nativeInstance)
		: BaseClass<::IntAna_IntLinTorus>( nativeInstance, true )
	{}

	IntAna_IntLinTorus(::IntAna_IntLinTorus& nativeInstance)
		: BaseClass<::IntAna_IntLinTorus>( &nativeInstance, false )
	{}

	property ::IntAna_IntLinTorus* NativeInstance
	{
		::IntAna_IntLinTorus* get()
		{
			return static_cast<::IntAna_IntLinTorus*>(_NativeInstance);
		}
	}

public:
	IntAna_IntLinTorus();
	IntAna_IntLinTorus(Macad::Occt::gp_Lin^ L, Macad::Occt::gp_Torus^ T);
	IntAna_IntLinTorus(Macad::Occt::IntAna_IntLinTorus^ parameter1);
	void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::gp_Torus^ T);
	bool IsDone();
	int NbPoints();
	Macad::Occt::Pnt Value(int Index);
	double ParamOnLine(int Index);
	void ParamOnTorus(int Index, double% FI, double% THETA);
}; // class IntAna_IntLinTorus

//---------------------------------------------------------------------
//  Class  IntAna_IntQuadQuad
//---------------------------------------------------------------------
public ref class IntAna_IntQuadQuad sealed : public BaseClass<::IntAna_IntQuadQuad>
{

#ifdef Include_IntAna_IntQuadQuad_h
public:
	Include_IntAna_IntQuadQuad_h
#endif

public:
	IntAna_IntQuadQuad(::IntAna_IntQuadQuad* nativeInstance)
		: BaseClass<::IntAna_IntQuadQuad>( nativeInstance, true )
	{}

	IntAna_IntQuadQuad(::IntAna_IntQuadQuad& nativeInstance)
		: BaseClass<::IntAna_IntQuadQuad>( &nativeInstance, false )
	{}

	property ::IntAna_IntQuadQuad* NativeInstance
	{
		::IntAna_IntQuadQuad* get()
		{
			return static_cast<::IntAna_IntQuadQuad*>(_NativeInstance);
		}
	}

public:
	IntAna_IntQuadQuad();
	IntAna_IntQuadQuad(Macad::Occt::gp_Cylinder^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol);
	IntAna_IntQuadQuad(Macad::Occt::gp_Cone^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol);
	IntAna_IntQuadQuad(Macad::Occt::IntAna_IntQuadQuad^ parameter1);
	void Perform(Macad::Occt::gp_Cylinder^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol);
	void Perform(Macad::Occt::gp_Cone^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol);
	bool IsDone();
	bool IdenticalElements();
	int NbCurve();
	Macad::Occt::IntAna_Curve^ Curve(int N);
	int NbPnt();
	Macad::Occt::Pnt Point(int N);
	void Parameters(int N, double% U1, double% U2);
	bool HasNextCurve(int I);
	int NextCurve(int I, bool% theOpposite);
	bool HasPreviousCurve(int I);
	int PreviousCurve(int I, bool% theOpposite);
}; // class IntAna_IntQuadQuad

//---------------------------------------------------------------------
//  Class  IntAna_QuadQuadGeo
//---------------------------------------------------------------------
public ref class IntAna_QuadQuadGeo sealed : public BaseClass<::IntAna_QuadQuadGeo>
{

#ifdef Include_IntAna_QuadQuadGeo_h
public:
	Include_IntAna_QuadQuadGeo_h
#endif

public:
	IntAna_QuadQuadGeo(::IntAna_QuadQuadGeo* nativeInstance)
		: BaseClass<::IntAna_QuadQuadGeo>( nativeInstance, true )
	{}

	IntAna_QuadQuadGeo(::IntAna_QuadQuadGeo& nativeInstance)
		: BaseClass<::IntAna_QuadQuadGeo>( &nativeInstance, false )
	{}

	property ::IntAna_QuadQuadGeo* NativeInstance
	{
		::IntAna_QuadQuadGeo* get()
		{
			return static_cast<::IntAna_QuadQuadGeo*>(_NativeInstance);
		}
	}

public:
	IntAna_QuadQuadGeo();
	IntAna_QuadQuadGeo(Macad::Occt::Pln P1, Macad::Occt::Pln P2, double TolAng, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol, double H);
	IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Sphere^ S);
	IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cone^ C, double Tolang, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl1, Macad::Occt::gp_Cylinder^ Cyl2, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Sphere^ Sph, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Cone^ Con, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph1, Macad::Occt::gp_Sphere^ Sph2, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Cone^ Con, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Cone^ Con1, Macad::Occt::gp_Cone^ Con2, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::Pln Pln, Macad::Occt::gp_Torus^ Tor, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Torus^ Tor, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Cone^ Con, Macad::Occt::gp_Torus^ Tor, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Torus^ Tor, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::gp_Torus^ Tor1, Macad::Occt::gp_Torus^ Tor2, double Tol);
	IntAna_QuadQuadGeo(Macad::Occt::IntAna_QuadQuadGeo^ parameter1);
	void Perform(Macad::Occt::Pln P1, Macad::Occt::Pln P2, double TolAng, double Tol);
	void Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol, double H);
	void Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol);
	void Perform(Macad::Occt::Pln P, Macad::Occt::gp_Sphere^ S);
	void Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cone^ C, double Tolang, double Tol);
	void Perform(Macad::Occt::gp_Cylinder^ Cyl1, Macad::Occt::gp_Cylinder^ Cyl2, double Tol);
	void Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Sphere^ Sph, double Tol);
	void Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Cone^ Con, double Tol);
	void Perform(Macad::Occt::gp_Sphere^ Sph1, Macad::Occt::gp_Sphere^ Sph2, double Tol);
	void Perform(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Cone^ Con, double Tol);
	void Perform(Macad::Occt::gp_Cone^ Con1, Macad::Occt::gp_Cone^ Con2, double Tol);
	void Perform(Macad::Occt::Pln Pln, Macad::Occt::gp_Torus^ Tor, double Tol);
	void Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Torus^ Tor, double Tol);
	void Perform(Macad::Occt::gp_Cone^ Con, Macad::Occt::gp_Torus^ Tor, double Tol);
	void Perform(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Torus^ Tor, double Tol);
	void Perform(Macad::Occt::gp_Torus^ Tor1, Macad::Occt::gp_Torus^ Tor2, double Tol);
	bool IsDone();
	Macad::Occt::IntAna_ResultType TypeInter();
	int NbSolutions();
	Macad::Occt::Pnt Point(int Num);
	Macad::Occt::gp_Lin^ Line(int Num);
	Macad::Occt::gp_Circ^ Circle(int Num);
	Macad::Occt::gp_Elips^ Ellipse(int Num);
	Macad::Occt::gp_Parab^ Parabola(int Num);
	Macad::Occt::gp_Hypr^ Hyperbola(int Num);
	bool HasCommonGen();
	Macad::Occt::Pnt PChar();
}; // class IntAna_QuadQuadGeo

}; // namespace Occt
}; // namespace Macad
