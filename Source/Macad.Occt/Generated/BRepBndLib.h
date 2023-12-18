// Generated wrapper code for package BRepBndLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepBndLib
//---------------------------------------------------------------------
/// <summary>
/// This package provides the bounding boxes for curves
/// and surfaces from BRepAdaptor.
/// Functions to add a topological shape to a bounding box
/// </summary>
public ref class BRepBndLib sealed
    : public Macad::Occt::BaseClass<::BRepBndLib>
{

#ifdef Include_BRepBndLib_h
public:
    Include_BRepBndLib_h
#endif

public:
    BRepBndLib(::BRepBndLib* nativeInstance)
        : Macad::Occt::BaseClass<::BRepBndLib>( nativeInstance, true )
    {}

    BRepBndLib(::BRepBndLib& nativeInstance)
        : Macad::Occt::BaseClass<::BRepBndLib>( &nativeInstance, false )
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
    /// <summary>
    /// Adds the shape S to the bounding box B.
    /// More precisely are successively added to B:
    /// -   each face of S; the triangulation of the face is used if it exists,
    /// -   then each edge of S which does not belong to a face,
    /// the polygon of the edge is used if it exists
    /// -   and last each vertex of S which does not belong to an edge.
    /// After each elementary operation, the bounding box B is
    /// enlarged by the tolerance value of the relative sub-shape.
    /// When working with the triangulation of a face this value of
    /// enlargement is the sum of the triangulation deflection and
    /// the face tolerance. When working with the
    /// polygon of an edge this value of enlargement is
    /// the sum of the polygon deflection and the edge tolerance.
    /// Warning
    /// -   This algorithm is time consuming if triangulation has not
    /// been inserted inside the data structure of the shape S.
    /// -   The resulting bounding box may be somewhat larger than the object.
    /// </summary>
    static void Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation);
    /// <summary>
    /// Adds the shape S to the bounding box B.
    /// More precisely are successively added to B:
    /// -   each face of S; the triangulation of the face is used if it exists,
    /// -   then each edge of S which does not belong to a face,
    /// the polygon of the edge is used if it exists
    /// -   and last each vertex of S which does not belong to an edge.
    /// After each elementary operation, the bounding box B is
    /// enlarged by the tolerance value of the relative sub-shape.
    /// When working with the triangulation of a face this value of
    /// enlargement is the sum of the triangulation deflection and
    /// the face tolerance. When working with the
    /// polygon of an edge this value of enlargement is
    /// the sum of the polygon deflection and the edge tolerance.
    /// Warning
    /// -   This algorithm is time consuming if triangulation has not
    /// been inserted inside the data structure of the shape S.
    /// -   The resulting bounding box may be somewhat larger than the object.
    /// </summary>
    static void Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds the shape S to the bounding box B.
    /// This is a quick algorithm but only works if the shape S is
    /// composed of polygonal planar faces, as is the case if S is
    /// an approached polyhedral representation of an exact
    /// shape. Pay particular attention to this because this
    /// condition is not checked and, if it not respected, an error
    /// may occur in the algorithm for which the bounding box is built.
    /// Note that the resulting bounding box is not enlarged by the
    /// tolerance value of the sub-shapes as is the case with the
    /// Add function. So the added part of the resulting bounding
    /// box is closer to the shape S.
    /// </summary>
    static void AddClose(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds the shape S to the bounding box B.
    /// This algorithm builds precise bounding box,
    /// which differs from exact geometry boundaries of shape only on shape entities tolerances
    /// Algorithm is the same as for method Add(..), but uses more precise methods for building boxes
    /// for geometry objects.
    /// If useShapeTolerance = True, bounding box is enlardged by shape tolerances and
    /// these tolerances are used for numerical methods of bounding box size calculations,
    /// otherwise bounding box is built according to sizes of uderlined geometrical entities,
    /// numerical calculation use tolerance Precision::Confusion().
    /// </summary>
    static void AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation, bool useShapeTolerance);
    /// <summary>
    /// Adds the shape S to the bounding box B.
    /// This algorithm builds precise bounding box,
    /// which differs from exact geometry boundaries of shape only on shape entities tolerances
    /// Algorithm is the same as for method Add(..), but uses more precise methods for building boxes
    /// for geometry objects.
    /// If useShapeTolerance = True, bounding box is enlardged by shape tolerances and
    /// these tolerances are used for numerical methods of bounding box size calculations,
    /// otherwise bounding box is built according to sizes of uderlined geometrical entities,
    /// numerical calculation use tolerance Precision::Confusion().
    /// </summary>
    static void AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation);
    /// <summary>
    /// Adds the shape S to the bounding box B.
    /// This algorithm builds precise bounding box,
    /// which differs from exact geometry boundaries of shape only on shape entities tolerances
    /// Algorithm is the same as for method Add(..), but uses more precise methods for building boxes
    /// for geometry objects.
    /// If useShapeTolerance = True, bounding box is enlardged by shape tolerances and
    /// these tolerances are used for numerical methods of bounding box size calculations,
    /// otherwise bounding box is built according to sizes of uderlined geometrical entities,
    /// numerical calculation use tolerance Precision::Confusion().
    /// </summary>
    static void AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Computes the Oriented Bounding box for the shape <theS>.
    /// Two independent methods of computation are implemented:
    /// first method based on set of points (so, it demands the
    /// triangulated shape or shape with planar faces and linear edges).
    /// The second method is based on use of inertia axes and is called
    /// if use of the first method is impossible.
    /// If theIsTriangulationUsed == FALSE then the triangulation will
    /// be ignored at all.
    /// If theIsShapeToleranceUsed == TRUE then resulting box will be
    /// extended on the tolerance of the shape.
    /// theIsOptimal flag defines whether to look for the more tight
    /// OBB for the cost of performance or not.
    /// </summary>
    static void AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed, bool theIsOptimal, bool theIsShapeToleranceUsed);
    /// <summary>
    /// Computes the Oriented Bounding box for the shape <theS>.
    /// Two independent methods of computation are implemented:
    /// first method based on set of points (so, it demands the
    /// triangulated shape or shape with planar faces and linear edges).
    /// The second method is based on use of inertia axes and is called
    /// if use of the first method is impossible.
    /// If theIsTriangulationUsed == FALSE then the triangulation will
    /// be ignored at all.
    /// If theIsShapeToleranceUsed == TRUE then resulting box will be
    /// extended on the tolerance of the shape.
    /// theIsOptimal flag defines whether to look for the more tight
    /// OBB for the cost of performance or not.
    /// </summary>
    static void AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed, bool theIsOptimal);
    /// <summary>
    /// Computes the Oriented Bounding box for the shape <theS>.
    /// Two independent methods of computation are implemented:
    /// first method based on set of points (so, it demands the
    /// triangulated shape or shape with planar faces and linear edges).
    /// The second method is based on use of inertia axes and is called
    /// if use of the first method is impossible.
    /// If theIsTriangulationUsed == FALSE then the triangulation will
    /// be ignored at all.
    /// If theIsShapeToleranceUsed == TRUE then resulting box will be
    /// extended on the tolerance of the shape.
    /// theIsOptimal flag defines whether to look for the more tight
    /// OBB for the cost of performance or not.
    /// </summary>
    static void AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed);
    /// <summary>
    /// Computes the Oriented Bounding box for the shape <theS>.
    /// Two independent methods of computation are implemented:
    /// first method based on set of points (so, it demands the
    /// triangulated shape or shape with planar faces and linear edges).
    /// The second method is based on use of inertia axes and is called
    /// if use of the first method is impossible.
    /// If theIsTriangulationUsed == FALSE then the triangulation will
    /// be ignored at all.
    /// If theIsShapeToleranceUsed == TRUE then resulting box will be
    /// extended on the tolerance of the shape.
    /// theIsOptimal flag defines whether to look for the more tight
    /// OBB for the cost of performance or not.
    /// </summary>
    static void AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB);
}; // class BRepBndLib

}; // namespace Occt
}; // namespace Macad
