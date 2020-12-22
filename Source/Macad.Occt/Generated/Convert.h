// Generated wrapper code for package Convert

#pragma once

#include "Convert.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Convert_ParameterisationType
//---------------------------------------------------------------------
public enum class Convert_ParameterisationType
{
	Convert_TgtThetaOver2 = 0,
	Convert_TgtThetaOver2_1 = 1,
	Convert_TgtThetaOver2_2 = 2,
	Convert_TgtThetaOver2_3 = 3,
	Convert_TgtThetaOver2_4 = 4,
	Convert_QuasiAngular = 5,
	Convert_RationalC1 = 6,
	Convert_Polynomial = 7
}; // enum  class Convert_ParameterisationType

//---------------------------------------------------------------------
//  Class  Convert_SequenceOfArray1OfPoles
//---------------------------------------------------------------------
public ref class Convert_SequenceOfArray1OfPoles sealed : public BaseClass<::Convert_SequenceOfArray1OfPoles>
{

#ifdef Include_Convert_SequenceOfArray1OfPoles_h
public:
	Include_Convert_SequenceOfArray1OfPoles_h
#endif

public:
	Convert_SequenceOfArray1OfPoles(::Convert_SequenceOfArray1OfPoles* nativeInstance)
		: BaseClass<::Convert_SequenceOfArray1OfPoles>( nativeInstance, true )
	{}

	Convert_SequenceOfArray1OfPoles(::Convert_SequenceOfArray1OfPoles& nativeInstance)
		: BaseClass<::Convert_SequenceOfArray1OfPoles>( &nativeInstance, false )
	{}

	property ::Convert_SequenceOfArray1OfPoles* NativeInstance
	{
		::Convert_SequenceOfArray1OfPoles* get()
		{
			return static_cast<::Convert_SequenceOfArray1OfPoles*>(_NativeInstance);
		}
	}

public:
	Convert_SequenceOfArray1OfPoles();
	Convert_SequenceOfArray1OfPoles(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Convert_SequenceOfArray1OfPoles(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theOther);
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
	Macad::Occt::Convert_SequenceOfArray1OfPoles^ Assign(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::TColgp_HArray1OfPnt^ theItem);
	void Append(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq);
	void Prepend(Macad::Occt::TColgp_HArray1OfPnt^ theItem);
	void Prepend(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TColgp_HArray1OfPnt theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem);
	void Split(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq);
	Macad::Occt::TColgp_HArray1OfPnt^ First();
	Macad::Occt::TColgp_HArray1OfPnt^ ChangeFirst();
	Macad::Occt::TColgp_HArray1OfPnt^ Last();
	Macad::Occt::TColgp_HArray1OfPnt^ ChangeLast();
	Macad::Occt::TColgp_HArray1OfPnt^ Value(int theIndex);
	Macad::Occt::TColgp_HArray1OfPnt^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem);
}; // class Convert_SequenceOfArray1OfPoles

//---------------------------------------------------------------------
//  Class  Convert_ConicToBSplineCurve
//---------------------------------------------------------------------
public ref class Convert_ConicToBSplineCurve : public BaseClass<::Convert_ConicToBSplineCurve>
{

#ifdef Include_Convert_ConicToBSplineCurve_h
public:
	Include_Convert_ConicToBSplineCurve_h
#endif

protected:
	Convert_ConicToBSplineCurve(InitMode init)
		: BaseClass<::Convert_ConicToBSplineCurve>( init )
	{}

public:
	Convert_ConicToBSplineCurve(::Convert_ConicToBSplineCurve* nativeInstance)
		: BaseClass<::Convert_ConicToBSplineCurve>( nativeInstance, true )
	{}

	Convert_ConicToBSplineCurve(::Convert_ConicToBSplineCurve& nativeInstance)
		: BaseClass<::Convert_ConicToBSplineCurve>( &nativeInstance, false )
	{}

	property ::Convert_ConicToBSplineCurve* NativeInstance
	{
		::Convert_ConicToBSplineCurve* get()
		{
			return static_cast<::Convert_ConicToBSplineCurve*>(_NativeInstance);
		}
	}

public:
	Convert_ConicToBSplineCurve(Macad::Occt::Convert_ConicToBSplineCurve^ parameter1);
	int Degree();
	int NbPoles();
	int NbKnots();
	bool IsPeriodic();
	Macad::Occt::Pnt2d Pole(int Index);
	double Weight(int Index);
	double Knot(int Index);
	int Multiplicity(int Index);
	void BuildCosAndSin(Macad::Occt::Convert_ParameterisationType Parametrisation, Macad::Occt::TColStd_HArray1OfReal^ CosNumerator, Macad::Occt::TColStd_HArray1OfReal^ SinNumerator, Macad::Occt::TColStd_HArray1OfReal^ Denominator, int% Degree, Macad::Occt::TColStd_HArray1OfReal^ Knots, Macad::Occt::TColStd_HArray1OfInteger^ Mults);
	void BuildCosAndSin(Macad::Occt::Convert_ParameterisationType Parametrisation, double UFirst, double ULast, Macad::Occt::TColStd_HArray1OfReal^ CosNumerator, Macad::Occt::TColStd_HArray1OfReal^ SinNumerator, Macad::Occt::TColStd_HArray1OfReal^ Denominator, int% Degree, Macad::Occt::TColStd_HArray1OfReal^ Knots, Macad::Occt::TColStd_HArray1OfInteger^ Mults);
}; // class Convert_ConicToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_CircleToBSplineCurve
//---------------------------------------------------------------------
public ref class Convert_CircleToBSplineCurve sealed : public Macad::Occt::Convert_ConicToBSplineCurve
{

#ifdef Include_Convert_CircleToBSplineCurve_h
public:
	Include_Convert_CircleToBSplineCurve_h
#endif

public:
	Convert_CircleToBSplineCurve(::Convert_CircleToBSplineCurve* nativeInstance)
		: Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
	{}

	Convert_CircleToBSplineCurve(::Convert_CircleToBSplineCurve& nativeInstance)
		: Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
	{}

	property ::Convert_CircleToBSplineCurve* NativeInstance
	{
		::Convert_CircleToBSplineCurve* get()
		{
			return static_cast<::Convert_CircleToBSplineCurve*>(_NativeInstance);
		}
	}

public:
	Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, Macad::Occt::Convert_ParameterisationType Parameterisation);
	Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C);
	Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, double U1, double U2, Macad::Occt::Convert_ParameterisationType Parameterisation);
	Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, double U1, double U2);
	Convert_CircleToBSplineCurve(Macad::Occt::Convert_CircleToBSplineCurve^ parameter1);
}; // class Convert_CircleToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_CompBezierCurves2dToBSplineCurve2d
//---------------------------------------------------------------------
public ref class Convert_CompBezierCurves2dToBSplineCurve2d sealed : public BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>
{

#ifdef Include_Convert_CompBezierCurves2dToBSplineCurve2d_h
public:
	Include_Convert_CompBezierCurves2dToBSplineCurve2d_h
#endif

public:
	Convert_CompBezierCurves2dToBSplineCurve2d(::Convert_CompBezierCurves2dToBSplineCurve2d* nativeInstance)
		: BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>( nativeInstance, true )
	{}

	Convert_CompBezierCurves2dToBSplineCurve2d(::Convert_CompBezierCurves2dToBSplineCurve2d& nativeInstance)
		: BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>( &nativeInstance, false )
	{}

	property ::Convert_CompBezierCurves2dToBSplineCurve2d* NativeInstance
	{
		::Convert_CompBezierCurves2dToBSplineCurve2d* get()
		{
			return static_cast<::Convert_CompBezierCurves2dToBSplineCurve2d*>(_NativeInstance);
		}
	}

public:
	Convert_CompBezierCurves2dToBSplineCurve2d(double AngularTolerance);
	Convert_CompBezierCurves2dToBSplineCurve2d(Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d^ parameter1);
	void AddCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles);
	void Perform();
	int Degree();
	int NbPoles();
	void Poles(Macad::Occt::TColgp_Array1OfPnt2d^ Poles);
	int NbKnots();
	void KnotsAndMults(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
}; // class Convert_CompBezierCurves2dToBSplineCurve2d

//---------------------------------------------------------------------
//  Class  Convert_CompBezierCurvesToBSplineCurve
//---------------------------------------------------------------------
public ref class Convert_CompBezierCurvesToBSplineCurve sealed : public BaseClass<::Convert_CompBezierCurvesToBSplineCurve>
{

#ifdef Include_Convert_CompBezierCurvesToBSplineCurve_h
public:
	Include_Convert_CompBezierCurvesToBSplineCurve_h
#endif

public:
	Convert_CompBezierCurvesToBSplineCurve(::Convert_CompBezierCurvesToBSplineCurve* nativeInstance)
		: BaseClass<::Convert_CompBezierCurvesToBSplineCurve>( nativeInstance, true )
	{}

	Convert_CompBezierCurvesToBSplineCurve(::Convert_CompBezierCurvesToBSplineCurve& nativeInstance)
		: BaseClass<::Convert_CompBezierCurvesToBSplineCurve>( &nativeInstance, false )
	{}

	property ::Convert_CompBezierCurvesToBSplineCurve* NativeInstance
	{
		::Convert_CompBezierCurvesToBSplineCurve* get()
		{
			return static_cast<::Convert_CompBezierCurvesToBSplineCurve*>(_NativeInstance);
		}
	}

public:
	Convert_CompBezierCurvesToBSplineCurve(double AngularTolerance);
	Convert_CompBezierCurvesToBSplineCurve(Macad::Occt::Convert_CompBezierCurvesToBSplineCurve^ parameter1);
	void AddCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles);
	void Perform();
	int Degree();
	int NbPoles();
	void Poles(Macad::Occt::TColgp_Array1OfPnt^ Poles);
	int NbKnots();
	void KnotsAndMults(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
}; // class Convert_CompBezierCurvesToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_CompPolynomialToPoles
//---------------------------------------------------------------------
public ref class Convert_CompPolynomialToPoles sealed : public BaseClass<::Convert_CompPolynomialToPoles>
{

#ifdef Include_Convert_CompPolynomialToPoles_h
public:
	Include_Convert_CompPolynomialToPoles_h
#endif

public:
	Convert_CompPolynomialToPoles(::Convert_CompPolynomialToPoles* nativeInstance)
		: BaseClass<::Convert_CompPolynomialToPoles>( nativeInstance, true )
	{}

	Convert_CompPolynomialToPoles(::Convert_CompPolynomialToPoles& nativeInstance)
		: BaseClass<::Convert_CompPolynomialToPoles>( &nativeInstance, false )
	{}

	property ::Convert_CompPolynomialToPoles* NativeInstance
	{
		::Convert_CompPolynomialToPoles* get()
		{
			return static_cast<::Convert_CompPolynomialToPoles*>(_NativeInstance);
		}
	}

public:
	Convert_CompPolynomialToPoles(int NumCurves, int Continuity, int Dimension, int MaxDegree, Macad::Occt::TColStd_HArray1OfInteger^ NumCoeffPerCurve, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray2OfReal^ PolynomialIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueIntervals);
	Convert_CompPolynomialToPoles(int NumCurves, int Dimension, int MaxDegree, Macad::Occt::TColStd_Array1OfInteger^ Continuity, Macad::Occt::TColStd_Array1OfInteger^ NumCoeffPerCurve, Macad::Occt::TColStd_Array1OfReal^ Coefficients, Macad::Occt::TColStd_Array2OfReal^ PolynomialIntervals, Macad::Occt::TColStd_Array1OfReal^ TrueIntervals);
	Convert_CompPolynomialToPoles(int Dimension, int MaxDegree, int Degree, Macad::Occt::TColStd_Array1OfReal^ Coefficients, Macad::Occt::TColStd_Array1OfReal^ PolynomialIntervals, Macad::Occt::TColStd_Array1OfReal^ TrueIntervals);
	Convert_CompPolynomialToPoles(Macad::Occt::Convert_CompPolynomialToPoles^ parameter1);
	int NbPoles();
	void Poles(Macad::Occt::TColStd_HArray2OfReal^ Poles);
	int Degree();
	int NbKnots();
	void Knots(Macad::Occt::TColStd_HArray1OfReal^ K);
	void Multiplicities(Macad::Occt::TColStd_HArray1OfInteger^ M);
	bool IsDone();
}; // class Convert_CompPolynomialToPoles

//---------------------------------------------------------------------
//  Class  Convert_ElementarySurfaceToBSplineSurface
//---------------------------------------------------------------------
public ref class Convert_ElementarySurfaceToBSplineSurface : public BaseClass<::Convert_ElementarySurfaceToBSplineSurface>
{

#ifdef Include_Convert_ElementarySurfaceToBSplineSurface_h
public:
	Include_Convert_ElementarySurfaceToBSplineSurface_h
#endif

protected:
	Convert_ElementarySurfaceToBSplineSurface(InitMode init)
		: BaseClass<::Convert_ElementarySurfaceToBSplineSurface>( init )
	{}

public:
	Convert_ElementarySurfaceToBSplineSurface(::Convert_ElementarySurfaceToBSplineSurface* nativeInstance)
		: BaseClass<::Convert_ElementarySurfaceToBSplineSurface>( nativeInstance, true )
	{}

	Convert_ElementarySurfaceToBSplineSurface(::Convert_ElementarySurfaceToBSplineSurface& nativeInstance)
		: BaseClass<::Convert_ElementarySurfaceToBSplineSurface>( &nativeInstance, false )
	{}

	property ::Convert_ElementarySurfaceToBSplineSurface* NativeInstance
	{
		::Convert_ElementarySurfaceToBSplineSurface* get()
		{
			return static_cast<::Convert_ElementarySurfaceToBSplineSurface*>(_NativeInstance);
		}
	}

public:
	Convert_ElementarySurfaceToBSplineSurface(Macad::Occt::Convert_ElementarySurfaceToBSplineSurface^ parameter1);
	int UDegree();
	int VDegree();
	int NbUPoles();
	int NbVPoles();
	int NbUKnots();
	int NbVKnots();
	bool IsUPeriodic();
	bool IsVPeriodic();
	Macad::Occt::Pnt Pole(int UIndex, int VIndex);
	double Weight(int UIndex, int VIndex);
	double UKnot(int UIndex);
	double VKnot(int UIndex);
	int UMultiplicity(int UIndex);
	int VMultiplicity(int VIndex);
}; // class Convert_ElementarySurfaceToBSplineSurface

//---------------------------------------------------------------------
//  Class  Convert_ConeToBSplineSurface
//---------------------------------------------------------------------
public ref class Convert_ConeToBSplineSurface sealed : public Macad::Occt::Convert_ElementarySurfaceToBSplineSurface
{

#ifdef Include_Convert_ConeToBSplineSurface_h
public:
	Include_Convert_ConeToBSplineSurface_h
#endif

public:
	Convert_ConeToBSplineSurface(::Convert_ConeToBSplineSurface* nativeInstance)
		: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
	{}

	Convert_ConeToBSplineSurface(::Convert_ConeToBSplineSurface& nativeInstance)
		: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
	{}

	property ::Convert_ConeToBSplineSurface* NativeInstance
	{
		::Convert_ConeToBSplineSurface* get()
		{
			return static_cast<::Convert_ConeToBSplineSurface*>(_NativeInstance);
		}
	}

public:
	Convert_ConeToBSplineSurface(Macad::Occt::gp_Cone^ C, double U1, double U2, double V1, double V2);
	Convert_ConeToBSplineSurface(Macad::Occt::gp_Cone^ C, double V1, double V2);
	Convert_ConeToBSplineSurface(Macad::Occt::Convert_ConeToBSplineSurface^ parameter1);
}; // class Convert_ConeToBSplineSurface

//---------------------------------------------------------------------
//  Class  Convert_CylinderToBSplineSurface
//---------------------------------------------------------------------
public ref class Convert_CylinderToBSplineSurface sealed : public Macad::Occt::Convert_ElementarySurfaceToBSplineSurface
{

#ifdef Include_Convert_CylinderToBSplineSurface_h
public:
	Include_Convert_CylinderToBSplineSurface_h
#endif

public:
	Convert_CylinderToBSplineSurface(::Convert_CylinderToBSplineSurface* nativeInstance)
		: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
	{}

	Convert_CylinderToBSplineSurface(::Convert_CylinderToBSplineSurface& nativeInstance)
		: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
	{}

	property ::Convert_CylinderToBSplineSurface* NativeInstance
	{
		::Convert_CylinderToBSplineSurface* get()
		{
			return static_cast<::Convert_CylinderToBSplineSurface*>(_NativeInstance);
		}
	}

public:
	Convert_CylinderToBSplineSurface(Macad::Occt::gp_Cylinder^ Cyl, double U1, double U2, double V1, double V2);
	Convert_CylinderToBSplineSurface(Macad::Occt::gp_Cylinder^ Cyl, double V1, double V2);
	Convert_CylinderToBSplineSurface(Macad::Occt::Convert_CylinderToBSplineSurface^ parameter1);
}; // class Convert_CylinderToBSplineSurface

//---------------------------------------------------------------------
//  Class  Convert_EllipseToBSplineCurve
//---------------------------------------------------------------------
public ref class Convert_EllipseToBSplineCurve sealed : public Macad::Occt::Convert_ConicToBSplineCurve
{

#ifdef Include_Convert_EllipseToBSplineCurve_h
public:
	Include_Convert_EllipseToBSplineCurve_h
#endif

public:
	Convert_EllipseToBSplineCurve(::Convert_EllipseToBSplineCurve* nativeInstance)
		: Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
	{}

	Convert_EllipseToBSplineCurve(::Convert_EllipseToBSplineCurve& nativeInstance)
		: Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
	{}

	property ::Convert_EllipseToBSplineCurve* NativeInstance
	{
		::Convert_EllipseToBSplineCurve* get()
		{
			return static_cast<::Convert_EllipseToBSplineCurve*>(_NativeInstance);
		}
	}

public:
	Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, Macad::Occt::Convert_ParameterisationType Parameterisation);
	Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E);
	Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, double U1, double U2, Macad::Occt::Convert_ParameterisationType Parameterisation);
	Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, double U1, double U2);
	Convert_EllipseToBSplineCurve(Macad::Occt::Convert_EllipseToBSplineCurve^ parameter1);
}; // class Convert_EllipseToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_GridPolynomialToPoles
//---------------------------------------------------------------------
public ref class Convert_GridPolynomialToPoles sealed : public BaseClass<::Convert_GridPolynomialToPoles>
{

#ifdef Include_Convert_GridPolynomialToPoles_h
public:
	Include_Convert_GridPolynomialToPoles_h
#endif

public:
	Convert_GridPolynomialToPoles(::Convert_GridPolynomialToPoles* nativeInstance)
		: BaseClass<::Convert_GridPolynomialToPoles>( nativeInstance, true )
	{}

	Convert_GridPolynomialToPoles(::Convert_GridPolynomialToPoles& nativeInstance)
		: BaseClass<::Convert_GridPolynomialToPoles>( &nativeInstance, false )
	{}

	property ::Convert_GridPolynomialToPoles* NativeInstance
	{
		::Convert_GridPolynomialToPoles* get()
		{
			return static_cast<::Convert_GridPolynomialToPoles*>(_NativeInstance);
		}
	}

public:
	Convert_GridPolynomialToPoles(int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray1OfInteger^ NumCoeff, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals);
	Convert_GridPolynomialToPoles(int NbUSurfaces, int NBVSurfaces, int UContinuity, int VContinuity, int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray2OfInteger^ NumCoeffPerSurface, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueUIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueVIntervals);
	Convert_GridPolynomialToPoles(Macad::Occt::Convert_GridPolynomialToPoles^ parameter1);
	void Perform(int UContinuity, int VContinuity, int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray2OfInteger^ NumCoeffPerSurface, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueUIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueVIntervals);
	int NbUPoles();
	int NbVPoles();
	Macad::Occt::TColgp_HArray2OfPnt^ Poles();
	int UDegree();
	int VDegree();
	int NbUKnots();
	int NbVKnots();
	Macad::Occt::TColStd_HArray1OfReal^ UKnots();
	Macad::Occt::TColStd_HArray1OfReal^ VKnots();
	Macad::Occt::TColStd_HArray1OfInteger^ UMultiplicities();
	Macad::Occt::TColStd_HArray1OfInteger^ VMultiplicities();
	bool IsDone();
}; // class Convert_GridPolynomialToPoles

//---------------------------------------------------------------------
//  Class  Convert_HyperbolaToBSplineCurve
//---------------------------------------------------------------------
public ref class Convert_HyperbolaToBSplineCurve sealed : public Macad::Occt::Convert_ConicToBSplineCurve
{

#ifdef Include_Convert_HyperbolaToBSplineCurve_h
public:
	Include_Convert_HyperbolaToBSplineCurve_h
#endif

public:
	Convert_HyperbolaToBSplineCurve(::Convert_HyperbolaToBSplineCurve* nativeInstance)
		: Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
	{}

	Convert_HyperbolaToBSplineCurve(::Convert_HyperbolaToBSplineCurve& nativeInstance)
		: Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
	{}

	property ::Convert_HyperbolaToBSplineCurve* NativeInstance
	{
		::Convert_HyperbolaToBSplineCurve* get()
		{
			return static_cast<::Convert_HyperbolaToBSplineCurve*>(_NativeInstance);
		}
	}

public:
	Convert_HyperbolaToBSplineCurve(Macad::Occt::gp_Hypr2d^ H, double U1, double U2);
	Convert_HyperbolaToBSplineCurve(Macad::Occt::Convert_HyperbolaToBSplineCurve^ parameter1);
}; // class Convert_HyperbolaToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_ParabolaToBSplineCurve
//---------------------------------------------------------------------
public ref class Convert_ParabolaToBSplineCurve sealed : public Macad::Occt::Convert_ConicToBSplineCurve
{

#ifdef Include_Convert_ParabolaToBSplineCurve_h
public:
	Include_Convert_ParabolaToBSplineCurve_h
#endif

public:
	Convert_ParabolaToBSplineCurve(::Convert_ParabolaToBSplineCurve* nativeInstance)
		: Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
	{}

	Convert_ParabolaToBSplineCurve(::Convert_ParabolaToBSplineCurve& nativeInstance)
		: Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
	{}

	property ::Convert_ParabolaToBSplineCurve* NativeInstance
	{
		::Convert_ParabolaToBSplineCurve* get()
		{
			return static_cast<::Convert_ParabolaToBSplineCurve*>(_NativeInstance);
		}
	}

public:
	Convert_ParabolaToBSplineCurve(Macad::Occt::gp_Parab2d^ Prb, double U1, double U2);
	Convert_ParabolaToBSplineCurve(Macad::Occt::Convert_ParabolaToBSplineCurve^ parameter1);
}; // class Convert_ParabolaToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_SphereToBSplineSurface
//---------------------------------------------------------------------
public ref class Convert_SphereToBSplineSurface sealed : public Macad::Occt::Convert_ElementarySurfaceToBSplineSurface
{

#ifdef Include_Convert_SphereToBSplineSurface_h
public:
	Include_Convert_SphereToBSplineSurface_h
#endif

public:
	Convert_SphereToBSplineSurface(::Convert_SphereToBSplineSurface* nativeInstance)
		: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
	{}

	Convert_SphereToBSplineSurface(::Convert_SphereToBSplineSurface& nativeInstance)
		: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
	{}

	property ::Convert_SphereToBSplineSurface* NativeInstance
	{
		::Convert_SphereToBSplineSurface* get()
		{
			return static_cast<::Convert_SphereToBSplineSurface*>(_NativeInstance);
		}
	}

public:
	Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double U1, double U2, double V1, double V2);
	Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double Param1, double Param2, bool UTrim);
	Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double Param1, double Param2);
	Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph);
	Convert_SphereToBSplineSurface(Macad::Occt::Convert_SphereToBSplineSurface^ parameter1);
}; // class Convert_SphereToBSplineSurface

//---------------------------------------------------------------------
//  Class  Convert_TorusToBSplineSurface
//---------------------------------------------------------------------
public ref class Convert_TorusToBSplineSurface sealed : public Macad::Occt::Convert_ElementarySurfaceToBSplineSurface
{

#ifdef Include_Convert_TorusToBSplineSurface_h
public:
	Include_Convert_TorusToBSplineSurface_h
#endif

public:
	Convert_TorusToBSplineSurface(::Convert_TorusToBSplineSurface* nativeInstance)
		: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
	{}

	Convert_TorusToBSplineSurface(::Convert_TorusToBSplineSurface& nativeInstance)
		: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
	{}

	property ::Convert_TorusToBSplineSurface* NativeInstance
	{
		::Convert_TorusToBSplineSurface* get()
		{
			return static_cast<::Convert_TorusToBSplineSurface*>(_NativeInstance);
		}
	}

public:
	Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double U1, double U2, double V1, double V2);
	Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double Param1, double Param2, bool UTrim);
	Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double Param1, double Param2);
	Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T);
	Convert_TorusToBSplineSurface(Macad::Occt::Convert_TorusToBSplineSurface^ parameter1);
}; // class Convert_TorusToBSplineSurface

}; // namespace Occt
}; // namespace Macad
