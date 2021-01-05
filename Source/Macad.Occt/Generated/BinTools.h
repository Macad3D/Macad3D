// Generated wrapper code for package BinTools

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BinTools_ShapeSet
//---------------------------------------------------------------------
public ref class BinTools_ShapeSet sealed : public BaseClass<::BinTools_ShapeSet>
{

#ifdef Include_BinTools_ShapeSet_h
public:
	Include_BinTools_ShapeSet_h
#endif

public:
	BinTools_ShapeSet(::BinTools_ShapeSet* nativeInstance)
		: BaseClass<::BinTools_ShapeSet>( nativeInstance, true )
	{}

	BinTools_ShapeSet(::BinTools_ShapeSet& nativeInstance)
		: BaseClass<::BinTools_ShapeSet>( &nativeInstance, false )
	{}

	property ::BinTools_ShapeSet* NativeInstance
	{
		::BinTools_ShapeSet* get()
		{
			return static_cast<::BinTools_ShapeSet*>(_NativeInstance);
		}
	}

public:
	BinTools_ShapeSet(bool isWithTriangles);
	BinTools_ShapeSet(Macad::Occt::BinTools_ShapeSet^ parameter1);
	bool IsWithTriangles();
	void SetWithTriangles(bool isWithTriangles);
	void SetFormatNb(int theFormatNb);
	int FormatNb();
	void Clear();
	int Add(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ Shape(int I);
	int Index(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::BinTools_LocationSet^ Locations();
	Macad::Occt::BinTools_LocationSet^ ChangeLocations();
	int NbShapes();
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void WriteGeometry(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WriteGeometry(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape S, istream IS, Standard_Integer NbShapes, ) */
	/* Method skipped due to unknown mapping: void WriteGeometry(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void ReadGeometry(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
	void AddGeometry(Macad::Occt::TopoDS_Shape^ S);
	void AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
	/* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WritePolygon3D(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WritePolygon3D(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WriteTriangulation(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WriteTriangulation(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WritePolygonOnTriangulation(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WritePolygonOnTriangulation(ostream OS, Message_ProgressRange theRange, ) */
}; // class BinTools_ShapeSet

//---------------------------------------------------------------------
//  Class  BinTools_Curve2dSet
//---------------------------------------------------------------------
public ref class BinTools_Curve2dSet sealed : public BaseClass<::BinTools_Curve2dSet>
{

#ifdef Include_BinTools_Curve2dSet_h
public:
	Include_BinTools_Curve2dSet_h
#endif

public:
	BinTools_Curve2dSet(::BinTools_Curve2dSet* nativeInstance)
		: BaseClass<::BinTools_Curve2dSet>( nativeInstance, true )
	{}

	BinTools_Curve2dSet(::BinTools_Curve2dSet& nativeInstance)
		: BaseClass<::BinTools_Curve2dSet>( &nativeInstance, false )
	{}

	property ::BinTools_Curve2dSet* NativeInstance
	{
		::BinTools_Curve2dSet* get()
		{
			return static_cast<::BinTools_Curve2dSet*>(_NativeInstance);
		}
	}

public:
	BinTools_Curve2dSet();
	BinTools_Curve2dSet(Macad::Occt::BinTools_Curve2dSet^ parameter1);
	void Clear();
	int Add(Macad::Occt::Geom2d_Curve^ C);
	Macad::Occt::Geom2d_Curve^ Curve2d(int I);
	int Index(Macad::Occt::Geom2d_Curve^ C);
	/* Method skipped due to unknown mapping: void Dump(ostream OS, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WriteCurve2d(Geom2d_Curve C, ostream OS, ) */
	/* Method skipped due to unknown mapping: istream ReadCurve2d(istream IS, Geom2d_Curve C, ) */
}; // class BinTools_Curve2dSet

//---------------------------------------------------------------------
//  Class  BinTools_CurveSet
//---------------------------------------------------------------------
public ref class BinTools_CurveSet sealed : public BaseClass<::BinTools_CurveSet>
{

#ifdef Include_BinTools_CurveSet_h
public:
	Include_BinTools_CurveSet_h
#endif

public:
	BinTools_CurveSet(::BinTools_CurveSet* nativeInstance)
		: BaseClass<::BinTools_CurveSet>( nativeInstance, true )
	{}

	BinTools_CurveSet(::BinTools_CurveSet& nativeInstance)
		: BaseClass<::BinTools_CurveSet>( &nativeInstance, false )
	{}

	property ::BinTools_CurveSet* NativeInstance
	{
		::BinTools_CurveSet* get()
		{
			return static_cast<::BinTools_CurveSet*>(_NativeInstance);
		}
	}

public:
	BinTools_CurveSet();
	BinTools_CurveSet(Macad::Occt::BinTools_CurveSet^ parameter1);
	void Clear();
	int Add(Macad::Occt::Geom_Curve^ C);
	Macad::Occt::Geom_Curve^ Curve(int I);
	int Index(Macad::Occt::Geom_Curve^ C);
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void WriteCurve(Geom_Curve C, ostream OS, ) */
	/* Method skipped due to unknown mapping: istream ReadCurve(istream IS, Geom_Curve C, ) */
}; // class BinTools_CurveSet

//---------------------------------------------------------------------
//  Class  BinTools_SurfaceSet
//---------------------------------------------------------------------
public ref class BinTools_SurfaceSet sealed : public BaseClass<::BinTools_SurfaceSet>
{

#ifdef Include_BinTools_SurfaceSet_h
public:
	Include_BinTools_SurfaceSet_h
#endif

public:
	BinTools_SurfaceSet(::BinTools_SurfaceSet* nativeInstance)
		: BaseClass<::BinTools_SurfaceSet>( nativeInstance, true )
	{}

	BinTools_SurfaceSet(::BinTools_SurfaceSet& nativeInstance)
		: BaseClass<::BinTools_SurfaceSet>( &nativeInstance, false )
	{}

	property ::BinTools_SurfaceSet* NativeInstance
	{
		::BinTools_SurfaceSet* get()
		{
			return static_cast<::BinTools_SurfaceSet*>(_NativeInstance);
		}
	}

public:
	BinTools_SurfaceSet();
	BinTools_SurfaceSet(Macad::Occt::BinTools_SurfaceSet^ parameter1);
	void Clear();
	int Add(Macad::Occt::Geom_Surface^ S);
	Macad::Occt::Geom_Surface^ Surface(int I);
	int Index(Macad::Occt::Geom_Surface^ S);
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange therange, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange therange, ) */
	/* Method skipped due to unknown mapping: void WriteSurface(Geom_Surface S, ostream OS, ) */
	/* Method skipped due to unknown mapping: istream ReadSurface(istream IS, Geom_Surface S, ) */
}; // class BinTools_SurfaceSet

//---------------------------------------------------------------------
//  Class  BinTools_LocationSet
//---------------------------------------------------------------------
public ref class BinTools_LocationSet sealed : public BaseClass<::BinTools_LocationSet>
{

#ifdef Include_BinTools_LocationSet_h
public:
	Include_BinTools_LocationSet_h
#endif

public:
	BinTools_LocationSet(::BinTools_LocationSet* nativeInstance)
		: BaseClass<::BinTools_LocationSet>( nativeInstance, true )
	{}

	BinTools_LocationSet(::BinTools_LocationSet& nativeInstance)
		: BaseClass<::BinTools_LocationSet>( &nativeInstance, false )
	{}

	property ::BinTools_LocationSet* NativeInstance
	{
		::BinTools_LocationSet* get()
		{
			return static_cast<::BinTools_LocationSet*>(_NativeInstance);
		}
	}

public:
	BinTools_LocationSet();
	BinTools_LocationSet(Macad::Occt::BinTools_LocationSet^ parameter1);
	void Clear();
	int Add(Macad::Occt::TopLoc_Location^ L);
	Macad::Occt::TopLoc_Location^ Location(int I);
	int Index(Macad::Occt::TopLoc_Location^ L);
	int NbLocations();
	/* Method skipped due to unknown mapping: void Write(ostream OS, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, ) */
}; // class BinTools_LocationSet

//---------------------------------------------------------------------
//  Class  BinTools
//---------------------------------------------------------------------
public ref class BinTools sealed : public BaseClass<::BinTools>
{

#ifdef Include_BinTools_h
public:
	Include_BinTools_h
#endif

public:
	BinTools(::BinTools* nativeInstance)
		: BaseClass<::BinTools>( nativeInstance, true )
	{}

	BinTools(::BinTools& nativeInstance)
		: BaseClass<::BinTools>( &nativeInstance, false )
	{}

	property ::BinTools* NativeInstance
	{
		::BinTools* get()
		{
			return static_cast<::BinTools*>(_NativeInstance);
		}
	}

public:
	BinTools();
	BinTools(Macad::Occt::BinTools^ parameter1);
	/* Method skipped due to unknown mapping: ostream PutReal(ostream OS, Standard_Real theValue, ) */
	/* Method skipped due to unknown mapping: ostream PutShortReal(ostream OS, Standard_ShortReal theValue, ) */
	/* Method skipped due to unknown mapping: ostream PutInteger(ostream OS, Standard_Integer theValue, ) */
	/* Method skipped due to unknown mapping: ostream PutBool(ostream OS, Standard_Boolean theValue, ) */
	/* Method skipped due to unknown mapping: ostream PutExtChar(ostream OS, Standard_ExtCharacter theValue, ) */
	/* Method skipped due to unknown mapping: istream GetReal(istream IS, Standard_Real theValue, ) */
	/* Method skipped due to unknown mapping: istream GetShortReal(istream IS, Standard_ShortReal theValue, ) */
	/* Method skipped due to unknown mapping: istream GetInteger(istream IS, Standard_Integer theValue, ) */
	/* Method skipped due to unknown mapping: istream GetBool(istream IS, Standard_Boolean theValue, ) */
	/* Method skipped due to unknown mapping: istream GetExtChar(istream IS, Standard_ExtCharacter theValue, ) */
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape theShape, ostream theStream, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape theShape, ostream theStream, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape theShape, istream theStream, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape theShape, istream theStream, Message_ProgressRange theRange, ) */
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange);
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile);
	static bool Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange);
	static bool Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile);
}; // class BinTools

}; // namespace Occt
}; // namespace Macad
