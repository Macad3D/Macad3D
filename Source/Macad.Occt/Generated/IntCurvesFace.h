// Generated wrapper code for package IntCurvesFace

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  IntCurvesFace_Intersector
//---------------------------------------------------------------------
public ref class IntCurvesFace_Intersector sealed : public BaseClass<::IntCurvesFace_Intersector>
{

#ifdef Include_IntCurvesFace_Intersector_h
public:
	Include_IntCurvesFace_Intersector_h
#endif

public:
	IntCurvesFace_Intersector(::IntCurvesFace_Intersector* nativeInstance)
		: BaseClass<::IntCurvesFace_Intersector>( nativeInstance, true )
	{}

	IntCurvesFace_Intersector(::IntCurvesFace_Intersector& nativeInstance)
		: BaseClass<::IntCurvesFace_Intersector>( &nativeInstance, false )
	{}

	property ::IntCurvesFace_Intersector* NativeInstance
	{
		::IntCurvesFace_Intersector* get()
		{
			return static_cast<::IntCurvesFace_Intersector*>(_NativeInstance);
		}
	}

public:
	IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol, bool aRestr, bool UseBToler);
	IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol, bool aRestr);
	IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol);
	IntCurvesFace_Intersector(Macad::Occt::IntCurvesFace_Intersector^ parameter1);
	void Perform(Macad::Occt::gp_Lin^ L, double PInf, double PSup);
	void Perform(Macad::Occt::Adaptor3d_Curve^ HCu, double PInf, double PSup);
	Macad::Occt::GeomAbs_SurfaceType SurfaceType();
	bool IsDone();
	int NbPnt();
	double UParameter(int I);
	double VParameter(int I);
	double WParameter(int I);
	Macad::Occt::Pnt Pnt(int I);
	/* Method skipped due to unknown mapping: IntCurveSurface_TransitionOnCurve Transition(Standard_Integer I, ) */
	Macad::Occt::TopAbs_State State(int I);
	bool IsParallel();
	Macad::Occt::TopoDS_Face^ Face();
	Macad::Occt::TopAbs_State ClassifyUVPoint(Macad::Occt::Pnt2d Puv);
	Macad::Occt::Bnd_Box^ Bounding();
	void SetUseBoundToler(bool UseBToler);
	bool GetUseBoundToler();
	void Destroy();
}; // class IntCurvesFace_Intersector

//---------------------------------------------------------------------
//  Class  IntCurvesFace_ShapeIntersector
//---------------------------------------------------------------------
public ref class IntCurvesFace_ShapeIntersector sealed : public BaseClass<::IntCurvesFace_ShapeIntersector>
{

#ifdef Include_IntCurvesFace_ShapeIntersector_h
public:
	Include_IntCurvesFace_ShapeIntersector_h
#endif

public:
	IntCurvesFace_ShapeIntersector(::IntCurvesFace_ShapeIntersector* nativeInstance)
		: BaseClass<::IntCurvesFace_ShapeIntersector>( nativeInstance, true )
	{}

	IntCurvesFace_ShapeIntersector(::IntCurvesFace_ShapeIntersector& nativeInstance)
		: BaseClass<::IntCurvesFace_ShapeIntersector>( &nativeInstance, false )
	{}

	property ::IntCurvesFace_ShapeIntersector* NativeInstance
	{
		::IntCurvesFace_ShapeIntersector* get()
		{
			return static_cast<::IntCurvesFace_ShapeIntersector*>(_NativeInstance);
		}
	}

public:
	IntCurvesFace_ShapeIntersector();
	IntCurvesFace_ShapeIntersector(Macad::Occt::IntCurvesFace_ShapeIntersector^ parameter1);
	void Load(Macad::Occt::TopoDS_Shape^ Sh, double Tol);
	void Perform(Macad::Occt::gp_Lin^ L, double PInf, double PSup);
	void PerformNearest(Macad::Occt::gp_Lin^ L, double PInf, double PSup);
	void Perform(Macad::Occt::Adaptor3d_Curve^ HCu, double PInf, double PSup);
	bool IsDone();
	int NbPnt();
	double UParameter(int I);
	double VParameter(int I);
	double WParameter(int I);
	Macad::Occt::Pnt Pnt(int I);
	/* Method skipped due to unknown mapping: IntCurveSurface_TransitionOnCurve Transition(Standard_Integer I, ) */
	Macad::Occt::TopAbs_State State(int I);
	Macad::Occt::TopoDS_Face^ Face(int I);
	void SortResult();
	void Destroy();
}; // class IntCurvesFace_ShapeIntersector

}; // namespace Occt
}; // namespace Macad
