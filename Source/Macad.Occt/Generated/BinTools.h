// Generated wrapper code for package BinTools

#pragma once


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
    VERSION_1 = 1,
    VERSION_2 = 2,
    VERSION_3 = 3,
    VERSION_4 = 4,
    CURRENT = 4
}; // enum  class BinTools_FormatVersion

//---------------------------------------------------------------------
//  Enum  BinTools_ObjectType
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defining objects identifiers in the shape read/write format.
/// </summary>
public enum class BinTools_ObjectType
{
    Unknown = 0,
    Reference8 = 1,
    Reference16 = 2,
    Reference32 = 3,
    Reference64 = 4,
    Location = 5,
    SimpleLocation = 6,
    EmptyLocation = 7,
    LocationEnd = 8,
    Curve = 9,
    EmptyCurve = 10,
    Curve2d = 11,
    EmptyCurve2d = 12,
    Surface = 13,
    EmptySurface = 14,
    Polygon3d = 15,
    EmptyPolygon3d = 16,
    PolygonOnTriangulation = 17,
    EmptyPolygonOnTriangulation = 18,
    Triangulation = 19,
    EmptyTriangulation = 20,
    EmptyShape = 198,
    EndShape = 199
}; // enum  class BinTools_ObjectType

//---------------------------------------------------------------------
//  Class  BinTools
//---------------------------------------------------------------------
/// <summary>
/// Tool to keep shapes in binary format
/// </summary>
public ref class BinTools sealed
    : public Macad::Occt::BaseClass<::BinTools>
{

#ifdef Include_BinTools_h
public:
    Include_BinTools_h
#endif

public:
    BinTools(::BinTools* nativeInstance)
        : Macad::Occt::BaseClass<::BinTools>( nativeInstance, true )
    {}

    BinTools(::BinTools& nativeInstance)
        : Macad::Occt::BaseClass<::BinTools>( &nativeInstance, false )
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
    static System::IO::TextWriter^ PutReal(System::IO::TextWriter^ OS, double theValue);
    static System::IO::TextWriter^ PutShortReal(System::IO::TextWriter^ OS, float theValue);
    static System::IO::TextWriter^ PutInteger(System::IO::TextWriter^ OS, int theValue);
    static System::IO::TextWriter^ PutBool(System::IO::TextWriter^ OS, bool theValue);
    /* Method skipped due to unknown mapping: ostream PutExtChar(ostream OS, char16_t theValue, ) */
    /* Method skipped due to unknown mapping: istream GetReal(istream IS, double theValue, ) */
    /* Method skipped due to unknown mapping: istream GetShortReal(istream IS, float theValue, ) */
    /* Method skipped due to unknown mapping: istream GetInteger(istream IS, int theValue, ) */
    /* Method skipped due to unknown mapping: istream GetBool(istream IS, bool theValue, ) */
    /* Method skipped due to unknown mapping: istream GetExtChar(istream IS, char16_t theValue, ) */
    /// <summary>
    /// Writes the shape to the stream in binary format BinTools_FormatVersion_CURRENT.
    /// This alias writes shape with triangulation data.
    /// </summary>
    /// <param name="in]">
    /// theShape        the shape to write
    /// </param>
    /// <param name="in][out]">
    /// theStream  the stream to output shape into
    /// </param>
    /// <param name="theRange">
    ///            the range of progress indicator to fill in
    /// </param>
    static void Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the shape to the stream in binary format BinTools_FormatVersion_CURRENT.
    /// This alias writes shape with triangulation data.
    /// </summary>
    /// <param name="in]">
    /// theShape        the shape to write
    /// </param>
    /// <param name="in][out]">
    /// theStream  the stream to output shape into
    /// </param>
    /// <param name="theRange">
    ///            the range of progress indicator to fill in
    /// </param>
    static void Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream);
    /// <summary>
    /// Writes the shape to the stream in binary format of specified version.
    /// </summary>
    /// <param name="in]">
    /// theShape          the shape to write
    /// </param>
    /// <param name="in][out]">
    /// theStream    the stream to output shape into
    /// </param>
    /// <param name="in]">
    /// theWithTriangles  flag which specifies whether to save shape with (TRUE) or without
    /// (FALSE) triangles;
    /// has no effect on triangulation-only geometry
    /// </param>
    /// <param name="in]">
    /// theWithNormals    flag which specifies whether to save triangulation with (TRUE) or
    /// without (FALSE) normals;
    /// has no effect on triangulation-only geometry
    /// </param>
    /// <param name="in]">
    /// theVersion        the BinTools format version
    /// </param>
    /// <param name="theRange">
    ///              the range of progress indicator to fill in
    /// </param>
    static void Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the shape to the stream in binary format of specified version.
    /// </summary>
    /// <param name="in]">
    /// theShape          the shape to write
    /// </param>
    /// <param name="in][out]">
    /// theStream    the stream to output shape into
    /// </param>
    /// <param name="in]">
    /// theWithTriangles  flag which specifies whether to save shape with (TRUE) or without
    /// (FALSE) triangles;
    /// has no effect on triangulation-only geometry
    /// </param>
    /// <param name="in]">
    /// theWithNormals    flag which specifies whether to save triangulation with (TRUE) or
    /// without (FALSE) normals;
    /// has no effect on triangulation-only geometry
    /// </param>
    /// <param name="in]">
    /// theVersion        the BinTools format version
    /// </param>
    /// <param name="theRange">
    ///              the range of progress indicator to fill in
    /// </param>
    static void Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion);
    /* Method skipped due to unknown mapping: void Read(TopoDS_Shape theShape, istream theStream, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void Read(TopoDS_Shape theShape, istream theStream, Message_ProgressRange theRange, ) */
    /// <summary>
    /// Writes the shape to the file in binary format BinTools_FormatVersion_CURRENT.
    /// </summary>
    /// <param name="in]">
    /// theShape  the shape to write
    /// </param>
    /// <param name="in]">
    /// theFile   the path to file to output shape into
    /// </param>
    /// <param name="theRange">
    ///      the range of progress indicator to fill in
    /// </param>
    static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the shape to the file in binary format BinTools_FormatVersion_CURRENT.
    /// </summary>
    /// <param name="in]">
    /// theShape  the shape to write
    /// </param>
    /// <param name="in]">
    /// theFile   the path to file to output shape into
    /// </param>
    /// <param name="theRange">
    ///      the range of progress indicator to fill in
    /// </param>
    static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile);
    /// <summary>
    /// Writes the shape to the file in binary format of specified version.
    /// </summary>
    /// <param name="in]">
    /// theShape          the shape to write
    /// </param>
    /// <param name="in]">
    /// theFile           the path to file to output shape into
    /// </param>
    /// <param name="in]">
    /// theWithTriangles  flag which specifies whether to save shape with (TRUE) or without
    /// (FALSE) triangles;
    /// has no effect on triangulation-only geometry
    /// </param>
    /// <param name="in]">
    /// theWithNormals    flag which specifies whether to save triangulation with (TRUE) or
    /// without (FALSE) normals;
    /// has no effect on triangulation-only geometry
    /// </param>
    /// <param name="in]">
    /// theVersion        the BinTools format version
    /// </param>
    /// <param name="theRange">
    ///              the range of progress indicator to fill in
    /// </param>
    static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::BinTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the shape to the file in binary format of specified version.
    /// </summary>
    /// <param name="in]">
    /// theShape          the shape to write
    /// </param>
    /// <param name="in]">
    /// theFile           the path to file to output shape into
    /// </param>
    /// <param name="in]">
    /// theWithTriangles  flag which specifies whether to save shape with (TRUE) or without
    /// (FALSE) triangles;
    /// has no effect on triangulation-only geometry
    /// </param>
    /// <param name="in]">
    /// theWithNormals    flag which specifies whether to save triangulation with (TRUE) or
    /// without (FALSE) normals;
    /// has no effect on triangulation-only geometry
    /// </param>
    /// <param name="in]">
    /// theVersion        the BinTools format version
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
public ref class BinTools_OStream sealed
    : public Macad::Occt::BaseClass<::BinTools_OStream>
{

#ifdef Include_BinTools_OStream_h
public:
    Include_BinTools_OStream_h
#endif

public:
    BinTools_OStream(::BinTools_OStream* nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_OStream>( nativeInstance, true )
    {}

    BinTools_OStream(::BinTools_OStream& nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_OStream>( &nativeInstance, false )
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
    BinTools_OStream(System::IO::TextWriter^ theStream);
    /// <summary>
    /// Returns the current position of the stream
    /// </summary>
    long long unsigned int Position();
    /// <summary>
    /// Writes the reference to the given position (an offset between the current and the given one).
    /// </summary>
    void WriteReference(long long unsigned int thePosition);
    /// <summary>
    /// Writes an identifier of shape type and orientation into the stream.
    /// </summary>
    void WriteShape(Macad::Occt::TopAbs_ShapeEnum theType, Macad::Occt::TopAbs_Orientation theOrientation);
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
public ref class BinTools_Curve2dSet sealed
    : public Macad::Occt::BaseClass<::BinTools_Curve2dSet>
{

#ifdef Include_BinTools_Curve2dSet_h
public:
    Include_BinTools_Curve2dSet_h
#endif

public:
    BinTools_Curve2dSet(::BinTools_Curve2dSet* nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_Curve2dSet>( nativeInstance, true )
    {}

    BinTools_Curve2dSet(::BinTools_Curve2dSet& nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_Curve2dSet>( &nativeInstance, false )
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
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
    /// <summary>
    /// Dumps the curve on the binary stream, that can be read back.
    /// </summary>
    static void WriteCurve2d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::BinTools_OStream^ OS);
    /* Method skipped due to unknown mapping: istream ReadCurve2d(istream IS, Geom2d_Curve C, ) */
}; // class BinTools_Curve2dSet

//---------------------------------------------------------------------
//  Class  BinTools_CurveSet
//---------------------------------------------------------------------
/// <summary>
/// Stores a set of Curves from Geom in binary format.
/// </summary>
public ref class BinTools_CurveSet sealed
    : public Macad::Occt::BaseClass<::BinTools_CurveSet>
{

#ifdef Include_BinTools_CurveSet_h
public:
    Include_BinTools_CurveSet_h
#endif

public:
    BinTools_CurveSet(::BinTools_CurveSet* nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_CurveSet>( nativeInstance, true )
    {}

    BinTools_CurveSet(::BinTools_CurveSet& nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_CurveSet>( &nativeInstance, false )
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
    void Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
    /// <summary>
    /// Dumps the curve on the stream in binary format
    /// that can be read back.
    /// </summary>
    static void WriteCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::BinTools_OStream^ OS);
    /* Method skipped due to unknown mapping: istream ReadCurve(istream IS, Geom_Curve C, ) */
}; // class BinTools_CurveSet

//---------------------------------------------------------------------
//  Class  BinTools_IStream
//---------------------------------------------------------------------
/// <summary>
/// Substitution of IStream for shape reader for fast management of position in the file (get and
/// go) and operation on all reading types.
/// </summary>
public ref class BinTools_IStream sealed
    : public Macad::Occt::BaseClass<::BinTools_IStream>
{

#ifdef Include_BinTools_IStream_h
public:
    Include_BinTools_IStream_h
#endif

public:
    BinTools_IStream(::BinTools_IStream* nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_IStream>( nativeInstance, true )
    {}

    BinTools_IStream(::BinTools_IStream& nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_IStream>( &nativeInstance, false )
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
    long long unsigned int Position();
    /// <summary>
    /// Moves the current stream position to the given one.
    /// </summary>
    void GoTo(long long unsigned int thePosition);
    /// <summary>
    /// Returns true if the last restored type is one of a reference
    /// </summary>
    bool IsReference();
    /// <summary>
    /// Reads a reference IStream using the last restored type.
    /// </summary>
    long long unsigned int ReadReference();
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
public ref class BinTools_LocationSet sealed
    : public Macad::Occt::BaseClass<::BinTools_LocationSet>
{

#ifdef Include_BinTools_LocationSet_h
public:
    Include_BinTools_LocationSet_h
#endif

public:
    BinTools_LocationSet(::BinTools_LocationSet* nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_LocationSet>( nativeInstance, true )
    {}

    BinTools_LocationSet(::BinTools_LocationSet& nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_LocationSet>( &nativeInstance, false )
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
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, ) */
}; // class BinTools_LocationSet

//---------------------------------------------------------------------
//  Class  BinTools_ShapeSetBase
//---------------------------------------------------------------------
/// <summary>
/// A base class for all readers/writers of TopoDS_Shape into/from stream.
/// </summary>
public ref class BinTools_ShapeSetBase
    : public Macad::Occt::BaseClass<::BinTools_ShapeSetBase>
{

#ifdef Include_BinTools_ShapeSetBase_h
public:
    Include_BinTools_ShapeSetBase_h
#endif

protected:
    BinTools_ShapeSetBase(InitMode init)
        : Macad::Occt::BaseClass<::BinTools_ShapeSetBase>( init )
    {}

public:
    BinTools_ShapeSetBase(::BinTools_ShapeSetBase* nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_ShapeSetBase>( nativeInstance, true )
    {}

    BinTools_ShapeSetBase(::BinTools_ShapeSetBase& nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_ShapeSetBase>( &nativeInstance, false )
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
    void Write(System::IO::TextWriter^ parameter1, Macad::Occt::Message_ProgressRange^ parameter2);
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
    void Write(System::IO::TextWriter^ parameter1);
    /* Method skipped due to unknown mapping: void Read(istream parameter1, Message_ProgressRange parameter2, ) */
    /* Method skipped due to unknown mapping: void Read(istream parameter1, Message_ProgressRange parameter2, ) */
    /// <summary>
    /// Writes   on  <OS>   the shape   <S>.    Writes the
    /// orientation, the index of the TShape and the index
    /// of the Location.
    /// </summary>
    void Write(Macad::Occt::TopoDS_Shape^ parameter1, System::IO::TextWriter^ parameter2);
    /* Method skipped due to unknown mapping: void Read(istream parameter1, TopoDS_Shape parameter2, ) */
}; // class BinTools_ShapeSetBase

//---------------------------------------------------------------------
//  Class  BinTools_ShapeReader
//---------------------------------------------------------------------
/// <summary>
/// Reads topology from IStream in binary format without grouping of objects by types
/// and using relative positions in a file as references.
/// </summary>
public ref class BinTools_ShapeReader sealed
    : public Macad::Occt::BinTools_ShapeSetBase
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
    /// <summary>
    /// Clears the content of the set.
    /// </summary>
    void Clear();
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
public ref class BinTools_SurfaceSet sealed
    : public Macad::Occt::BaseClass<::BinTools_SurfaceSet>
{

#ifdef Include_BinTools_SurfaceSet_h
public:
    Include_BinTools_SurfaceSet_h
#endif

public:
    BinTools_SurfaceSet(::BinTools_SurfaceSet* nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_SurfaceSet>( nativeInstance, true )
    {}

    BinTools_SurfaceSet(::BinTools_SurfaceSet& nativeInstance)
        : Macad::Occt::BaseClass<::BinTools_SurfaceSet>( &nativeInstance, false )
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
    void Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in
    /// binary format that can be read back by Read.
    /// </summary>
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange therange, ) */
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange therange, ) */
    /// <summary>
    /// Dumps the surface on the stream in binary
    /// format that can be read back.
    /// </summary>
    static void WriteSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::BinTools_OStream^ OS);
    /* Method skipped due to unknown mapping: istream ReadSurface(istream IS, Geom_Surface S, ) */
}; // class BinTools_SurfaceSet

//---------------------------------------------------------------------
//  Class  BinTools_ShapeSet
//---------------------------------------------------------------------
/// <summary>
/// Writes topology in OStream in binary format
/// </summary>
public ref class BinTools_ShapeSet sealed
    : public Macad::Occt::BinTools_ShapeSetBase
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
    /// <param name="in]">
    /// theWithTriangles  flag to write triangulation data
    /// </param>
    BinTools_ShapeSet();
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
    void Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange);
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
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theRange, ) */
    /// <summary>
    /// Writes   on  <OS>   the shape   <S>.    Writes the
    /// orientation, the index of the TShape and the index
    /// of the Location.
    /// </summary>
    void Write(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the geometry of  me  on the stream <OS> in a
    /// binary format that can be read back by Read.
    /// </summary>
    void WriteGeometry(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the geometry of  me  on the stream <OS> in a
    /// binary format that can be read back by Read.
    /// </summary>
    void WriteGeometry(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void ReadFlagsAndSubs(TopoDS_Shape S, TopAbs_ShapeEnum T, istream IS, int NbShapes, ) */
    /* Method skipped due to unknown mapping: void ReadSubs(TopoDS_Shape S, istream IS, int NbShapes, ) */
    /* Method skipped due to unknown mapping: void Read(istream parameter1, TopoDS_Shape parameter2, ) */
    /// <summary>
    /// Writes the shape <S> on the stream <OS> in a
    /// binary format that can be read back by Read.
    /// </summary>
    void WriteShape(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadShape(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
    /// <summary>
    /// Stores the shape <S>.
    /// </summary>
    void AddShape(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Inserts  the shape <S2> in the shape <S1>.
    /// </summary>
    void AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
    /* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, Message_ProgressRange theRange, ) */
    /// <summary>
    /// Writes the 3d polygons
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygon3D(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the 3d polygons
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygon3D(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, Message_ProgressRange theRange, ) */
    /// <summary>
    /// Writes the triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WriteTriangulation(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WriteTriangulation(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, Message_ProgressRange theRange, ) */
    /// <summary>
    /// Writes the polygons on triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygonOnTriangulation(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Writes the polygons on triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygonOnTriangulation(System::IO::TextWriter^ OS);
}; // class BinTools_ShapeSet

}; // namespace Occt
}; // namespace Macad
