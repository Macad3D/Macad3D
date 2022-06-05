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
/// <summary>
/// Defined BinTools format version
/// </summary>
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
/// <summary>
/// Enumeration defining objects identifiers in the shape read/write format.
/// </summary>
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
/// <summary>
/// Tool to keep shapes in binary format
/// </summary>
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
	/// <summary>
	/// Writes the shape to the stream in binary format BinTools_FormatVersion_CURRENT.
	/// This alias writes shape with triangulation data.
	/// </summary>
	/// <param name="theShape">
	/// [in]       the shape to write
	/// </param>
	/// <param name="theStream">
	/// [in][out] the stream to output shape into
	/// </param>
	/// <param name="theRange">
	///            the range of progress indicator to fill in
	/// </param>
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape theShape, ostream theStream, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the shape to the stream in binary format BinTools_FormatVersion_CURRENT.
	/// This alias writes shape with triangulation data.
	/// </summary>
	/// <param name="theShape">
	/// [in]       the shape to write
	/// </param>
	/// <param name="theStream">
	/// [in][out] the stream to output shape into
	/// </param>
	/// <param name="theRange">
	///            the range of progress indicator to fill in
	/// </param>
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape theShape, ostream theStream, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the shape to the stream in binary format of specified version.
	/// </summary>
	/// <param name="theShape">
	/// [in]         the shape to write
	/// </param>
	/// <param name="theStream">
	/// [in][out]   the stream to output shape into
	/// </param>
	/// <param name="theWithTriangles">
	/// [in] flag which specifies whether to save shape with (TRUE) or without (FALSE) triangles;
	/// has no effect on triangulation-only geometry
	/// </param>
	/// <param name="theWithNormals">
	/// [in]   flag which specifies whether to save triangulation with (TRUE) or without (FALSE) normals;
	/// has no effect on triangulation-only geometry
	/// </param>
	/// <param name="theVersion">
	/// [in]       the BinTools format version
	/// </param>
	/// <param name="theRange">
	///              the range of progress indicator to fill in
	/// </param>
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape theShape, ostream theStream, Standard_Boolean theWithTriangles, Standard_Boolean theWithNormals, BinTools_FormatVersion theVersion, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the shape to the stream in binary format of specified version.
	/// </summary>
	/// <param name="theShape">
	/// [in]         the shape to write
	/// </param>
	/// <param name="theStream">
	/// [in][out]   the stream to output shape into
	/// </param>
	/// <param name="theWithTriangles">
	/// [in] flag which specifies whether to save shape with (TRUE) or without (FALSE) triangles;
	/// has no effect on triangulation-only geometry
	/// </param>
	/// <param name="theWithNormals">
	/// [in]   flag which specifies whether to save triangulation with (TRUE) or without (FALSE) normals;
	/// has no effect on triangulation-only geometry
	/// </param>
	/// <param name="theVersion">
	/// [in]       the BinTools format version
	/// </param>
	/// <param name="theRange">
	///              the range of progress indicator to fill in
	/// </param>
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape theShape, ostream theStream, Standard_Boolean theWithTriangles, Standard_Boolean theWithNormals, BinTools_FormatVersion theVersion, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads a shape from <theStream> and returns it in <theShape>.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape theShape, istream theStream, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads a shape from <theStream> and returns it in <theShape>.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape theShape, istream theStream, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the shape to the file in binary format BinTools_FormatVersion_CURRENT.
	/// </summary>
	/// <param name="theShape">
	/// [in] the shape to write
	/// </param>
	/// <param name="theFile">
	/// [in]  the path to file to output shape into
	/// </param>
	/// <param name="theRange">
	///      the range of progress indicator to fill in
	/// </param>
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange);
	/// <summary>
	/// Writes the shape to the file in binary format BinTools_FormatVersion_CURRENT.
	/// </summary>
	/// <param name="theShape">
	/// [in] the shape to write
	/// </param>
	/// <param name="theFile">
	/// [in]  the path to file to output shape into
	/// </param>
	/// <param name="theRange">
	///      the range of progress indicator to fill in
	/// </param>
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile);
	/// <summary>
	/// Writes the shape to the file in binary format of specified version.
	/// </summary>
	/// <param name="theShape">
	/// [in]         the shape to write
	/// </param>
	/// <param name="theFile">
	/// [in]          the path to file to output shape into
	/// </param>
	/// <param name="theWithTriangles">
	/// [in] flag which specifies whether to save shape with (TRUE) or without (FALSE) triangles;
	/// has no effect on triangulation-only geometry
	/// </param>
	/// <param name="theWithNormals">
	/// [in]   flag which specifies whether to save triangulation with (TRUE) or without (FALSE) normals;
	/// has no effect on triangulation-only geometry
	/// </param>
	/// <param name="theVersion">
	/// [in]       the BinTools format version
	/// </param>
	/// <param name="theRange">
	///              the range of progress indicator to fill in
	/// </param>
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theRange);
	/// <summary>
	/// Writes the shape to the file in binary format of specified version.
	/// </summary>
	/// <param name="theShape">
	/// [in]         the shape to write
	/// </param>
	/// <param name="theFile">
	/// [in]          the path to file to output shape into
	/// </param>
	/// <param name="theWithTriangles">
	/// [in] flag which specifies whether to save shape with (TRUE) or without (FALSE) triangles;
	/// has no effect on triangulation-only geometry
	/// </param>
	/// <param name="theWithNormals">
	/// [in]   flag which specifies whether to save triangulation with (TRUE) or without (FALSE) normals;
	/// has no effect on triangulation-only geometry
	/// </param>
	/// <param name="theVersion">
	/// [in]       the BinTools format version
	/// </param>
	/// <param name="theRange">
	///              the range of progress indicator to fill in
	/// </param>
	static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion);
	/// <summary>
	/// Reads a shape from <theFile> and returns it in <theShape>.
	/// </summary>
	static bool Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange);
	/// <summary>
	/// Reads a shape from <theFile> and returns it in <theShape>.
	/// </summary>
	static bool Read(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile);
}; // class BinTools

//---------------------------------------------------------------------
//  Class  BinTools_OStream
//---------------------------------------------------------------------
/// <summary>
/// Substitution of OStream for shape writer for fast management of position in the file
/// and operation on all writing types.
/// </summary>
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
	/// <summary>
	/// Creates OStream using the current stream OStream.
	/// </summary>
	/* Method skipped due to unknown mapping: void BinTools_OStream(ostream theStream, ) */
	BinTools_OStream(Macad::Occt::BinTools_OStream^ parameter1);
	/// <summary>
	/// Returns the current position of the stream
	/// </summary>
	/* Method skipped due to unknown mapping: long long unsigned int Position() */
	/// <summary>
	/// Writes the reference to the given position (an offset between the current and the given one).
	/// </summary>
	/* Method skipped due to unknown mapping: void WriteReference(long long unsigned int thePosition, ) */
	/// <summary>
	/// Writes an identifier of shape type and orientation into the stream.
	/// </summary>
	void WriteShape(Macad::Occt::TopAbs_ShapeEnum% theType, Macad::Occt::TopAbs_Orientation% theOrientation);
	/// <summary>
	/// Writes 3 booleans as one byte to the stream.
	/// </summary>
	void PutBools(bool theValue1, bool theValue2, bool theValue3);
	/// <summary>
	/// Writes 7 booleans as one byte to the stream.
	/// </summary>
	void PutBools(bool theValue1, bool theValue2, bool theValue3, bool theValue4, bool theValue5, bool theValue6, bool theValue7);
}; // class BinTools_OStream

//---------------------------------------------------------------------
//  Class  BinTools_Curve2dSet
//---------------------------------------------------------------------
/// <summary>
/// Stores a set of Curves from Geom2d in binary format
/// </summary>
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
	/// <summary>
	/// Returns an empty set of Curves.
	/// </summary>
	BinTools_Curve2dSet();
	BinTools_Curve2dSet(Macad::Occt::BinTools_Curve2dSet^ parameter1);
	/// <summary>
	/// Clears the content of the set.
	/// </summary>
	void Clear();
	/// <summary>
	/// Incorporate a new Curve in the  set and returns
	/// its index.
	/// </summary>
	int Add(Macad::Occt::Geom2d_Curve^ C);
	/// <summary>
	/// Returns the Curve of index <I>.
	/// </summary>
	Macad::Occt::Geom2d_Curve^ Curve2d(int I);
	/// <summary>
	/// Returns the index of <L>.
	/// </summary>
	int Index(Macad::Occt::Geom2d_Curve^ C);
	/// <summary>
	/// Dumps the content of me on the stream <OS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void Dump(ostream OS, ) */
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in a
	/// format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in a
	/// format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the content of me from the  stream  <IS>. me
	/// is first cleared.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the content of me from the  stream  <IS>. me
	/// is first cleared.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Dumps the curve on the binary stream, that can be read back.
	/// </summary>
	static void WriteCurve2d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::BinTools_OStream^ OS);
	/// <summary>
	/// Reads the curve  from  the stream.  The  curve  is
	/// assumed   to have  been  written  with  the Write
	/// method.
	/// </summary>
	/* Method skipped due to unknown mapping: istream ReadCurve2d(istream IS, Geom2d_Curve C, ) */
}; // class BinTools_Curve2dSet

//---------------------------------------------------------------------
//  Class  BinTools_CurveSet
//---------------------------------------------------------------------
/// <summary>
/// Stores a set of Curves from Geom in binary format.
/// </summary>
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
	/// <summary>
	/// Returns an empty set of Curves.
	/// </summary>
	BinTools_CurveSet();
	BinTools_CurveSet(Macad::Occt::BinTools_CurveSet^ parameter1);
	/// <summary>
	/// Clears the content of the set.
	/// </summary>
	void Clear();
	/// <summary>
	/// Incorporate a new Curve in the  set and returns
	/// its index.
	/// </summary>
	int Add(Macad::Occt::Geom_Curve^ C);
	/// <summary>
	/// Returns the Curve of index <I>.
	/// </summary>
	Macad::Occt::Geom_Curve^ Curve(int I);
	/// <summary>
	/// Returns the index of <L>.
	/// </summary>
	int Index(Macad::Occt::Geom_Curve^ C);
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in a
	/// format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in a
	/// format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the content of me from the  stream  <IS>. me
	/// is first cleared.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the content of me from the  stream  <IS>. me
	/// is first cleared.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Dumps the curve on the stream in binary format
	/// that can be read back.
	/// </summary>
	static void WriteCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::BinTools_OStream^ OS);
	/// <summary>
	/// Reads the curve  from  the stream.  The  curve  is
	/// assumed  to have  been  written  with  the Write
	/// method
	/// </summary>
	/* Method skipped due to unknown mapping: istream ReadCurve(istream IS, Geom_Curve C, ) */
}; // class BinTools_CurveSet

//---------------------------------------------------------------------
//  Class  BinTools_IStream
//---------------------------------------------------------------------
/// <summary>
/// Substitution of IStream for shape reader for fast management of position in the file (get and go)
/// and operation on all reading types.
/// </summary>
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
	/// <summary>
	/// Creates IStream using the current stream IStream.
	/// </summary>
	/* Method skipped due to unknown mapping: void BinTools_IStream(istream theStream, ) */
	BinTools_IStream(Macad::Occt::BinTools_IStream^ parameter1);
	/// <summary>
	/// Reads and returns the type.
	/// </summary>
	Macad::Occt::BinTools_ObjectType ReadType();
	/// <summary>
	/// Returns the last read type.
	/// </summary>
	Macad::Occt::BinTools_ObjectType LastType();
	/// <summary>
	/// Returns the shape type by the last retrieved type.
	/// </summary>
	Macad::Occt::TopAbs_ShapeEnum ShapeType();
	/// <summary>
	/// Returns the shape orientation by the last retrieved type.
	/// </summary>
	Macad::Occt::TopAbs_Orientation ShapeOrientation();
	/// <summary>
	/// Returns the current position in the stream.
	/// </summary>
	/* Method skipped due to unknown mapping: long long unsigned int Position() */
	/// <summary>
	/// Moves the current stream position to the given one.
	/// </summary>
	/* Method skipped due to unknown mapping: void GoTo(long long unsigned int thePosition, ) */
	/// <summary>
	/// Returns true if the last restored type is one of a reference
	/// </summary>
	bool IsReference();
	/// <summary>
	/// Reads a reference IStream using the last restored type.
	/// </summary>
	/* Method skipped due to unknown mapping: long long unsigned int ReadReference() */
	/// <summary>
	/// Returns the original IStream.
	/// </summary>
	/* Method skipped due to unknown mapping: istream Stream() */
	/// <summary>
	/// Makes up to date the myPosition because myStream was used outside and position is changed.
	/// </summary>
	void UpdatePosition();
	/// <summary>
	/// Reads real value from the stream.
	/// </summary>
	double ReadReal();
	/// <summary>
	/// Reads integer value from the stream.
	/// </summary>
	int ReadInteger();
	/// <summary>
	/// Reads point coordinates value from the stream.
	/// </summary>
	Macad::Occt::Pnt ReadPnt();
	/// <summary>
	/// Reads byte value from the stream.
	/// </summary>
	unsigned char ReadByte();
	/// <summary>
	/// Reads boolean value from the stream (stored as one byte).
	/// </summary>
	bool ReadBool();
	/// <summary>
	/// Reads short real value from the stream.
	/// </summary>
	float ReadShortReal();
	/// <summary>
	/// Reads 3 boolean values from one byte
	/// </summary>
	void ReadBools(bool% theBool1, bool% theBool2, bool% theBool3);
	/// <summary>
	/// Reads 7 boolean values from one byte
	/// </summary>
	void ReadBools(bool% theBool1, bool% theBool2, bool% theBool3, bool% theBool4, bool% theBool5, bool% theBool6, bool% theBool7);
}; // class BinTools_IStream

//---------------------------------------------------------------------
//  Class  BinTools_LocationSet
//---------------------------------------------------------------------
/// <summary>
/// The class LocationSet stores a set of location in
/// a relocatable state.
/// 
/// It can be created from Locations.
/// 
/// It can create Locations.
/// </summary>
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
	/// <summary>
	/// Returns an empty set of locations.
	/// </summary>
	BinTools_LocationSet();
	BinTools_LocationSet(Macad::Occt::BinTools_LocationSet^ parameter1);
	/// <summary>
	/// Clears the content of the set.
	/// </summary>
	void Clear();
	/// <summary>
	/// Incorporate a new Location in the  set and returns
	/// its index.
	/// </summary>
	int Add(Macad::Occt::TopLoc_Location^ L);
	/// <summary>
	/// Returns the location of index <I>.
	/// </summary>
	Macad::Occt::TopLoc_Location^ Location(int I);
	/// <summary>
	/// Returns the index of <L>.
	/// </summary>
	int Index(Macad::Occt::TopLoc_Location^ L);
	/// <summary>
	/// Returns number of locations.
	/// </summary>
	int NbLocations();
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in a
	/// format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, ) */
	/// <summary>
	/// Reads the content of me from the  stream  <IS>. me
	/// is first cleared.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, ) */
}; // class BinTools_LocationSet

//---------------------------------------------------------------------
//  Class  BinTools_ShapeSetBase
//---------------------------------------------------------------------
/// <summary>
/// A base class for all readers/writers of TopoDS_Shape into/from stream.
/// </summary>
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
	/// <summary>
	/// A default constructor.
	/// </summary>
	BinTools_ShapeSetBase();
	BinTools_ShapeSetBase(Macad::Occt::BinTools_ShapeSetBase^ parameter1);
	/// <summary>
	/// Return true if shape should be stored with triangles.
	/// </summary>
	bool IsWithTriangles();
	/// <summary>
	/// Return true if shape should be stored triangulation with normals.
	/// </summary>
	bool IsWithNormals();
	/// <summary>
	/// Define if shape will be stored with triangles.
	/// Ignored (always written) if face defines only triangulation (no surface).
	/// </summary>
	void SetWithTriangles(bool theWithTriangles);
	/// <summary>
	/// Define if shape will be stored triangulation with normals.
	/// Ignored (always written) if face defines only triangulation (no surface).
	/// </summary>
	void SetWithNormals(bool theWithNormals);
	/// <summary>
	/// Sets the BinTools_FormatVersion.
	/// </summary>
	void SetFormatNb(int theFormatNb);
	/// <summary>
	/// Returns the BinTools_FormatVersion.
	/// </summary>
	int FormatNb();
	/// <summary>
	/// Clears the content of the set.
	/// </summary>
	void Clear();
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in binary
	/// format that can be read back by Read.
	/// 
	/// Writes the locations.
	/// 
	/// Writes the geometry calling WriteGeometry.
	/// 
	/// Dumps the shapes from last to first.
	/// For each shape  :
	/// Write the type.
	/// calls WriteGeometry(S).
	/// Write the flags, the subshapes.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream parameter1, Message_ProgressRange parameter2, ) */
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in binary
	/// format that can be read back by Read.
	/// 
	/// Writes the locations.
	/// 
	/// Writes the geometry calling WriteGeometry.
	/// 
	/// Dumps the shapes from last to first.
	/// For each shape  :
	/// Write the type.
	/// calls WriteGeometry(S).
	/// Write the flags, the subshapes.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream parameter1, Message_ProgressRange parameter2, ) */
	/// <summary>
	/// Reads the content of me from the binary stream  <IS>. me
	/// is first cleared.
	/// 
	/// Reads the locations.
	/// 
	/// Reads the geometry calling ReadGeometry.
	/// 
	/// Reads the shapes.
	/// For each shape
	/// Reads the type.
	/// calls ReadGeometry(T,S).
	/// Reads the flag, the subshapes.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream parameter1, Message_ProgressRange parameter2, ) */
	/// <summary>
	/// Reads the content of me from the binary stream  <IS>. me
	/// is first cleared.
	/// 
	/// Reads the locations.
	/// 
	/// Reads the geometry calling ReadGeometry.
	/// 
	/// Reads the shapes.
	/// For each shape
	/// Reads the type.
	/// calls ReadGeometry(T,S).
	/// Reads the flag, the subshapes.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream parameter1, Message_ProgressRange parameter2, ) */
	/// <summary>
	/// Writes   on  <OS>   the shape   <S>.    Writes the
	/// orientation, the index of the TShape and the index
	/// of the Location.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape parameter1, ostream parameter2, ) */
	/// <summary>
	/// An empty virtual method for redefinition in shape-reader.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream parameter1, TopoDS_Shape parameter2, ) */
}; // class BinTools_ShapeSetBase

//---------------------------------------------------------------------
//  Class  BinTools_ShapeReader
//---------------------------------------------------------------------
/// <summary>
/// Reads topology from IStream in binary format without grouping of objects by types
/// and using relative positions in a file as references.
/// </summary>
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
	/// <summary>
	/// Initializes a shape reader.
	/// </summary>
	BinTools_ShapeReader();
	BinTools_ShapeReader(Macad::Occt::BinTools_ShapeReader^ parameter1);
	/// <summary>
	/// Clears the content of the set.
	/// </summary>
	void Clear();
	/// <summary>
	/// Reads the shape from stream using previously restored shapes and objects by references.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream theStream, TopoDS_Shape theShape, ) */
	/// <summary>
	/// Reads location from the stream.
	/// </summary>
	Macad::Occt::TopLoc_Location^ ReadLocation(Macad::Occt::BinTools_IStream^ theStream);
}; // class BinTools_ShapeReader

//---------------------------------------------------------------------
//  Class  BinTools_SurfaceSet
//---------------------------------------------------------------------
/// <summary>
/// Stores a set of Surfaces from Geom in binary format.
/// </summary>
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
	/// <summary>
	/// Returns an empty set of Surfaces.
	/// </summary>
	BinTools_SurfaceSet();
	BinTools_SurfaceSet(Macad::Occt::BinTools_SurfaceSet^ parameter1);
	/// <summary>
	/// Clears the content of the set.
	/// </summary>
	void Clear();
	/// <summary>
	/// Incorporate a new Surface in the  set and returns
	/// its index.
	/// </summary>
	int Add(Macad::Occt::Geom_Surface^ S);
	/// <summary>
	/// Returns the Surface of index <I>.
	/// </summary>
	Macad::Occt::Geom_Surface^ Surface(int I);
	/// <summary>
	/// Returns the index of <L>.
	/// </summary>
	int Index(Macad::Occt::Geom_Surface^ S);
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in
	/// binary format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in
	/// binary format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the content of me from the  stream  <IS>. me
	/// is first cleared.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange therange, ) */
	/// <summary>
	/// Reads the content of me from the  stream  <IS>. me
	/// is first cleared.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange therange, ) */
	/// <summary>
	/// Dumps the surface on the stream in binary
	/// format that can be read back.
	/// </summary>
	static void WriteSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::BinTools_OStream^ OS);
	/// <summary>
	/// Reads the surface  from  the stream.  The  surface  is
	/// assumed   to have  been  written  with  the Write
	/// method.
	/// </summary>
	/* Method skipped due to unknown mapping: istream ReadSurface(istream IS, Geom_Surface S, ) */
}; // class BinTools_SurfaceSet

//---------------------------------------------------------------------
//  Class  BinTools_ShapeSet
//---------------------------------------------------------------------
/// <summary>
/// Writes topology in OStream in binary format
/// </summary>
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
	/// <summary>
	/// Builds an empty ShapeSet.
	/// </summary>
	/// <param name="theWithTriangles">
	/// [in] flag to write triangulation data
	/// </param>
	BinTools_ShapeSet();
	BinTools_ShapeSet(Macad::Occt::BinTools_ShapeSet^ parameter1);
	/// <summary>
	/// Clears the content of the set.
	/// </summary>
	void Clear();
	/// <summary>
	/// Stores <S> and its sub-shape. Returns the index of <S>.
	/// The method AddGeometry is called on each sub-shape.
	/// </summary>
	int Add(Macad::Occt::TopoDS_Shape^ S);
	/// <summary>
	/// Returns the sub-shape of index <I>.
	/// </summary>
	Macad::Occt::TopoDS_Shape^ Shape(int I);
	/// <summary>
	/// Returns the index of <S>.
	/// </summary>
	int Index(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::BinTools_LocationSet^ Locations();
	Macad::Occt::BinTools_LocationSet^ ChangeLocations();
	/// <summary>
	/// Returns number of shapes read from file.
	/// </summary>
	int NbShapes();
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in binary
	/// format that can be read back by Read.
	/// 
	/// Writes the locations.
	/// 
	/// Writes the geometry calling WriteGeometry.
	/// 
	/// Dumps the shapes from last to first.
	/// For each shape  :
	/// Write the type.
	/// calls WriteGeometry(S).
	/// Write the flags, the subshapes.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the content of  me  on the stream <OS> in binary
	/// format that can be read back by Read.
	/// 
	/// Writes the locations.
	/// 
	/// Writes the geometry calling WriteGeometry.
	/// 
	/// Dumps the shapes from last to first.
	/// For each shape  :
	/// Write the type.
	/// calls WriteGeometry(S).
	/// Write the flags, the subshapes.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the content of me from the binary stream  <IS>. me
	/// is first cleared.
	/// 
	/// Reads the locations.
	/// 
	/// Reads the geometry calling ReadGeometry.
	/// 
	/// Reads the shapes.
	/// For each shape
	/// Reads the type.
	/// calls ReadGeometry(T,S).
	/// Reads the flag, the subshapes.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the content of me from the binary stream  <IS>. me
	/// is first cleared.
	/// 
	/// Reads the locations.
	/// 
	/// Reads the geometry calling ReadGeometry.
	/// 
	/// Reads the shapes.
	/// For each shape
	/// Reads the type.
	/// calls ReadGeometry(T,S).
	/// Reads the flag, the subshapes.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes   on  <OS>   the shape   <S>.    Writes the
	/// orientation, the index of the TShape and the index
	/// of the Location.
	/// </summary>
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape S, ostream OS, ) */
	/// <summary>
	/// Writes the geometry of  me  on the stream <OS> in a
	/// binary format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WriteGeometry(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the geometry of  me  on the stream <OS> in a
	/// binary format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WriteGeometry(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the geometry of me from the  stream  <IS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the geometry of me from the  stream  <IS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads from <IS> a shape flags and sub-shapes and modifies S.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadFlagsAndSubs(TopoDS_Shape S, TopAbs_ShapeEnum T, istream IS, Standard_Integer NbShapes, ) */
	/// <summary>
	/// Reads from <IS> a shape and returns it in S.
	/// <NbShapes> is the number of tshapes in the set.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadSubs(TopoDS_Shape S, istream IS, Standard_Integer NbShapes, ) */
	/// <summary>
	/// An empty virtual method for redefinition in shape-reader.
	/// </summary>
	/* Method skipped due to unknown mapping: void Read(istream parameter1, TopoDS_Shape parameter2, ) */
	/// <summary>
	/// Writes the shape <S> on the stream <OS> in a
	/// binary format that can be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WriteShape(TopoDS_Shape S, ostream OS, ) */
	/// <summary>
	/// Reads  a shape of type <T> from the stream <IS> and returns it in <S>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadShape(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
	/// <summary>
	/// Stores the shape <S>.
	/// </summary>
	void AddShape(Macad::Occt::TopoDS_Shape^ S);
	/// <summary>
	/// Inserts  the shape <S2> in the shape <S1>.
	/// </summary>
	void AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
	/// <summary>
	/// Reads the 3d polygons  of me
	/// from the  stream  <IS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the 3d polygons  of me
	/// from the  stream  <IS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the 3d polygons
	/// on the stream <OS> in a format that can
	/// be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WritePolygon3D(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the 3d polygons
	/// on the stream <OS> in a format that can
	/// be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WritePolygon3D(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the triangulation of me
	/// from the  stream  <IS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the triangulation of me
	/// from the  stream  <IS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the triangulation
	/// on the stream <OS> in a format that can
	/// be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WriteTriangulation(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the triangulation
	/// on the stream <OS> in a format that can
	/// be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WriteTriangulation(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the polygons on triangulation of me
	/// from the  stream  <IS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Reads the polygons on triangulation of me
	/// from the  stream  <IS>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the polygons on triangulation
	/// on the stream <OS> in a format that can
	/// be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WritePolygonOnTriangulation(ostream OS, Message_ProgressRange theRange, ) */
	/// <summary>
	/// Writes the polygons on triangulation
	/// on the stream <OS> in a format that can
	/// be read back by Read.
	/// </summary>
	/* Method skipped due to unknown mapping: void WritePolygonOnTriangulation(ostream OS, Message_ProgressRange theRange, ) */
}; // class BinTools_ShapeSet

}; // namespace Occt
}; // namespace Macad
