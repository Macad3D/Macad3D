// Generated wrapper code for package BRepTools

#pragma once

#include "TopTools.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepTools_MapOfVertexPnt2d
//---------------------------------------------------------------------
public ref class BRepTools_MapOfVertexPnt2d sealed
    : public Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d>
{

#ifdef Include_BRepTools_MapOfVertexPnt2d_h
public:
    Include_BRepTools_MapOfVertexPnt2d_h
#endif

public:
    BRepTools_MapOfVertexPnt2d(::BRepTools_MapOfVertexPnt2d* nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d>( nativeInstance, true )
    {}

    BRepTools_MapOfVertexPnt2d(::BRepTools_MapOfVertexPnt2d& nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d>( &nativeInstance, false )
    {}

    property ::BRepTools_MapOfVertexPnt2d* NativeInstance
    {
        ::BRepTools_MapOfVertexPnt2d* get()
        {
            return static_cast<::BRepTools_MapOfVertexPnt2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d::Iterator>
    {

#ifdef Include_BRepTools_MapOfVertexPnt2d_Iterator_h
    public:
        Include_BRepTools_MapOfVertexPnt2d_Iterator_h
#endif

    public:
        Iterator(::BRepTools_MapOfVertexPnt2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepTools_MapOfVertexPnt2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d::Iterator>( &nativeInstance, false )
        {}

        property ::BRepTools_MapOfVertexPnt2d::Iterator* NativeInstance
        {
            ::BRepTools_MapOfVertexPnt2d::Iterator* get()
            {
                return static_cast<::BRepTools_MapOfVertexPnt2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColgp_SequenceOfPnt2d^ Value();
        Macad::Occt::TColgp_SequenceOfPnt2d^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    BRepTools_MapOfVertexPnt2d();
    BRepTools_MapOfVertexPnt2d(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepTools_MapOfVertexPnt2d(int theNbBuckets);
    void Exchange(Macad::Occt::BRepTools_MapOfVertexPnt2d^ theOther);
    Macad::Occt::BRepTools_MapOfVertexPnt2d^ Assign(Macad::Occt::BRepTools_MapOfVertexPnt2d^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColgp_SequenceOfPnt2d^ theItem);
    Macad::Occt::TColgp_SequenceOfPnt2d^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColgp_SequenceOfPnt2d^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColgp_SequenceOfPnt2d^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColgp_SequenceOfPnt2d^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColgp_SequenceOfPnt2d^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColgp_SequenceOfPnt2d^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepTools_MapOfVertexPnt2d

//---------------------------------------------------------------------
//  Class  BRepTools
//---------------------------------------------------------------------
/// <summary>
/// The BRepTools package provides  utilities for BRep
/// data structures.
/// 
/// * WireExplorer : A tool to explore the topology of
/// a wire in the order of the edges.
/// 
/// * ShapeSet :  Tools used for  dumping, writing and
/// reading.
/// 
/// * UVBounds : Methods to compute the  limits of the
/// boundary  of a  face,  a wire or   an edge in  the
/// parametric space of a face.
/// 
/// *  Update : Methods  to call when   a topology has
/// been created to compute all missing data.
/// 
/// * UpdateFaceUVPoints: Method to update the UV points
/// stored with the edges on a face.
/// 
/// * Compare : Method to compare two vertices.
/// 
/// * Compare : Method to compare two edges.
/// 
/// * OuterWire : A method to find the outer wire of a
/// face.
/// 
/// * Map3DEdges : A method to map all the 3D Edges of
/// a Shape.
/// 
/// * Dump : A method to dump a BRep object.
/// </summary>
public ref class BRepTools sealed
    : public Macad::Occt::BaseClass<::BRepTools>
{

#ifdef Include_BRepTools_h
public:
    Include_BRepTools_h
#endif

public:
    BRepTools(::BRepTools* nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools>( nativeInstance, true )
    {}

    BRepTools(::BRepTools& nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools>( &nativeInstance, false )
    {}

    property ::BRepTools* NativeInstance
    {
        ::BRepTools* get()
        {
            return static_cast<::BRepTools*>(_NativeInstance);
        }
    }

public:
    BRepTools();
    /// <summary>
    /// Returns in UMin,  UMax, VMin,  VMax  the  bounding
    /// values in the parametric space of F.
    /// </summary>
    static void UVBounds(Macad::Occt::TopoDS_Face^ F, double% UMin, double% UMax, double% VMin, double% VMax);
    /// <summary>
    /// Returns in UMin,  UMax, VMin,  VMax  the  bounding
    /// values of the wire in the parametric space of F.
    /// </summary>
    static void UVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W, double% UMin, double% UMax, double% VMin, double% VMax);
    /// <summary>
    /// Returns in UMin,  UMax, VMin,  VMax  the  bounding
    /// values of the edge in the parametric space of F.
    /// </summary>
    static void UVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E, double% UMin, double% UMax, double% VMin, double% VMax);
    /// <summary>
    /// Adds  to  the box <B>  the bounding values in  the
    /// parametric space of F.
    /// </summary>
    static void AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// Adds  to the box  <B>  the bounding  values of the
    /// wire in the parametric space of F.
    /// </summary>
    static void AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// Adds to  the box <B>  the  bounding values  of the
    /// edge in the parametric space of F.
    /// </summary>
    static void AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// Update a vertex (nothing is done)
    /// </summary>
    static void Update(Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Update an edge, compute 2d bounding boxes.
    /// </summary>
    static void Update(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Update a wire (nothing is done)
    /// </summary>
    static void Update(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Update a Face, update UV points.
    /// </summary>
    static void Update(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Update a shell (nothing is done)
    /// </summary>
    static void Update(Macad::Occt::TopoDS_Shell^ S);
    /// <summary>
    /// Update a solid (nothing is done)
    /// </summary>
    static void Update(Macad::Occt::TopoDS_Solid^ S);
    /// <summary>
    /// Update a composite solid (nothing is done)
    /// </summary>
    static void Update(Macad::Occt::TopoDS_CompSolid^ C);
    /// <summary>
    /// Update a compound (nothing is done)
    /// </summary>
    static void Update(Macad::Occt::TopoDS_Compound^ C);
    /// <summary>
    /// Update a shape, call the correct update.
    /// </summary>
    static void Update(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// For each edge of the face <F> reset the UV points
    /// to the bounding points of the parametric curve of the
    /// edge on the face.
    /// </summary>
    static void UpdateFaceUVPoints(Macad::Occt::TopoDS_Face^ theF);
    /// <summary>
    /// Removes all cached polygonal representation of the shape,
    /// i.e. the triangulations of the faces of <S> and polygons on
    /// triangulations and polygons 3d of the edges.
    /// In case polygonal representation is the only available representation
    /// for the shape (shape does not have geometry) it is not removed.
    /// </summary>
    /// <param name="in]">
    /// theShape   the shape to clean
    /// </param>
    /// <param name="in]">
    /// theForce   allows removing all polygonal representations from the shape,
    /// including polygons on triangulations irrelevant for the faces of the
    /// given shape.
    /// </param>
    static void Clean(Macad::Occt::TopoDS_Shape^ theShape, bool theForce);
    /// <summary>
    /// Removes all cached polygonal representation of the shape,
    /// i.e. the triangulations of the faces of <S> and polygons on
    /// triangulations and polygons 3d of the edges.
    /// In case polygonal representation is the only available representation
    /// for the shape (shape does not have geometry) it is not removed.
    /// </summary>
    /// <param name="in]">
    /// theShape   the shape to clean
    /// </param>
    /// <param name="in]">
    /// theForce   allows removing all polygonal representations from the shape,
    /// including polygons on triangulations irrelevant for the faces of the
    /// given shape.
    /// </param>
    static void Clean(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Removes geometry (curves and surfaces) from all edges and faces of the shape
    /// </summary>
    static void CleanGeometry(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Removes all the pcurves of the edges of <S> that
    /// refer to surfaces not belonging to any face of <S>
    /// </summary>
    static void RemoveUnusedPCurves(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Verifies that each Face from the shape has got a triangulation with a deflection smaller or
    /// equal to specified one and the Edges a discretization on this triangulation.
    /// </summary>
    /// <param name="in]">
    /// theShape    shape to verify
    /// </param>
    /// <param name="in]">
    /// theLinDefl  maximum allowed linear deflection
    /// </param>
    /// <param name="in]">
    /// theToCheckFreeEdges  if TRUE, then free Edges are required to have 3D polygon
    /// </param>
    /// <returns>
    /// FALSE if input Shape contains Faces without triangulation,
    /// or that triangulation has worse (greater) deflection than specified one,
    /// or Edges in Shape lack polygons on triangulation
    /// or free Edges in Shape lack 3D polygons
    /// </returns>
    static bool Triangulation(Macad::Occt::TopoDS_Shape^ theShape, double theLinDefl, bool theToCheckFreeEdges);
    /// <summary>
    /// Verifies that each Face from the shape has got a triangulation with a deflection smaller or
    /// equal to specified one and the Edges a discretization on this triangulation.
    /// </summary>
    /// <param name="in]">
    /// theShape    shape to verify
    /// </param>
    /// <param name="in]">
    /// theLinDefl  maximum allowed linear deflection
    /// </param>
    /// <param name="in]">
    /// theToCheckFreeEdges  if TRUE, then free Edges are required to have 3D polygon
    /// </param>
    /// <returns>
    /// FALSE if input Shape contains Faces without triangulation,
    /// or that triangulation has worse (greater) deflection than specified one,
    /// or Edges in Shape lack polygons on triangulation
    /// or free Edges in Shape lack 3D polygons
    /// </returns>
    static bool Triangulation(Macad::Occt::TopoDS_Shape^ theShape, double theLinDefl);
    /* Method skipped due to unknown mapping: bool LoadTriangulation(TopoDS_Shape theShape, int theTriangulationIdx, bool theToSetAsActive, OSD_FileSystem theFileSystem, ) */
    /// <summary>
    /// Loads triangulation data for each face of the shape
    /// from some deferred storage using specified shared input file system
    /// </summary>
    /// <param name="in]">
    /// theShape             shape to load triangulations
    /// </param>
    /// <param name="in]">
    /// theTriangulationIdx  index defining what triangulation should be loaded. Starts
    /// from 0.
    /// -1 is used in specific case to load currently already active triangulation.
    /// If some face doesn't contain triangulation with this index, nothing will be loaded for
    /// it. Exception will be thrown in case of invalid negative index
    /// </param>
    /// <param name="in]">
    /// theToSetAsActive     flag to activate triangulation after its loading
    /// </param>
    /// <param name="in]">
    /// theFileSystem        shared file system
    /// </param>
    /// <returns>
    /// TRUE if at least one triangulation is loaded.
    /// </returns>
    static bool LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx, bool theToSetAsActive);
    /// <summary>
    /// Loads triangulation data for each face of the shape
    /// from some deferred storage using specified shared input file system
    /// </summary>
    /// <param name="in]">
    /// theShape             shape to load triangulations
    /// </param>
    /// <param name="in]">
    /// theTriangulationIdx  index defining what triangulation should be loaded. Starts
    /// from 0.
    /// -1 is used in specific case to load currently already active triangulation.
    /// If some face doesn't contain triangulation with this index, nothing will be loaded for
    /// it. Exception will be thrown in case of invalid negative index
    /// </param>
    /// <param name="in]">
    /// theToSetAsActive     flag to activate triangulation after its loading
    /// </param>
    /// <param name="in]">
    /// theFileSystem        shared file system
    /// </param>
    /// <returns>
    /// TRUE if at least one triangulation is loaded.
    /// </returns>
    static bool LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx);
    /// <summary>
    /// Loads triangulation data for each face of the shape
    /// from some deferred storage using specified shared input file system
    /// </summary>
    /// <param name="in]">
    /// theShape             shape to load triangulations
    /// </param>
    /// <param name="in]">
    /// theTriangulationIdx  index defining what triangulation should be loaded. Starts
    /// from 0.
    /// -1 is used in specific case to load currently already active triangulation.
    /// If some face doesn't contain triangulation with this index, nothing will be loaded for
    /// it. Exception will be thrown in case of invalid negative index
    /// </param>
    /// <param name="in]">
    /// theToSetAsActive     flag to activate triangulation after its loading
    /// </param>
    /// <param name="in]">
    /// theFileSystem        shared file system
    /// </param>
    /// <returns>
    /// TRUE if at least one triangulation is loaded.
    /// </returns>
    static bool LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Releases triangulation data for each face of the shape if there is deferred storage to load it
    /// later
    /// </summary>
    /// <param name="in]">
    /// theShape             shape to unload triangulations
    /// </param>
    /// <param name="in]">
    /// theTriangulationIdx  index defining what triangulation should be unloaded. Starts
    /// from 0.
    /// -1 is used in specific case to unload currently already active triangulation.
    /// If some face doesn't contain triangulation with this index, nothing will be unloaded
    /// for it. Exception will be thrown in case of invalid negative index
    /// </param>
    /// <returns>
    /// TRUE if at least one triangulation is unloaded.
    /// </returns>
    static bool UnloadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx);
    /// <summary>
    /// Releases triangulation data for each face of the shape if there is deferred storage to load it
    /// later
    /// </summary>
    /// <param name="in]">
    /// theShape             shape to unload triangulations
    /// </param>
    /// <param name="in]">
    /// theTriangulationIdx  index defining what triangulation should be unloaded. Starts
    /// from 0.
    /// -1 is used in specific case to unload currently already active triangulation.
    /// If some face doesn't contain triangulation with this index, nothing will be unloaded
    /// for it. Exception will be thrown in case of invalid negative index
    /// </param>
    /// <returns>
    /// TRUE if at least one triangulation is unloaded.
    /// </returns>
    static bool UnloadTriangulation(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Activates triangulation data for each face of the shape
    /// from some deferred storage using specified shared input file system
    /// </summary>
    /// <param name="in]">
    /// theShape               shape to activate triangulations
    /// </param>
    /// <param name="in]">
    /// theTriangulationIdx    index defining what triangulation should be activated.
    /// Starts from 0.
    /// Exception will be thrown in case of invalid negative index
    /// </param>
    /// <param name="in]">
    /// theToActivateStrictly  flag to activate exactly triangulation with defined
    /// theTriangulationIdx index.
    /// In TRUE case if some face doesn't contain triangulation with this index, active
    /// triangulation will not be changed for it. Else the last available triangulation will be
    /// activated.
    /// </param>
    /// <returns>
    /// TRUE if at least one active triangulation was changed.
    /// </returns>
    static bool ActivateTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx, bool theToActivateStrictly);
    /// <summary>
    /// Activates triangulation data for each face of the shape
    /// from some deferred storage using specified shared input file system
    /// </summary>
    /// <param name="in]">
    /// theShape               shape to activate triangulations
    /// </param>
    /// <param name="in]">
    /// theTriangulationIdx    index defining what triangulation should be activated.
    /// Starts from 0.
    /// Exception will be thrown in case of invalid negative index
    /// </param>
    /// <param name="in]">
    /// theToActivateStrictly  flag to activate exactly triangulation with defined
    /// theTriangulationIdx index.
    /// In TRUE case if some face doesn't contain triangulation with this index, active
    /// triangulation will not be changed for it. Else the last available triangulation will be
    /// activated.
    /// </param>
    /// <returns>
    /// TRUE if at least one active triangulation was changed.
    /// </returns>
    static bool ActivateTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx);
    /* Method skipped due to unknown mapping: bool LoadAllTriangulations(TopoDS_Shape theShape, OSD_FileSystem theFileSystem, ) */
    /// <summary>
    /// Loads all available triangulations for each face of the shape
    /// from some deferred storage using specified shared input file system
    /// </summary>
    /// <param name="in]">
    /// theShape       shape to load triangulations
    /// </param>
    /// <param name="in]">
    /// theFileSystem  shared file system
    /// </param>
    /// <returns>
    /// TRUE if at least one triangulation is loaded.
    /// </returns>
    static bool LoadAllTriangulations(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Releases all available triangulations for each face of the shape if there is deferred storage
    /// to load them later
    /// </summary>
    /// <param name="in]">
    /// theShape       shape to unload triangulations
    /// </param>
    /// <returns>
    /// TRUE if at least one triangulation is unloaded.
    /// </returns>
    static bool UnloadAllTriangulations(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Returns  True if  the    distance between the  two
    /// vertices is lower than their tolerance.
    /// </summary>
    static bool Compare(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    /// <summary>
    /// Returns  True if  the    distance between the  two
    /// edges is lower than their tolerance.
    /// </summary>
    static bool Compare(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
    /// <summary>
    /// Returns the outer most wire of <F>. Returns a Null
    /// wire if <F> has no wires.
    /// </summary>
    static Macad::Occt::TopoDS_Wire^ OuterWire(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Stores in the map  <M> all the 3D topology edges
    /// of <S>.
    /// </summary>
    static void Map3DEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M);
    /// <summary>
    /// Verifies that the edge  <E> is found two  times on
    /// the face <F> before calling BRep_Tool::IsClosed.
    /// </summary>
    static bool IsReallyClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Detect closedness of face in U and V directions
    /// </summary>
    static void DetectClosedness(Macad::Occt::TopoDS_Face^ theFace, bool% theUclosed, bool% theVclosed);
    /// <summary>
    /// Dumps the topological structure and the geometry
    /// of <Sh> on the stream <S>.
    /// </summary>
    static void Dump(Macad::Occt::TopoDS_Shape^ Sh, System::IO::TextWriter^ S);
    /// <summary>
    /// Writes the shape to the stream in an ASCII format TopTools_FormatVersion_VERSION_1.
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
    static void Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the shape to the stream in an ASCII format TopTools_FormatVersion_VERSION_1.
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
    /// Writes the shape to the stream in an ASCII format of specified version.
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
    /// theVersion        the TopTools format version
    /// </param>
    /// <param name="theProgress">
    /// the range of progress indicator to fill in
    /// </param>
    static void Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the shape to the stream in an ASCII format of specified version.
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
    /// theVersion        the TopTools format version
    /// </param>
    /// <param name="theProgress">
    /// the range of progress indicator to fill in
    /// </param>
    static void Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion);
    /* Method skipped due to unknown mapping: void Read(TopoDS_Shape Sh, istream S, BRep_Builder B, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void Read(TopoDS_Shape Sh, istream S, BRep_Builder B, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Writes the shape to the file in an ASCII format TopTools_FormatVersion_VERSION_1.
    /// This alias writes shape with triangulation data.
    /// </summary>
    /// <param name="in]">
    /// theShape  the shape to write
    /// </param>
    /// <param name="in]">
    /// theFile   the path to file to output shape into
    /// </param>
    /// <param name="theProgress">
    /// the range of progress indicator to fill in
    /// </param>
    static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the shape to the file in an ASCII format TopTools_FormatVersion_VERSION_1.
    /// This alias writes shape with triangulation data.
    /// </summary>
    /// <param name="in]">
    /// theShape  the shape to write
    /// </param>
    /// <param name="in]">
    /// theFile   the path to file to output shape into
    /// </param>
    /// <param name="theProgress">
    /// the range of progress indicator to fill in
    /// </param>
    static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile);
    /// <summary>
    /// Writes the shape to the file in an ASCII format of specified version.
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
    /// theVersion        the TopTools format version
    /// </param>
    /// <param name="theProgress">
    /// the range of progress indicator to fill in
    /// </param>
    static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the shape to the file in an ASCII format of specified version.
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
    /// theVersion        the TopTools format version
    /// </param>
    /// <param name="theProgress">
    /// the range of progress indicator to fill in
    /// </param>
    static bool Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion);
    /// <summary>
    /// Reads a Shape  from <File>,  returns it in  <Sh>.
    /// <B> is used to build the shape.
    /// </summary>
    static bool Read(Macad::Occt::TopoDS_Shape^ Sh, System::String^ File, Macad::Occt::BRep_Builder^ B, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Reads a Shape  from <File>,  returns it in  <Sh>.
    /// <B> is used to build the shape.
    /// </summary>
    static bool Read(Macad::Occt::TopoDS_Shape^ Sh, System::String^ File, Macad::Occt::BRep_Builder^ B);
    /// <summary>
    /// Evals real tolerance of edge  <theE>.
    /// <theC3d>, <theC2d>, <theS>, <theF>, <theL> are
    /// correspondently 3d curve of edge, 2d curve on surface <theS> and
    /// rang of edge
    /// If calculated tolerance is more then current edge tolerance, edge is updated.
    /// Method returns actual tolerance of edge
    /// </summary>
    static double EvalAndUpdateTol(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::Geom_Curve^ theC3d, Macad::Occt::Geom2d_Curve^ theC2d, Macad::Occt::Geom_Surface^ theS, double theF, double theL);
    /// <summary>
    /// returns the cumul  of the orientation  of <Edge>
    /// and thc containing wire in <Face>
    /// </summary>
    static Macad::Occt::TopAbs_Orientation OriEdgeInFace(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace);
    /// <summary>
    /// Removes internal sub-shapes from the shape.
    /// The check on internal status is based on orientation of sub-shapes,
    /// classification is not performed.
    /// Before removal of internal sub-shapes the algorithm checks if such
    /// removal is not going to break topological connectivity between sub-shapes.
    /// The flag <theForce> if set to true disables the connectivity check and clears
    /// the given shape from all sub-shapes with internal orientation.
    /// </summary>
    static void RemoveInternals(Macad::Occt::TopoDS_Shape^ theS, bool theForce);
    /// <summary>
    /// Removes internal sub-shapes from the shape.
    /// The check on internal status is based on orientation of sub-shapes,
    /// classification is not performed.
    /// Before removal of internal sub-shapes the algorithm checks if such
    /// removal is not going to break topological connectivity between sub-shapes.
    /// The flag <theForce> if set to true disables the connectivity check and clears
    /// the given shape from all sub-shapes with internal orientation.
    /// </summary>
    static void RemoveInternals(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Check all locations of shape according criterium:
    /// aTrsf.IsNegative() || (Abs(Abs(aTrsf.ScaleFactor()) - 1.) > TopLoc_Location::ScalePrec())
    /// All sub-shapes having such locations are put in list theProblemShapes
    /// </summary>
    static void CheckLocations(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::TopTools_ListOfShape^ theProblemShapes);
}; // class BRepTools

//---------------------------------------------------------------------
//  Class  BRepTools_Modification
//---------------------------------------------------------------------
/// <summary>
/// Defines geometric modifications to a shape, i.e.
/// changes to faces, edges and vertices.
/// </summary>
public ref class BRepTools_Modification
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepTools_Modification_h
public:
    Include_BRepTools_Modification_h
#endif

protected:
    BRepTools_Modification(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    BRepTools_Modification(::BRepTools_Modification* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepTools_Modification(::BRepTools_Modification& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepTools_Modification* NativeInstance
    {
        ::BRepTools_Modification* get()
        {
            return static_cast<::BRepTools_Modification*>(_NativeInstance);
        }
    }

public:
    BRepTools_Modification();
    /// <summary>
    /// Returns true if the face, F, has been modified.
    /// If the face has been modified:
    /// - S is the new geometry of the face,
    /// - L is its new location, and
    /// - Tol is the new tolerance.
    /// The flag, RevWires, is set to true when the
    /// modification reverses the normal of the surface, (i.e.
    /// the wires have to be reversed).
    /// The flag, RevFace, is set to true if the orientation of
    /// the modified face changes in the shells which contain it.
    /// If the face has not been modified this function returns
    /// false, and the values of S, L, Tol, RevWires and
    /// RevFace are not significant.
    /// </summary>
    bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
    /* Method skipped due to unknown mapping: bool NewTriangulation(TopoDS_Face F, Poly_Triangulation T, ) */
    /// <summary>
    /// Returns true if the edge, E, has been modified.
    /// If the edge has been modified:
    /// - C is the new geometry associated with the edge,
    /// - L is its new location, and
    /// - Tol is the new tolerance.
    /// If the edge has not been modified, this function
    /// returns false, and the values of C, L and Tol are not significant.
    /// </summary>
    bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
    /* Method skipped due to unknown mapping: bool NewPolygon(TopoDS_Edge E, Poly_Polygon3D P, ) */
    /* Method skipped due to unknown mapping: bool NewPolygonOnTriangulation(TopoDS_Edge E, TopoDS_Face F, Poly_PolygonOnTriangulation P, ) */
    /// <summary>
    /// Returns true if the vertex V has been modified.
    /// If V has been modified:
    /// - P is the new geometry of the vertex, and
    /// - Tol is the new tolerance.
    /// If the vertex has not been modified this function
    /// returns false, and the values of P and Tol are not significant.
    /// </summary>
    bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
    /// <summary>
    /// Returns true if the edge, E, has a new curve on
    /// surface on the face, F.
    /// If a new curve exists:
    /// - C is the new geometry of the edge,
    /// - L is the new location, and
    /// - Tol is the new tolerance.
    /// NewE is the new edge created from E, and NewF is
    /// the new face created from F.
    /// If there is no new curve on the face, this function
    /// returns false, and the values of C, L and Tol are not significant.
    /// </summary>
    bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
    /// <summary>
    /// Returns true if the vertex V has a new parameter on the edge E.
    /// If a new parameter exists:
    /// - P is the parameter, and
    /// - Tol is the new tolerance.
    /// If there is no new parameter this function returns
    /// false, and the values of P and Tol are not significant.
    /// </summary>
    bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
    /// <summary>
    /// Returns the  continuity of  <NewE> between <NewF1>
    /// and <NewF2>.
    /// <NewE> is the new  edge created from <E>.  <NewF1>
    /// (resp. <NewF2>) is the new  face created from <F1>
    /// (resp. <F2>).
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
    static Macad::Occt::BRepTools_Modification^ CreateDowncasted(::BRepTools_Modification* instance);
}; // class BRepTools_Modification

//---------------------------------------------------------------------
//  Class  BRepTools_CopyModification
//---------------------------------------------------------------------
/// <summary>
/// Tool class implementing necessary functionality for copying geometry and triangulation.
/// </summary>
public ref class BRepTools_CopyModification
    : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_BRepTools_CopyModification_h
public:
    Include_BRepTools_CopyModification_h
#endif

protected:
    BRepTools_CopyModification(InitMode init)
        : Macad::Occt::BRepTools_Modification( init )
    {}

public:
    BRepTools_CopyModification(::BRepTools_CopyModification* nativeInstance)
        : Macad::Occt::BRepTools_Modification( nativeInstance )
    {}

    BRepTools_CopyModification(::BRepTools_CopyModification& nativeInstance)
        : Macad::Occt::BRepTools_Modification( nativeInstance )
    {}

    property ::BRepTools_CopyModification* NativeInstance
    {
        ::BRepTools_CopyModification* get()
        {
            return static_cast<::BRepTools_CopyModification*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor.
    /// \param[in] theCopyGeom  indicates that the geometry (surfaces and curves) should be copied
    /// \param[in] theCopyMesh  indicates that the triangulation should be copied
    /// </summary>
    BRepTools_CopyModification(bool theCopyGeom, bool theCopyMesh);
    /// <summary>
    /// Constructor.
    /// \param[in] theCopyGeom  indicates that the geometry (surfaces and curves) should be copied
    /// \param[in] theCopyMesh  indicates that the triangulation should be copied
    /// </summary>
    BRepTools_CopyModification(bool theCopyGeom);
    /// <summary>
    /// Constructor.
    /// \param[in] theCopyGeom  indicates that the geometry (surfaces and curves) should be copied
    /// \param[in] theCopyMesh  indicates that the triangulation should be copied
    /// </summary>
    BRepTools_CopyModification();
    /// <summary>
    /// Returns true if theFace has been modified.
    /// If the face has been modified:
    /// - theSurf is the new geometry of the face,
    /// - theLoc is its new location, and
    /// - theTol is the new tolerance.
    /// theRevWires, theRevFace are always set to false, because the orientation is not changed.
    /// </summary>
    bool NewSurface(Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::Geom_Surface^ theSurf, Macad::Occt::TopLoc_Location^ theLoc, double% theTol, bool% theRevWires, bool% theRevFace);
    /// <summary>
    /// Returns true if theEdge has been modified.
    /// If the edge has been modified:
    /// - theCurve is the new geometric support of the edge,
    /// - theLoc is the new location, and
    /// - theTol is the new tolerance.
    /// If the edge has not been modified, this function
    /// returns false, and the values of theCurve, theLoc and theTol are not significant.
    /// </summary>
    bool NewCurve(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::Geom_Curve^ theCurve, Macad::Occt::TopLoc_Location^ theLoc, double% theTol);
    /// <summary>
    /// Returns true if theVertex has been modified.
    /// If the vertex has been modified:
    /// - thePnt is the new geometry of the vertex, and
    /// - theTol is the new tolerance.
    /// If the vertex has not been modified this function
    /// returns false, and the values of thePnt and theTol are not significant.
    /// </summary>
    bool NewPoint(Macad::Occt::TopoDS_Vertex^ theVertex, Macad::Occt::Pnt% thePnt, double% theTol);
    /// <summary>
    /// Returns true if theEdge has a new curve on surface on theFace.
    /// If a new curve exists:
    /// - theCurve is the new geometric support of the edge,
    /// - theTol the new tolerance.
    /// If no new curve exists, this function returns false, and
    /// the values of theCurve and theTol are not significant.
    /// </summary>
    bool NewCurve2d(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theNewEdge, Macad::Occt::TopoDS_Face^ theNewFace, Macad::Occt::Geom2d_Curve^ theCurve, double% theTol);
    /// <summary>
    /// Returns true if theVertex has a new parameter on theEdge.
    /// If a new parameter exists:
    /// - thePnt is the parameter, and
    /// - theTol is the new tolerance.
    /// If no new parameter exists, this function returns false,
    /// and the values of thePnt and theTol are not significant.
    /// </summary>
    bool NewParameter(Macad::Occt::TopoDS_Vertex^ theVertex, Macad::Occt::TopoDS_Edge^ theEdge, double% thePnt, double% theTol);
    /// <summary>
    /// Returns the continuity of theNewEdge between theNewFace1 and theNewFace2.
    /// 
    /// theNewEdge is the new edge created from theEdge.  theNewFace1
    /// (resp. theNewFace2) is the new face created from theFace1 (resp. theFace2).
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2, Macad::Occt::TopoDS_Edge^ theNewEdge, Macad::Occt::TopoDS_Face^ theNewFace1, Macad::Occt::TopoDS_Face^ theNewFace2);
    /* Method skipped due to unknown mapping: bool NewTriangulation(TopoDS_Face theFace, Poly_Triangulation theTri, ) */
    /* Method skipped due to unknown mapping: bool NewPolygon(TopoDS_Edge theEdge, Poly_Polygon3D thePoly, ) */
    /* Method skipped due to unknown mapping: bool NewPolygonOnTriangulation(TopoDS_Edge theEdge, TopoDS_Face theFace, Poly_PolygonOnTriangulation thePoly, ) */
    static Macad::Occt::BRepTools_CopyModification^ CreateDowncasted(::BRepTools_CopyModification* instance);
}; // class BRepTools_CopyModification

//---------------------------------------------------------------------
//  Class  BRepTools_GTrsfModification
//---------------------------------------------------------------------
/// <summary>
/// Defines a modification of the  geometry by a  GTrsf
/// from gp. All methods return True and transform the
/// geometry.
/// </summary>
public ref class BRepTools_GTrsfModification sealed
    : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_BRepTools_GTrsfModification_h
public:
    Include_BRepTools_GTrsfModification_h
#endif

public:
    BRepTools_GTrsfModification(::BRepTools_GTrsfModification* nativeInstance)
        : Macad::Occt::BRepTools_Modification( nativeInstance )
    {}

    BRepTools_GTrsfModification(::BRepTools_GTrsfModification& nativeInstance)
        : Macad::Occt::BRepTools_Modification( nativeInstance )
    {}

    property ::BRepTools_GTrsfModification* NativeInstance
    {
        ::BRepTools_GTrsfModification* get()
        {
            return static_cast<::BRepTools_GTrsfModification*>(_NativeInstance);
        }
    }

public:
    BRepTools_GTrsfModification(Macad::Occt::gp_GTrsf^ T);
    /// <summary>
    /// Gives an access on the GTrsf.
    /// </summary>
    Macad::Occt::gp_GTrsf^ GTrsf();
    /// <summary>
    /// Returns Standard_True  if  the face  <F> has  been
    /// modified.  In this  case, <S> is the new geometric
    /// support of  the  face, <L> the  new location,<Tol>
    /// the new  tolerance.<RevWires> has  to  be set   to
    /// Standard_True   when the modification reverses the
    /// normal of  the   surface.(the wires   have  to  be
    /// reversed).   <RevFace>   has   to   be   set    to
    /// Standard_True if  the orientation  of the modified
    /// face changes in the  shells which contain  it.  --
    /// Here, <RevFace>  will  return Standard_True if the
    /// -- gp_Trsf is negative.
    /// </summary>
    bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
    /// <summary>
    /// Returns Standard_True  if  the edge  <E> has  been
    /// modified.  In this case,  <C> is the new geometric
    /// support of the  edge, <L> the  new location, <Tol>
    /// the         new    tolerance.   Otherwise, returns
    /// Standard_False,    and  <C>,  <L>,   <Tol> are not
    /// significant.
    /// </summary>
    bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
    /// <summary>
    /// Returns  Standard_True if the  vertex <V> has been
    /// modified.  In this  case, <P> is the new geometric
    /// support of the vertex,   <Tol> the new  tolerance.
    /// Otherwise, returns Standard_False, and <P>,  <Tol>
    /// are not significant.
    /// </summary>
    bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
    /// <summary>
    /// Returns Standard_True if  the edge  <E> has a  new
    /// curve on surface on the face <F>.In this case, <C>
    /// is the new geometric support of  the edge, <L> the
    /// new location, <Tol> the new tolerance.
    /// Otherwise, returns  Standard_False, and <C>,  <L>,
    /// <Tol> are not significant.
    /// </summary>
    bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
    /// <summary>
    /// Returns Standard_True if the Vertex  <V> has a new
    /// parameter on the  edge <E>. In  this case,  <P> is
    /// the parameter,    <Tol>  the     new    tolerance.
    /// Otherwise, returns Standard_False, and <P>,  <Tol>
    /// are not significant.
    /// </summary>
    bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
    /// <summary>
    /// Returns the  continuity of  <NewE> between <NewF1>
    /// and <NewF2>.
    /// 
    /// <NewE> is the new  edge created from <E>.  <NewF1>
    /// (resp. <NewF2>) is the new  face created from <F1>
    /// (resp. <F2>).
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
    /* Method skipped due to unknown mapping: bool NewTriangulation(TopoDS_Face theFace, Poly_Triangulation theTri, ) */
    /* Method skipped due to unknown mapping: bool NewPolygon(TopoDS_Edge theEdge, Poly_Polygon3D thePoly, ) */
    /* Method skipped due to unknown mapping: bool NewPolygonOnTriangulation(TopoDS_Edge theEdge, TopoDS_Face theFace, Poly_PolygonOnTriangulation thePoly, ) */
    static Macad::Occt::BRepTools_GTrsfModification^ CreateDowncasted(::BRepTools_GTrsfModification* instance);
}; // class BRepTools_GTrsfModification

//---------------------------------------------------------------------
//  Class  BRepTools_History
//---------------------------------------------------------------------
/// <summary>
/// The history keeps the following relations between the input shapes
/// (S1, ..., Sm) and output shapes (T1, ..., Tn):
/// 1) an output shape Tj is generated from an input shape Si: Tj <= G(Si);
/// 2) a output shape Tj is modified from an input shape Si: Tj <= M(Si);
/// 3) an input shape (Si) is removed: R(Si) == 1.
/// 
/// The relations are kept only for shapes of types vertex, edge, face, and
/// solid.
/// 
/// The last relation means that:
/// 1) shape Si is not an output shape and
/// 2) no any shape is modified (produced) from shape Si:
/// R(Si) == 1 ==> Si != Tj, M(Si) == 0.
/// 
/// It means that the input shape cannot be removed and modified
/// simultaneously. However, the shapes may be generated from the
/// removed shape. For instance, in Fillet operation the edges
/// generate faces and then are removed.
/// 
/// No any shape could be generated and modified from the same shape
/// simultaneously: sets G(Si) and M(Si) are not intersected
/// (G(Si) ^ M(Si) == 0).
/// 
/// Each output shape should be:
/// 1) an input shape or
/// 2) generated or modified from an input shape (even generated from the
/// implicit null shape if necessary):
/// Tj == Si V (exists Si that Tj <= G(Si) U M(Si)).
/// 
/// Recommendations to choose between relations 'generated' and 'modified':
/// 1) a shape is generated from input shapes if it dimension is greater or
/// smaller than the dimensions of the input shapes;
/// 2) a shape is generated from input shapes if these shapes are also output
/// shapes;
/// 3) a shape is generated from input shapes of the same dimension if it is
/// produced by joining shapes generated from these shapes;
/// 4) a shape is modified from an input shape if it replaces the input shape by
/// changes of the location, the tolerance, the bounds of the parametric
/// space (the faces for a solid), the parametrization and/or by applying of
/// an approximation;
/// 5) a shape is modified from input shapes of the same dimension if it is
/// produced by joining shapes modified from these shapes.
/// 
/// Two sequential histories:
/// - one history (H12) of shapes S1, ..., Sm to shapes T1, ..., Tn and
/// - another history (H23) of shapes T1, ..., Tn to shapes Q1, ..., Ql
/// could be merged to the single history (H13) of shapes S1, ..., Sm to shapes
/// Q1, ..., Ql.
/// 
/// During the merge:
/// 1) if shape Tj is generated from shape Si then each shape generated or
/// modified from shape Tj is considered as a shape generated from shape Si
/// among shapes Q1, ..., Ql:
/// Tj <= G12(Si), Qk <= G23(Tj) U M23(Tj) ==> Qk <= G13(Si).
/// 2) if shape Tj is modified from shape Si, shape Qk is generated from shape
/// Tj then shape Qk is considered as a shape generated from shape Si among
/// shapes Q1, ..., Ql:
/// Tj <= M12(Si), Qk <= G23(Tj) ==> Qk <= G13(Si);
/// 3) if shape Tj is modified from shape Si, shape Qk is modified from shape
/// Tj then shape Qk is considered as a shape modified from shape Si among
/// shapes Q1, ..., Ql:
/// Tj <= M12(Si), Qk <= M23(Tj) ==> Qk <= M13(Si);
/// </summary>
public ref class BRepTools_History sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepTools_History_h
public:
    Include_BRepTools_History_h
#endif

public:
    BRepTools_History(::BRepTools_History* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepTools_History(::BRepTools_History& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepTools_History* NativeInstance
    {
        ::BRepTools_History* get()
        {
            return static_cast<::BRepTools_History*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  TRelationType
    //---------------------------------------------------------------------
    /// <summary>
    /// The types of the historical relations.
    /// </summary>
    enum class TRelationType
    {
        Removed = 0,
        Generated = 1,
        Modified = 2
    }; // enum  class TRelationType

    /// <summary>
    /// </summary>
    /// @name Constructors for History creation
    /// Empty constructor
    BRepTools_History();
    /// <summary>
    /// Returns 'true' if the type of the shape is supported by the history.
    /// </summary>
    static bool IsSupportedType(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Methods to set the history.
    /// Set the second shape as generated one from the first shape.
    /// </summary>
    void AddGenerated(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theGenerated);
    /// <summary>
    /// Set the second shape as modified one from the first shape.
    /// </summary>
    void AddModified(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theModified);
    /// <summary>
    /// Set the shape as removed one.
    /// </summary>
    void Remove(Macad::Occt::TopoDS_Shape^ theRemoved);
    /// <summary>
    /// Set the second shape as the only generated one from the first one.
    /// </summary>
    void ReplaceGenerated(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theGenerated);
    /// <summary>
    /// Set the second shape as the only modified one from the first one.
    /// </summary>
    void ReplaceModified(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theModified);
    /// <summary>
    /// Clears the history.
    /// </summary>
    void Clear();
    /// <summary>
    /// Methods to read the history.
    /// Returns all shapes generated from the shape.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theInitial);
    /// <summary>
    /// Returns all shapes modified from the shape.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theInitial);
    /// <summary>
    /// Returns 'true' if the shape is removed.
    /// </summary>
    bool IsRemoved(Macad::Occt::TopoDS_Shape^ theInitial);
    /// <summary>
    /// Returns 'true' if there any shapes with Generated elements present
    /// </summary>
    bool HasGenerated();
    /// <summary>
    /// Returns 'true' if there any Modified shapes present
    /// </summary>
    bool HasModified();
    /// <summary>
    /// Returns 'true' if there any removed shapes present
    /// </summary>
    bool HasRemoved();
    /// <summary>
    /// A method to merge a next history to this history.
    /// Merges the next history to this history.
    /// </summary>
    void Merge(Macad::Occt::BRepTools_History^ theHistory23);
    /// <summary>
    /// A method to dump a history
    /// Prints the brief description of the history into a stream
    /// </summary>
    void Dump(System::IO::TextWriter^ theS);
    static Macad::Occt::BRepTools_History^ CreateDowncasted(::BRepTools_History* instance);
}; // class BRepTools_History

//---------------------------------------------------------------------
//  Class  BRepTools_Modifier
//---------------------------------------------------------------------
/// <summary>
/// Performs geometric modifications on a shape.
/// </summary>
public ref class BRepTools_Modifier sealed
    : public Macad::Occt::BaseClass<::BRepTools_Modifier>
{

#ifdef Include_BRepTools_Modifier_h
public:
    Include_BRepTools_Modifier_h
#endif

public:
    BRepTools_Modifier(::BRepTools_Modifier* nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_Modifier>( nativeInstance, true )
    {}

    BRepTools_Modifier(::BRepTools_Modifier& nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_Modifier>( &nativeInstance, false )
    {}

    property ::BRepTools_Modifier* NativeInstance
    {
        ::BRepTools_Modifier* get()
        {
            return static_cast<::BRepTools_Modifier*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty Modifier.
    /// </summary>
    BRepTools_Modifier(bool theMutableInput);
    /// <summary>
    /// Creates an empty Modifier.
    /// </summary>
    BRepTools_Modifier();
    /// <summary>
    /// Creates a modifier on the shape <S>.
    /// </summary>
    BRepTools_Modifier(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Creates a modifier on  the shape <S>, and performs
    /// the modifications described by <M>.
    /// </summary>
    BRepTools_Modifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M);
    /// <summary>
    /// Initializes the modifier with the shape <S>.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Performs the modifications described by <M>.
    /// </summary>
    void Perform(Macad::Occt::BRepTools_Modification^ M, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Performs the modifications described by <M>.
    /// </summary>
    void Perform(Macad::Occt::BRepTools_Modification^ M);
    /// <summary>
    /// Returns Standard_True if the modification has
    /// been computed successfully.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the current mutable input state
    /// </summary>
    bool IsMutableInput();
    /// <summary>
    /// Sets the mutable input state
    /// If true then the input (original) shape can be modified
    /// during modification process
    /// </summary>
    void SetMutableInput(bool theMutableInput);
    /// <summary>
    /// Returns the modified shape corresponding to <S>.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepTools_Modifier

//---------------------------------------------------------------------
//  Class  BRepTools_NurbsConvertModification
//---------------------------------------------------------------------
/// <summary>
/// Defines a modification of the  geometry by a  Trsf
/// from gp. All methods return True and transform the
/// geometry.
/// </summary>
public ref class BRepTools_NurbsConvertModification sealed
    : public Macad::Occt::BRepTools_CopyModification
{

#ifdef Include_BRepTools_NurbsConvertModification_h
public:
    Include_BRepTools_NurbsConvertModification_h
#endif

public:
    BRepTools_NurbsConvertModification(::BRepTools_NurbsConvertModification* nativeInstance)
        : Macad::Occt::BRepTools_CopyModification( nativeInstance )
    {}

    BRepTools_NurbsConvertModification(::BRepTools_NurbsConvertModification& nativeInstance)
        : Macad::Occt::BRepTools_CopyModification( nativeInstance )
    {}

    property ::BRepTools_NurbsConvertModification* NativeInstance
    {
        ::BRepTools_NurbsConvertModification* get()
        {
            return static_cast<::BRepTools_NurbsConvertModification*>(_NativeInstance);
        }
    }

public:
    BRepTools_NurbsConvertModification();
    /// <summary>
    /// Returns Standard_True  if  the face  <F> has  been
    /// modified.  In this  case, <S> is the new geometric
    /// support of  the  face, <L> the  new location,<Tol>
    /// the new  tolerance.<RevWires> has  to  be set   to
    /// Standard_True   when the modification reverses the
    /// normal of  the   surface.(the wires   have  to  be
    /// reversed).   <RevFace>   has   to   be   set    to
    /// Standard_True if  the orientation  of the modified
    /// face changes in the  shells which contain  it.  --
    /// Here, <RevFace>  will  return Standard_True if the
    /// -- gp_Trsf is negative.
    /// </summary>
    bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
    /// <summary>
    /// Returns Standard_True  if  the edge  <E> has  been
    /// modified.  In this case,  <C> is the new geometric
    /// support of the  edge, <L> the  new location, <Tol>
    /// the         new    tolerance.   Otherwise, returns
    /// Standard_False,    and  <C>,  <L>,   <Tol> are not
    /// significant.
    /// </summary>
    bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
    /// <summary>
    /// Returns  Standard_True if the  vertex <V> has been
    /// modified.  In this  case, <P> is the new geometric
    /// support of the vertex,   <Tol> the new  tolerance.
    /// Otherwise, returns Standard_False, and <P>,  <Tol>
    /// are not significant.
    /// </summary>
    bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
    /// <summary>
    /// Returns Standard_True if  the edge  <E> has a  new
    /// curve on surface on the face <F>.In this case, <C>
    /// is the new geometric support of  the edge, <L> the
    /// new location, <Tol> the new tolerance.
    /// Otherwise, returns  Standard_False, and <C>,  <L>,
    /// <Tol> are not significant.
    /// </summary>
    bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
    /// <summary>
    /// Returns Standard_True if the Vertex  <V> has a new
    /// parameter on the  edge <E>. In  this case,  <P> is
    /// the parameter,    <Tol>  the     new    tolerance.
    /// Otherwise, returns Standard_False, and <P>,  <Tol>
    /// are not significant.
    /// </summary>
    bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
    /// <summary>
    /// Returns the  continuity of  <NewE> between <NewF1>
    /// and <NewF2>.
    /// 
    /// <NewE> is the new  edge created from <E>.  <NewF1>
    /// (resp. <NewF2>) is the new  face created from <F1>
    /// (resp. <F2>).
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
    /* Method skipped due to unknown mapping: bool NewTriangulation(TopoDS_Face theFace, Poly_Triangulation theTri, ) */
    /* Method skipped due to unknown mapping: bool NewPolygon(TopoDS_Edge theEdge, Poly_Polygon3D thePoly, ) */
    /* Method skipped due to unknown mapping: bool NewPolygonOnTriangulation(TopoDS_Edge theEdge, TopoDS_Face theFace, Poly_PolygonOnTriangulation thePoly, ) */
    Macad::Occt::TopTools_ListOfShape^ GetUpdatedEdges();
    static Macad::Occt::BRepTools_NurbsConvertModification^ CreateDowncasted(::BRepTools_NurbsConvertModification* instance);
}; // class BRepTools_NurbsConvertModification

//---------------------------------------------------------------------
//  Class  BRepTools_ReShape
//---------------------------------------------------------------------
/// <summary>
/// Rebuilds a Shape by making pre-defined substitutions on some
/// of its components
/// 
/// In a first phase, it records requests to replace or remove
/// some individual shapes
/// For each shape, the last given request is recorded
/// Requests may be applied "Oriented" (i.e. only to an item with
/// the SAME orientation) or not (the orientation of replacing
/// shape is respectful of that of the original one)
/// 
/// Then, these requests may be applied to any shape which may
/// contain one or more of these individual shapes
/// 
/// Supports the 'BRepTools_History' history by method 'History'.
/// </summary>
public ref class BRepTools_ReShape
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepTools_ReShape_h
public:
    Include_BRepTools_ReShape_h
#endif

protected:
    BRepTools_ReShape(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    BRepTools_ReShape(::BRepTools_ReShape* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepTools_ReShape(::BRepTools_ReShape& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepTools_ReShape* NativeInstance
    {
        ::BRepTools_ReShape* get()
        {
            return static_cast<::BRepTools_ReShape*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  TReplacementKind
    //---------------------------------------------------------------------
    /// <summary>
    /// The kinds of the replacements.
    /// </summary>
    enum class TReplacementKind
    {
        Remove = 1,
        Modify = 2,
        Merge_Main = 4,
        Merge_Ordinary = 8
    }; // enum  class TReplacementKind

    /// <summary>
    /// Returns (modifiable) the flag which defines whether Location of shape take into account
    /// during replacing shapes.
    /// </summary>
    property bool ModeConsiderLocation {
        bool get() {
            return ((::BRepTools_ReShape*)_NativeInstance)->ModeConsiderLocation();
        }
        void set(bool value) {
            ((::BRepTools_ReShape*)_NativeInstance)->ModeConsiderLocation() = value;
        }
    }

    /// <summary>
    /// Returns an empty Reshape
    /// </summary>
    BRepTools_ReShape();
    /// <summary>
    /// Clears all substitutions requests
    /// </summary>
    void Clear();
    /// <summary>
    /// Sets a request to Remove a Shape whatever the orientation
    /// </summary>
    void Remove(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Sets a request to Replace a Shape by a new one.
    /// </summary>
    void Replace(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newshape);
    /// <summary>
    /// Tells if a shape is recorded for Replace/Remove
    /// </summary>
    bool IsRecorded(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Returns the new value for an individual shape
    /// If not recorded, returns the original shape itself
    /// If to be Removed, returns a Null Shape
    /// Else, returns the replacing item
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Value(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Returns a complete substitution status for a shape
    /// 0  : not recorded,   <newsh> = original <shape>
    /// < 0: to be removed,  <newsh> is NULL
    /// > 0: to be replaced, <newsh> is a new item
    /// If <last> is False, returns status and new shape recorded in
    /// the map directly for the shape, if True and status > 0 then
    /// recursively searches for the last status and new shape.
    /// </summary>
    int Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh, bool last);
    /// <summary>
    /// Returns a complete substitution status for a shape
    /// 0  : not recorded,   <newsh> = original <shape>
    /// < 0: to be removed,  <newsh> is NULL
    /// > 0: to be replaced, <newsh> is a new item
    /// If <last> is False, returns status and new shape recorded in
    /// the map directly for the shape, if True and status > 0 then
    /// recursively searches for the last status and new shape.
    /// </summary>
    int Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh);
    /// <summary>
    /// Applies the substitutions requests to a shape.
    /// 
    /// theUntil gives the level of type until which requests are taken into account.
    /// For subshapes of the type <until> no rebuild and further exploring are done.
    /// 
    /// NOTE: each subshape can be replaced by shape of the same type
    /// or by shape containing only shapes of that type
    /// (for example, TopoDS_Edge can be replaced by TopoDS_Edge,
    /// TopoDS_Wire or TopoDS_Compound containing TopoDS_Edges).
    /// If incompatible shape type is encountered, it is ignored and flag FAIL1 is set in Status.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Apply(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theUntil);
    /// <summary>
    /// Applies the substitutions requests to a shape.
    /// 
    /// theUntil gives the level of type until which requests are taken into account.
    /// For subshapes of the type <until> no rebuild and further exploring are done.
    /// 
    /// NOTE: each subshape can be replaced by shape of the same type
    /// or by shape containing only shapes of that type
    /// (for example, TopoDS_Edge can be replaced by TopoDS_Edge,
    /// TopoDS_Wire or TopoDS_Compound containing TopoDS_Edges).
    /// If incompatible shape type is encountered, it is ignored and flag FAIL1 is set in Status.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Apply(Macad::Occt::TopoDS_Shape^ theShape);
    Macad::Occt::TopoDS_Vertex^ CopyVertex(Macad::Occt::TopoDS_Vertex^ theV, double theTol);
    Macad::Occt::TopoDS_Vertex^ CopyVertex(Macad::Occt::TopoDS_Vertex^ theV);
    Macad::Occt::TopoDS_Vertex^ CopyVertex(Macad::Occt::TopoDS_Vertex^ theV, Macad::Occt::Pnt theNewPos, double aTol);
    bool IsNewShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Returns the history of the substituted shapes.
    /// </summary>
    Macad::Occt::BRepTools_History^ History();
    static Macad::Occt::BRepTools_ReShape^ CreateDowncasted(::BRepTools_ReShape* instance);
}; // class BRepTools_ReShape

//---------------------------------------------------------------------
//  Class  BRepTools_PurgeLocations
//---------------------------------------------------------------------
/// <summary>
/// Removes location datums, which satisfy conditions:
/// aTrsf.IsNegative() || (Abs(Abs(aTrsf.ScaleFactor()) - 1.) > TopLoc_Location::ScalePrec())
/// from all locations of shape and its subshapes
/// </summary>
public ref class BRepTools_PurgeLocations sealed
    : public Macad::Occt::BaseClass<::BRepTools_PurgeLocations>
{

#ifdef Include_BRepTools_PurgeLocations_h
public:
    Include_BRepTools_PurgeLocations_h
#endif

public:
    BRepTools_PurgeLocations(::BRepTools_PurgeLocations* nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_PurgeLocations>( nativeInstance, true )
    {}

    BRepTools_PurgeLocations(::BRepTools_PurgeLocations& nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_PurgeLocations>( &nativeInstance, false )
    {}

    property ::BRepTools_PurgeLocations* NativeInstance
    {
        ::BRepTools_PurgeLocations* get()
        {
            return static_cast<::BRepTools_PurgeLocations*>(_NativeInstance);
        }
    }

public:
    BRepTools_PurgeLocations();
    /// <summary>
    /// Removes all locations correspondingly to criterium from theShape.
    /// </summary>
    bool Perform(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Returns shape with removed locations.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetResult();
    bool IsDone();
}; // class BRepTools_PurgeLocations

//---------------------------------------------------------------------
//  Class  BRepTools_Quilt
//---------------------------------------------------------------------
/// <summary>
/// A Tool to glue faces at common edges and reconstruct shells.
/// 
/// The user designate pairs of common edges using the method Bind.
/// One edge is designated as the edge to use in place of the other one
/// (they are supposed to be geometrically confused, but this not checked).
/// They can be of opposite directions, this is specified by the orientations.
/// 
/// The user can add shapes with the Add method, all the faces are registered and copies of faces
/// and edges are made to glue at the bound edges.
/// 
/// The user can call the Shells methods to compute a compound of shells from the current set of
/// faces.
/// 
/// If no binding is made this class can be used to make shell from faces already sharing their
/// edges.
/// </summary>
public ref class BRepTools_Quilt sealed
    : public Macad::Occt::BaseClass<::BRepTools_Quilt>
{

#ifdef Include_BRepTools_Quilt_h
public:
    Include_BRepTools_Quilt_h
#endif

public:
    BRepTools_Quilt(::BRepTools_Quilt* nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_Quilt>( nativeInstance, true )
    {}

    BRepTools_Quilt(::BRepTools_Quilt& nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_Quilt>( &nativeInstance, false )
    {}

    property ::BRepTools_Quilt* NativeInstance
    {
        ::BRepTools_Quilt* get()
        {
            return static_cast<::BRepTools_Quilt*>(_NativeInstance);
        }
    }

public:
    BRepTools_Quilt();
    /// <summary>
    /// Binds <Enew> to   be  the  new edge  instead   of
    /// <Eold>.
    /// 
    /// The faces  of  the added  shape containing  <Eold>
    /// will be copied to substitute <Eold> by <Enew>.
    /// 
    /// The vertices  of   <Eold> will   be bound to   the
    /// vertices of <Enew> with the same orientation.
    /// 
    /// If <Eold>  and <Enew>  have different orientations
    /// the curves are considered  to be opposite  and the
    /// pcurves of <Eold>  will be copied  and reversed in
    /// the new faces.
    /// 
    /// <Eold> must belong to the next added shape, <Enew> must belong
    /// to a Shape added before.
    /// </summary>
    void Bind(Macad::Occt::TopoDS_Edge^ Eold, Macad::Occt::TopoDS_Edge^ Enew);
    /// <summary>
    /// Binds <VNew> to be a new vertex instead of <Vold>.
    /// 
    /// The faces  of  the added  shape containing  <Vold>
    /// will be copied to substitute <Vold> by <Vnew>.
    /// </summary>
    void Bind(Macad::Occt::TopoDS_Vertex^ Vold, Macad::Occt::TopoDS_Vertex^ Vnew);
    /// <summary>
    /// Add   the faces of  <S>  to  the Quilt,  the faces
    /// containing bounded edges are copied.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns   True if <S> has   been  copied (<S> is a
    /// vertex, an edge or a face)
    /// </summary>
    bool IsCopied(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the shape substituted to <S> in the Quilt.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Copy(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns a Compound of shells made from the current
    /// set of faces. The shells will be flagged as closed
    /// or not closed.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shells();
}; // class BRepTools_Quilt

//---------------------------------------------------------------------
//  Class  BRepTools_ShapeSet
//---------------------------------------------------------------------
/// <summary>
/// Contains a Shape and all  its subshapes, locations
/// and geometries.
/// 
/// The topology is inherited from TopTools.
/// </summary>
public ref class BRepTools_ShapeSet sealed
    : public Macad::Occt::TopTools_ShapeSet
{

#ifdef Include_BRepTools_ShapeSet_h
public:
    Include_BRepTools_ShapeSet_h
#endif

public:
    BRepTools_ShapeSet(::BRepTools_ShapeSet* nativeInstance)
        : Macad::Occt::TopTools_ShapeSet( nativeInstance )
    {}

    BRepTools_ShapeSet(::BRepTools_ShapeSet& nativeInstance)
        : Macad::Occt::TopTools_ShapeSet( nativeInstance )
    {}

    property ::BRepTools_ShapeSet* NativeInstance
    {
        ::BRepTools_ShapeSet* get()
        {
            return static_cast<::BRepTools_ShapeSet*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Builds an empty ShapeSet.
    /// </summary>
    /// <param name="theWithTriangles">
    /// flag to write triangulation data
    /// </param>
    BRepTools_ShapeSet(bool theWithTriangles, bool theWithNormals);
    /// <summary>
    /// Builds an empty ShapeSet.
    /// </summary>
    /// <param name="theWithTriangles">
    /// flag to write triangulation data
    /// </param>
    BRepTools_ShapeSet(bool theWithTriangles);
    /// <summary>
    /// Builds an empty ShapeSet.
    /// </summary>
    /// <param name="theWithTriangles">
    /// flag to write triangulation data
    /// </param>
    BRepTools_ShapeSet();
    /// <summary>
    /// Builds an empty ShapeSet.
    /// </summary>
    /// <param name="theWithTriangles">
    /// flag to write triangulation data
    /// </param>
    BRepTools_ShapeSet(Macad::Occt::BRep_Builder^ theBuilder, bool theWithTriangles, bool theWithNormals);
    /// <summary>
    /// Builds an empty ShapeSet.
    /// </summary>
    /// <param name="theWithTriangles">
    /// flag to write triangulation data
    /// </param>
    BRepTools_ShapeSet(Macad::Occt::BRep_Builder^ theBuilder, bool theWithTriangles);
    /// <summary>
    /// Builds an empty ShapeSet.
    /// </summary>
    /// <param name="theWithTriangles">
    /// flag to write triangulation data
    /// </param>
    BRepTools_ShapeSet(Macad::Occt::BRep_Builder^ theBuilder);
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
    /// Clears the content of the set.
    /// </summary>
    void Clear();
    /// <summary>
    /// Stores the geometry of <S>.
    /// </summary>
    void AddGeometry(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Dumps the geometry of me on the stream <OS>.
    /// </summary>
    void DumpGeometry(System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the geometry of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the geometry of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Dumps the geometry of <S> on the stream <OS>.
    /// </summary>
    void DumpGeometry(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the geometry of <S>  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadGeometry(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
    /// <summary>
    /// Inserts  the shape <S2> in  the  shape <S1>.  This
    /// method must be   redefined  to  use   the  correct
    /// builder.
    /// </summary>
    void AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
    void Check(Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopoDS_Shape^ S);
    /* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void ReadPolygon3D(istream IS, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Writes the 3d polygons
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygon3D(System::IO::TextWriter^ OS, bool Compact, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the 3d polygons
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygon3D(System::IO::TextWriter^ OS, bool Compact);
    /// <summary>
    /// Writes the 3d polygons
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygon3D(System::IO::TextWriter^ OS);
    /// <summary>
    /// Dumps the 3d polygons
    /// on the stream <OS>.
    /// </summary>
    void DumpPolygon3D(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void ReadTriangulation(istream IS, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Writes the triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WriteTriangulation(System::IO::TextWriter^ OS, bool Compact, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WriteTriangulation(System::IO::TextWriter^ OS, bool Compact);
    /// <summary>
    /// Writes the triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WriteTriangulation(System::IO::TextWriter^ OS);
    /// <summary>
    /// Dumps the triangulation
    /// on the stream <OS>.
    /// </summary>
    void DumpTriangulation(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void ReadPolygonOnTriangulation(istream IS, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Writes the polygons on triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygonOnTriangulation(System::IO::TextWriter^ OS, bool Compact, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the polygons on triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygonOnTriangulation(System::IO::TextWriter^ OS, bool Compact);
    /// <summary>
    /// Writes the polygons on triangulation
    /// on the stream <OS> in a format that can
    /// be read back by Read.
    /// </summary>
    void WritePolygonOnTriangulation(System::IO::TextWriter^ OS);
    /// <summary>
    /// Dumps the polygons on triangulation
    /// on the stream <OS>.
    /// </summary>
    void DumpPolygonOnTriangulation(System::IO::TextWriter^ OS);
}; // class BRepTools_ShapeSet

//---------------------------------------------------------------------
//  Class  BRepTools_Substitution
//---------------------------------------------------------------------
/// <summary>
/// A tool to substitute subshapes by other shapes.
/// 
/// The user use the method Substitute to define the
/// modifications.
/// A set of shapes is designated to replace a initial
/// shape.
/// 
/// The method Build reconstructs a new Shape with the
/// modifications.The Shape and the new shape are
/// registered.
/// </summary>
public ref class BRepTools_Substitution sealed
    : public Macad::Occt::BaseClass<::BRepTools_Substitution>
{

#ifdef Include_BRepTools_Substitution_h
public:
    Include_BRepTools_Substitution_h
#endif

public:
    BRepTools_Substitution(::BRepTools_Substitution* nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_Substitution>( nativeInstance, true )
    {}

    BRepTools_Substitution(::BRepTools_Substitution& nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_Substitution>( &nativeInstance, false )
    {}

    property ::BRepTools_Substitution* NativeInstance
    {
        ::BRepTools_Substitution* get()
        {
            return static_cast<::BRepTools_Substitution*>(_NativeInstance);
        }
    }

public:
    BRepTools_Substitution();
    /// <summary>
    /// Reset all the fields.
    /// </summary>
    void Clear();
    /// <summary>
    /// <Oldshape> will be replaced by <NewShapes>.
    /// 
    /// <NewShapes> can be empty , in this case <OldShape>
    /// will disparate from its ancestors.
    /// 
    /// if an item of <NewShapes> is oriented FORWARD.
    /// it will be oriented as <OldShape> in its ancestors.
    /// else it will be reversed.
    /// </summary>
    void Substitute(Macad::Occt::TopoDS_Shape^ OldShape, Macad::Occt::TopTools_ListOfShape^ NewShapes);
    /// <summary>
    /// Build NewShape from <S> if its subshapes has modified.
    /// 
    /// The methods <IsCopied> and <Copy> allows you to keep
    /// the resul of <Build>
    /// </summary>
    void Build(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns   True if <S> has   been  replaced .
    /// </summary>
    bool IsCopied(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the set of shapes substituted to <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Copy(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepTools_Substitution

//---------------------------------------------------------------------
//  Class  BRepTools_TrsfModification
//---------------------------------------------------------------------
/// <summary>
/// Describes a modification that uses a gp_Trsf to
/// change the geometry of a shape. All functions return
/// true and transform the geometry of the shape.
/// </summary>
public ref class BRepTools_TrsfModification sealed
    : public Macad::Occt::BRepTools_Modification
{

#ifdef Include_BRepTools_TrsfModification_h
public:
    Include_BRepTools_TrsfModification_h
#endif

public:
    BRepTools_TrsfModification(::BRepTools_TrsfModification* nativeInstance)
        : Macad::Occt::BRepTools_Modification( nativeInstance )
    {}

    BRepTools_TrsfModification(::BRepTools_TrsfModification& nativeInstance)
        : Macad::Occt::BRepTools_Modification( nativeInstance )
    {}

    property ::BRepTools_TrsfModification* NativeInstance
    {
        ::BRepTools_TrsfModification* get()
        {
            return static_cast<::BRepTools_TrsfModification*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Sets a flag to indicate the need to copy mesh.
    /// </summary>
    property bool IsCopyMesh {
        bool get() {
            return ((::BRepTools_TrsfModification*)_NativeInstance)->IsCopyMesh();
        }
        void set(bool value) {
            ((::BRepTools_TrsfModification*)_NativeInstance)->IsCopyMesh() = value;
        }
    }

    BRepTools_TrsfModification(Macad::Occt::Trsf T);
    /// <summary>
    /// Provides access to the gp_Trsf associated with this
    /// modification. The transformation can be changed.
    /// </summary>
    Macad::Occt::Trsf Trsf();
    /// <summary>
    /// Returns true if the face F has been modified.
    /// If the face has been modified:
    /// - S is the new geometry of the face,
    /// - L is its new location, and
    /// - Tol is the new tolerance.
    /// RevWires is set to true when the modification
    /// reverses the normal of the surface (the wires have to be reversed).
    /// RevFace is set to true if the orientation of the
    /// modified face changes in the shells which contain it.
    /// For this class, RevFace returns true if the gp_Trsf
    /// associated with this modification is negative.
    /// </summary>
    bool NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace);
    /* Method skipped due to unknown mapping: bool NewTriangulation(TopoDS_Face F, Poly_Triangulation T, ) */
    /* Method skipped due to unknown mapping: bool NewPolygon(TopoDS_Edge E, Poly_Polygon3D P, ) */
    /* Method skipped due to unknown mapping: bool NewPolygonOnTriangulation(TopoDS_Edge E, TopoDS_Face F, Poly_PolygonOnTriangulation P, ) */
    /// <summary>
    /// Always returns true indicating that the edge E is always modified.
    /// - C is the new geometric support of the edge,
    /// - L is the new location, and
    /// - Tol is the new tolerance.
    /// </summary>
    bool NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol);
    /// <summary>
    /// Returns true if the vertex V has been modified.
    /// If the vertex has been modified:
    /// - P is the new geometry of the vertex, and
    /// - Tol is the new tolerance.
    /// If the vertex has not been modified this function
    /// returns false, and the values of P and Tol are not significant.
    /// </summary>
    bool NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol);
    /// <summary>
    /// Returns true if the edge E has a new curve on surface on the face F.
    /// If a new curve exists:
    /// - C is the new geometric support of the edge,
    /// - L is the new location, and
    /// - Tol the new tolerance.
    /// If no new curve exists, this function returns false, and
    /// the values of C, L and Tol are not significant.
    /// </summary>
    bool NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol);
    /// <summary>
    /// Returns true if the Vertex V has a new parameter on the edge E.
    /// If a new parameter exists:
    /// - P is the parameter, and
    /// - Tol is the new tolerance.
    /// If no new parameter exists, this function returns false,
    /// and the values of P and Tol are not significant.
    /// </summary>
    bool NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol);
    /// <summary>
    /// Returns the  continuity of  <NewE> between <NewF1>
    /// and <NewF2>.
    /// 
    /// <NewE> is the new  edge created from <E>.  <NewF1>
    /// (resp. <NewF2>) is the new  face created from <F1>
    /// (resp. <F2>).
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2);
    static Macad::Occt::BRepTools_TrsfModification^ CreateDowncasted(::BRepTools_TrsfModification* instance);
}; // class BRepTools_TrsfModification

//---------------------------------------------------------------------
//  Class  BRepTools_WireExplorer
//---------------------------------------------------------------------
/// <summary>
/// The WireExplorer is a tool to explore the edges of
/// a wire in a connection order.
/// 
/// i.e. each edge is connected to the previous one by
/// its origin.
/// If a wire is not closed returns only a segment of edges which
/// length depends on started in exploration edge.
/// Algorithm suggests that wire is valid and has no any defects, which
/// can stop edge exploration. Such defects can be loops, wrong orientation of edges
/// (two edges go in to shared vertex or go out from shared vertex), branching of edges,
/// the presens of edges with INTERNAL or EXTERNAL orientation. If wire has
/// such kind of defects WireExplorer can return not all
/// edges in a wire. it depends on type of defect and position of starting edge.
/// </summary>
public ref class BRepTools_WireExplorer sealed
    : public Macad::Occt::BaseClass<::BRepTools_WireExplorer>
{

#ifdef Include_BRepTools_WireExplorer_h
public:
    Include_BRepTools_WireExplorer_h
#endif

public:
    BRepTools_WireExplorer(::BRepTools_WireExplorer* nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_WireExplorer>( nativeInstance, true )
    {}

    BRepTools_WireExplorer(::BRepTools_WireExplorer& nativeInstance)
        : Macad::Occt::BaseClass<::BRepTools_WireExplorer>( &nativeInstance, false )
    {}

    property ::BRepTools_WireExplorer* NativeInstance
    {
        ::BRepTools_WireExplorer* get()
        {
            return static_cast<::BRepTools_WireExplorer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty explorer (which can be initialized using Init)
    /// </summary>
    BRepTools_WireExplorer();
    /// <summary>
    /// IInitializes an exploration  of the wire <W>.
    /// </summary>
    BRepTools_WireExplorer(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Initializes an exploration  of the wire <W>.
    /// F is used to select the edge connected to the
    /// previous in the parametric representation of <F>.
    /// </summary>
    BRepTools_WireExplorer(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Initializes an exploration of the wire <W>.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Initializes an exploration of the wire <W>.
    /// F is used to select the edge connected to the
    /// previous in the parametric representation of <F>.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Initializes an exploration of the wire <W>.
    /// F is used to select the edge connected to the
    /// previous in the parametric representation of <F>.
    /// <UMIn>, <UMax>, <VMin>, <VMax> - the UV bounds of the face <F>.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Returns True if there  is a current  edge.
    /// </summary>
    bool More();
    /// <summary>
    /// Proceeds to the next edge.
    /// </summary>
    void Next();
    /// <summary>
    /// Returns the current edge.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Current();
    /// <summary>
    /// Returns an Orientation for the current edge.
    /// </summary>
    Macad::Occt::TopAbs_Orientation Orientation();
    /// <summary>
    /// Returns the vertex connecting the current  edge to
    /// the previous one.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ CurrentVertex();
    /// <summary>
    /// Clears the content of the explorer.
    /// </summary>
    void Clear();
}; // class BRepTools_WireExplorer

}; // namespace Occt
}; // namespace Macad
