// Generated wrapper code for package SelectBasics

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  SelectBasics_PickResult
//---------------------------------------------------------------------
public ref class SelectBasics_PickResult sealed : public BaseClass<::SelectBasics_PickResult>
{

#ifdef Include_SelectBasics_PickResult_h
public:
	Include_SelectBasics_PickResult_h
#endif

public:
	SelectBasics_PickResult(::SelectBasics_PickResult* nativeInstance)
		: BaseClass<::SelectBasics_PickResult>( nativeInstance, true )
	{}

	SelectBasics_PickResult(::SelectBasics_PickResult& nativeInstance)
		: BaseClass<::SelectBasics_PickResult>( &nativeInstance, false )
	{}

	property ::SelectBasics_PickResult* NativeInstance
	{
		::SelectBasics_PickResult* get()
		{
			return static_cast<::SelectBasics_PickResult*>(_NativeInstance);
		}
	}

public:
	SelectBasics_PickResult();
	SelectBasics_PickResult(double theDepth, double theDistToCenter, Macad::Occt::Pnt theObjPickedPnt);
	SelectBasics_PickResult(Macad::Occt::SelectBasics_PickResult^ parameter1);
	static Macad::Occt::SelectBasics_PickResult^ Min(Macad::Occt::SelectBasics_PickResult^ thePickResult1, Macad::Occt::SelectBasics_PickResult^ thePickResult2);
	bool IsValid();
	void Invalidate();
	double Depth();
	void SetDepth(double theDepth);
	bool HasPickedPoint();
	Macad::Occt::Pnt PickedPoint();
	void SetPickedPoint(Macad::Occt::Pnt theObjPickedPnt);
	double DistToGeomCenter();
	void SetDistToGeomCenter(double theDistToCenter);
	/* Method skipped due to unknown mapping: NCollection_Vec3<float> SurfaceNormal() */
	/* Method skipped due to unknown mapping: void SetSurfaceNormal(NCollection_Vec3<float> theNormal, ) */
	void SetSurfaceNormal(Macad::Occt::Vec theNormal);
}; // class SelectBasics_PickResult

//---------------------------------------------------------------------
//  Class  SelectBasics
//---------------------------------------------------------------------
public ref class SelectBasics sealed : public BaseClass<::SelectBasics>
{

#ifdef Include_SelectBasics_h
public:
	Include_SelectBasics_h
#endif

public:
	SelectBasics(::SelectBasics* nativeInstance)
		: BaseClass<::SelectBasics>( nativeInstance, true )
	{}

	SelectBasics(::SelectBasics& nativeInstance)
		: BaseClass<::SelectBasics>( &nativeInstance, false )
	{}

	property ::SelectBasics* NativeInstance
	{
		::SelectBasics* get()
		{
			return static_cast<::SelectBasics*>(_NativeInstance);
		}
	}

public:
	SelectBasics();
	SelectBasics(Macad::Occt::SelectBasics^ parameter1);
	static int MaxOwnerPriority();
	static int MinOwnerPriority();
}; // class SelectBasics

//---------------------------------------------------------------------
//  Class  SelectBasics_SelectingVolumeManager
//---------------------------------------------------------------------
public ref class SelectBasics_SelectingVolumeManager : public BaseClass<::SelectBasics_SelectingVolumeManager>
{

#ifdef Include_SelectBasics_SelectingVolumeManager_h
public:
	Include_SelectBasics_SelectingVolumeManager_h
#endif

public:
	SelectBasics_SelectingVolumeManager(::SelectBasics_SelectingVolumeManager* nativeInstance)
		: BaseClass<::SelectBasics_SelectingVolumeManager>( nativeInstance, true )
	{}

	SelectBasics_SelectingVolumeManager(::SelectBasics_SelectingVolumeManager& nativeInstance)
		: BaseClass<::SelectBasics_SelectingVolumeManager>( &nativeInstance, false )
	{}

	property ::SelectBasics_SelectingVolumeManager* NativeInstance
	{
		::SelectBasics_SelectingVolumeManager* get()
		{
			return static_cast<::SelectBasics_SelectingVolumeManager*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  SelectionType
	//---------------------------------------------------------------------
	enum class SelectionType
	{
		Point = 0,
		Box = 1,
		Polyline = 2,
		Unknown = 3
	}; // enum  class SelectionType

	SelectBasics_SelectingVolumeManager();
	SelectBasics_SelectingVolumeManager(Macad::Occt::SelectBasics_SelectingVolumeManager^ parameter1);
	int GetActiveSelectionType();
	/* Method skipped due to unknown mapping: Standard_Boolean Overlaps(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, SelectBasics_PickResult thePickResult, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Overlaps(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, Standard_Boolean theInside, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Overlaps(NCollection_Vec3<double> theBoxMin, NCollection_Vec3<double> theBoxMax, Standard_Boolean theInside, ) */
	bool Overlaps(Macad::Occt::Pnt thePnt, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool Overlaps(Macad::Occt::Pnt thePnt);
	bool Overlaps(Macad::Occt::TColgp_HArray1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool Overlaps(Macad::Occt::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool Overlaps(Macad::Occt::Pnt thePt1, Macad::Occt::Pnt thePt2, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	bool Overlaps(Macad::Occt::Pnt thePt1, Macad::Occt::Pnt thePt2, Macad::Occt::Pnt thePt3, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult);
	double DistToGeometryCenter(Macad::Occt::Pnt theCOG);
	Macad::Occt::Pnt DetectedPoint(double theDepth);
	bool IsOverlapAllowed();
	Macad::Occt::Pnt GetNearPickedPnt();
	Macad::Occt::Pnt GetFarPickedPnt();
	Macad::Occt::Pnt2d GetMousePosition();
	/* Method skipped due to unknown mapping: void GetPlanes(NCollection_Vector<NCollection_Vec4<double>> thePlaneEquations, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class SelectBasics_SelectingVolumeManager

}; // namespace Occt
}; // namespace Macad
