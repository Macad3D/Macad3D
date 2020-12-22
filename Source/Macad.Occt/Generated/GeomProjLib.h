// Generated wrapper code for package GeomProjLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomProjLib
//---------------------------------------------------------------------
public ref class GeomProjLib sealed : public BaseClass<::GeomProjLib>
{

#ifdef Include_GeomProjLib_h
public:
	Include_GeomProjLib_h
#endif

public:
	GeomProjLib(::GeomProjLib* nativeInstance)
		: BaseClass<::GeomProjLib>( nativeInstance, true )
	{}

	GeomProjLib(::GeomProjLib& nativeInstance)
		: BaseClass<::GeomProjLib>( &nativeInstance, false )
	{}

	property ::GeomProjLib* NativeInstance
	{
		::GeomProjLib* get()
		{
			return static_cast<::GeomProjLib*>(_NativeInstance);
		}
	}

public:
	GeomProjLib();
	GeomProjLib(Macad::Occt::GeomProjLib^ parameter1);
	static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double% Tolerance);
	static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S, double% Tolerance);
	static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S);
	static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S);
	static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin);
	static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin, double% Tolerance);
	static Macad::Occt::Geom_Curve^ Project(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S);
	static Macad::Occt::Geom_Curve^ ProjectOnPlane(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Dir Dir, bool KeepParametrization);
}; // class GeomProjLib

}; // namespace Occt
}; // namespace Macad
