// Generated wrapper code for package BRepLProp

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepLProp
//---------------------------------------------------------------------
public ref class BRepLProp sealed : public BaseClass<::BRepLProp>
{

#ifdef Include_BRepLProp_h
public:
	Include_BRepLProp_h
#endif

public:
	BRepLProp(::BRepLProp* nativeInstance)
		: BaseClass<::BRepLProp>( nativeInstance, true )
	{}

	BRepLProp(::BRepLProp& nativeInstance)
		: BaseClass<::BRepLProp>( &nativeInstance, false )
	{}

	property ::BRepLProp* NativeInstance
	{
		::BRepLProp* get()
		{
			return static_cast<::BRepLProp*>(_NativeInstance);
		}
	}

public:
	BRepLProp();
	BRepLProp(Macad::Occt::BRepLProp^ parameter1);
	static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::BRepAdaptor_Curve^ C1, Macad::Occt::BRepAdaptor_Curve^ C2, double u1, double u2, double tl, double ta);
	static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::BRepAdaptor_Curve^ C1, Macad::Occt::BRepAdaptor_Curve^ C2, double u1, double u2);
}; // class BRepLProp

//---------------------------------------------------------------------
//  Class  BRepLProp_CurveTool
//---------------------------------------------------------------------
public ref class BRepLProp_CurveTool sealed : public BaseClass<::BRepLProp_CurveTool>
{

#ifdef Include_BRepLProp_CurveTool_h
public:
	Include_BRepLProp_CurveTool_h
#endif

public:
	BRepLProp_CurveTool(::BRepLProp_CurveTool* nativeInstance)
		: BaseClass<::BRepLProp_CurveTool>( nativeInstance, true )
	{}

	BRepLProp_CurveTool(::BRepLProp_CurveTool& nativeInstance)
		: BaseClass<::BRepLProp_CurveTool>( &nativeInstance, false )
	{}

	property ::BRepLProp_CurveTool* NativeInstance
	{
		::BRepLProp_CurveTool* get()
		{
			return static_cast<::BRepLProp_CurveTool*>(_NativeInstance);
		}
	}

public:
	BRepLProp_CurveTool();
	BRepLProp_CurveTool(Macad::Occt::BRepLProp_CurveTool^ parameter1);
	static void Value(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P);
	static void D1(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void D2(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void D3(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	static int Continuity(Macad::Occt::BRepAdaptor_Curve^ C);
	static double FirstParameter(Macad::Occt::BRepAdaptor_Curve^ C);
	static double LastParameter(Macad::Occt::BRepAdaptor_Curve^ C);
}; // class BRepLProp_CurveTool

//---------------------------------------------------------------------
//  Class  BRepLProp_CLProps
//---------------------------------------------------------------------
public ref class BRepLProp_CLProps sealed : public BaseClass<::BRepLProp_CLProps>
{

#ifdef Include_BRepLProp_CLProps_h
public:
	Include_BRepLProp_CLProps_h
#endif

public:
	BRepLProp_CLProps(::BRepLProp_CLProps* nativeInstance)
		: BaseClass<::BRepLProp_CLProps>( nativeInstance, true )
	{}

	BRepLProp_CLProps(::BRepLProp_CLProps& nativeInstance)
		: BaseClass<::BRepLProp_CLProps>( &nativeInstance, false )
	{}

	property ::BRepLProp_CLProps* NativeInstance
	{
		::BRepLProp_CLProps* get()
		{
			return static_cast<::BRepLProp_CLProps*>(_NativeInstance);
		}
	}

public:
	BRepLProp_CLProps(Macad::Occt::BRepAdaptor_Curve^ C, int N, double Resolution);
	BRepLProp_CLProps(Macad::Occt::BRepAdaptor_Curve^ C, double U, int N, double Resolution);
	BRepLProp_CLProps(int N, double Resolution);
	BRepLProp_CLProps(Macad::Occt::BRepLProp_CLProps^ parameter1);
	void SetParameter(double U);
	void SetCurve(Macad::Occt::BRepAdaptor_Curve^ C);
	Macad::Occt::Pnt Value();
	Macad::Occt::Vec D1();
	Macad::Occt::Vec D2();
	Macad::Occt::Vec D3();
	bool IsTangentDefined();
	void Tangent(Macad::Occt::Dir% D);
	double Curvature();
	void Normal(Macad::Occt::Dir% N);
	void CentreOfCurvature(Macad::Occt::Pnt% P);
}; // class BRepLProp_CLProps

//---------------------------------------------------------------------
//  Class  BRepLProp_SurfaceTool
//---------------------------------------------------------------------
public ref class BRepLProp_SurfaceTool sealed : public BaseClass<::BRepLProp_SurfaceTool>
{

#ifdef Include_BRepLProp_SurfaceTool_h
public:
	Include_BRepLProp_SurfaceTool_h
#endif

public:
	BRepLProp_SurfaceTool(::BRepLProp_SurfaceTool* nativeInstance)
		: BaseClass<::BRepLProp_SurfaceTool>( nativeInstance, true )
	{}

	BRepLProp_SurfaceTool(::BRepLProp_SurfaceTool& nativeInstance)
		: BaseClass<::BRepLProp_SurfaceTool>( &nativeInstance, false )
	{}

	property ::BRepLProp_SurfaceTool* NativeInstance
	{
		::BRepLProp_SurfaceTool* get()
		{
			return static_cast<::BRepLProp_SurfaceTool*>(_NativeInstance);
		}
	}

public:
	BRepLProp_SurfaceTool();
	BRepLProp_SurfaceTool(Macad::Occt::BRepLProp_SurfaceTool^ parameter1);
	static void Value(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P);
	static void D1(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	static void D2(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% DUV);
	static Macad::Occt::Vec DN(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, int IU, int IV);
	static int Continuity(Macad::Occt::BRepAdaptor_Surface^ S);
	static void Bounds(Macad::Occt::BRepAdaptor_Surface^ S, double% U1, double% V1, double% U2, double% V2);
}; // class BRepLProp_SurfaceTool

//---------------------------------------------------------------------
//  Class  BRepLProp_SLProps
//---------------------------------------------------------------------
public ref class BRepLProp_SLProps sealed : public BaseClass<::BRepLProp_SLProps>
{

#ifdef Include_BRepLProp_SLProps_h
public:
	Include_BRepLProp_SLProps_h
#endif

public:
	BRepLProp_SLProps(::BRepLProp_SLProps* nativeInstance)
		: BaseClass<::BRepLProp_SLProps>( nativeInstance, true )
	{}

	BRepLProp_SLProps(::BRepLProp_SLProps& nativeInstance)
		: BaseClass<::BRepLProp_SLProps>( &nativeInstance, false )
	{}

	property ::BRepLProp_SLProps* NativeInstance
	{
		::BRepLProp_SLProps* get()
		{
			return static_cast<::BRepLProp_SLProps*>(_NativeInstance);
		}
	}

public:
	BRepLProp_SLProps(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, int N, double Resolution);
	BRepLProp_SLProps(Macad::Occt::BRepAdaptor_Surface^ S, int N, double Resolution);
	BRepLProp_SLProps(int N, double Resolution);
	BRepLProp_SLProps(Macad::Occt::BRepLProp_SLProps^ parameter1);
	void SetSurface(Macad::Occt::BRepAdaptor_Surface^ S);
	void SetParameters(double U, double V);
	Macad::Occt::Pnt Value();
	Macad::Occt::Vec D1U();
	Macad::Occt::Vec D1V();
	Macad::Occt::Vec D2U();
	Macad::Occt::Vec D2V();
	Macad::Occt::Vec DUV();
	bool IsTangentUDefined();
	void TangentU(Macad::Occt::Dir% D);
	bool IsTangentVDefined();
	void TangentV(Macad::Occt::Dir% D);
	bool IsNormalDefined();
	Macad::Occt::Dir Normal();
	bool IsCurvatureDefined();
	bool IsUmbilic();
	double MaxCurvature();
	double MinCurvature();
	void CurvatureDirections(Macad::Occt::Dir% MaxD, Macad::Occt::Dir% MinD);
	double MeanCurvature();
	double GaussianCurvature();
}; // class BRepLProp_SLProps

}; // namespace Occt
}; // namespace Macad
