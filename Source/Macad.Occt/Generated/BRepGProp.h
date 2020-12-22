// Generated wrapper code for package BRepGProp

#pragma once

#include "GProp.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepGProp_EdgeTool
//---------------------------------------------------------------------
public ref class BRepGProp_EdgeTool sealed : public BaseClass<::BRepGProp_EdgeTool>
{

#ifdef Include_BRepGProp_EdgeTool_h
public:
	Include_BRepGProp_EdgeTool_h
#endif

public:
	BRepGProp_EdgeTool(::BRepGProp_EdgeTool* nativeInstance)
		: BaseClass<::BRepGProp_EdgeTool>( nativeInstance, true )
	{}

	BRepGProp_EdgeTool(::BRepGProp_EdgeTool& nativeInstance)
		: BaseClass<::BRepGProp_EdgeTool>( &nativeInstance, false )
	{}

	property ::BRepGProp_EdgeTool* NativeInstance
	{
		::BRepGProp_EdgeTool* get()
		{
			return static_cast<::BRepGProp_EdgeTool*>(_NativeInstance);
		}
	}

public:
	BRepGProp_EdgeTool();
	BRepGProp_EdgeTool(Macad::Occt::BRepGProp_EdgeTool^ parameter1);
	static double FirstParameter(Macad::Occt::BRepAdaptor_Curve^ C);
	static double LastParameter(Macad::Occt::BRepAdaptor_Curve^ C);
	static int IntegrationOrder(Macad::Occt::BRepAdaptor_Curve^ C);
	static Macad::Occt::Pnt Value(Macad::Occt::BRepAdaptor_Curve^ C, double U);
	static void D1(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static int NbIntervals(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::GeomAbs_Shape S);
	static void Intervals(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
}; // class BRepGProp_EdgeTool

//---------------------------------------------------------------------
//  Class  BRepGProp_Face
//---------------------------------------------------------------------
public ref class BRepGProp_Face sealed : public BaseClass<::BRepGProp_Face>
{

#ifdef Include_BRepGProp_Face_h
public:
	Include_BRepGProp_Face_h
#endif

public:
	BRepGProp_Face(::BRepGProp_Face* nativeInstance)
		: BaseClass<::BRepGProp_Face>( nativeInstance, true )
	{}

	BRepGProp_Face(::BRepGProp_Face& nativeInstance)
		: BaseClass<::BRepGProp_Face>( &nativeInstance, false )
	{}

	property ::BRepGProp_Face* NativeInstance
	{
		::BRepGProp_Face* get()
		{
			return static_cast<::BRepGProp_Face*>(_NativeInstance);
		}
	}

public:
	BRepGProp_Face(bool IsUseSpan);
	BRepGProp_Face(Macad::Occt::TopoDS_Face^ F, bool IsUseSpan);
	BRepGProp_Face(Macad::Occt::TopoDS_Face^ F);
	BRepGProp_Face(Macad::Occt::BRepGProp_Face^ parameter1);
	void Load(Macad::Occt::TopoDS_Face^ F);
	int VIntegrationOrder();
	bool NaturalRestriction();
	Macad::Occt::TopoDS_Face^ GetFace();
	Macad::Occt::Pnt2d Value2d(double U);
	int SIntOrder(double Eps);
	int SVIntSubs();
	int SUIntSubs();
	void UKnots(Macad::Occt::TColStd_Array1OfReal^ Knots);
	void VKnots(Macad::Occt::TColStd_Array1OfReal^ Knots);
	int LIntOrder(double Eps);
	int LIntSubs();
	void LKnots(Macad::Occt::TColStd_Array1OfReal^ Knots);
	int UIntegrationOrder();
	void Bounds(double% U1, double% U2, double% V1, double% V2);
	void Normal(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% VNor);
	bool Load(Macad::Occt::TopoDS_Edge^ E);
	double FirstParameter();
	double LastParameter();
	int IntegrationOrder();
	void D12d(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	void Load(bool IsFirstParam, Macad::Occt::GeomAbs_IsoType theIsoType);
	void GetUKnots(double theUMin, double theUMax, Macad::Occt::TColStd_HArray1OfReal^ theUKnots);
	void GetTKnots(double theTMin, double theTMax, Macad::Occt::TColStd_HArray1OfReal^ theTKnots);
}; // class BRepGProp_Face

//---------------------------------------------------------------------
//  Class  BRepGProp_Domain
//---------------------------------------------------------------------
public ref class BRepGProp_Domain sealed : public BaseClass<::BRepGProp_Domain>
{

#ifdef Include_BRepGProp_Domain_h
public:
	Include_BRepGProp_Domain_h
#endif

public:
	BRepGProp_Domain(::BRepGProp_Domain* nativeInstance)
		: BaseClass<::BRepGProp_Domain>( nativeInstance, true )
	{}

	BRepGProp_Domain(::BRepGProp_Domain& nativeInstance)
		: BaseClass<::BRepGProp_Domain>( &nativeInstance, false )
	{}

	property ::BRepGProp_Domain* NativeInstance
	{
		::BRepGProp_Domain* get()
		{
			return static_cast<::BRepGProp_Domain*>(_NativeInstance);
		}
	}

public:
	BRepGProp_Domain();
	BRepGProp_Domain(Macad::Occt::TopoDS_Face^ F);
	BRepGProp_Domain(Macad::Occt::BRepGProp_Domain^ parameter1);
	void Init(Macad::Occt::TopoDS_Face^ F);
	bool More();
	void Init();
	Macad::Occt::TopoDS_Edge^ Value();
	void Next();
}; // class BRepGProp_Domain

//---------------------------------------------------------------------
//  Class  BRepGProp_Cinert
//---------------------------------------------------------------------
public ref class BRepGProp_Cinert sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_Cinert_h
public:
	Include_BRepGProp_Cinert_h
#endif

public:
	BRepGProp_Cinert(::BRepGProp_Cinert* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	BRepGProp_Cinert(::BRepGProp_Cinert& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::BRepGProp_Cinert* NativeInstance
	{
		::BRepGProp_Cinert* get()
		{
			return static_cast<::BRepGProp_Cinert*>(_NativeInstance);
		}
	}

public:
	BRepGProp_Cinert();
	BRepGProp_Cinert(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::Pnt CLocation);
	BRepGProp_Cinert(Macad::Occt::BRepGProp_Cinert^ parameter1);
	void SetLocation(Macad::Occt::Pnt CLocation);
	void Perform(Macad::Occt::BRepAdaptor_Curve^ C);
}; // class BRepGProp_Cinert

//---------------------------------------------------------------------
//  Class  BRepGProp_Sinert
//---------------------------------------------------------------------
public ref class BRepGProp_Sinert sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_Sinert_h
public:
	Include_BRepGProp_Sinert_h
#endif

public:
	BRepGProp_Sinert(::BRepGProp_Sinert* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	BRepGProp_Sinert(::BRepGProp_Sinert& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::BRepGProp_Sinert* NativeInstance
	{
		::BRepGProp_Sinert* get()
		{
			return static_cast<::BRepGProp_Sinert*>(_NativeInstance);
		}
	}

public:
	BRepGProp_Sinert();
	BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt SLocation);
	BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt SLocation);
	BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt SLocation, double Eps);
	BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt SLocation, double Eps);
	BRepGProp_Sinert(Macad::Occt::BRepGProp_Sinert^ parameter1);
	void SetLocation(Macad::Occt::Pnt SLocation);
	void Perform(Macad::Occt::BRepGProp_Face^ S);
	void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D);
	double Perform(Macad::Occt::BRepGProp_Face^ S, double Eps);
	double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, double Eps);
	double GetEpsilon();
}; // class BRepGProp_Sinert

//---------------------------------------------------------------------
//  Class  BRepGProp_Vinert
//---------------------------------------------------------------------
public ref class BRepGProp_Vinert sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_Vinert_h
public:
	Include_BRepGProp_Vinert_h
#endif

public:
	BRepGProp_Vinert(::BRepGProp_Vinert* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	BRepGProp_Vinert(::BRepGProp_Vinert& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::BRepGProp_Vinert* NativeInstance
	{
		::BRepGProp_Vinert* get()
		{
			return static_cast<::BRepGProp_Vinert*>(_NativeInstance);
		}
	}

public:
	BRepGProp_Vinert();
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt VLocation);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt VLocation, double Eps);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation, double Eps);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation, double Eps);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt VLocation);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt VLocation, double Eps);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation, double Eps);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation, double Eps);
	BRepGProp_Vinert(Macad::Occt::BRepGProp_Vinert^ parameter1);
	void SetLocation(Macad::Occt::Pnt VLocation);
	void Perform(Macad::Occt::BRepGProp_Face^ S);
	double Perform(Macad::Occt::BRepGProp_Face^ S, double Eps);
	void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O);
	double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, double Eps);
	void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl);
	double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, double Eps);
	void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D);
	double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, double Eps);
	void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O);
	double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, double Eps);
	void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl);
	double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, double Eps);
	double GetEpsilon();
}; // class BRepGProp_Vinert

//---------------------------------------------------------------------
//  Class  BRepGProp_VinertGK
//---------------------------------------------------------------------
public ref class BRepGProp_VinertGK sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_VinertGK_h
public:
	Include_BRepGProp_VinertGK_h
#endif

public:
	BRepGProp_VinertGK(::BRepGProp_VinertGK* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	BRepGProp_VinertGK(::BRepGProp_VinertGK& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::BRepGProp_VinertGK* NativeInstance
	{
		::BRepGProp_VinertGK* get()
		{
			return static_cast<::BRepGProp_VinertGK*>(_NativeInstance);
		}
	}

public:
	BRepGProp_VinertGK();
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation);
	BRepGProp_VinertGK(Macad::Occt::BRepGProp_VinertGK^ parameter1);
	void SetLocation(Macad::Occt::Pnt theLocation);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag, bool theIFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag, bool theIFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance);
	double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane);
	double GetErrorReached();
	double GetAbsolutError();
}; // class BRepGProp_VinertGK

//---------------------------------------------------------------------
//  Class  BRepGProp
//---------------------------------------------------------------------
public ref class BRepGProp sealed : public BaseClass<::BRepGProp>
{

#ifdef Include_BRepGProp_h
public:
	Include_BRepGProp_h
#endif

public:
	BRepGProp(::BRepGProp* nativeInstance)
		: BaseClass<::BRepGProp>( nativeInstance, true )
	{}

	BRepGProp(::BRepGProp& nativeInstance)
		: BaseClass<::BRepGProp>( &nativeInstance, false )
	{}

	property ::BRepGProp* NativeInstance
	{
		::BRepGProp* get()
		{
			return static_cast<::BRepGProp*>(_NativeInstance);
		}
	}

public:
	BRepGProp();
	BRepGProp(Macad::Occt::BRepGProp^ parameter1);
	static void LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps, bool SkipShared, bool UseTriangulation);
	static void LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps, bool SkipShared);
	static void LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps);
	static void SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, bool SkipShared, bool UseTriangulation);
	static void SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, bool SkipShared);
	static void SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps);
	static double SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, double Eps, bool SkipShared);
	static double SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, double Eps);
	static void VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed, bool SkipShared, bool UseTriangulation);
	static void VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed, bool SkipShared);
	static void VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed);
	static void VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps);
	static double VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool SkipShared);
	static double VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed);
	static double VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps);
	static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln);
}; // class BRepGProp

//---------------------------------------------------------------------
//  Class  BRepGProp_Gauss
//---------------------------------------------------------------------
public ref class BRepGProp_Gauss sealed : public BaseClass<::BRepGProp_Gauss>
{

#ifdef Include_BRepGProp_Gauss_h
public:
	Include_BRepGProp_Gauss_h
#endif

public:
	BRepGProp_Gauss(::BRepGProp_Gauss* nativeInstance)
		: BaseClass<::BRepGProp_Gauss>( nativeInstance, true )
	{}

	BRepGProp_Gauss(::BRepGProp_Gauss& nativeInstance)
		: BaseClass<::BRepGProp_Gauss>( &nativeInstance, false )
	{}

	property ::BRepGProp_Gauss* NativeInstance
	{
		::BRepGProp_Gauss* get()
		{
			return static_cast<::BRepGProp_Gauss*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  BRepGProp_GaussType
	//---------------------------------------------------------------------
	enum class BRepGProp_GaussType
	{
		Vinert = 0,
		Sinert = 1
	}; // enum  class BRepGProp_GaussType

	BRepGProp_Gauss(Macad::Occt::BRepGProp_Gauss::BRepGProp_GaussType theType);
}; // class BRepGProp_Gauss

//---------------------------------------------------------------------
//  Class  BRepGProp_MeshCinert
//---------------------------------------------------------------------
public ref class BRepGProp_MeshCinert sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_MeshCinert_h
public:
	Include_BRepGProp_MeshCinert_h
#endif

public:
	BRepGProp_MeshCinert(::BRepGProp_MeshCinert* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	BRepGProp_MeshCinert(::BRepGProp_MeshCinert& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::BRepGProp_MeshCinert* NativeInstance
	{
		::BRepGProp_MeshCinert* get()
		{
			return static_cast<::BRepGProp_MeshCinert*>(_NativeInstance);
		}
	}

public:
	BRepGProp_MeshCinert();
	BRepGProp_MeshCinert(Macad::Occt::BRepGProp_MeshCinert^ parameter1);
	void SetLocation(Macad::Occt::Pnt CLocation);
	void Perform(Macad::Occt::TColgp_Array1OfPnt^ theNodes);
	static void PreparePolygon(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TColgp_HArray1OfPnt^ thePolyg);
}; // class BRepGProp_MeshCinert

//---------------------------------------------------------------------
//  Class  BRepGProp_MeshProps
//---------------------------------------------------------------------
public ref class BRepGProp_MeshProps sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_MeshProps_h
public:
	Include_BRepGProp_MeshProps_h
#endif

public:
	BRepGProp_MeshProps(::BRepGProp_MeshProps* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	BRepGProp_MeshProps(::BRepGProp_MeshProps& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::BRepGProp_MeshProps* NativeInstance
	{
		::BRepGProp_MeshProps* get()
		{
			return static_cast<::BRepGProp_MeshProps*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  BRepGProp_MeshObjType
	//---------------------------------------------------------------------
	enum class BRepGProp_MeshObjType
	{
		Vinert = 0,
		Sinert = 1
	}; // enum  class BRepGProp_MeshObjType

	BRepGProp_MeshProps(Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType theType);
	BRepGProp_MeshProps(Macad::Occt::BRepGProp_MeshProps^ parameter1);
	void SetLocation(Macad::Occt::Pnt theLocation);
	/* Method skipped due to unknown mapping: void Perform(Poly_Triangulation theMesh, TopLoc_Location theLoc, TopAbs_Orientation theOri, ) */
	/* Method skipped due to unknown mapping: void Perform(TColgp_Array1OfPnt theNodes, Poly_Array1OfTriangle theTriangles, TopAbs_Orientation theOri, ) */
	static void CalculateProps(Macad::Occt::Pnt p1, Macad::Occt::Pnt p2, Macad::Occt::Pnt p3, Macad::Occt::Pnt Apex, bool isVolume, double% GProps, int NbGaussPoints, double GaussPnts);
	Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType GetMeshObjType();
}; // class BRepGProp_MeshProps

}; // namespace Occt
}; // namespace Macad
