// Generated wrapper code for package Extrema

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Extrema_POnCurv
//---------------------------------------------------------------------
public ref class Extrema_POnCurv sealed : public BaseClass<::Extrema_POnCurv>
{

#ifdef Include_Extrema_POnCurv_h
public:
	Include_Extrema_POnCurv_h
#endif

public:
	Extrema_POnCurv(::Extrema_POnCurv* nativeInstance)
		: BaseClass<::Extrema_POnCurv>( nativeInstance, true )
	{}

	Extrema_POnCurv(::Extrema_POnCurv& nativeInstance)
		: BaseClass<::Extrema_POnCurv>( &nativeInstance, false )
	{}

	property ::Extrema_POnCurv* NativeInstance
	{
		::Extrema_POnCurv* get()
		{
			return static_cast<::Extrema_POnCurv*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Creation of an indefinite point on curve.
	/// </summary>
	Extrema_POnCurv();
	/// <summary>
	/// Creation of a point on curve with a parameter
	/// value on the curve and a Pnt from gp.
	/// </summary>
	Extrema_POnCurv(double U, Macad::Occt::Pnt P);
	Extrema_POnCurv(Macad::Occt::Extrema_POnCurv^ parameter1);
	/// <summary>
	/// sets the point and parameter values.
	/// </summary>
	void SetValues(double U, Macad::Occt::Pnt P);
	/// <summary>
	/// Returns the point.
	/// </summary>
	Macad::Occt::Pnt Value();
	/// <summary>
	/// Returns the parameter on the curve.
	/// </summary>
	double Parameter();
}; // class Extrema_POnCurv

//---------------------------------------------------------------------
//  Class  Extrema_ExtPC
//---------------------------------------------------------------------
public ref class Extrema_ExtPC sealed : public BaseClass<::Extrema_ExtPC>
{

#ifdef Include_Extrema_ExtPC_h
public:
	Include_Extrema_ExtPC_h
#endif

public:
	Extrema_ExtPC(::Extrema_ExtPC* nativeInstance)
		: BaseClass<::Extrema_ExtPC>( nativeInstance, true )
	{}

	Extrema_ExtPC(::Extrema_ExtPC& nativeInstance)
		: BaseClass<::Extrema_ExtPC>( &nativeInstance, false )
	{}

	property ::Extrema_ExtPC* NativeInstance
	{
		::Extrema_ExtPC* get()
		{
			return static_cast<::Extrema_ExtPC*>(_NativeInstance);
		}
	}

public:
	Extrema_ExtPC();
	/// <summary>
	/// It calculates all the distances.
	/// The function F(u)=distance(P,C(u)) has an extremum
	/// when g(u)=dF/du=0. The algorithm searches all the
	/// zeros inside the definition range of the curve.
	/// Zeros are searched between uinf and usup.
	/// Tol  is used to decide to stop the
	/// iterations according to the following condition:
	/// if n is the number of iterations,
	/// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
	/// </summary>
	Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
	/// <summary>
	/// It calculates all the distances.
	/// The function F(u)=distance(P,C(u)) has an extremum
	/// when g(u)=dF/du=0. The algorithm searches all the
	/// zeros inside the definition range of the curve.
	/// Zeros are searched between uinf and usup.
	/// Tol  is used to decide to stop the
	/// iterations according to the following condition:
	/// if n is the number of iterations,
	/// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
	/// </summary>
	Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
	/// <summary>
	/// It calculates all the distances.
	/// The function F(u)=distance(P,C(u)) has an extremum
	/// when g(u)=dF/du=0. The algorithm searches all the
	/// zeros inside the definition range of the curve.
	/// Tol is used to decide to stop the
	/// iterations according to the following condition:
	/// if n is the number of iterations,
	/// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
	/// </summary>
	Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double TolF);
	/// <summary>
	/// It calculates all the distances.
	/// The function F(u)=distance(P,C(u)) has an extremum
	/// when g(u)=dF/du=0. The algorithm searches all the
	/// zeros inside the definition range of the curve.
	/// Tol is used to decide to stop the
	/// iterations according to the following condition:
	/// if n is the number of iterations,
	/// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
	/// </summary>
	Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C);
	Extrema_ExtPC(Macad::Occt::Extrema_ExtPC^ parameter1);
	/// <summary>
	/// initializes the fields of the algorithm.
	/// </summary>
	void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
	/// <summary>
	/// initializes the fields of the algorithm.
	/// </summary>
	void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
	/// <summary>
	/// An exception is raised if the fields have not been
	/// initialized.
	/// </summary>
	void Perform(Macad::Occt::Pnt P);
	/// <summary>
	/// True if the distances are found.
	/// </summary>
	bool IsDone();
	/// <summary>
	/// Returns the value of the <N>th extremum square distance.
	/// </summary>
	double SquareDistance(int N);
	/// <summary>
	/// Returns the number of extremum distances.
	/// </summary>
	int NbExt();
	/// <summary>
	/// Returns True if the <N>th extremum distance is a
	/// minimum.
	/// </summary>
	bool IsMin(int N);
	/// <summary>
	/// Returns the point of the <N>th extremum distance.
	/// </summary>
	Macad::Occt::Extrema_POnCurv^ Point(int N);
	/// <summary>
	/// if the curve is a trimmed curve,
	/// dist1 is a square distance between <P> and the point
	/// of parameter FirstParameter <P1> and
	/// dist2 is a square distance between <P> and the point
	/// of parameter LastParameter <P2>.
	/// </summary>
	void TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
}; // class Extrema_ExtPC

}; // namespace Occt
}; // namespace Macad
