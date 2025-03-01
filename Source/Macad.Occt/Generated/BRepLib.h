// Generated wrapper code for package BRepLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepLib_EdgeError
//---------------------------------------------------------------------
/// <summary>
/// Errors that can occur at edge construction.
/// no error
/// </summary>
public enum class BRepLib_EdgeError
{
    EdgeDone = 0,
    PointProjectionFailed = 1,
    ParameterOutOfRange = 2,
    DifferentPointsOnClosedCurve = 3,
    PointWithInfiniteParameter = 4,
    DifferentsPointAndParameter = 5,
    LineThroughIdenticPoints = 6
}; // enum  class BRepLib_EdgeError

//---------------------------------------------------------------------
//  Enum  BRepLib_FaceError
//---------------------------------------------------------------------
/// <summary>
/// Errors that can occur at face construction.
/// no error
/// not initialised
/// </summary>
public enum class BRepLib_FaceError
{
    FaceDone = 0,
    NoFace = 1,
    NotPlanar = 2,
    CurveProjectionFailed = 3,
    ParametersOutOfRange = 4
}; // enum  class BRepLib_FaceError

//---------------------------------------------------------------------
//  Enum  BRepLib_ShapeModification
//---------------------------------------------------------------------
/// <summary>
/// Modification type after a topologic operation.
/// </summary>
public enum class BRepLib_ShapeModification
{
    Preserved = 0,
    Deleted = 1,
    Trimmed = 2,
    Merged = 3,
    BoundaryModified = 4
}; // enum  class BRepLib_ShapeModification

//---------------------------------------------------------------------
//  Enum  BRepLib_ShellError
//---------------------------------------------------------------------
/// <summary>
/// Errors that can occur at shell construction.
/// </summary>
public enum class BRepLib_ShellError
{
    ShellDone = 0,
    EmptyShell = 1,
    DisconnectedShell = 2,
    ShellParametersOutOfRange = 3
}; // enum  class BRepLib_ShellError

//---------------------------------------------------------------------
//  Enum  BRepLib_WireError
//---------------------------------------------------------------------
/// <summary>
/// Errors that can occur at wire construction.
/// no error
/// </summary>
public enum class BRepLib_WireError
{
    WireDone = 0,
    EmptyWire = 1,
    DisconnectedWire = 2,
    NonManifoldWire = 3
}; // enum  class BRepLib_WireError

//---------------------------------------------------------------------
//  Class  BRepLib
//---------------------------------------------------------------------
/// <summary>
/// The BRepLib package provides general utilities for
/// BRep.
/// 
/// * FindSurface : Class to compute a surface through
/// a set of edges.
/// 
/// * Compute missing 3d curve on an edge.
/// </summary>
public ref class BRepLib sealed
    : public Macad::Occt::BaseClass<::BRepLib>
{

#ifdef Include_BRepLib_h
public:
    Include_BRepLib_h
#endif

public:
    BRepLib(::BRepLib* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib>( nativeInstance, true )
    {}

    BRepLib(::BRepLib& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib>( &nativeInstance, false )
    {}

    property ::BRepLib* NativeInstance
    {
        ::BRepLib* get()
        {
            return static_cast<::BRepLib*>(_NativeInstance);
        }
    }

public:
    BRepLib();
    /// <summary>
    /// Computes the max distance between edge
    /// and its 2d representation on the face.
    /// Sets the default precision.  The current Precision
    /// is returned.
    /// </summary>
    static void Precision(double P);
    /// <summary>
    /// Returns the default precision.
    /// </summary>
    static double Precision();
    /// <summary>
    /// Sets the current plane to P.
    /// </summary>
    static void Plane(Macad::Occt::Geom_Plane^ P);
    /// <summary>
    /// Returns the current plane.
    /// </summary>
    static Macad::Occt::Geom_Plane^ Plane();
    /// <summary>
    /// checks if the Edge is same range IGNORING
    /// the same range flag of the edge
    /// Confusion argument is to compare real numbers
    /// idenpendently of any model space tolerance
    /// </summary>
    static bool CheckSameRange(Macad::Occt::TopoDS_Edge^ E, double Confusion);
    /// <summary>
    /// checks if the Edge is same range IGNORING
    /// the same range flag of the edge
    /// Confusion argument is to compare real numbers
    /// idenpendently of any model space tolerance
    /// </summary>
    static bool CheckSameRange(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// will make all the curve representation have
    /// the same range domain for the parameters.
    /// This will IGNORE the same range flag value
    /// to proceed.
    /// If there is a 3D curve there it will the
    /// range of that curve. If not the first curve representation
    /// encountered in the list will give its range to
    /// the all the other curves.
    /// </summary>
    static void SameRange(Macad::Occt::TopoDS_Edge^ E, double Tolerance);
    /// <summary>
    /// will make all the curve representation have
    /// the same range domain for the parameters.
    /// This will IGNORE the same range flag value
    /// to proceed.
    /// If there is a 3D curve there it will the
    /// range of that curve. If not the first curve representation
    /// encountered in the list will give its range to
    /// the all the other curves.
    /// </summary>
    static void SameRange(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Computes the 3d curve for the edge  <E> if it does
    /// not exist. Returns True  if the curve was computed
    /// or  existed. Returns False  if there is no  planar
    /// pcurve or the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment);
    /// <summary>
    /// Computes the 3d curve for the edge  <E> if it does
    /// not exist. Returns True  if the curve was computed
    /// or  existed. Returns False  if there is no  planar
    /// pcurve or the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree);
    /// <summary>
    /// Computes the 3d curve for the edge  <E> if it does
    /// not exist. Returns True  if the curve was computed
    /// or  existed. Returns False  if there is no  planar
    /// pcurve or the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Computes the 3d curve for the edge  <E> if it does
    /// not exist. Returns True  if the curve was computed
    /// or  existed. Returns False  if there is no  planar
    /// pcurve or the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance);
    /// <summary>
    /// Computes the 3d curve for the edge  <E> if it does
    /// not exist. Returns True  if the curve was computed
    /// or  existed. Returns False  if there is no  planar
    /// pcurve or the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurve3d(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Computes  the 3d curves  for all the  edges of <S>
    /// return False if one of the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment);
    /// <summary>
    /// Computes  the 3d curves  for all the  edges of <S>
    /// return False if one of the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree);
    /// <summary>
    /// Computes  the 3d curves  for all the  edges of <S>
    /// return False if one of the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Computes  the 3d curves  for all the  edges of <S>
    /// return False if one of the computation failed.
    /// <MaxSegment> >= 30 in approximation
    /// </summary>
    static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance);
    /// <summary>
    /// Computes  the 3d curves  for all the  edges of <S>
    /// return False if one of the computation failed.
    /// </summary>
    static bool BuildCurves3d(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Builds pcurve of edge on face if the surface is plane, and updates the edge.
    /// </summary>
    static void BuildPCurveForEdgeOnPlane(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TopoDS_Face^ theF);
    /// <summary>
    /// Builds pcurve of edge on face if the surface is plane, but does not update the edge.
    /// The output are the pcurve and the flag telling that pcurve was built.
    /// </summary>
    static void BuildPCurveForEdgeOnPlane(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TopoDS_Face^ theF, Macad::Occt::Geom2d_Curve^ aC2D, bool% bToUpdate);
    /// <summary>
    /// Checks if the edge has a  Tolerance smaller than -- --
    /// -- -- MaxToleranceToCheck  if  so it will compute  the
    /// radius    of  -- the   cylindrical  pipe  surface that
    /// MinToleranceRequest is the minimum tolerance before it
    /// is useful to start testing.
    /// Usually it should be around 10e-5
    /// contains all -- the curve representation of the edge
    /// returns True if the Edge tolerance had to be updated
    /// </summary>
    static bool UpdateEdgeTol(Macad::Occt::TopoDS_Edge^ E, double MinToleranceRequest, double MaxToleranceToCheck);
    /// <summary>
    /// -- Checks all the edges of the shape whose -- -- --
    /// Tolerance  is  smaller than  MaxToleranceToCheck --
    /// Returns True if at  least  one edge was updated --
    /// MinToleranceRequest is the minimum tolerance before
    /// --  it -- is  useful to start  testing.
    /// Usually it should be around -- 10e-5--
    /// 
    /// Warning :The  method is  very  slow  as it  checks all.
    /// Use  only  in interfaces or  processing assimilate batch
    /// </summary>
    static bool UpdateEdgeTolerance(Macad::Occt::TopoDS_Shape^ S, double MinToleranceRequest, double MaxToleranceToCheck);
    /// <summary>
    /// Computes new 2d curve(s)  for the edge <theEdge> to have
    /// the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on the  Edge.
    /// </summary>
    static void SameParameter(Macad::Occt::TopoDS_Edge^ theEdge, double Tolerance);
    /// <summary>
    /// Computes new 2d curve(s)  for the edge <theEdge> to have
    /// the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on the  Edge.
    /// </summary>
    static void SameParameter(Macad::Occt::TopoDS_Edge^ theEdge);
    /// <summary>
    /// Computes new 2d curve(s)  for the edge <theEdge> to have
    /// the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on the  Edge.<br>
    /// theNewTol is a new tolerance of vertices of the input edge
    /// (not applied inside the algorithm, but pre-computed).
    /// If IsUseOldEdge is true then the input edge will be modified,
    /// otherwise the new copy of input edge will be created.
    /// Returns the new edge as a result, can be ignored if IsUseOldEdge is true.
    /// </summary>
    static Macad::Occt::TopoDS_Edge^ SameParameter(Macad::Occt::TopoDS_Edge^ theEdge, double theTolerance, double% theNewTol, bool IsUseOldEdge);
    /// <summary>
    /// Computes new 2d curve(s) for all the edges of  <S>
    /// to have the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on an  Edge.
    /// </summary>
    static void SameParameter(Macad::Occt::TopoDS_Shape^ S, double Tolerance, bool forced);
    /// <summary>
    /// Computes new 2d curve(s) for all the edges of  <S>
    /// to have the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on an  Edge.
    /// </summary>
    static void SameParameter(Macad::Occt::TopoDS_Shape^ S, double Tolerance);
    /// <summary>
    /// Computes new 2d curve(s) for all the edges of  <S>
    /// to have the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on an  Edge.
    /// </summary>
    static void SameParameter(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Computes new 2d curve(s) for all the edges of  <S>
    /// to have the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on an  Edge.<br>
    /// theReshaper is used to record the modifications of input shape <S> to prevent any
    /// modifications on the shape itself.
    /// Thus the input shape (and its subshapes) will not be modified, instead the reshaper will
    /// contain a modified empty-copies of original subshapes as substitutions.
    /// </summary>
    static void SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, double Tolerance, bool forced);
    /// <summary>
    /// Computes new 2d curve(s) for all the edges of  <S>
    /// to have the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on an  Edge.<br>
    /// theReshaper is used to record the modifications of input shape <S> to prevent any
    /// modifications on the shape itself.
    /// Thus the input shape (and its subshapes) will not be modified, instead the reshaper will
    /// contain a modified empty-copies of original subshapes as substitutions.
    /// </summary>
    static void SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, double Tolerance);
    /// <summary>
    /// Computes new 2d curve(s) for all the edges of  <S>
    /// to have the same parameter  as  the  3d curve.
    /// The algorithm is not done if the flag SameParameter
    /// was True  on an  Edge.<br>
    /// theReshaper is used to record the modifications of input shape <S> to prevent any
    /// modifications on the shape itself.
    /// Thus the input shape (and its subshapes) will not be modified, instead the reshaper will
    /// contain a modified empty-copies of original subshapes as substitutions.
    /// </summary>
    static void SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper);
    /// <summary>
    /// Replaces tolerance   of  FACE EDGE VERTEX  by  the
    /// tolerance Max of their connected handling shapes.
    /// It is not necessary to use this call after
    /// SameParameter. (called in)
    /// </summary>
    static void UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, bool verifyFaceTolerance);
    /// <summary>
    /// Replaces tolerance   of  FACE EDGE VERTEX  by  the
    /// tolerance Max of their connected handling shapes.
    /// It is not necessary to use this call after
    /// SameParameter. (called in)
    /// </summary>
    static void UpdateTolerances(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Replaces tolerance   of  FACE EDGE VERTEX  by  the
    /// tolerance Max of their connected handling shapes.
    /// It is not necessary to use this call after
    /// SameParameter. (called in)<br>
    /// theReshaper is used to record the modifications of input shape <S> to prevent any
    /// modifications on the shape itself.
    /// Thus the input shape (and its subshapes) will not be modified, instead the reshaper will
    /// contain a modified empty-copies of original subshapes as substitutions.
    /// </summary>
    static void UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, bool verifyFaceTolerance);
    /// <summary>
    /// Replaces tolerance   of  FACE EDGE VERTEX  by  the
    /// tolerance Max of their connected handling shapes.
    /// It is not necessary to use this call after
    /// SameParameter. (called in)<br>
    /// theReshaper is used to record the modifications of input shape <S> to prevent any
    /// modifications on the shape itself.
    /// Thus the input shape (and its subshapes) will not be modified, instead the reshaper will
    /// contain a modified empty-copies of original subshapes as substitutions.
    /// </summary>
    static void UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper);
    /// <summary>
    /// Checks tolerances of edges (including inner points) and vertices
    /// of a shape and updates them to satisfy "SameParameter" condition
    /// </summary>
    static void UpdateInnerTolerances(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Orients the solid forward  and the  shell with the
    /// orientation to have  matter in the solid. Returns
    /// False if the solid is unOrientable (open or incoherent)
    /// </summary>
    static bool OrientClosedSolid(Macad::Occt::TopoDS_Solid^ solid);
    /// <summary>
    /// Returns the order of continuity between two faces
    /// connected by an edge
    /// </summary>
    static Macad::Occt::GeomAbs_Shape ContinuityOfFaces(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2, double theAngleTol);
    /// <summary>
    /// Encodes the Regularity of edges on a Shape.
    /// Warning: <TolAng> is an angular tolerance, expressed in Rad.
    /// Warning: If the edges's regularity are coded before, nothing
    /// is done.
    /// </summary>
    static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, double TolAng);
    /// <summary>
    /// Encodes the Regularity of edges on a Shape.
    /// Warning: <TolAng> is an angular tolerance, expressed in Rad.
    /// Warning: If the edges's regularity are coded before, nothing
    /// is done.
    /// </summary>
    static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Encodes the Regularity of edges in list <LE> on the shape <S>
    /// Warning: <TolAng> is an angular tolerance, expressed in Rad.
    /// Warning: If the edges's regularity are coded before, nothing
    /// is done.
    /// </summary>
    static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LE, double TolAng);
    /// <summary>
    /// Encodes the Regularity of edges in list <LE> on the shape <S>
    /// Warning: <TolAng> is an angular tolerance, expressed in Rad.
    /// Warning: If the edges's regularity are coded before, nothing
    /// is done.
    /// </summary>
    static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LE);
    /// <summary>
    /// Encodes the Regularity between <F1> and <F2> by <E>
    /// Warning: <TolAng> is an angular tolerance, expressed in Rad.
    /// Warning: If the edge's regularity is coded before, nothing
    /// is done.
    /// </summary>
    static void EncodeRegularity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, double TolAng);
    /// <summary>
    /// Encodes the Regularity between <F1> and <F2> by <E>
    /// Warning: <TolAng> is an angular tolerance, expressed in Rad.
    /// Warning: If the edge's regularity is coded before, nothing
    /// is done.
    /// </summary>
    static void EncodeRegularity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
    /// <summary>
    /// Sorts in  LF the Faces of   S on the  complexity of
    /// their                  surfaces
    /// (Plane,Cylinder,Cone,Sphere,Torus,other)
    /// </summary>
    static void SortFaces(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LF);
    /// <summary>
    /// Sorts in  LF  the   Faces  of S   on the reverse
    /// complexity       of       their      surfaces
    /// (other,Torus,Sphere,Cone,Cylinder,Plane)
    /// </summary>
    static void ReverseSortFaces(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LF);
    /// <summary>
    /// Corrects the normals in Poly_Triangulation of faces,
    /// in such way that normals at nodes lying along smooth
    /// edges have the same value on both adjacent triangulations.
    /// Returns TRUE if any correction is done.
    /// </summary>
    static bool EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S, double theAngTol, bool ForceComputeNormals);
    /// <summary>
    /// Corrects the normals in Poly_Triangulation of faces,
    /// in such way that normals at nodes lying along smooth
    /// edges have the same value on both adjacent triangulations.
    /// Returns TRUE if any correction is done.
    /// </summary>
    static bool EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S, double theAngTol);
    /// <summary>
    /// Corrects the normals in Poly_Triangulation of faces,
    /// in such way that normals at nodes lying along smooth
    /// edges have the same value on both adjacent triangulations.
    /// Returns TRUE if any correction is done.
    /// </summary>
    static bool EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Updates value of deflection in Poly_Triangulation of faces
    /// by the maximum deviation measured on existing triangulation.
    /// </summary>
    static void UpdateDeflection(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Calculates the bounding sphere around the set of vertexes from the theLV list.
    /// Returns the center (theNewCenter) and the radius (theNewTol) of this sphere.
    /// This can be used to construct the new vertex which covers the given set of
    /// other vertices.
    /// </summary>
    static void BoundingVertex(Macad::Occt::TopoDS_ListOfShape^ theLV, Macad::Occt::Pnt% theNewCenter, double% theNewTol);
    /// <summary>
    /// For an edge defined by 3d curve and tolerance and vertices defined by points,
    /// parameters on curve and tolerances,
    /// finds a range of curve between vertices not covered by vertices tolerances.
    /// Returns false if there is no such range. Otherwise, sets theFirst and
    /// theLast as its bounds.
    /// </summary>
    static bool FindValidRange(Macad::Occt::Adaptor3d_Curve^ theCurve, double theTolE, double theParV1, Macad::Occt::Pnt thePntV1, double theTolV1, double theParV2, Macad::Occt::Pnt thePntV2, double theTolV2, double% theFirst, double% theLast);
    /// <summary>
    /// Finds a range of 3d curve of the edge not covered by vertices tolerances.
    /// Returns false if there is no such range. Otherwise, sets theFirst and
    /// theLast as its bounds.
    /// </summary>
    static bool FindValidRange(Macad::Occt::TopoDS_Edge^ theEdge, double% theFirst, double% theLast);
    /// <summary>
    /// Enlarges the face on the given value.
    /// </summary>
    /// <param name="in]">
    /// theF  The face to extend
    /// </param>
    /// <param name="in]">
    /// theExtVal  The extension value
    /// </param>
    /// <param name="in]">
    /// theExtUMin  Defines whether to extend the face in UMin direction
    /// </param>
    /// <param name="in]">
    /// theExtUMax  Defines whether to extend the face in UMax direction
    /// </param>
    /// <param name="in]">
    /// theExtVMin  Defines whether to extend the face in VMin direction
    /// </param>
    /// <param name="in]">
    /// theExtVMax  Defines whether to extend the face in VMax direction
    /// </param>
    /// <param name="in]">
    /// theFExtended  The extended face
    /// </param>
    static void ExtendFace(Macad::Occt::TopoDS_Face^ theF, double theExtVal, bool theExtUMin, bool theExtUMax, bool theExtVMin, bool theExtVMax, Macad::Occt::TopoDS_Face^ theFExtended);
}; // class BRepLib

//---------------------------------------------------------------------
//  Class  BRepLib_CheckCurveOnSurface
//---------------------------------------------------------------------
/// <summary>
/// Computes the max distance between edge and its 2d representation on the face.
/// This class is not intended to process non-sameparameter edges.
/// </summary>
public ref class BRepLib_CheckCurveOnSurface sealed
    : public Macad::Occt::BaseClass<::BRepLib_CheckCurveOnSurface>
{

#ifdef Include_BRepLib_CheckCurveOnSurface_h
public:
    Include_BRepLib_CheckCurveOnSurface_h
#endif

public:
    BRepLib_CheckCurveOnSurface(::BRepLib_CheckCurveOnSurface* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_CheckCurveOnSurface>( nativeInstance, true )
    {}

    BRepLib_CheckCurveOnSurface(::BRepLib_CheckCurveOnSurface& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_CheckCurveOnSurface>( &nativeInstance, false )
    {}

    property ::BRepLib_CheckCurveOnSurface* NativeInstance
    {
        ::BRepLib_CheckCurveOnSurface* get()
        {
            return static_cast<::BRepLib_CheckCurveOnSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor
    /// </summary>
    BRepLib_CheckCurveOnSurface();
    /// <summary>
    /// Constructor
    /// </summary>
    BRepLib_CheckCurveOnSurface(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace);
    /// <summary>
    /// Sets the data for the algorithm
    /// </summary>
    void Init(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace);
    /// <summary>
    /// Performs the calculation
    /// If myIsParallel == Standard_True then computation will be performed in parallel.
    /// </summary>
    void Perform();
    /// <summary>
    /// Returns true if the max distance has been found
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Sets parallel flag
    /// </summary>
    void SetParallel(bool theIsParallel);
    /// <summary>
    /// Returns true if parallel flag is set
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns error status
    /// The possible values are:
    /// 0 - OK;
    /// 1 - null curve or surface or 2d curve;
    /// 2 - invalid parametric range;
    /// 3 - error in calculations.
    /// </summary>
    int ErrorStatus();
    /// <summary>
    /// Returns max distance
    /// </summary>
    double MaxDistance();
    /// <summary>
    /// Returns parameter in which the distance is maximal
    /// </summary>
    double MaxParameter();
}; // class BRepLib_CheckCurveOnSurface

//---------------------------------------------------------------------
//  Class  BRepLib_Command
//---------------------------------------------------------------------
/// <summary>
/// Root class for all commands in BRepLib.
/// 
/// Provides :
/// 
/// * Managements of the notDone flag.
/// 
/// * Catching of exceptions (not implemented).
/// 
/// * Logging (not implemented).
/// </summary>
public ref class BRepLib_Command
    : public Macad::Occt::BaseClass<::BRepLib_Command>
{

#ifdef Include_BRepLib_Command_h
public:
    Include_BRepLib_Command_h
#endif

protected:
    BRepLib_Command(InitMode init)
        : Macad::Occt::BaseClass<::BRepLib_Command>( init )
    {}

public:
    BRepLib_Command(::BRepLib_Command* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_Command>( nativeInstance, true )
    {}

    BRepLib_Command(::BRepLib_Command& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_Command>( &nativeInstance, false )
    {}

    property ::BRepLib_Command* NativeInstance
    {
        ::BRepLib_Command* get()
        {
            return static_cast<::BRepLib_Command*>(_NativeInstance);
        }
    }

public:
    bool IsDone();
    /// <summary>
    /// Raises NotDone if done is false.
    /// </summary>
    void Check();
}; // class BRepLib_Command

//---------------------------------------------------------------------
//  Class  BRepLib_FindSurface
//---------------------------------------------------------------------
/// <summary>
/// Provides an  algorithm to find  a Surface  through a
/// set of edges.
/// 
/// The edges  of  the  shape  given  as  argument are
/// explored if they are not coplanar at  the required
/// tolerance  the method Found returns false.
/// 
/// If a null tolerance is given the max of the  edges
/// tolerances is used.
/// 
/// The method Tolerance returns the true distance  of
/// the edges to the Surface.
/// 
/// The method Surface returns the Surface if found.
/// 
/// The method Existed  returns returns  True  if  the
/// Surface was already attached to some of the edges.
/// 
/// When Existed  returns True  the  Surface  may have a
/// location given by the Location method.
/// </summary>
public ref class BRepLib_FindSurface sealed
    : public Macad::Occt::BaseClass<::BRepLib_FindSurface>
{

#ifdef Include_BRepLib_FindSurface_h
public:
    Include_BRepLib_FindSurface_h
#endif

public:
    BRepLib_FindSurface(::BRepLib_FindSurface* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_FindSurface>( nativeInstance, true )
    {}

    BRepLib_FindSurface(::BRepLib_FindSurface& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_FindSurface>( &nativeInstance, false )
    {}

    property ::BRepLib_FindSurface* NativeInstance
    {
        ::BRepLib_FindSurface* get()
        {
            return static_cast<::BRepLib_FindSurface*>(_NativeInstance);
        }
    }

public:
    BRepLib_FindSurface();
    /// <summary>
    /// Computes the Surface from the edges of  <S> with the
    /// given tolerance.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// If <OnlyClosed> is true,  then  S  should be a wire
    /// and the existing surface,  on  which wire S is not
    /// closed in 2D, will be ignored.
    /// </summary>
    BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed);
    /// <summary>
    /// Computes the Surface from the edges of  <S> with the
    /// given tolerance.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// If <OnlyClosed> is true,  then  S  should be a wire
    /// and the existing surface,  on  which wire S is not
    /// closed in 2D, will be ignored.
    /// </summary>
    BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane);
    /// <summary>
    /// Computes the Surface from the edges of  <S> with the
    /// given tolerance.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// If <OnlyClosed> is true,  then  S  should be a wire
    /// and the existing surface,  on  which wire S is not
    /// closed in 2D, will be ignored.
    /// </summary>
    BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol);
    /// <summary>
    /// Computes the Surface from the edges of  <S> with the
    /// given tolerance.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// If <OnlyClosed> is true,  then  S  should be a wire
    /// and the existing surface,  on  which wire S is not
    /// closed in 2D, will be ignored.
    /// </summary>
    BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Computes the Surface from the edges of  <S> with the
    /// given tolerance.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// If <OnlyClosed> is true,  then  S  should be a wire
    /// and the existing surface,  on  which wire S is not
    /// closed in 2D, will be ignored.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed);
    /// <summary>
    /// Computes the Surface from the edges of  <S> with the
    /// given tolerance.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// If <OnlyClosed> is true,  then  S  should be a wire
    /// and the existing surface,  on  which wire S is not
    /// closed in 2D, will be ignored.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane);
    /// <summary>
    /// Computes the Surface from the edges of  <S> with the
    /// given tolerance.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// If <OnlyClosed> is true,  then  S  should be a wire
    /// and the existing surface,  on  which wire S is not
    /// closed in 2D, will be ignored.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S, double Tol);
    /// <summary>
    /// Computes the Surface from the edges of  <S> with the
    /// given tolerance.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// If <OnlyClosed> is true,  then  S  should be a wire
    /// and the existing surface,  on  which wire S is not
    /// closed in 2D, will be ignored.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S);
    bool Found();
    Macad::Occt::Geom_Surface^ Surface();
    double Tolerance();
    double ToleranceReached();
    bool Existed();
    Macad::Occt::TopLoc_Location^ Location();
}; // class BRepLib_FindSurface

//---------------------------------------------------------------------
//  Class  BRepLib_FuseEdges
//---------------------------------------------------------------------
/// <summary>
/// This class can detect  vertices in a face that can
/// be considered useless and then perform the fuse of
/// the  edges and remove  the  useless vertices.  By
/// useles vertices,  we mean :
/// * vertices that  have  exactly two connex edges
/// * the edges connex to the vertex must have
/// exactly the same 2 connex faces .
/// * The edges connex to the vertex must have the
/// same geometric support.
/// </summary>
public ref class BRepLib_FuseEdges sealed
    : public Macad::Occt::BaseClass<::BRepLib_FuseEdges>
{

#ifdef Include_BRepLib_FuseEdges_h
public:
    Include_BRepLib_FuseEdges_h
#endif

public:
    BRepLib_FuseEdges(::BRepLib_FuseEdges* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_FuseEdges>( nativeInstance, true )
    {}

    BRepLib_FuseEdges(::BRepLib_FuseEdges& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_FuseEdges>( &nativeInstance, false )
    {}

    property ::BRepLib_FuseEdges* NativeInstance
    {
        ::BRepLib_FuseEdges* get()
        {
            return static_cast<::BRepLib_FuseEdges*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initialise members  and build  construction of map
    /// of ancestors.
    /// </summary>
    BRepLib_FuseEdges(Macad::Occt::TopoDS_Shape^ theShape, bool PerformNow);
    /// <summary>
    /// Initialise members  and build  construction of map
    /// of ancestors.
    /// </summary>
    BRepLib_FuseEdges(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// set edges to avoid being fused
    /// </summary>
    void AvoidEdges(Macad::Occt::TopTools_IndexedMapOfShape^ theMapEdg);
    /// <summary>
    /// set mode to enable concatenation G1 BSpline edges in one
    /// End  Modified  by  IFV  19.04.07
    /// </summary>
    void SetConcatBSpl(bool theConcatBSpl);
    /// <summary>
    /// set mode to enable concatenation G1 BSpline edges in one
    /// End  Modified  by  IFV  19.04.07
    /// </summary>
    void SetConcatBSpl();
    /// <summary>
    /// returns  all the list of edges to be fused
    /// each list of the map represent a set of connex edges
    /// that can be fused.
    /// </summary>
    void Edges(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theMapLstEdg);
    /// <summary>
    /// returns all the fused edges. each integer entry in
    /// the   map  corresponds  to  the  integer   in the
    /// DataMapOfIntegerListOfShape  we    get in  method
    /// Edges.   That is to say, to  the list  of edges in
    /// theMapLstEdg(i) corresponds the resulting edge theMapEdge(i)
    /// </summary>
    void ResultEdges(Macad::Occt::TopTools_DataMapOfIntegerShape^ theMapEdg);
    /// <summary>
    /// returns the map of modified faces.
    /// </summary>
    void Faces(Macad::Occt::TopTools_DataMapOfShapeShape^ theMapFac);
    /// <summary>
    /// returns myShape modified with the list of internal
    /// edges removed from it.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// returns the number of vertices candidate to be removed
    /// </summary>
    int NbVertices();
    /// <summary>
    /// Using  map of list of connex  edges, fuse each list to
    /// one edge and then update myShape
    /// </summary>
    void Perform();
}; // class BRepLib_FuseEdges

//---------------------------------------------------------------------
//  Class  BRepLib_MakeShape
//---------------------------------------------------------------------
/// <summary>
/// This    is  the  root     class for     all  shape
/// constructions.  It stores the result.
/// 
/// It  provides deferred methods to trace the history
/// of sub-shapes.
/// </summary>
public ref class BRepLib_MakeShape
    : public Macad::Occt::BRepLib_Command
{

#ifdef Include_BRepLib_MakeShape_h
public:
    Include_BRepLib_MakeShape_h
#endif

protected:
    BRepLib_MakeShape(InitMode init)
        : Macad::Occt::BRepLib_Command( init )
    {}

public:
    BRepLib_MakeShape(::BRepLib_MakeShape* nativeInstance)
        : Macad::Occt::BRepLib_Command( nativeInstance )
    {}

    BRepLib_MakeShape(::BRepLib_MakeShape& nativeInstance)
        : Macad::Occt::BRepLib_Command( nativeInstance )
    {}

    property ::BRepLib_MakeShape* NativeInstance
    {
        ::BRepLib_MakeShape* get()
        {
            return static_cast<::BRepLib_MakeShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// This is  called by  Shape().  It does  nothing but
    /// may be redefined.
    /// </summary>
    void Build();
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// returns the status of the Face after
    /// the shape creation.
    /// </summary>
    Macad::Occt::BRepLib_ShapeModification FaceStatus(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns True if the Face generates new topology.
    /// </summary>
    bool HasDescendants(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// returns the list of generated Faces.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ DescendantFaces(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// returns the number of surfaces
    /// after the shape creation.
    /// </summary>
    int NbSurfaces();
    /// <summary>
    /// Return the faces created for surface I.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ NewFaces(int I);
    /// <summary>
    /// returns a list of the created faces
    /// from the edge <E>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ FacesFromEdges(Macad::Occt::TopoDS_Edge^ E);
}; // class BRepLib_MakeShape

//---------------------------------------------------------------------
//  Class  BRepLib_MakeEdge
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to build edges.
/// 
/// The   methods have  the  following   syntax, where
/// TheCurve is one of Lin, Circ, ...
/// 
/// Create(C : TheCurve)
/// 
/// Makes an edge on  the whole curve.  Add vertices
/// on finite curves.
/// 
/// Create(C : TheCurve; p1,p2 : Real)
/// 
/// Make an edge  on the curve between parameters p1
/// and p2. if p2 < p1 the edge will be REVERSED. If
/// p1  or p2 is infinite the  curve will be open in
/// that  direction. Vertices are created for finite
/// values of p1 and p2.
/// 
/// Create(C : TheCurve; P1, P2 : Pnt from gp)
/// 
/// Make an edge on the curve  between the points P1
/// and P2. The  points are projected on   the curve
/// and the   previous method is  used. An  error is
/// raised if the points are not on the curve.
/// 
/// Create(C : TheCurve; V1, V2 : Vertex from TopoDS)
/// 
/// Make an edge  on the curve  between the vertices
/// V1 and V2. Same as the  previous but no vertices
/// are created. If a vertex is  Null the curve will
/// be open in this direction.
/// </summary>
public ref class BRepLib_MakeEdge sealed
    : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeEdge_h
public:
    Include_BRepLib_MakeEdge_h
#endif

public:
    BRepLib_MakeEdge(::BRepLib_MakeEdge* nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    BRepLib_MakeEdge(::BRepLib_MakeEdge& nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    property ::BRepLib_MakeEdge* NativeInstance
    {
        ::BRepLib_MakeEdge* get()
        {
            return static_cast<::BRepLib_MakeEdge*>(_NativeInstance);
        }
    }

public:
    BRepLib_MakeEdge();
    BRepLib_MakeEdge(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L);
    BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L);
    BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L);
    BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L);
    BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L);
    BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L);
    BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S);
    BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
    BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    void Init(Macad::Occt::Geom_Curve^ C);
    void Init(Macad::Occt::Geom_Curve^ C, double p1, double p2);
    void Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    void Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    void Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
    void Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    /// <summary>
    /// Returns the error description when NotDone.
    /// </summary>
    Macad::Occt::BRepLib_EdgeError Error();
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the first vertex of the edge. May be Null.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex1();
    /// <summary>
    /// Returns the second vertex of the edge. May be Null.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex2();
}; // class BRepLib_MakeEdge

//---------------------------------------------------------------------
//  Class  BRepLib_MakeEdge2d
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to build edges.
/// 
/// The   methods have  the  following   syntax, where
/// TheCurve is one of Lin2d, Circ2d, ...
/// 
/// Create(C : TheCurve)
/// 
/// Makes an edge on  the whole curve.  Add vertices
/// on finite curves.
/// 
/// Create(C : TheCurve; p1,p2 : Real)
/// 
/// Make an edge  on the curve between parameters p1
/// and p2. if p2 < p1 the edge will be REVERSED. If
/// p1  or p2 is infinite the  curve will be open in
/// that  direction. Vertices are created for finite
/// values of p1 and p2.
/// 
/// Create(C : TheCurve; P1, P2 : Pnt2d from gp)
/// 
/// Make an edge on the curve  between the points P1
/// and P2. The  points are projected on   the curve
/// and the   previous method is  used. An  error is
/// raised if the points are not on the curve.
/// 
/// Create(C : TheCurve; V1, V2 : Vertex from TopoDS)
/// 
/// Make an edge  on the curve  between the vertices
/// V1 and V2. Same as the  previous but no vertices
/// are created. If a vertex is  Null the curve will
/// be open in this direction.
/// </summary>
public ref class BRepLib_MakeEdge2d sealed
    : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeEdge2d_h
public:
    Include_BRepLib_MakeEdge2d_h
#endif

public:
    BRepLib_MakeEdge2d(::BRepLib_MakeEdge2d* nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    BRepLib_MakeEdge2d(::BRepLib_MakeEdge2d& nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    property ::BRepLib_MakeEdge2d* NativeInstance
    {
        ::BRepLib_MakeEdge2d* get()
        {
            return static_cast<::BRepLib_MakeEdge2d*>(_NativeInstance);
        }
    }

public:
    BRepLib_MakeEdge2d(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, double p1, double p2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, double p1, double p2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, double p1, double p2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, double p1, double p2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, double p1, double p2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L);
    BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, double p1, double p2);
    BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2);
    BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C);
    void Init(Macad::Occt::Geom2d_Curve^ C, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    /// <summary>
    /// Returns the error description when NotDone.
    /// </summary>
    Macad::Occt::BRepLib_EdgeError Error();
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the first vertex of the edge. May be Null.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex1();
    /// <summary>
    /// Returns the second vertex of the edge. May be Null.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex2();
}; // class BRepLib_MakeEdge2d

//---------------------------------------------------------------------
//  Class  BRepLib_MakeFace
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to build faces.
/// 
/// A face may be built :
/// 
/// * From a surface.
/// 
/// - Elementary surface from gp.
/// 
/// - Surface from Geom.
/// 
/// * From a surface and U,V values.
/// 
/// * From a wire.
/// 
/// - Find the surface automatically if possible.
/// 
/// * From a surface and a wire.
/// 
/// - A flag Inside is given, when this flag is True
/// the  wire is  oriented to bound a finite area on
/// the surface.
/// 
/// * From a face and a wire.
/// 
/// - The new wire is a perforation.
/// </summary>
public ref class BRepLib_MakeFace sealed
    : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeFace_h
public:
    Include_BRepLib_MakeFace_h
#endif

public:
    BRepLib_MakeFace(::BRepLib_MakeFace* nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    BRepLib_MakeFace(::BRepLib_MakeFace& nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    property ::BRepLib_MakeFace* NativeInstance
    {
        ::BRepLib_MakeFace* get()
        {
            return static_cast<::BRepLib_MakeFace*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Not done.
    /// </summary>
    BRepLib_MakeFace();
    /// <summary>
    /// Load a face. Useful to add wires.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Make a face from a plane.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::Pln P);
    /// <summary>
    /// Make a face from a cylinder.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C);
    /// <summary>
    /// Make a face from a cone.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Cone^ C);
    /// <summary>
    /// Make a face from a sphere.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S);
    /// <summary>
    /// Make a face from a torus.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Torus^ C);
    /// <summary>
    /// Make a face from a Surface. Accepts tolerance value (TolDegen)
    /// for resolution of degenerated edges.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, double TolDegen);
    /// <summary>
    /// Make a face from a plane.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::Pln P, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a cylinder.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a cone.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a sphere.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a torus.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a Surface. Accepts min & max parameters
    /// to construct the face's bounds. Also accepts tolerance value (TolDegen)
    /// for resolution of degenerated edges.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen);
    /// <summary>
    /// Find a surface from the wire and make a face.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::TopoDS_Wire^ W, bool OnlyPlane);
    /// <summary>
    /// Find a surface from the wire and make a face.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a plane and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a plane and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a cylinder and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a cylinder and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a cone and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a cone and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a sphere and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a sphere and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a torus and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a torus and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a Surface and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a Surface and a wire.
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Adds the wire <W> in the face <F>
    /// </summary>
    BRepLib_MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Load the face.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Creates the face  from the  surface. If Bound is
    /// True a wire is made from the natural bounds.
    /// Accepts tolerance value (TolDegen) for resolution
    /// of degenerated edges.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, bool Bound, double TolDegen);
    /// <summary>
    /// Creates the face from the surface and the min-max
    /// values. Accepts tolerance value (TolDegen) for resolution
    /// of degenerated edges.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen);
    /// <summary>
    /// Adds the wire <W> in the current face.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Wire^ W);
    Macad::Occt::BRepLib_FaceError Error();
    /// <summary>
    /// Returns the new face.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
    /// <summary>
    /// Checks the specified curve is degenerated
    /// according to specified tolerance.
    /// Returns <theActTol> less than <theMaxTol>, which shows
    /// actual tolerance to decide the curve is degenerated.
    /// Warning: For internal use of BRepLib_MakeFace and BRepLib_MakeShell.
    /// </summary>
    static bool IsDegenerated(Macad::Occt::Geom_Curve^ theCurve, double theMaxTol, double% theActTol);
}; // class BRepLib_MakeFace

//---------------------------------------------------------------------
//  Class  BRepLib_MakePolygon
//---------------------------------------------------------------------
/// <summary>
/// Class to build polygonal wires.
/// 
/// A polygonal wire may be build from
/// 
/// - 2,4,3 points.
/// 
/// - 2,3,4 vertices.
/// 
/// - any number of points.
/// 
/// - any number of vertices.
/// 
/// When a point or vertex is added to the  polygon if
/// it is identic  to the previous  point no  edge  is
/// built. The method added can be used to test it.
/// </summary>
public ref class BRepLib_MakePolygon sealed
    : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakePolygon_h
public:
    Include_BRepLib_MakePolygon_h
#endif

public:
    BRepLib_MakePolygon(::BRepLib_MakePolygon* nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    BRepLib_MakePolygon(::BRepLib_MakePolygon& nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    property ::BRepLib_MakePolygon* NativeInstance
    {
        ::BRepLib_MakePolygon* get()
        {
            return static_cast<::BRepLib_MakePolygon*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty MakePolygon.
    /// </summary>
    BRepLib_MakePolygon();
    BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, bool Close);
    BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
    BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4, bool Close);
    BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
    BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, bool Close);
    BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3);
    BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4, bool Close);
    BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4);
    void Add(Macad::Occt::Pnt P);
    void Add(Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Returns  True if  the last   vertex  or point  was
    /// successfully added.
    /// </summary>
    bool Added();
    void Close();
    Macad::Occt::TopoDS_Vertex^ FirstVertex();
    Macad::Occt::TopoDS_Vertex^ LastVertex();
    /// <summary>
    /// Returns the last edge added to the polygon.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge();
    Macad::Occt::TopoDS_Wire^ Wire();
}; // class BRepLib_MakePolygon

//---------------------------------------------------------------------
//  Class  BRepLib_MakeShell
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to build shells.
/// 
/// Build a shell from a set of faces.
/// Build untied shell from a non C2 surface
/// splitting it into C2-continuous parts.
/// </summary>
public ref class BRepLib_MakeShell sealed
    : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeShell_h
public:
    Include_BRepLib_MakeShell_h
#endif

public:
    BRepLib_MakeShell(::BRepLib_MakeShell* nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    BRepLib_MakeShell(::BRepLib_MakeShell& nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    property ::BRepLib_MakeShell* NativeInstance
    {
        ::BRepLib_MakeShell* get()
        {
            return static_cast<::BRepLib_MakeShell*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Not done.
    /// </summary>
    BRepLib_MakeShell();
    BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, bool Segment);
    BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S);
    BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment);
    BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Creates the shell from the surface  and the min-max
    /// values.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment);
    /// <summary>
    /// Creates the shell from the surface  and the min-max
    /// values.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax);
    Macad::Occt::BRepLib_ShellError Error();
    /// <summary>
    /// Returns the new Shell.
    /// </summary>
    Macad::Occt::TopoDS_Shell^ Shell();
}; // class BRepLib_MakeShell

//---------------------------------------------------------------------
//  Class  BRepLib_MakeSolid
//---------------------------------------------------------------------
/// <summary>
/// Makes a solid from compsolid  or  shells.
/// </summary>
public ref class BRepLib_MakeSolid sealed
    : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeSolid_h
public:
    Include_BRepLib_MakeSolid_h
#endif

public:
    BRepLib_MakeSolid(::BRepLib_MakeSolid* nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    BRepLib_MakeSolid(::BRepLib_MakeSolid& nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    property ::BRepLib_MakeSolid* NativeInstance
    {
        ::BRepLib_MakeSolid* get()
        {
            return static_cast<::BRepLib_MakeSolid*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Solid covers whole space.
    /// </summary>
    BRepLib_MakeSolid();
    /// <summary>
    /// Make a solid from a CompSolid.
    /// </summary>
    BRepLib_MakeSolid(Macad::Occt::TopoDS_CompSolid^ S);
    /// <summary>
    /// Make a solid from a shell.
    /// </summary>
    BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S);
    /// <summary>
    /// Make a solid from two shells.
    /// </summary>
    BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2);
    /// <summary>
    /// Make a solid from three shells.
    /// </summary>
    BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2, Macad::Occt::TopoDS_Shell^ S3);
    /// <summary>
    /// Make a solid from a solid. Useful for adding later.
    /// </summary>
    BRepLib_MakeSolid(Macad::Occt::TopoDS_Solid^ So);
    /// <summary>
    /// Add a shell to a solid.
    /// </summary>
    BRepLib_MakeSolid(Macad::Occt::TopoDS_Solid^ So, Macad::Occt::TopoDS_Shell^ S);
    /// <summary>
    /// Add the shell to the current solid.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shell^ S);
    /// <summary>
    /// Returns the new Solid.
    /// </summary>
    Macad::Occt::TopoDS_Solid^ Solid();
    /// <summary>
    /// returns the status of the Face after
    /// the shape creation.
    /// </summary>
    Macad::Occt::BRepLib_ShapeModification FaceStatus(Macad::Occt::TopoDS_Face^ F);
}; // class BRepLib_MakeSolid

//---------------------------------------------------------------------
//  Class  BRepLib_MakeVertex
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to build vertices.
/// </summary>
public ref class BRepLib_MakeVertex sealed
    : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeVertex_h
public:
    Include_BRepLib_MakeVertex_h
#endif

public:
    BRepLib_MakeVertex(::BRepLib_MakeVertex* nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    BRepLib_MakeVertex(::BRepLib_MakeVertex& nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    property ::BRepLib_MakeVertex* NativeInstance
    {
        ::BRepLib_MakeVertex* get()
        {
            return static_cast<::BRepLib_MakeVertex*>(_NativeInstance);
        }
    }

public:
    BRepLib_MakeVertex(Macad::Occt::Pnt P);
    Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class BRepLib_MakeVertex

//---------------------------------------------------------------------
//  Class  BRepLib_MakeWire
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to build wires.
/// 
/// A wire may be built :
/// 
/// * From a single edge.
/// 
/// * From a wire and an edge.
/// 
/// - A new wire  is created with the edges  of  the
/// wire + the edge.
/// 
/// - If the edge is not connected  to the wire the
/// flag NotDone   is set and  the  method Wire will
/// raise an error.
/// 
/// - The connection may be :
/// 
/// . Through an existing vertex. The edge is shared.
/// 
/// . Through a geometric coincidence of vertices.
/// The edge is  copied  and the vertices from the
/// edge are  replaced  by  the vertices from  the
/// wire.
/// 
/// . The new edge and the connection vertices are
/// kept by the algorithm.
/// 
/// * From 2, 3, 4 edges.
/// 
/// - A wire is  created from  the first edge, the
/// following edges are added.
/// 
/// * From many edges.
/// 
/// - The following syntax may be used :
/// 
/// BRepLib_MakeWire MW;
/// 
/// // for all the edges ...
/// MW.Add(anEdge);
/// 
/// TopoDS_Wire W = MW;
/// </summary>
public ref class BRepLib_MakeWire sealed
    : public Macad::Occt::BRepLib_MakeShape
{

#ifdef Include_BRepLib_MakeWire_h
public:
    Include_BRepLib_MakeWire_h
#endif

public:
    BRepLib_MakeWire(::BRepLib_MakeWire* nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    BRepLib_MakeWire(::BRepLib_MakeWire& nativeInstance)
        : Macad::Occt::BRepLib_MakeShape( nativeInstance )
    {}

    property ::BRepLib_MakeWire* NativeInstance
    {
        ::BRepLib_MakeWire* get()
        {
            return static_cast<::BRepLib_MakeWire*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// NotDone MakeWire.
    /// </summary>
    BRepLib_MakeWire();
    /// <summary>
    /// Make a Wire from an edge.
    /// </summary>
    BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Make a Wire from two edges.
    /// </summary>
    BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
    /// <summary>
    /// Make a Wire from three edges.
    /// </summary>
    BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3);
    /// <summary>
    /// Make a Wire from four edges.
    /// </summary>
    BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3, Macad::Occt::TopoDS_Edge^ E4);
    /// <summary>
    /// Make a Wire from a Wire. Useful for adding later.
    /// </summary>
    BRepLib_MakeWire(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Add an edge to a wire.
    /// </summary>
    BRepLib_MakeWire(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Add the edge <E> to the current wire.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Add the edges of <W> to the current wire.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Add the edges of <L> to the current wire.
    /// The edges are not to be consecutive.  But they are
    /// to be all connected geometrically or topologically.
    /// </summary>
    void Add(Macad::Occt::TopTools_ListOfShape^ L);
    Macad::Occt::BRepLib_WireError Error();
    /// <summary>
    /// Returns the new wire.
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Wire();
    /// <summary>
    /// Returns the last edge added to the wire.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the last connecting vertex.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class BRepLib_MakeWire

//---------------------------------------------------------------------
//  Class  BRepLib_PointCloudShape
//---------------------------------------------------------------------
/// <summary>
/// This tool is intended to get points from shape with specified distance from shape along normal.
/// Can be used to simulation of points obtained in result of laser scan of shape.
/// There are 2 ways for generation points by shape:
/// 1. Generation points with specified density
/// 2. Generation points using triangulation Nodes
/// Generation of points by density using the GeneratePointsByDensity() function is not thread safe.
/// </summary>
public ref class BRepLib_PointCloudShape
    : public Macad::Occt::BaseClass<::BRepLib_PointCloudShape>
{

#ifdef Include_BRepLib_PointCloudShape_h
public:
    Include_BRepLib_PointCloudShape_h
#endif

public:
    BRepLib_PointCloudShape(::BRepLib_PointCloudShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_PointCloudShape>( nativeInstance, true )
    {}

    BRepLib_PointCloudShape(::BRepLib_PointCloudShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_PointCloudShape>( &nativeInstance, false )
    {}

    property ::BRepLib_PointCloudShape* NativeInstance
    {
        ::BRepLib_PointCloudShape* get()
        {
            return static_cast<::BRepLib_PointCloudShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor initialized by shape
    /// </summary>
    BRepLib_PointCloudShape(Macad::Occt::TopoDS_Shape^ theShape, double theTol);
    /// <summary>
    /// Constructor initialized by shape
    /// </summary>
    BRepLib_PointCloudShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Constructor initialized by shape
    /// </summary>
    BRepLib_PointCloudShape();
    /// <summary>
    /// Return loaded shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Set shape.
    /// </summary>
    void SetShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Return tolerance.
    /// </summary>
    double Tolerance();
    /// <summary>
    /// Set tolerance.
    /// </summary>
    void SetTolerance(double theTol);
    /// <summary>
    /// Returns value of the distance to define deflection of points from shape along normal to shape;
    /// 0.0 by default.
    /// </summary>
    double GetDistance();
    /// <summary>
    /// Sets value of the distance to define deflection of points from shape along normal to shape.
    /// Negative values of theDist parameter are ignored.
    /// </summary>
    void SetDistance(double theDist);
    /// <summary>
    /// Returns size of the point cloud for specified density.
    /// </summary>
    int NbPointsByDensity(double theDensity);
    /// <summary>
    /// Returns size of the point cloud for specified density.
    /// </summary>
    int NbPointsByDensity();
    /// <summary>
    /// Returns size of the point cloud for using triangulation.
    /// </summary>
    int NbPointsByTriangulation();
    /// <summary>
    /// Computes points with specified density for initial shape.
    /// If parameter Density is equal to 0 then density will be computed automatically by criterion:
    /// - 10 points per minimal unreduced face area.
    /// 
    /// Note: this function should not be called from concurrent threads without external lock.
    /// </summary>
    bool GeneratePointsByDensity(double theDensity);
    /// <summary>
    /// Computes points with specified density for initial shape.
    /// If parameter Density is equal to 0 then density will be computed automatically by criterion:
    /// - 10 points per minimal unreduced face area.
    /// 
    /// Note: this function should not be called from concurrent threads without external lock.
    /// </summary>
    bool GeneratePointsByDensity();
    /// <summary>
    /// Get points from triangulation existing in the shape.
    /// </summary>
    bool GeneratePointsByTriangulation();
}; // class BRepLib_PointCloudShape

//---------------------------------------------------------------------
//  Class  BRepLib_ToolTriangulatedShape
//---------------------------------------------------------------------
/// <summary>
/// Provides methods for calculating normals to Poly_Triangulation of TopoDS_Face.
/// </summary>
public ref class BRepLib_ToolTriangulatedShape sealed
    : public Macad::Occt::BaseClass<::BRepLib_ToolTriangulatedShape>
{

#ifdef Include_BRepLib_ToolTriangulatedShape_h
public:
    Include_BRepLib_ToolTriangulatedShape_h
#endif

public:
    BRepLib_ToolTriangulatedShape(::BRepLib_ToolTriangulatedShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_ToolTriangulatedShape>( nativeInstance, true )
    {}

    BRepLib_ToolTriangulatedShape(::BRepLib_ToolTriangulatedShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_ToolTriangulatedShape>( &nativeInstance, false )
    {}

    property ::BRepLib_ToolTriangulatedShape* NativeInstance
    {
        ::BRepLib_ToolTriangulatedShape* get()
        {
            return static_cast<::BRepLib_ToolTriangulatedShape*>(_NativeInstance);
        }
    }

public:
    BRepLib_ToolTriangulatedShape();
    /* Method skipped due to unknown mapping: void ComputeNormals(TopoDS_Face theFace, Poly_Triangulation theTris, ) */
    /* Method skipped due to unknown mapping: void ComputeNormals(TopoDS_Face theFace, Poly_Triangulation theTris, Poly_Connect thePolyConnect, ) */
}; // class BRepLib_ToolTriangulatedShape

//---------------------------------------------------------------------
//  Class  BRepLib_ValidateEdge
//---------------------------------------------------------------------
/// <summary>
/// Computes the max distance between 3D-curve and curve on surface.
/// This class uses 2 methods: approximate using finite
/// number of points (default) and exact
/// </summary>
public ref class BRepLib_ValidateEdge sealed
    : public Macad::Occt::BaseClass<::BRepLib_ValidateEdge>
{

#ifdef Include_BRepLib_ValidateEdge_h
public:
    Include_BRepLib_ValidateEdge_h
#endif

public:
    BRepLib_ValidateEdge(::BRepLib_ValidateEdge* nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_ValidateEdge>( nativeInstance, true )
    {}

    BRepLib_ValidateEdge(::BRepLib_ValidateEdge& nativeInstance)
        : Macad::Occt::BaseClass<::BRepLib_ValidateEdge>( &nativeInstance, false )
    {}

    property ::BRepLib_ValidateEdge* NativeInstance
    {
        ::BRepLib_ValidateEdge* get()
        {
            return static_cast<::BRepLib_ValidateEdge*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initialization constructor
    /// </summary>
    BRepLib_ValidateEdge(Macad::Occt::Adaptor3d_Curve^ theReferenceCurve, Macad::Occt::Adaptor3d_CurveOnSurface^ theOtherCurve, bool theSameParameter);
    /// <summary>
    /// Sets method to calculate distance: Calculating in finite number of points (if theIsExact
    /// is false, faster, but possible not correct result) or exact calculating by using
    /// BRepLib_CheckCurveOnSurface class (if theIsExact is true, slowly, but more correctly).
    /// Exact method is used only when edge is SameParameter.
    /// Default method is calculating in finite number of points
    /// </summary>
    void SetExactMethod(bool theIsExact);
    /// <summary>
    /// Returns true if exact method selected
    /// </summary>
    bool IsExactMethod();
    /// <summary>
    /// Sets parallel flag
    /// </summary>
    void SetParallel(bool theIsMultiThread);
    /// <summary>
    /// Returns true if parallel flag is set
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Set control points number (if you need a value other than 22)
    /// </summary>
    void SetControlPointsNumber(int theControlPointsNumber);
    /// <summary>
    /// Computes the max distance for the 3d curve <myReferenceCurve>
    /// and curve on surface <myOtherCurve>. If the SetExitIfToleranceExceeded()
    /// function was called before <myCalculatedDistance> contains first
    /// greater than SetExitIfToleranceExceeded() parameter value. In case
    /// using exact method always computes real max distance.
    /// </summary>
    void Process();
    /// <summary>
    /// Returns true if the distance has been found for all points
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns true if computed distance is less than <theToleranceToCheck>
    /// </summary>
    bool CheckTolerance(double theToleranceToCheck);
    /// <summary>
    /// Returns max distance
    /// </summary>
    double GetMaxDistance();
    /// <summary>
    /// Increase <theToleranceToUpdate> if max distance is greater than <theToleranceToUpdate>
    /// </summary>
    void UpdateTolerance(double% theToleranceToUpdate);
}; // class BRepLib_ValidateEdge

}; // namespace Occt
}; // namespace Macad
