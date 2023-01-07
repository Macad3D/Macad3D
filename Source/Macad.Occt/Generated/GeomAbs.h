// Generated wrapper code for package GeomAbs

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  GeomAbs_BSplKnotDistribution
//---------------------------------------------------------------------
/// <summary>
/// This enumeration is used in the classes BSplineCurve and
/// BSplineSurface to describe the repartition of set of knots.
/// (comments in classes BSplineCurve and BSplineSurface)
/// </summary>
public enum class GeomAbs_BSplKnotDistribution
{
    NonUniform = 0,
    Uniform = 1,
    QuasiUniform = 2,
    PiecewiseBezier = 3
}; // enum  class GeomAbs_BSplKnotDistribution

//---------------------------------------------------------------------
//  Enum  GeomAbs_CurveType
//---------------------------------------------------------------------
/// <summary>
/// Identifies the type of a curve.
/// </summary>
public enum class GeomAbs_CurveType
{
    Line = 0,
    Circle = 1,
    Ellipse = 2,
    Hyperbola = 3,
    Parabola = 4,
    BezierCurve = 5,
    BSplineCurve = 6,
    OffsetCurve = 7,
    OtherCurve = 8
}; // enum  class GeomAbs_CurveType

//---------------------------------------------------------------------
//  Enum  GeomAbs_IsoType
//---------------------------------------------------------------------
/// <summary>
/// this enumeration describes if a curve is an U isoparaetric
/// or V isoparametric
/// </summary>
public enum class GeomAbs_IsoType
{
    IsoU = 0,
    IsoV = 1,
    NoneIso = 2
}; // enum  class GeomAbs_IsoType

//---------------------------------------------------------------------
//  Enum  GeomAbs_JoinType
//---------------------------------------------------------------------
/// <summary>
/// Characterizes the type of a join, built by an algorithm for
/// constructing parallel curves, between two consecutive
/// arcs of a contour parallel to a given contour.
/// </summary>
public enum class GeomAbs_JoinType
{
    Arc = 0,
    Tangent = 1,
    Intersection = 2
}; // enum  class GeomAbs_JoinType

//---------------------------------------------------------------------
//  Enum  GeomAbs_Shape
//---------------------------------------------------------------------
/// <summary>
/// Provides information about the continuity of a curve:
/// -   C0: only geometric continuity.
/// -   G1: for each point on the curve, the tangent vectors
/// "on the right" and "on the left" are collinear with the same orientation.
/// -   C1: continuity of the first derivative. The "C1" curve is
/// also "G1" but, in addition, the tangent vectors " on the
/// right" and "on the left" are equal.
/// -   G2: for each point on the curve, the normalized
/// normal vectors "on the right" and "on the left" are equal.
/// -   C2: continuity of the second derivative.
/// -   C3: continuity of the third derivative.
/// -   CN: continuity of the N-th derivative, whatever is the
/// value given for N (infinite order of continuity).
/// Also provides information about the continuity of a surface:
/// -   C0: only geometric continuity.
/// -   C1: continuity of the first derivatives; any
/// isoparametric (in U or V) of a surface "C1" is also "C1".
/// -   G2: for BSpline curves only; "on the right" and "on the
/// left" of a knot the computation of the "main curvature
/// radii" and the "main directions" (when they exist) gives the same result.
/// -   C2: continuity of the second derivative.
/// -   C3: continuity of the third derivative.
/// -   CN: continuity of any N-th derivative, whatever is the
/// value given for N (infinite order of continuity).
/// We may also say that a surface is "Ci" in u, and "Cj" in v
/// to indicate the continuity of its derivatives up to the order
/// i in the u parametric direction, and j in the v parametric direction.
/// </summary>
public enum class GeomAbs_Shape
{
    C0 = 0,
    G1 = 1,
    C1 = 2,
    G2 = 3,
    C2 = 4,
    C3 = 5,
    CN = 6
}; // enum  class GeomAbs_Shape

//---------------------------------------------------------------------
//  Enum  GeomAbs_SurfaceType
//---------------------------------------------------------------------
public enum class GeomAbs_SurfaceType
{
    Plane = 0,
    Cylinder = 1,
    Cone = 2,
    Sphere = 3,
    Torus = 4,
    BezierSurface = 5,
    BSplineSurface = 6,
    SurfaceOfRevolution = 7,
    SurfaceOfExtrusion = 8,
    OffsetSurface = 9,
    OtherSurface = 10
}; // enum  class GeomAbs_SurfaceType

}; // namespace Occt
}; // namespace Macad
