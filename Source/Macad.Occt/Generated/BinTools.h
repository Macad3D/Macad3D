// Generated wrapper code for package BinTools

#pragma once

#include "BinTools.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BinTools_FormatVersion
//---------------------------------------------------------------------
public enum class BinTools_FormatVersion
{
	BinTools_FormatVersion_VERSION_1 = 1,
	BinTools_FormatVersion_VERSION_2 = 2,
	BinTools_FormatVersion_VERSION_3 = 3,
	BinTools_FormatVersion_VERSION_4 = 4,
	BinTools_FormatVersion_CURRENT = 4
}; // enum  class BinTools_FormatVersion

//---------------------------------------------------------------------
//  Enum  BinTools_ObjectType
//---------------------------------------------------------------------
public enum class BinTools_ObjectType
{
	BinTools_ObjectType_Unknown = 0,
	BinTools_ObjectType_Reference8 = 1,
	BinTools_ObjectType_Reference16 = 2,
	BinTools_ObjectType_Reference32 = 3,
	BinTools_ObjectType_Reference64 = 4,
	BinTools_ObjectType_Location = 5,
	BinTools_ObjectType_SimpleLocation = 6,
	BinTools_ObjectType_EmptyLocation = 7,
	BinTools_ObjectType_LocationEnd = 8,
	BinTools_ObjectType_Curve = 9,
	BinTools_ObjectType_EmptyCurve = 10,
	BinTools_ObjectType_Curve2d = 11,
	BinTools_ObjectType_EmptyCurve2d = 12,
	BinTools_ObjectType_Surface = 13,
	BinTools_ObjectType_EmptySurface = 14,
	BinTools_ObjectType_Polygon3d = 15,
	BinTools_ObjectType_EmptyPolygon3d = 16,
	BinTools_ObjectType_PolygonOnTriangulation = 17,
	BinTools_ObjectType_EmptyPolygonOnTriangulation = 18,
	BinTools_ObjectType_Triangulation = 19,
	BinTools_ObjectType_EmptyTriangulation = 20,
	BinTools_ObjectType_EmptyShape = 198,
	BinTools_ObjectType_EndShape = 199
}; // enum  class BinTools_ObjectType

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
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape theShape, ostream theStream, Standard_Boolean theWithTriangles, Standard_Boolean theWithNormals, BinTools_FormatVersion theVersion, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape theShape, ostream theStream, Standard_Boolean theWithTriangles, Standard_Boolean theWithNormals, BinTools_FormatVersion theVersion, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape theShape, istream theStream, Message_ProgressRange theRange, ) */
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape theShape, istream theStream, Message_ProgressRange theRange, ) */
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange);
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile);
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theRange);
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion);
	static bool Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange);
	static bool Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile);
}; // class BinTools

//---------------------------------------------------------------------
//  Class  BinTools_OStream
//---------------------------------------------------------------------
public ref class BinTools_OStream sealed : public BaseClass<::BinTools_OStream>
{

#ifdef Include_BinTools_OStream_h
public:
	Include_BinTools_OStream_h
#endif

public:
	BinTools_OStream(::BinTools_OStream* nativeInstance)
		: BaseClass<::BinTools_OStream>( nativeInstance, true )
	{}

	BinTools_OStream(::BinTools_OStream& nativeInstance)
		: BaseClass<::BinTools_OStream>( &nativeInstance, false )
	{}

	property ::BinTools_OStream* NativeInstance
	{
		::BinTools_OStream* get()
		{
			return static_cast<::BinTools_OStream*>(_NativeInstance);
		}
	}

public:
	/* Method skipped due to unknown mapping: void BinTools_OStream(ostream theStream, ) */
	BinTools_OStream(Macad::Occt::BinTools_OStream^ parameter1);
	/* Method skipped due to unknown mapping: long long unsigned int Position() */
	/* Method skipped due to unknown mapping: void WriteReference(long long unsigned int thePosition, ) */
	void WriteShape(Macad::Occt::TopAbs_ShapeEnum% theType, Macad::Occt::TopAbs_Orientation% theOrientation);
	void PutBools(bool theValue1, bool theValue2, bool theValue3);
	void PutBools(bool theValue1, bool theValue2, bool theValue3, bool theValue4, bool theValue5, bool theValue6, bool theValue7);
}; // class BinTools_OStream

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
	static void WriteCurve2d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::BinTools_OStream^ OS);
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
	static void WriteCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::BinTools_OStream^ OS);
	/* Method skipped due to unknown mapping: istream ReadCurve(istream IS, Geom_Curve C, ) */
}; // class BinTools_CurveSet

//---------------------------------------------------------------------
//  Class  BinTools_IStream
//---------------------------------------------------------------------
public ref class BinTools_IStream sealed : public BaseClass<::BinTools_IStream>
{

#ifdef Include_BinTools_IStream_h
public:
	Include_BinTools_IStream_h
#endif

public:
	BinTools_IStream(::BinTools_IStream* nativeInstance)
		: BaseClass<::BinTools_IStream>( nativeInstance, true )
	{}

	BinTools_IStream(::BinTools_IStream& nativeInstance)
		: BaseClass<::BinTools_IStream>( &nativeInstance, false )
	{}

	property ::BinTools_IStream* NativeInstance
	{
		::BinTools_IStream* get()
		{
			return static_cast<::BinTools_IStream*>(_NativeInstance);
		}
	}

public:
	/* Method skipped due to unknown mapping: void BinTools_IStream(istream theStream, ) */
	BinTools_IStream(Macad::Occt::BinTools_IStream^ parameter1);
	Macad::Occt::BinTools_ObjectType ReadType();
	Macad::Occt::BinTools_ObjectType LastType();
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	Macad::Occt::TopAbs_Orientation ShapeOrientation();
	/* Method skipped due to unknown mapping: long long unsigned int Position() */
	/* Method skipped due to unknown mapping: void GoTo(long long unsigned int thePosition, ) */
	bool IsReference();
	/* Method skipped due to unknown mapping: long long unsigned int ReadReference() */
	/* Method skipped due to unknown mapping: istream Stream() */
	void UpdatePosition();
	double ReadReal();
	int ReadInteger();
	Macad::Occt::Pnt ReadPnt();
	unsigned char ReadByte();
	bool ReadBool();
	float ReadShortReal();
	void ReadBools(bool% theBool1, bool% theBool2, bool% theBool3);
	void ReadBools(bool% theBool1, bool% theBool2, bool% theBool3, bool% theBool4, bool% theBool5, bool% theBool6, bool% theBool7);
}; // class BinTools_IStream

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
//  Class  BinTools_ShapeSetBase
//---------------------------------------------------------------------
public ref class BinTools_ShapeSetBase : public BaseClass<::BinTools_ShapeSetBase>
{

#ifdef Include_BinTools_ShapeSetBase_h
public:
	Include_BinTools_ShapeSetBase_h
#endif

protected:
	BinTools_ShapeSetBase(InitMode init)
		: BaseClass<::BinTools_ShapeSetBase>( init )
	{}

public:
	BinTools_ShapeSetBase(::BinTools_ShapeSetBase* nativeInstance)
		: BaseClass<::BinTools_ShapeSetBase>( nativeInstance, true )
	{}

	BinTools_ShapeSetBase(::BinTools_ShapeSetBase& nativeInstance)
		: BaseClass<::BinTools_ShapeSetBase>( &nativeInstance, false )
	{}

	property ::BinTools_ShapeSetBase* NativeInstance
	{
		::BinTools_ShapeSetBase* get()
		{
			return static_cast<::BinTools_ShapeSetBase*>(_NativeInstance);
		}
	}

public:
	BinTools_ShapeSetBase();
	BinTools_ShapeSetBase(Macad::Occt::BinTools_ShapeSetBase^ parameter1);
	bool IsWithTriangles();
	bool IsWithNormals();
	void SetWithTriangles(bool theWithTriangles);
	void SetWithNormals(bool theWithNormals);
	void SetFormatNb(int theFormatNb);
	int FormatNb();
	void Clear();
	/* Method skipped due to unknown mapping: void Write(ostream parameter1, Message_ProgressRange parameter2, ) */
	/* Method skipped due to unknown mapping: void Write(ostream parameter1, Message_ProgressRange parameter2, ) */
	/* Method skipped due to unknown mapping: void Read(istream parameter1, Message_ProgressRange parameter2, ) */
	/* Method skipped due to unknown mapping: void Read(istream parameter1, Message_ProgressRange parameter2, ) */
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape parameter1, ostream parameter2, ) */
	/* Method skipped due to unknown mapping: void Read(istream parameter1, TopoDS_Shape parameter2, ) */
}; // class BinTools_ShapeSetBase

//---------------------------------------------------------------------
//  Class  BinTools_ShapeReader
//---------------------------------------------------------------------
public ref class BinTools_ShapeReader sealed : public Macad::Occt::BinTools_ShapeSetBase
{

#ifdef Include_BinTools_ShapeReader_h
public:
	Include_BinTools_ShapeReader_h
#endif

public:
	BinTools_ShapeReader(::BinTools_ShapeReader* nativeInstance)
		: Macad::Occt::BinTools_ShapeSetBase( nativeInstance )
	{}

	BinTools_ShapeReader(::BinTools_ShapeReader& nativeInstance)
		: Macad::Occt::BinTools_ShapeSetBase( nativeInstance )
	{}

	property ::BinTools_ShapeReader* NativeInstance
	{
		::BinTools_ShapeReader* get()
		{
			return static_cast<::BinTools_ShapeReader*>(_NativeInstance);
		}
	}

public:
	BinTools_ShapeReader();
	BinTools_ShapeReader(Macad::Occt::BinTools_ShapeReader^ parameter1);
	void Clear();
	/* Method skipped due to unknown mapping: void Read(istream theStream, TopoDS_Shape theShape, ) */
	Macad::Occt::TopLoc_Location^ ReadLocation(Macad::Occt::BinTools_IStream^ theStream);
}; // class BinTools_ShapeReader

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
	static void WriteSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::BinTools_OStream^ OS);
	/* Method skipped due to unknown mapping: istream ReadSurface(istream IS, Geom_Surface S, ) */
}; // class BinTools_SurfaceSet

//---------------------------------------------------------------------
//  Class  BinTools_ShapeSet
//---------------------------------------------------------------------
public ref class BinTools_ShapeSet sealed : public Macad::Occt::BinTools_ShapeSetBase
{

#ifdef Include_BinTools_ShapeSet_h
public:
	Include_BinTools_ShapeSet_h
#endif

public:
	BinTools_ShapeSet(::BinTools_ShapeSet* nativeInstance)
		: Macad::Occt::BinTools_ShapeSetBase( nativeInstance )
	{}

	BinTools_ShapeSet(::BinTools_ShapeSet& nativeInstance)
		: Macad::Occt::BinTools_ShapeSetBase( nativeInstance )
	{}

	property ::BinTools_ShapeSet* NativeInstance
	{
		::BinTools_ShapeSet* get()
		{
			return static_cast<::BinTools_ShapeSet*>(_NativeInstance);
		}
	}

public:
	BinTools_ShapeSet();
	BinTools_ShapeSet(Macad::Occt::BinTools_ShapeSet^ parameter1);
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
	/* Method skipped due to unknown mapping: void ReadFlagsAndSubs(TopoDS_Shape S, TopAbs_ShapeEnum T, istream IS, Standard_Integer NbShapes, ) */
	/* Method skipped due to unknown mapping: void ReadSubs(TopoDS_Shape S, istream IS, Standard_Integer NbShapes, ) */
	/* Method skipped due to unknown mapping: void Read(istream parameter1, TopoDS_Shape parameter2, ) */
	/* Method skipped due to unknown mapping: void WriteShape(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void ReadShape(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
	void AddShape(Macad::Occt::TopoDS_Shape^ S);
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

}; // namespace Occt
}; // namespace Macad
