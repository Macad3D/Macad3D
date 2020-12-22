// Generated wrapper code for package GeomAbs

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  GeomAbs_BSplKnotDistribution
//---------------------------------------------------------------------
public enum class GeomAbs_BSplKnotDistribution
{
	GeomAbs_NonUniform = 0,
	GeomAbs_Uniform = 1,
	GeomAbs_QuasiUniform = 2,
	GeomAbs_PiecewiseBezier = 3
}; // enum  class GeomAbs_BSplKnotDistribution

//---------------------------------------------------------------------
//  Enum  GeomAbs_CurveForm
//---------------------------------------------------------------------
public enum class GeomAbs_CurveForm
{
	GeomAbs_PolylineForm = 0,
	GeomAbs_CircularForm = 1,
	GeomAbs_EllipticForm = 2,
	GeomAbs_HyperbolicForm = 3,
	GeomAbs_ParabolicForm = 4,
	GeomAbs_OtherCurveForm = 5
}; // enum  class GeomAbs_CurveForm

//---------------------------------------------------------------------
//  Enum  GeomAbs_CurveType
//---------------------------------------------------------------------
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
public enum class GeomAbs_IsoType
{
	GeomAbs_IsoU = 0,
	GeomAbs_IsoV = 1,
	GeomAbs_NoneIso = 2
}; // enum  class GeomAbs_IsoType

//---------------------------------------------------------------------
//  Enum  GeomAbs_JoinType
//---------------------------------------------------------------------
public enum class GeomAbs_JoinType
{
	GeomAbs_Arc = 0,
	GeomAbs_Tangent = 1,
	GeomAbs_Intersection = 2
}; // enum  class GeomAbs_JoinType

//---------------------------------------------------------------------
//  Enum  GeomAbs_Shape
//---------------------------------------------------------------------
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
//  Enum  GeomAbs_SurfaceForm
//---------------------------------------------------------------------
public enum class GeomAbs_SurfaceForm
{
	GeomAbs_PlanarForm = 0,
	GeomAbs_ConicalForm = 1,
	GeomAbs_CylindricalForm = 2,
	GeomAbs_ToroidalForm = 3,
	GeomAbs_SphericalForm = 4,
	GeomAbs_RevolutionForm = 5,
	GeomAbs_RuledForm = 6,
	GeomAbs_QuadricForm = 7,
	GeomAbs_OtherSurfaceForm = 8
}; // enum  class GeomAbs_SurfaceForm

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

//---------------------------------------------------------------------
//  Enum  GeomAbs_UVSense
//---------------------------------------------------------------------
public enum class GeomAbs_UVSense
{
	GeomAbs_SameUV = 0,
	GeomAbs_SameU = 1,
	GeomAbs_SameV = 2,
	GeomAbs_OppositeUV = 3
}; // enum  class GeomAbs_UVSense

}; // namespace Occt
}; // namespace Macad
