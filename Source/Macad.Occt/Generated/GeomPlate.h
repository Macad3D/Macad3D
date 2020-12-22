// Generated wrapper code for package GeomPlate

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomPlate_BuildAveragePlane
//---------------------------------------------------------------------
public ref class GeomPlate_BuildAveragePlane sealed : public BaseClass<::GeomPlate_BuildAveragePlane>
{

#ifdef Include_GeomPlate_BuildAveragePlane_h
public:
	Include_GeomPlate_BuildAveragePlane_h
#endif

public:
	GeomPlate_BuildAveragePlane(::GeomPlate_BuildAveragePlane* nativeInstance)
		: BaseClass<::GeomPlate_BuildAveragePlane>( nativeInstance, true )
	{}

	GeomPlate_BuildAveragePlane(::GeomPlate_BuildAveragePlane& nativeInstance)
		: BaseClass<::GeomPlate_BuildAveragePlane>( &nativeInstance, false )
	{}

	property ::GeomPlate_BuildAveragePlane* NativeInstance
	{
		::GeomPlate_BuildAveragePlane* get()
		{
			return static_cast<::GeomPlate_BuildAveragePlane*>(_NativeInstance);
		}
	}

public:
	GeomPlate_BuildAveragePlane(Macad::Occt::TColgp_HArray1OfPnt^ Pts, int NbBoundPoints, double Tol, int POption, int NOption);
	GeomPlate_BuildAveragePlane(Macad::Occt::TColgp_SequenceOfVec^ Normals, Macad::Occt::TColgp_HArray1OfPnt^ Pts);
	GeomPlate_BuildAveragePlane(Macad::Occt::GeomPlate_BuildAveragePlane^ parameter1);
	Macad::Occt::Geom_Plane^ Plane();
	Macad::Occt::Geom_Line^ Line();
	bool IsPlane();
	bool IsLine();
	void MinMaxBox(double% Umin, double% Umax, double% Vmin, double% Vmax);
	/* Method skipped due to unknown mapping: Standard_Boolean HalfSpace(TColgp_SequenceOfVec NewNormals, TColgp_SequenceOfVec Normals, GeomPlate_SequenceOfAij Bset, Standard_Real LinTol, Standard_Real AngTol, ) */
}; // class GeomPlate_BuildAveragePlane

}; // namespace Occt
}; // namespace Macad
