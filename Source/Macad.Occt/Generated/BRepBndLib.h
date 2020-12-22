// Generated wrapper code for package BRepBndLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepBndLib
//---------------------------------------------------------------------
public ref class BRepBndLib sealed : public BaseClass<::BRepBndLib>
{

#ifdef Include_BRepBndLib_h
public:
	Include_BRepBndLib_h
#endif

public:
	BRepBndLib(::BRepBndLib* nativeInstance)
		: BaseClass<::BRepBndLib>( nativeInstance, true )
	{}

	BRepBndLib(::BRepBndLib& nativeInstance)
		: BaseClass<::BRepBndLib>( &nativeInstance, false )
	{}

	property ::BRepBndLib* NativeInstance
	{
		::BRepBndLib* get()
		{
			return static_cast<::BRepBndLib*>(_NativeInstance);
		}
	}

public:
	BRepBndLib();
	BRepBndLib(Macad::Occt::BRepBndLib^ parameter1);
	static void Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation);
	static void Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B);
	static void AddClose(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B);
	static void AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation, bool useShapeTolerance);
	static void AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation);
	static void AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B);
	static void AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed, bool theIsOptimal, bool theIsShapeToleranceUsed);
	static void AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed, bool theIsOptimal);
	static void AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed);
	static void AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB);
}; // class BRepBndLib

}; // namespace Occt
}; // namespace Macad
