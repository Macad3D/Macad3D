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
	GeomAbs_NonUniform = 0,
	GeomAbs_Uniform = 1,
	GeomAbs_QuasiUniform = 2,
	GeomAbs_PiecewiseBezier = 3
}; // enum  class GeomAbs_BSplKnotDistribution

//---------------------------------------------------------------------
//  Enum  GeomAbs_CurveType
//---------------------------------------------------------------------
/// <summary>
/// Identifies the type of a curve.
/// </summary>
public enum class GeomAbs_CurveType
{
	GeomAbs_Line = 0,
	GeomAbs_Circle = 1,
	GeomAbs_Ellipse = 2,
	GeomAbs_Hyperbola = 3,
	GeomAbs_Parabola = 4,
	GeomAbs_BezierCurve = 5,
	GeomAbs_BSplineCurve = 6,
	GeomAbs_OffsetCurve = 7,
	GeomAbs_OtherCurve = 8
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
	GeomAbs_IsoU = 0,
	GeomAbs_IsoV = 1,
	GeomAbs_NoneIso = 2
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
	GeomAbs_Arc = 0,
	GeomAbs_Tangent = 1,
	GeomAbs_Intersection = 2
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
	GeomAbs_C0 = 0,
	GeomAbs_G1 = 1,
	GeomAbs_C1 = 2,
	GeomAbs_G2 = 3,
	GeomAbs_C2 = 4,
	GeomAbs_C3 = 5,
	GeomAbs_CN = 6
}; // enum  class GeomAbs_Shape

//---------------------------------------------------------------------
//  Enum  GeomAbs_SurfaceType
//---------------------------------------------------------------------
public enum class GeomAbs_SurfaceType
{
	GeomAbs_Plane = 0,
	GeomAbs_Cylinder = 1,
	GeomAbs_Cone = 2,
	GeomAbs_Sphere = 3,
	GeomAbs_Torus = 4,
	GeomAbs_BezierSurface = 5,
	GeomAbs_BSplineSurface = 6,
	GeomAbs_SurfaceOfRevolution = 7,
	GeomAbs_SurfaceOfExtrusion = 8,
	GeomAbs_OffsetSurface = 9,
	GeomAbs_OtherSurface = 10
}; // enum  class GeomAbs_SurfaceType

}; // namespace Occt
}; // namespace Macad
