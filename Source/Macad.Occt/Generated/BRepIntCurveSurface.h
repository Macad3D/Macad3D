// Generated wrapper code for package BRepIntCurveSurface

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepIntCurveSurface_Inter
//---------------------------------------------------------------------
public ref class BRepIntCurveSurface_Inter sealed : public BaseClass<::BRepIntCurveSurface_Inter>
{

#ifdef Include_BRepIntCurveSurface_Inter_h
public:
	Include_BRepIntCurveSurface_Inter_h
#endif

public:
	BRepIntCurveSurface_Inter(::BRepIntCurveSurface_Inter* nativeInstance)
		: BaseClass<::BRepIntCurveSurface_Inter>( nativeInstance, true )
	{}

	BRepIntCurveSurface_Inter(::BRepIntCurveSurface_Inter& nativeInstance)
		: BaseClass<::BRepIntCurveSurface_Inter>( &nativeInstance, false )
	{}

	property ::BRepIntCurveSurface_Inter* NativeInstance
	{
		::BRepIntCurveSurface_Inter* get()
		{
			return static_cast<::BRepIntCurveSurface_Inter*>(_NativeInstance);
		}
	}

public:
	BRepIntCurveSurface_Inter();
	BRepIntCurveSurface_Inter(Macad::Occt::BRepIntCurveSurface_Inter^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::GeomAdaptor_Curve^ theCurve, double theTol);
	void Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::gp_Lin^ theLine, double theTol);
	void Load(Macad::Occt::TopoDS_Shape^ theShape, double theTol);
	void Init(Macad::Occt::GeomAdaptor_Curve^ theCurve);
	bool More();
	void Next();
	/* Method skipped due to unknown mapping: IntCurveSurface_IntersectionPoint Point() */
	Macad::Occt::Pnt Pnt();
	double U();
	double V();
	double W();
	Macad::Occt::TopAbs_State State();
	/* Method skipped due to unknown mapping: IntCurveSurface_TransitionOnCurve Transition() */
	Macad::Occt::TopoDS_Face^ Face();
}; // class BRepIntCurveSurface_Inter

}; // namespace Occt
}; // namespace Macad
