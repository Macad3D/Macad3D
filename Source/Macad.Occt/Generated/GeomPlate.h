// Generated wrapper code for package GeomPlate

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomPlate_BuildAveragePlane
//---------------------------------------------------------------------
/// <summary>
/// This class computes an average inertial plane with an
/// array of points.
/// Computes the initial surface (average plane) in the cases
/// when the initial surface is not given.
/// </summary>
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
	/// <summary>
	/// Tol is a  Tolerance to make the difference between
	/// the result plane and the result line.
	/// if POption = 1 : automatical parametrisation
	/// if POption = 2 : parametrisation by eigen vectors
	/// if NOption = 1 : the average plane is the inertial plane.
	/// if NOption = 2 : the average plane is the plane of max. flux.
	/// </summary>
	GeomPlate_BuildAveragePlane(Macad::Occt::TColgp_HArray1OfPnt^ Pts, int NbBoundPoints, double Tol, int POption, int NOption);
	/// <summary>
	/// Creates the plane from the "best vector"
	/// </summary>
	GeomPlate_BuildAveragePlane(Macad::Occt::TColgp_SequenceOfVec^ Normals, Macad::Occt::TColgp_HArray1OfPnt^ Pts);
	GeomPlate_BuildAveragePlane(Macad::Occt::GeomPlate_BuildAveragePlane^ parameter1);
	/// <summary>
	/// Return the average Plane.
	/// </summary>
	Macad::Occt::Geom_Plane^ Plane();
	/// <summary>
	/// Return a Line when 2 eigenvalues are null.
	/// </summary>
	Macad::Occt::Geom_Line^ Line();
	/// <summary>
	/// return OK if is a plane.
	/// </summary>
	bool IsPlane();
	/// <summary>
	/// return OK if is a line.
	/// </summary>
	bool IsLine();
	/// <summary>
	/// computes the   minimal box  to include  all normal
	/// projection points of the initial array  on the plane.
	/// </summary>
	void MinMaxBox(double% Umin, double% Umax, double% Vmin, double% Vmax);
	/* Method skipped due to unknown mapping: Standard_Boolean HalfSpace(TColgp_SequenceOfVec NewNormals, TColgp_SequenceOfVec Normals, GeomPlate_SequenceOfAij Bset, Standard_Real LinTol, Standard_Real AngTol, ) */
}; // class GeomPlate_BuildAveragePlane

}; // namespace Occt
}; // namespace Macad
