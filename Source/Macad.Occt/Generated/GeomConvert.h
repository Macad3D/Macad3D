// Generated wrapper code for package GeomConvert

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  GeomConvert_ConvType
//---------------------------------------------------------------------
public enum class GeomConvert_ConvType
{
    Target = 0,
    Simplest = 1,
    MinGap = 2
}; // enum  class GeomConvert_ConvType

//---------------------------------------------------------------------
//  Class  GeomConvert
//---------------------------------------------------------------------
/// <summary>
/// The GeomConvert package provides some global functions as follows
/// -   converting classical Geom curves into BSpline curves,
/// -   segmenting BSpline curves, particularly at knots
/// values: this function may be used in conjunction with the
/// GeomConvert_BSplineCurveKnotSplitting
/// class to segment a BSpline curve into arcs which
/// comply with required continuity levels,
/// -   converting classical Geom surfaces into BSpline surfaces, and
/// -   segmenting BSpline surfaces, particularly at
/// knots values: this function may be used in conjunction with the
/// GeomConvert_BSplineSurfaceKnotSplitting
/// class to segment a BSpline surface into patches
/// which comply with required continuity levels.
/// All geometric entities used in this package are bounded.
/// 
/// References :
/// . Generating the Bezier Points of B-spline curves and surfaces
/// (Wolfgang Bohm) CAGD volume 13 number 6 november 1981
/// . On NURBS: A Survey  (Leslie Piegl) IEEE Computer Graphics and
/// Application January 1991
/// . Curve and surface construction using rational B-splines
/// (Leslie Piegl and Wayne Tiller) CAD Volume 19 number 9 november
/// 1987
/// . A survey of curve and surface methods in CAGD (Wolfgang BOHM)
/// CAGD 1 1984
/// </summary>
public ref class GeomConvert sealed
    : public Macad::Occt::BaseClass<::GeomConvert>
{

#ifdef Include_GeomConvert_h
public:
    Include_GeomConvert_h
#endif

public:
    GeomConvert(::GeomConvert* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert>( nativeInstance, true )
    {}

    GeomConvert(::GeomConvert& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert>( &nativeInstance, false )
    {}

    property ::GeomConvert* NativeInstance
    {
        ::GeomConvert* get()
        {
            return static_cast<::GeomConvert*>(_NativeInstance);
        }
    }

public:
    GeomConvert();
    /// <summary>
    /// Convert a curve from Geom by an approximation method
    /// 
    /// This method computes the arc of B-spline curve between the two
    /// knots FromK1 and ToK2.  If C is periodic the arc has the same
    /// orientation as C if SameOrientation = Standard_True.
    /// If C is not periodic  SameOrientation is not used for the
    /// computation and C is oriented from the knot fromK1 to the knot toK2.
    /// We just keep the local definition of C between the knots
    /// FromK1 and ToK2.  The returned B-spline curve has its first
    /// and last knots with a multiplicity equal to degree + 1, where
    /// degree is the polynomial degree of C.
    /// The indexes of the knots FromK1 and ToK2 doesn't include the
    /// repetition of multiple knots in their definition.
    /// Raised if FromK1 = ToK2
    /// Raised if FromK1 or ToK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex]
    /// </summary>
    static Macad::Occt::Geom_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation);
    /// <summary>
    /// Convert a curve from Geom by an approximation method
    /// 
    /// This method computes the arc of B-spline curve between the two
    /// knots FromK1 and ToK2.  If C is periodic the arc has the same
    /// orientation as C if SameOrientation = Standard_True.
    /// If C is not periodic  SameOrientation is not used for the
    /// computation and C is oriented from the knot fromK1 to the knot toK2.
    /// We just keep the local definition of C between the knots
    /// FromK1 and ToK2.  The returned B-spline curve has its first
    /// and last knots with a multiplicity equal to degree + 1, where
    /// degree is the polynomial degree of C.
    /// The indexes of the knots FromK1 and ToK2 doesn't include the
    /// repetition of multiple knots in their definition.
    /// Raised if FromK1 = ToK2
    /// Raised if FromK1 or ToK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex]
    /// </summary>
    static Macad::Occt::Geom_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, int FromK1, int ToK2);
    /// <summary>
    /// This function computes the segment of B-spline curve between the
    /// parametric values FromU1, ToU2.
    /// If C is periodic the arc has the same orientation as C if
    /// SameOrientation = True.
    /// If C is not periodic SameOrientation is not used for the
    /// computation and C is oriented fromU1 toU2.
    /// If U1 and U2 and two parametric values we consider that
    /// U1 = U2 if Abs (U1 - U2) <= ParametricTolerance and
    /// ParametricTolerance must  be greater or equal to Resolution
    /// from package gp.
    /// 
    /// Raised if FromU1 or ToU2 are out of the parametric bounds of the
    /// curve (The tolerance criterion is ParametricTolerance).
    /// Raised if Abs (FromU1 - ToU2) <= ParametricTolerance
    /// Raised if ParametricTolerance < Resolution from gp.
    /// </summary>
    static Macad::Occt::Geom_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation);
    /// <summary>
    /// This function computes the segment of B-spline curve between the
    /// parametric values FromU1, ToU2.
    /// If C is periodic the arc has the same orientation as C if
    /// SameOrientation = True.
    /// If C is not periodic SameOrientation is not used for the
    /// computation and C is oriented fromU1 toU2.
    /// If U1 and U2 and two parametric values we consider that
    /// U1 = U2 if Abs (U1 - U2) <= ParametricTolerance and
    /// ParametricTolerance must  be greater or equal to Resolution
    /// from package gp.
    /// 
    /// Raised if FromU1 or ToU2 are out of the parametric bounds of the
    /// curve (The tolerance criterion is ParametricTolerance).
    /// Raised if Abs (FromU1 - ToU2) <= ParametricTolerance
    /// Raised if ParametricTolerance < Resolution from gp.
    /// </summary>
    static Macad::Occt::Geom_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance);
    /// <summary>
    /// Computes the B-spline surface patche between the knots values
    /// FromUK1, ToUK2, FromVK1, ToVK2.
    /// If S is periodic in one direction the patche has the same
    /// orientation as S in this direction if the flag is true in this
    /// direction (SameUOrientation, SameVOrientation).
    /// If S is not periodic SameUOrientation and SameVOrientation are not
    /// used for the computation and S is oriented FromUK1 ToUK2 and
    /// FromVK1 ToVK2.
    /// Raised if
    /// FromUK1 = ToUK2 or FromVK1 = ToVK2
    /// FromUK1 or ToUK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex]
    /// FromVK1 or ToVK2 are out of the bounds
    /// [FirstVKnotIndex, LastVKnotIndex]
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation, bool SameVOrientation);
    /// <summary>
    /// Computes the B-spline surface patche between the knots values
    /// FromUK1, ToUK2, FromVK1, ToVK2.
    /// If S is periodic in one direction the patche has the same
    /// orientation as S in this direction if the flag is true in this
    /// direction (SameUOrientation, SameVOrientation).
    /// If S is not periodic SameUOrientation and SameVOrientation are not
    /// used for the computation and S is oriented FromUK1 ToUK2 and
    /// FromVK1 ToVK2.
    /// Raised if
    /// FromUK1 = ToUK2 or FromVK1 = ToVK2
    /// FromUK1 or ToUK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex]
    /// FromVK1 or ToVK2 are out of the bounds
    /// [FirstVKnotIndex, LastVKnotIndex]
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation);
    /// <summary>
    /// Computes the B-spline surface patche between the knots values
    /// FromUK1, ToUK2, FromVK1, ToVK2.
    /// If S is periodic in one direction the patche has the same
    /// orientation as S in this direction if the flag is true in this
    /// direction (SameUOrientation, SameVOrientation).
    /// If S is not periodic SameUOrientation and SameVOrientation are not
    /// used for the computation and S is oriented FromUK1 ToUK2 and
    /// FromVK1 ToVK2.
    /// Raised if
    /// FromUK1 = ToUK2 or FromVK1 = ToVK2
    /// FromUK1 or ToUK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex]
    /// FromVK1 or ToVK2 are out of the bounds
    /// [FirstVKnotIndex, LastVKnotIndex]
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2);
    /// <summary>
    /// This method splits a B-spline surface patche between the
    /// knots values FromK1, ToK2 in one direction.
    /// If USplit = True then the splitting direction is the U parametric
    /// direction else it is the V parametric direction.
    /// If S is periodic in the considered direction the patche has the
    /// same orientation as S in this direction if SameOrientation is True
    /// If S is not periodic in this direction SameOrientation is not used
    /// for the computation and S is oriented FromK1 ToK2.
    /// Raised if FromK1 = ToK2 or if
    /// FromK1 or ToK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex] in the
    /// considered parametric direction.
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit, bool SameOrientation);
    /// <summary>
    /// This method splits a B-spline surface patche between the
    /// knots values FromK1, ToK2 in one direction.
    /// If USplit = True then the splitting direction is the U parametric
    /// direction else it is the V parametric direction.
    /// If S is periodic in the considered direction the patche has the
    /// same orientation as S in this direction if SameOrientation is True
    /// If S is not periodic in this direction SameOrientation is not used
    /// for the computation and S is oriented FromK1 ToK2.
    /// Raised if FromK1 = ToK2 or if
    /// FromK1 or ToK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex] in the
    /// considered parametric direction.
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit);
    /// <summary>
    /// This method computes the B-spline surface patche between the
    /// parametric values FromU1, ToU2, FromV1, ToV2.
    /// If S is periodic in one direction the patche has the same
    /// orientation as S in this direction if the flag is True in this
    /// direction (SameUOrientation, SameVOrientation).
    /// If S is not periodic SameUOrientation and SameVOrientation are not
    /// used for the computation and S is oriented FromU1 ToU2 and
    /// FromV1 ToV2.
    /// If U1 and U2 and two parametric values we consider that U1 = U2 if
    /// Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance must
    /// be greater or equal to Resolution from package gp.
    /// 
    /// Raised if FromU1 or ToU2 or FromV1 or ToU2 are out of the
    /// parametric bounds of the surface (the tolerance criterion is
    /// ParametricTolerance).
    /// Raised if Abs (FromU1 - ToU2) <= ParametricTolerance or
    /// Abs (FromV1 - ToV2) <= ParametricTolerance.
    /// Raised if ParametricTolerance < Resolution.
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation, bool SameVOrientation);
    /// <summary>
    /// This method computes the B-spline surface patche between the
    /// parametric values FromU1, ToU2, FromV1, ToV2.
    /// If S is periodic in one direction the patche has the same
    /// orientation as S in this direction if the flag is True in this
    /// direction (SameUOrientation, SameVOrientation).
    /// If S is not periodic SameUOrientation and SameVOrientation are not
    /// used for the computation and S is oriented FromU1 ToU2 and
    /// FromV1 ToV2.
    /// If U1 and U2 and two parametric values we consider that U1 = U2 if
    /// Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance must
    /// be greater or equal to Resolution from package gp.
    /// 
    /// Raised if FromU1 or ToU2 or FromV1 or ToU2 are out of the
    /// parametric bounds of the surface (the tolerance criterion is
    /// ParametricTolerance).
    /// Raised if Abs (FromU1 - ToU2) <= ParametricTolerance or
    /// Abs (FromV1 - ToV2) <= ParametricTolerance.
    /// Raised if ParametricTolerance < Resolution.
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation);
    /// <summary>
    /// This method computes the B-spline surface patche between the
    /// parametric values FromU1, ToU2, FromV1, ToV2.
    /// If S is periodic in one direction the patche has the same
    /// orientation as S in this direction if the flag is True in this
    /// direction (SameUOrientation, SameVOrientation).
    /// If S is not periodic SameUOrientation and SameVOrientation are not
    /// used for the computation and S is oriented FromU1 ToU2 and
    /// FromV1 ToV2.
    /// If U1 and U2 and two parametric values we consider that U1 = U2 if
    /// Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance must
    /// be greater or equal to Resolution from package gp.
    /// 
    /// Raised if FromU1 or ToU2 or FromV1 or ToU2 are out of the
    /// parametric bounds of the surface (the tolerance criterion is
    /// ParametricTolerance).
    /// Raised if Abs (FromU1 - ToU2) <= ParametricTolerance or
    /// Abs (FromV1 - ToV2) <= ParametricTolerance.
    /// Raised if ParametricTolerance < Resolution.
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance);
    /// <summary>
    /// This method splits the B-spline surface S in one direction
    /// between the parametric values FromParam1, ToParam2.
    /// If USplit = True then the Splitting direction is the U parametric
    /// direction else it is the V parametric direction.
    /// If S is periodic in the considered direction the patche has
    /// the same orientation as S in this direction if SameOrientation
    /// is true.
    /// If S is not periodic in the considered direction SameOrientation
    /// is not used for the computation and S is oriented FromParam1
    /// ToParam2.
    /// If U1 and U2 and two parametric values we consider that U1 = U2
    /// if Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance
    /// must be greater or equal to Resolution from package gp.
    /// 
    /// Raises if FromParam1 or ToParam2 are out of the parametric bounds
    /// of the surface in the considered direction.
    /// Raises if Abs (FromParam1 - ToParam2) <= ParametricTolerance.
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance, bool SameOrientation);
    /// <summary>
    /// This method splits the B-spline surface S in one direction
    /// between the parametric values FromParam1, ToParam2.
    /// If USplit = True then the Splitting direction is the U parametric
    /// direction else it is the V parametric direction.
    /// If S is periodic in the considered direction the patche has
    /// the same orientation as S in this direction if SameOrientation
    /// is true.
    /// If S is not periodic in the considered direction SameOrientation
    /// is not used for the computation and S is oriented FromParam1
    /// ToParam2.
    /// If U1 and U2 and two parametric values we consider that U1 = U2
    /// if Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance
    /// must be greater or equal to Resolution from package gp.
    /// 
    /// Raises if FromParam1 or ToParam2 are out of the parametric bounds
    /// of the surface in the considered direction.
    /// Raises if Abs (FromParam1 - ToParam2) <= ParametricTolerance.
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance);
    /// <summary>
    /// This function converts a non infinite curve from
    /// Geom into a  B-spline curve.  C must be   an ellipse or  a
    /// circle  or a trimmed conic  or a trimmed  line or a Bezier
    /// curve or a trimmed  Bezier curve or a  BSpline curve or  a
    /// trimmed  BSpline curve or  an  OffsetCurve.  The returned  B-spline is
    /// not periodic except  if C is a Circle  or an  Ellipse.  If
    /// the  Parameterisation is  QuasiAngular than  the returned
    /// curve is NOT periodic  in case a  periodic Geom_Circle or
    /// Geom_Ellipse.  For TgtThetaOver2_1 and TgtThetaOver2_2 the
    /// method   raises  an exception  in    case  of a  periodic
    /// Geom_Circle or a Geom_Ellipse ParameterisationType applies
    /// only    if  the curve  is   a  Circle  or  an   ellipse :
    /// TgtThetaOver2,  -- TgtThetaOver2_1, -- TgtThetaOver2_2, --
    /// TgtThetaOver2_3, -- TgtThetaOver2_4,
    /// 
    /// Purpose: this is the classical rational parameterisation
    /// 2
    /// 1 - t
    /// cos(theta) = ------
    /// 2
    /// 1 + t
    /// 
    /// 2t
    /// sin(theta) = ------
    /// 2
    /// 1 + t
    /// 
    /// t = tan (theta/2)
    /// 
    /// with TgtThetaOver2  the routine will compute the number of spans
    /// using the rule num_spans = [ (ULast - UFirst) / 1.2 ] + 1
    /// with TgtThetaOver2_N, N  spans will be forced: an error will
    /// be raized if (ULast - UFirst) >= PI and N = 1,
    /// ULast - UFirst >= 2 PI and N = 2
    /// 
    /// QuasiAngular,
    /// here t is a rational function that approximates
    /// theta ----> tan(theta/2).
    /// Nevetheless the composing with above function yields exact
    /// functions whose square sum up to 1
    /// RationalC1 ;
    /// t is replaced by a polynomial function of u so as to grant
    /// C1 contiuity across knots.
    /// Exceptions
    /// Standard_DomainError:
    /// -   if the curve C is infinite, or
    /// -   if C is a (complete) circle or ellipse, and Parameterisation is equal to
    /// Convert_TgtThetaOver2_1 or Convert_TgtThetaOver2_2.
    /// Standard_ConstructionError:
    /// -   if C is a (complete) circle or ellipse, and if Parameterisation is not equal to
    /// Convert_TgtThetaOver2, Convert_RationalC1,
    /// Convert_QuasiAngular (the curve is converted
    /// in these three cases) or to Convert_TgtThetaOver2_1 or
    /// Convert_TgtThetaOver2_2 (another exception is raised in these two cases).
    /// -   if C is a trimmed circle or ellipse, if Parameterisation is equal to
    /// Convert_TgtThetaOver2_1 and if U2 - U1 > 0.9999 * Pi, where U1 and U2 are
    /// respectively the first and the last parameters of the
    /// trimmed curve (this method of parameterization
    /// cannot be used to convert a half-circle or a half-ellipse, for example), or
    /// -   if C is a trimmed circle or ellipse, if
    /// Parameterisation is equal to Convert_TgtThetaOver2_2 and U2 - U1 >
    /// 1.9999 * Pi where U1 and U2 are
    /// respectively the first and the last parameters of the
    /// trimmed curve (this method of parameterization
    /// cannot be used to convert a quasi-complete circle or ellipse).
    /// </summary>
    static Macad::Occt::Geom_BSplineCurve^ CurveToBSplineCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// This function converts a non infinite curve from
    /// Geom into a  B-spline curve.  C must be   an ellipse or  a
    /// circle  or a trimmed conic  or a trimmed  line or a Bezier
    /// curve or a trimmed  Bezier curve or a  BSpline curve or  a
    /// trimmed  BSpline curve or  an  OffsetCurve.  The returned  B-spline is
    /// not periodic except  if C is a Circle  or an  Ellipse.  If
    /// the  Parameterisation is  QuasiAngular than  the returned
    /// curve is NOT periodic  in case a  periodic Geom_Circle or
    /// Geom_Ellipse.  For TgtThetaOver2_1 and TgtThetaOver2_2 the
    /// method   raises  an exception  in    case  of a  periodic
    /// Geom_Circle or a Geom_Ellipse ParameterisationType applies
    /// only    if  the curve  is   a  Circle  or  an   ellipse :
    /// TgtThetaOver2,  -- TgtThetaOver2_1, -- TgtThetaOver2_2, --
    /// TgtThetaOver2_3, -- TgtThetaOver2_4,
    /// 
    /// Purpose: this is the classical rational parameterisation
    /// 2
    /// 1 - t
    /// cos(theta) = ------
    /// 2
    /// 1 + t
    /// 
    /// 2t
    /// sin(theta) = ------
    /// 2
    /// 1 + t
    /// 
    /// t = tan (theta/2)
    /// 
    /// with TgtThetaOver2  the routine will compute the number of spans
    /// using the rule num_spans = [ (ULast - UFirst) / 1.2 ] + 1
    /// with TgtThetaOver2_N, N  spans will be forced: an error will
    /// be raized if (ULast - UFirst) >= PI and N = 1,
    /// ULast - UFirst >= 2 PI and N = 2
    /// 
    /// QuasiAngular,
    /// here t is a rational function that approximates
    /// theta ----> tan(theta/2).
    /// Nevetheless the composing with above function yields exact
    /// functions whose square sum up to 1
    /// RationalC1 ;
    /// t is replaced by a polynomial function of u so as to grant
    /// C1 contiuity across knots.
    /// Exceptions
    /// Standard_DomainError:
    /// -   if the curve C is infinite, or
    /// -   if C is a (complete) circle or ellipse, and Parameterisation is equal to
    /// Convert_TgtThetaOver2_1 or Convert_TgtThetaOver2_2.
    /// Standard_ConstructionError:
    /// -   if C is a (complete) circle or ellipse, and if Parameterisation is not equal to
    /// Convert_TgtThetaOver2, Convert_RationalC1,
    /// Convert_QuasiAngular (the curve is converted
    /// in these three cases) or to Convert_TgtThetaOver2_1 or
    /// Convert_TgtThetaOver2_2 (another exception is raised in these two cases).
    /// -   if C is a trimmed circle or ellipse, if Parameterisation is equal to
    /// Convert_TgtThetaOver2_1 and if U2 - U1 > 0.9999 * Pi, where U1 and U2 are
    /// respectively the first and the last parameters of the
    /// trimmed curve (this method of parameterization
    /// cannot be used to convert a half-circle or a half-ellipse, for example), or
    /// -   if C is a trimmed circle or ellipse, if
    /// Parameterisation is equal to Convert_TgtThetaOver2_2 and U2 - U1 >
    /// 1.9999 * Pi where U1 and U2 are
    /// respectively the first and the last parameters of the
    /// trimmed curve (this method of parameterization
    /// cannot be used to convert a quasi-complete circle or ellipse).
    /// </summary>
    static Macad::Occt::Geom_BSplineCurve^ CurveToBSplineCurve(Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// This algorithm converts a non infinite surface from Geom
    /// into a B-spline surface.
    /// S must be a trimmed plane or a trimmed cylinder or a trimmed cone
    /// or a trimmed sphere or a trimmed torus or a sphere or a torus or
    /// a Bezier surface of a trimmed Bezier surface or a trimmed swept
    /// surface with a corresponding basis curve which can be turned into
    /// a B-spline curve   (see the method CurveToBSplineCurve).
    /// Raises DomainError if the type of the surface is not previously defined.
    /// </summary>
    static Macad::Occt::Geom_BSplineSurface^ SurfaceToBSplineSurface(Macad::Occt::Geom_Surface^ S);
    /* Method skipped due to unknown mapping: void ConcatG1(TColGeom_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColGeom_HArray1OfBSplineCurve ArrayOfConcatenated, bool ClosedFlag, double ClosedTolerance, ) */
    /* Method skipped due to unknown mapping: void ConcatC1(TColGeom_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColStd_HArray1OfInteger ArrayOfIndices, TColGeom_HArray1OfBSplineCurve ArrayOfConcatenated, bool ClosedFlag, double ClosedTolerance, ) */
    /* Method skipped due to unknown mapping: void ConcatC1(TColGeom_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColStd_HArray1OfInteger ArrayOfIndices, TColGeom_HArray1OfBSplineCurve ArrayOfConcatenated, bool ClosedFlag, double ClosedTolerance, double AngularTolerance, ) */
    /// <summary>
    /// This  Method reduces as far as   it is possible the
    /// multiplicities of  the  knots of  the BSpline BS.(keeping  the
    /// geometry).  It returns a new BSpline which  could still be C0.
    /// tolerance is a  geometrical tolerance.
    /// The  Angular toleranceis in radians  and measures  the angle of
    /// the tangents  on  the left and on  the right  to decide if  the
    /// curve is G1 or not at a given point
    /// </summary>
    static void C0BSplineToC1BSplineCurve(Macad::Occt::Geom_BSplineCurve^ BS, double tolerance, double AngularTolerance);
    /// <summary>
    /// This  Method reduces as far as   it is possible the
    /// multiplicities of  the  knots of  the BSpline BS.(keeping  the
    /// geometry).  It returns a new BSpline which  could still be C0.
    /// tolerance is a  geometrical tolerance.
    /// The  Angular toleranceis in radians  and measures  the angle of
    /// the tangents  on  the left and on  the right  to decide if  the
    /// curve is G1 or not at a given point
    /// </summary>
    static void C0BSplineToC1BSplineCurve(Macad::Occt::Geom_BSplineCurve^ BS, double tolerance);
    /* Method skipped due to unknown mapping: void C0BSplineToArrayOfC1BSplineCurve(Geom_BSplineCurve BS, TColGeom_HArray1OfBSplineCurve tabBS, double tolerance, ) */
    /* Method skipped due to unknown mapping: void C0BSplineToArrayOfC1BSplineCurve(Geom_BSplineCurve BS, TColGeom_HArray1OfBSplineCurve tabBS, double AngularTolerance, double tolerance, ) */
}; // class GeomConvert

//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxCurve
//---------------------------------------------------------------------
/// <summary>
/// A framework to convert a 3D curve to a 3D BSpline.
/// This is done by approximation to a BSpline curve within a given tolerance.
/// </summary>
public ref class GeomConvert_ApproxCurve sealed
    : public Macad::Occt::BaseClass<::GeomConvert_ApproxCurve>
{

#ifdef Include_GeomConvert_ApproxCurve_h
public:
    Include_GeomConvert_ApproxCurve_h
#endif

public:
    GeomConvert_ApproxCurve(::GeomConvert_ApproxCurve* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_ApproxCurve>( nativeInstance, true )
    {}

    GeomConvert_ApproxCurve(::GeomConvert_ApproxCurve& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_ApproxCurve>( &nativeInstance, false )
    {}

    property ::GeomConvert_ApproxCurve* NativeInstance
    {
        ::GeomConvert_ApproxCurve* get()
        {
            return static_cast<::GeomConvert_ApproxCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a curve approximation framework defined by -
    /// -      the conic Curve,
    /// -      the tolerance value Tol3d,
    /// -      the degree of continuity Order,
    /// -      the maximum number of segments
    /// MaxSegments allowed in the resulting BSpline curve, and
    /// -      the highest degree MaxDeg which the
    /// polynomial defining the BSpline curve may have.
    /// </summary>
    GeomConvert_ApproxCurve(Macad::Occt::Geom_Curve^ Curve, double Tol3d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree);
    /// <summary>
    /// Constructs a curve approximation framework defined by -
    /// -      the Curve,
    /// -      the tolerance value Tol3d,
    /// -      the degree of continuity Order,
    /// -      the maximum number of segments
    /// MaxSegments allowed in the resulting BSpline curve, and
    /// -      the highest degree MaxDeg which the
    /// polynomial defining the BSpline curve may have.
    /// </summary>
    GeomConvert_ApproxCurve(Macad::Occt::Adaptor3d_Curve^ Curve, double Tol3d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree);
    /// <summary>
    /// Returns the BSpline curve resulting from the approximation algorithm.
    /// </summary>
    Macad::Occt::Geom_BSplineCurve^ Curve();
    /// <summary>
    /// returns  Standard_True  if  the  approximation  has
    /// been  done  within  required tolerance
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns  Standard_True if the approximation did come out
    /// with a result that  is not NECESSARELY within the required tolerance
    /// </summary>
    bool HasResult();
    /// <summary>
    /// Returns the greatest distance between a point on the
    /// source conic and the BSpline curve resulting from the
    /// approximation. (>0 when an approximation
    /// has  been  done, 0  if  no  approximation)
    /// </summary>
    double MaxError();
    /// <summary>
    /// Print on the stream  o  information about the object
    /// </summary>
    void Dump(System::IO::TextWriter^ o);
}; // class GeomConvert_ApproxCurve

//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxSurface
//---------------------------------------------------------------------
/// <summary>
/// A framework to convert a surface to a BSpline
/// surface. This is done by approximation to a BSpline
/// surface within a given tolerance.
/// </summary>
public ref class GeomConvert_ApproxSurface sealed
    : public Macad::Occt::BaseClass<::GeomConvert_ApproxSurface>
{

#ifdef Include_GeomConvert_ApproxSurface_h
public:
    Include_GeomConvert_ApproxSurface_h
#endif

public:
    GeomConvert_ApproxSurface(::GeomConvert_ApproxSurface* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_ApproxSurface>( nativeInstance, true )
    {}

    GeomConvert_ApproxSurface(::GeomConvert_ApproxSurface& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_ApproxSurface>( &nativeInstance, false )
    {}

    property ::GeomConvert_ApproxSurface* NativeInstance
    {
        ::GeomConvert_ApproxSurface* get()
        {
            return static_cast<::GeomConvert_ApproxSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a surface approximation framework defined by
    /// -   the conic Surf
    /// -   the tolerance value Tol3d
    /// -   the degree of continuity UContinuity, VContinuity
    /// in the directions of the U and V parameters
    /// -   the highest degree MaxDegU, MaxDegV which
    /// the polynomial defining the BSpline curve may
    /// have in the directions of the U and V parameters
    /// -   the maximum number of segments MaxSegments
    /// allowed in the resulting BSpline curve
    /// -   the index of precision PrecisCode.
    /// </summary>
    GeomConvert_ApproxSurface(Macad::Occt::Geom_Surface^ Surf, double Tol3d, Macad::Occt::GeomAbs_Shape UContinuity, Macad::Occt::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode);
    /// <summary>
    /// Constructs a surface approximation framework defined by
    /// -   the Surf
    /// -   the tolerance value Tol3d
    /// -   the degree of continuity UContinuity, VContinuity
    /// in the directions of the U and V parameters
    /// -   the highest degree MaxDegU, MaxDegV which
    /// the polynomial defining the BSpline curve may
    /// have in the directions of the U and V parameters
    /// -   the maximum number of segments MaxSegments
    /// allowed in the resulting BSpline curve
    /// -   the index of precision PrecisCode.
    /// </summary>
    GeomConvert_ApproxSurface(Macad::Occt::Adaptor3d_Surface^ Surf, double Tol3d, Macad::Occt::GeomAbs_Shape UContinuity, Macad::Occt::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode);
    /// <summary>
    /// Returns the BSpline surface resulting from the approximation algorithm.
    /// </summary>
    Macad::Occt::Geom_BSplineSurface^ Surface();
    /// <summary>
    /// Returns Standard_True if the approximation has be done
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns true if the approximation did come out with a result that
    /// is not NECESSARILY within the required tolerance or a result
    /// that is not recognized with the wished continuities.
    /// </summary>
    bool HasResult();
    /// <summary>
    /// Returns the greatest distance between a point on the
    /// source conic surface and the BSpline surface
    /// resulting from the approximation (>0 when an approximation
    /// has been done, 0 if no  approximation )
    /// </summary>
    double MaxError();
    /// <summary>
    /// Prints on the stream o information on the current state of the object.
    /// </summary>
    void Dump(System::IO::TextWriter^ o);
}; // class GeomConvert_ApproxSurface

//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------
/// <summary>
/// An algorithm to determine points at which a BSpline
/// curve should be split in order to obtain arcs of the same continuity.
/// If you require curves with a minimum continuity for
/// your computation, it is useful to know the points
/// between which an arc has a continuity of a given
/// order. The continuity order is given at the construction time.
/// For a BSpline curve, the discontinuities are
/// localized at the knot values. Between two knot values
/// the BSpline is infinitely and continuously
/// differentiable. At a given knot, the continuity is equal
/// to: Degree - Mult, where Degree is the
/// degree of the BSpline curve and Mult is the multiplicity of the knot.
/// It is possible to compute the arcs which correspond to
/// this splitting using the global function
/// SplitBSplineCurve provided by the package GeomConvert.
/// A BSplineCurveKnotSplitting object provides a framework for:
/// -   defining the curve to be analyzed and the
/// required degree of continuity,
/// -   implementing the computation algorithm, and
/// -   consulting the results.
/// </summary>
public ref class GeomConvert_BSplineCurveKnotSplitting sealed
    : public Macad::Occt::BaseClass<::GeomConvert_BSplineCurveKnotSplitting>
{

#ifdef Include_GeomConvert_BSplineCurveKnotSplitting_h
public:
    Include_GeomConvert_BSplineCurveKnotSplitting_h
#endif

public:
    GeomConvert_BSplineCurveKnotSplitting(::GeomConvert_BSplineCurveKnotSplitting* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_BSplineCurveKnotSplitting>( nativeInstance, true )
    {}

    GeomConvert_BSplineCurveKnotSplitting(::GeomConvert_BSplineCurveKnotSplitting& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_BSplineCurveKnotSplitting>( &nativeInstance, false )
    {}

    property ::GeomConvert_BSplineCurveKnotSplitting* NativeInstance
    {
        ::GeomConvert_BSplineCurveKnotSplitting* get()
        {
            return static_cast<::GeomConvert_BSplineCurveKnotSplitting*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Determines points at which the BSpline curve
    /// BasisCurve should be split in order to obtain arcs
    /// with a degree of continuity equal to ContinuityRange.
    /// These points are knot values of BasisCurve. They
    /// are identified by indices in the knots table of BasisCurve.
    /// Use the available interrogation functions to access
    /// computed values, followed by the global function
    /// SplitBSplineCurve (provided by the package GeomConvert) to split the curve.
    /// Exceptions
    /// Standard_RangeError if ContinuityRange is less than zero.
    /// </summary>
    GeomConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom_BSplineCurve^ BasisCurve, int ContinuityRange);
    /// <summary>
    /// Returns the number of points at which the analyzed
    /// BSpline curve should be split, in order to obtain arcs
    /// with the continuity required by this framework.
    /// All these points correspond to knot values. Note that
    /// the first and last points of the curve, which bound the
    /// first and last arcs, are counted among these splitting points.
    /// </summary>
    int NbSplits();
    /// <summary>
    /// Loads the SplitValues table with the split knots
    /// values computed in this framework. Each value in the
    /// table is an index in the knots table of the BSpline
    /// curve analyzed by this algorithm.
    /// The values in SplitValues are given in ascending
    /// order and comprise the indices of the knots which
    /// give the first and last points of the curve. Use two
    /// consecutive values from the table as arguments of the
    /// global function SplitBSplineCurve (provided by the
    /// package GeomConvert) to split the curve.
    /// Exceptions
    /// Standard_DimensionError if the array SplitValues
    /// was not created with the following bounds:
    /// -   1, and
    /// -   the number of split points computed in this
    /// framework (as given by the function NbSplits).
    /// </summary>
    void Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues);
    /// <summary>
    /// Returns the split knot of index Index to the split knots
    /// table computed in this framework. The returned value
    /// is an index in the knots table of the BSpline curve
    /// analyzed by this algorithm.
    /// Notes:
    /// -   If Index is equal to 1, the corresponding knot
    /// gives the first point of the curve.
    /// -   If Index is equal to the number of split knots
    /// computed in this framework, the corresponding
    /// point is the last point of the curve.
    /// Exceptions
    /// Standard_RangeError if Index is less than 1 or
    /// greater than the number of split knots computed in this framework.
    /// </summary>
    int SplitValue(int Index);
}; // class GeomConvert_BSplineCurveKnotSplitting

//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------
/// <summary>
/// An algorithm to convert a BSpline curve into a series
/// of adjacent Bezier curves.
/// A BSplineCurveToBezierCurve object provides a framework for:
/// -   defining the BSpline curve to be converted
/// -   implementing the construction algorithm, and
/// -   consulting the results.
/// References :
/// Generating the Bezier points of B-spline curves and surfaces
/// (Wolfgang Bohm) CAD volume 13 number 6 november 1981
/// </summary>
public ref class GeomConvert_BSplineCurveToBezierCurve sealed
    : public Macad::Occt::BaseClass<::GeomConvert_BSplineCurveToBezierCurve>
{

#ifdef Include_GeomConvert_BSplineCurveToBezierCurve_h
public:
    Include_GeomConvert_BSplineCurveToBezierCurve_h
#endif

public:
    GeomConvert_BSplineCurveToBezierCurve(::GeomConvert_BSplineCurveToBezierCurve* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_BSplineCurveToBezierCurve>( nativeInstance, true )
    {}

    GeomConvert_BSplineCurveToBezierCurve(::GeomConvert_BSplineCurveToBezierCurve& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_BSplineCurveToBezierCurve>( &nativeInstance, false )
    {}

    property ::GeomConvert_BSplineCurveToBezierCurve* NativeInstance
    {
        ::GeomConvert_BSplineCurveToBezierCurve* get()
        {
            return static_cast<::GeomConvert_BSplineCurveToBezierCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Computes all the data needed to convert the
    /// BSpline curve BasisCurve into a series of adjacent Bezier arcs.
    /// </summary>
    GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom_BSplineCurve^ BasisCurve);
    /// <summary>
    /// Computes all the data needed to convert
    /// the portion of the BSpline curve BasisCurve
    /// limited by the two parameter values U1 and U2 into a series of adjacent Bezier arcs.
    /// The result consists of a series of BasisCurve arcs
    /// limited by points corresponding to knot values of the curve.
    /// Use the available interrogation functions to ascertain
    /// the number of computed Bezier arcs, and then to
    /// construct each individual Bezier curve (or all Bezier curves).
    /// Note: ParametricTolerance is not used.
    /// Raises DomainError if U1 or U2 are out of the parametric bounds of the basis
    /// curve [FirstParameter, LastParameter]. The Tolerance criterion
    /// is ParametricTolerance.
    /// Raised if Abs (U2 - U1) <= ParametricTolerance.
    /// </summary>
    GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance);
    /// <summary>
    /// Constructs and returns the Bezier curve of index
    /// Index to the table of adjacent Bezier arcs
    /// computed by this algorithm.
    /// This Bezier curve has the same orientation as the
    /// BSpline curve analyzed in this framework.
    /// Exceptions
    /// Standard_OutOfRange if Index is less than 1 or
    /// greater than the number of adjacent Bezier arcs
    /// computed by this algorithm.
    /// </summary>
    Macad::Occt::Geom_BezierCurve^ Arc(int Index);
    /* Method skipped due to unknown mapping: void Arcs(TColGeom_Array1OfBezierCurve Curves, ) */
    /// <summary>
    /// This methode returns the bspline's knots associated to
    /// the converted arcs
    /// Raised  if the length  of Curves is not equal to
    /// NbArcs +  1.
    /// </summary>
    void Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots);
    /// <summary>
    /// Returns the number of BezierCurve arcs.
    /// If at the creation time you have decomposed the basis curve
    /// between the parametric values UFirst, ULast the number of
    /// BezierCurve arcs depends on the number of knots included inside
    /// the interval [UFirst, ULast].
    /// If you have decomposed the whole basis B-spline curve the number
    /// of BezierCurve arcs NbArcs is equal to the number of knots less
    /// one.
    /// </summary>
    int NbArcs();
}; // class GeomConvert_BSplineCurveToBezierCurve

//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceKnotSplitting
//---------------------------------------------------------------------
/// <summary>
/// An algorithm to determine isoparametric curves along
/// which a BSpline surface should be split in order to
/// obtain patches of the same continuity. The continuity order is given at the
/// construction time. It is possible to compute the surface patches
/// corresponding to the splitting with the method of package
/// SplitBSplineSurface.
/// For a B-spline surface the discontinuities are localised at
/// the knot values. Between two knots values the B-spline is
/// infinitely continuously differentiable.  For each parametric
/// direction at a knot of range index the continuity in this
/// direction is equal to :  Degree - Mult (Index)   where  Degree
/// is the degree of the basis B-spline functions and Mult the
/// multiplicity of the knot of range Index in the given direction.
/// If for your computation you need to have B-spline surface with a
/// minima of continuity it can be interesting to know between which
/// knot values, a B-spline patch, has a continuity of given order.
/// This algorithm computes the indexes of the knots where you should
/// split the surface, to obtain patches with a constant continuity
/// given at the construction time. If you just want to compute the
/// local derivatives on the surface you don't need to create the
/// BSpline patches, you can use the functions LocalD1, LocalD2,
/// LocalD3, LocalDN of the class BSplineSurface from package Geom.
/// </summary>
public ref class GeomConvert_BSplineSurfaceKnotSplitting sealed
    : public Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>
{

#ifdef Include_GeomConvert_BSplineSurfaceKnotSplitting_h
public:
    Include_GeomConvert_BSplineSurfaceKnotSplitting_h
#endif

public:
    GeomConvert_BSplineSurfaceKnotSplitting(::GeomConvert_BSplineSurfaceKnotSplitting* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>( nativeInstance, true )
    {}

    GeomConvert_BSplineSurfaceKnotSplitting(::GeomConvert_BSplineSurfaceKnotSplitting& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>( &nativeInstance, false )
    {}

    property ::GeomConvert_BSplineSurfaceKnotSplitting* NativeInstance
    {
        ::GeomConvert_BSplineSurfaceKnotSplitting* get()
        {
            return static_cast<::GeomConvert_BSplineSurfaceKnotSplitting*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Determines the u- and v-isoparametric curves
    /// along which the BSpline surface BasisSurface
    /// should be split in order to obtain patches with a
    /// degree of continuity equal to UContinuityRange in
    /// the u parametric direction, and to
    /// VContinuityRange in the v parametric direction.
    /// These isoparametric curves are defined by
    /// parameters, which are BasisSurface knot values in
    /// the u or v parametric direction. They are identified
    /// by indices in the BasisSurface knots table in the
    /// corresponding parametric direction.
    /// Use the available interrogation functions to access
    /// computed values, followed by the global function
    /// SplitBSplineSurface (provided by the package
    /// GeomConvert) to split the surface.
    /// Exceptions
    /// Standard_RangeError if UContinuityRange or
    /// VContinuityRange is less than zero.
    /// </summary>
    GeomConvert_BSplineSurfaceKnotSplitting(Macad::Occt::Geom_BSplineSurface^ BasisSurface, int UContinuityRange, int VContinuityRange);
    /// <summary>
    /// Returns the number of u-isoparametric curves
    /// along which the analysed BSpline surface should be
    /// split in order to obtain patches with the continuity
    /// required by this framework.
    /// The parameters which define these curves are knot
    /// values in the corresponding parametric direction.
    /// Note that the four curves which bound the surface are
    /// counted among these splitting curves.
    /// </summary>
    int NbUSplits();
    /// <summary>
    /// Returns the number of v-isoparametric curves
    /// along which the analysed BSpline surface should be
    /// split in order to obtain patches with the continuity
    /// required by this framework.
    /// The parameters which define these curves are knot
    /// values in the corresponding parametric direction.
    /// Note that the four curves which bound the surface are
    /// counted among these splitting curves.
    /// </summary>
    int NbVSplits();
    /// <summary>
    /// Loads the USplit and VSplit tables with the split
    /// knots values computed in this framework. Each value
    /// in these tables is an index in the knots table
    /// corresponding to the u or v parametric direction of
    /// the BSpline surface analysed by this algorithm.
    /// The USplit and VSplit values are given in ascending
    /// order and comprise the indices of the knots which
    /// give the first and last isoparametric curves of the
    /// surface in the corresponding parametric direction.
    /// Use two consecutive values from the USplit table and
    /// two consecutive values from the VSplit table as
    /// arguments of the global function
    /// SplitBSplineSurface (provided by the package
    /// GeomConvert) to split the surface.
    /// Exceptions
    /// Standard_DimensionError if:
    /// -   the array USplit was not created with the following bounds:
    /// -   1 , and
    /// -   the number of split knots in the u parametric
    /// direction computed in this framework (as given
    /// by the function NbUSplits); or
    /// -   the array VSplit was not created with the following bounds:
    /// -   1 , and
    /// -   the number of split knots in the v parametric
    /// direction computed in this framework (as given
    /// by the function NbVSplits).
    /// </summary>
    void Splitting(Macad::Occt::TColStd_Array1OfInteger^ USplit, Macad::Occt::TColStd_Array1OfInteger^ VSplit);
    /// <summary>
    /// Returns the split knot of index UIndex
    /// to the split knots table for the u  parametric direction
    /// computed in this framework. The returned value is
    /// an index in the knots table relative to the u
    /// parametric direction of the BSpline surface analysed by this algorithm.
    /// Note: If UIndex is equal to 1, or to the number of split knots for the u
    /// parametric direction computed in
    /// this framework, the corresponding knot gives the
    /// parameter of one of the bounding curves of the surface.
    /// Exceptions
    /// Standard_RangeError if UIndex  is less than 1 or greater than the number
    /// of split knots for the u parametric direction computed in this framework.
    /// </summary>
    int USplitValue(int UIndex);
    /// <summary>
    /// Returns the split knot of index VIndex
    /// to the split knots table for the v  parametric direction
    /// computed in this framework. The returned value is
    /// an index in the knots table relative to the v
    /// parametric direction of the BSpline surface analysed by this algorithm.
    /// Note: If UIndex is equal to 1, or to the number of split knots for the v
    /// parametric direction computed in
    /// this framework, the corresponding knot gives the
    /// parameter of one of the bounding curves of the surface.
    /// Exceptions
    /// Standard_RangeError if VIndex  is less than 1 or greater than the number
    /// of split knots for the v parametric direction computed in this framework.
    /// </summary>
    int VSplitValue(int VIndex);
}; // class GeomConvert_BSplineSurfaceKnotSplitting

//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceToBezierSurface
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a B-spline surface into several
/// Bezier surfaces. It uses an algorithm of knot insertion.
/// A BSplineSurfaceToBezierSurface object provides a framework for:
/// -   defining the BSpline surface to be converted,
/// -   implementing the construction algorithm, and
/// -   consulting the results.
/// References :
/// Generating the Bezier points of B-spline curves and surfaces
/// (Wolfgang Bohm) CAD volume 13 number 6 november 1981
/// </summary>
public ref class GeomConvert_BSplineSurfaceToBezierSurface sealed
    : public Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>
{

#ifdef Include_GeomConvert_BSplineSurfaceToBezierSurface_h
public:
    Include_GeomConvert_BSplineSurfaceToBezierSurface_h
#endif

public:
    GeomConvert_BSplineSurfaceToBezierSurface(::GeomConvert_BSplineSurfaceToBezierSurface* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>( nativeInstance, true )
    {}

    GeomConvert_BSplineSurfaceToBezierSurface(::GeomConvert_BSplineSurfaceToBezierSurface& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>( &nativeInstance, false )
    {}

    property ::GeomConvert_BSplineSurfaceToBezierSurface* NativeInstance
    {
        ::GeomConvert_BSplineSurfaceToBezierSurface* get()
        {
            return static_cast<::GeomConvert_BSplineSurfaceToBezierSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Computes all the data needed to convert
    /// -   the BSpline surface BasisSurface into a series of adjacent Bezier surfaces.
    /// The result consists of a grid of BasisSurface patches
    /// limited by isoparametric curves corresponding to knot
    /// values, both in the u and v parametric directions of
    /// the surface. A row in the grid corresponds to a series
    /// of adjacent patches, all limited by the same two
    /// u-isoparametric curves. A column in the grid
    /// corresponds to a series of adjacent patches, all
    /// limited by the same two v-isoparametric curves.
    /// Use the available interrogation functions to ascertain
    /// the number of computed Bezier patches, and then to
    /// construct each individual Bezier surface (or all Bezier surfaces).
    /// Note: ParametricTolerance is not used.
    /// </summary>
    GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::Geom_BSplineSurface^ BasisSurface);
    /// <summary>
    /// Computes all the data needed to convert
    /// the patch of the BSpline surface BasisSurface
    /// limited by the two parameter values U1 and U2 in
    /// the u parametric direction, and by the two
    /// parameter values V1 and V2 in the v parametric
    /// direction, into a series of adjacent Bezier surfaces.
    /// The result consists of a grid of BasisSurface patches
    /// limited by isoparametric curves corresponding to knot
    /// values, both in the u and v parametric directions of
    /// the surface. A row in the grid corresponds to a series
    /// of adjacent patches, all limited by the same two
    /// u-isoparametric curves. A column in the grid
    /// corresponds to a series of adjacent patches, all
    /// limited by the same two v-isoparametric curves.
    /// Use the available interrogation functions to ascertain
    /// the number of computed Bezier patches, and then to
    /// construct each individual Bezier surface (or all Bezier surfaces).
    /// Note: ParametricTolerance is not used.  Raises DomainError
    /// if U1 or U2 or V1 or V2 are out of the parametric bounds
    /// of the basis surface [FirstUKnotIndex, LastUKnotIndex] ,
    /// [FirstVKnotIndex, LastVKnotIndex] The tolerance criterion is
    /// ParametricTolerance.
    /// Raised if U2 - U1 <= ParametricTolerance or
    /// V2 - V1 <= ParametricTolerance.
    /// </summary>
    GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::Geom_BSplineSurface^ BasisSurface, double U1, double U2, double V1, double V2, double ParametricTolerance);
    /// <summary>
    /// Constructs and returns the Bezier surface of indices
    /// (UIndex, VIndex) to the patch grid computed on the
    /// BSpline surface analyzed by this algorithm.
    /// This Bezier surface has the same orientation as the
    /// BSpline surface analyzed in this framework.
    /// UIndex is an index common to a row in the patch
    /// grid. A row in the grid corresponds to a series of
    /// adjacent patches, all limited by the same two
    /// u-isoparametric curves of the surface. VIndex is an
    /// index common to a column in the patch grid. A column
    /// in the grid corresponds to a series of adjacent
    /// patches, all limited by the same two v-isoparametric
    /// curves of the surface.
    /// Exceptions
    /// Standard_OutOfRange if:
    /// -   UIndex is less than 1 or greater than the number
    /// of rows in the patch grid computed on the BSpline
    /// surface analyzed by this algorithm (as returned by
    /// the function NbUPatches); or if
    /// -   VIndex is less than 1 or greater than the number
    /// of columns in the patch grid computed on the
    /// BSpline surface analyzed by this algorithm (as
    /// returned by the function NbVPatches).
    /// </summary>
    Macad::Occt::Geom_BezierSurface^ Patch(int UIndex, int VIndex);
    /* Method skipped due to unknown mapping: void Patches(TColGeom_Array2OfBezierSurface Surfaces, ) */
    /// <summary>
    /// This methode returns the bspline's u-knots associated to
    /// the converted Patches
    /// Raised  if the length  of Curves is not equal to
    /// NbUPatches +  1.
    /// </summary>
    void UKnots(Macad::Occt::TColStd_Array1OfReal^ TKnots);
    /// <summary>
    /// This methode returns the bspline's v-knots associated to
    /// the converted Patches
    /// Raised  if the length  of Curves is not equal to
    /// NbVPatches +  1.
    /// </summary>
    void VKnots(Macad::Occt::TColStd_Array1OfReal^ TKnots);
    /// <summary>
    /// Returns the number of Bezier surfaces in the U direction.
    /// If at the creation time you have decomposed the basis Surface
    /// between the parametric values UFirst, ULast the number of
    /// Bezier surfaces in the U direction depends on the number of
    /// knots included inside the interval [UFirst, ULast].
    /// If you have decomposed the whole basis B-spline surface the
    /// number of Bezier surfaces NbUPatches is equal to the number of
    /// UKnots less one.
    /// </summary>
    int NbUPatches();
    /// <summary>
    /// Returns the number of Bezier surfaces in the V direction.
    /// If at the creation time you have decomposed the basis surface
    /// between the parametric values VFirst, VLast the number of
    /// Bezier surfaces in the V direction depends on the number of
    /// knots included inside the interval [VFirst, VLast].
    /// If you have decomposed the whole basis B-spline surface the
    /// number of Bezier surfaces NbVPatches is equal to the number of
    /// VKnots less one.
    /// </summary>
    int NbVPatches();
}; // class GeomConvert_BSplineSurfaceToBezierSurface

//---------------------------------------------------------------------
//  Class  GeomConvert_CompBezierSurfacesToBSplineSurface
//---------------------------------------------------------------------
/// <summary>
/// An algorithm to convert a grid of adjacent
/// non-rational Bezier surfaces (with continuity CM) into a
/// BSpline surface (with continuity CM).
/// A CompBezierSurfacesToBSplineSurface object
/// provides a framework for:
/// -   defining the grid of adjacent Bezier surfaces
/// which is to be converted into a BSpline surface,
/// -   implementing the computation algorithm, and
/// -   consulting the results.
/// Warning
/// Do not attempt to convert rational Bezier surfaces using such an algorithm.
/// Input is array of Bezier patch
/// 1    2    3     4  -> VIndex [1, NbVPatches] -> VDirection
/// -----------------------
/// 1    |    |    |    |      |
/// -----------------------
/// 2    |    |    |    |      |
/// -----------------------
/// 3    |    |    |    |      |
/// -----------------------
/// UIndex [1, NbUPatches]  Udirection
/// 
/// Warning! Patches must have compatible parametrization
/// </summary>
public ref class GeomConvert_CompBezierSurfacesToBSplineSurface sealed
    : public Macad::Occt::BaseClass<::GeomConvert_CompBezierSurfacesToBSplineSurface>
{

#ifdef Include_GeomConvert_CompBezierSurfacesToBSplineSurface_h
public:
    Include_GeomConvert_CompBezierSurfacesToBSplineSurface_h
#endif

public:
    GeomConvert_CompBezierSurfacesToBSplineSurface(::GeomConvert_CompBezierSurfacesToBSplineSurface* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_CompBezierSurfacesToBSplineSurface>( nativeInstance, true )
    {}

    GeomConvert_CompBezierSurfacesToBSplineSurface(::GeomConvert_CompBezierSurfacesToBSplineSurface& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_CompBezierSurfacesToBSplineSurface>( &nativeInstance, false )
    {}

    property ::GeomConvert_CompBezierSurfacesToBSplineSurface* NativeInstance
    {
        ::GeomConvert_CompBezierSurfacesToBSplineSurface* get()
        {
            return static_cast<::GeomConvert_CompBezierSurfacesToBSplineSurface*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, ) */
    /* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, double Tolerance, bool RemoveKnots, ) */
    /* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, double Tolerance, bool RemoveKnots, ) */
    /* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, TColStd_Array1OfReal UKnots, TColStd_Array1OfReal VKnots, GeomAbs_Shape UContinuity, GeomAbs_Shape VContinuity, double Tolerance, ) */
    /* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, TColStd_Array1OfReal UKnots, TColStd_Array1OfReal VKnots, GeomAbs_Shape UContinuity, GeomAbs_Shape VContinuity, double Tolerance, ) */
    /* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, TColStd_Array1OfReal UKnots, TColStd_Array1OfReal VKnots, GeomAbs_Shape UContinuity, GeomAbs_Shape VContinuity, double Tolerance, ) */
    /* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, TColStd_Array1OfReal UKnots, TColStd_Array1OfReal VKnots, GeomAbs_Shape UContinuity, GeomAbs_Shape VContinuity, double Tolerance, ) */
    /// <summary>
    /// Returns the number of knots in the U direction
    /// of the BSpline surface whose data is computed in this framework.
    /// </summary>
    int NbUKnots();
    /// <summary>
    /// Returns number of poles in the U direction
    /// of the BSpline surface whose data is computed in this framework.
    /// </summary>
    int NbUPoles();
    /// <summary>
    /// Returns the number of knots in the V direction
    /// of the BSpline surface whose data is computed in this framework.
    /// </summary>
    int NbVKnots();
    /// <summary>
    /// Returns the number of poles in the V direction
    /// of the BSpline surface whose data is computed in this framework.
    /// </summary>
    int NbVPoles();
    /// <summary>
    /// Returns the table of poles of the BSpline surface
    /// whose data is computed in this framework.
    /// </summary>
    Macad::Occt::TColgp_HArray2OfPnt^ Poles();
    /// <summary>
    /// Returns the knots table for the u parametric
    /// direction of the BSpline surface whose data is computed in this framework.
    /// </summary>
    Macad::Occt::TColStd_HArray1OfReal^ UKnots();
    /// <summary>
    /// Returns the degree for the u  parametric
    /// direction of the BSpline surface whose data is computed in this framework.
    /// </summary>
    int UDegree();
    /// <summary>
    /// Returns the knots table for the v parametric
    /// direction of the BSpline surface whose data is computed in this framework.
    /// </summary>
    Macad::Occt::TColStd_HArray1OfReal^ VKnots();
    /// <summary>
    /// Returns the degree for the v  parametric
    /// direction of the BSpline surface whose data is computed in this framework.
    /// </summary>
    int VDegree();
    /// <summary>
    /// Returns the multiplicities table for the u
    /// parametric direction of the knots of the BSpline
    /// surface whose data is computed in this framework.
    /// </summary>
    Macad::Occt::TColStd_HArray1OfInteger^ UMultiplicities();
    /// <summary>
    /// -- Returns the multiplicities table for the v
    /// parametric direction of the knots of the BSpline
    /// surface whose data is computed in this framework.
    /// </summary>
    Macad::Occt::TColStd_HArray1OfInteger^ VMultiplicities();
    /// <summary>
    /// Returns true if the conversion was successful.
    /// Unless an exception was raised at the time of
    /// construction, the conversion of the Bezier surface
    /// grid assigned to this algorithm is always carried out.
    /// IsDone returns false if the constraints defined at the
    /// time of construction cannot be respected. This occurs
    /// when there is an incompatibility between a required
    /// degree of continuity on the BSpline surface, and the
    /// maximum tolerance accepted for local deformations
    /// of the surface. In such a case the computed data
    /// does not satisfy all the initial constraints.
    /// </summary>
    bool IsDone();
}; // class GeomConvert_CompBezierSurfacesToBSplineSurface

//---------------------------------------------------------------------
//  Class  GeomConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// Algorithm converts and concat several curve in an BSplineCurve
/// </summary>
public ref class GeomConvert_CompCurveToBSplineCurve sealed
    : public Macad::Occt::BaseClass<::GeomConvert_CompCurveToBSplineCurve>
{

#ifdef Include_GeomConvert_CompCurveToBSplineCurve_h
public:
    Include_GeomConvert_CompCurveToBSplineCurve_h
#endif

public:
    GeomConvert_CompCurveToBSplineCurve(::GeomConvert_CompCurveToBSplineCurve* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_CompCurveToBSplineCurve>( nativeInstance, true )
    {}

    GeomConvert_CompCurveToBSplineCurve(::GeomConvert_CompCurveToBSplineCurve& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_CompCurveToBSplineCurve>( &nativeInstance, false )
    {}

    property ::GeomConvert_CompCurveToBSplineCurve* NativeInstance
    {
        ::GeomConvert_CompCurveToBSplineCurve* get()
        {
            return static_cast<::GeomConvert_CompCurveToBSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initialize the algorithme
    /// - Parameterisation is used to convert
    /// </summary>
    GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// Initialize the algorithme
    /// - Parameterisation is used to convert
    /// </summary>
    GeomConvert_CompCurveToBSplineCurve();
    /// <summary>
    /// Initialize the algorithme with one curve
    /// - Parameterisation is used to convert
    /// </summary>
    GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Geom_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// Initialize the algorithme with one curve
    /// - Parameterisation is used to convert
    /// </summary>
    GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Geom_BoundedCurve^ BasisCurve);
    /// <summary>
    /// Append a curve in  the BSpline Return False if the
    /// curve is not G0  with the BSplineCurve.  Tolerance
    /// is   used to   check   continuity  and decrease
    /// Multiplicity at the common Knot until MinM
    /// if MinM = 0, the common Knot can be removed
    /// 
    /// WithRatio defines whether the resulting curve should have a uniform
    /// parameterization. Setting WithRatio to Standard_False may greatly
    /// decrease the speed of algorithms like CPnts_AbscissaPoint::AdvPerform
    /// when applied to the resulting curve.
    /// </summary>
    bool Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio, int MinM);
    /// <summary>
    /// Append a curve in  the BSpline Return False if the
    /// curve is not G0  with the BSplineCurve.  Tolerance
    /// is   used to   check   continuity  and decrease
    /// Multiplicity at the common Knot until MinM
    /// if MinM = 0, the common Knot can be removed
    /// 
    /// WithRatio defines whether the resulting curve should have a uniform
    /// parameterization. Setting WithRatio to Standard_False may greatly
    /// decrease the speed of algorithms like CPnts_AbscissaPoint::AdvPerform
    /// when applied to the resulting curve.
    /// </summary>
    bool Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio);
    /// <summary>
    /// Append a curve in  the BSpline Return False if the
    /// curve is not G0  with the BSplineCurve.  Tolerance
    /// is   used to   check   continuity  and decrease
    /// Multiplicity at the common Knot until MinM
    /// if MinM = 0, the common Knot can be removed
    /// 
    /// WithRatio defines whether the resulting curve should have a uniform
    /// parameterization. Setting WithRatio to Standard_False may greatly
    /// decrease the speed of algorithms like CPnts_AbscissaPoint::AdvPerform
    /// when applied to the resulting curve.
    /// </summary>
    bool Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After);
    /// <summary>
    /// Append a curve in  the BSpline Return False if the
    /// curve is not G0  with the BSplineCurve.  Tolerance
    /// is   used to   check   continuity  and decrease
    /// Multiplicity at the common Knot until MinM
    /// if MinM = 0, the common Knot can be removed
    /// 
    /// WithRatio defines whether the resulting curve should have a uniform
    /// parameterization. Setting WithRatio to Standard_False may greatly
    /// decrease the speed of algorithms like CPnts_AbscissaPoint::AdvPerform
    /// when applied to the resulting curve.
    /// </summary>
    bool Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance);
    Macad::Occt::Geom_BSplineCurve^ BSplineCurve();
    /// <summary>
    /// Clear a result curve
    /// </summary>
    void Clear();
}; // class GeomConvert_CompCurveToBSplineCurve

//---------------------------------------------------------------------
//  Class  GeomConvert_CurveToAnaCurve
//---------------------------------------------------------------------
public ref class GeomConvert_CurveToAnaCurve sealed
    : public Macad::Occt::BaseClass<::GeomConvert_CurveToAnaCurve>
{

#ifdef Include_GeomConvert_CurveToAnaCurve_h
public:
    Include_GeomConvert_CurveToAnaCurve_h
#endif

public:
    GeomConvert_CurveToAnaCurve(::GeomConvert_CurveToAnaCurve* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_CurveToAnaCurve>( nativeInstance, true )
    {}

    GeomConvert_CurveToAnaCurve(::GeomConvert_CurveToAnaCurve& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_CurveToAnaCurve>( &nativeInstance, false )
    {}

    property ::GeomConvert_CurveToAnaCurve* NativeInstance
    {
        ::GeomConvert_CurveToAnaCurve* get()
        {
            return static_cast<::GeomConvert_CurveToAnaCurve*>(_NativeInstance);
        }
    }

public:
    GeomConvert_CurveToAnaCurve();
    GeomConvert_CurveToAnaCurve(Macad::Occt::Geom_Curve^ C);
    void Init(Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// Converts me to analytical if possible with given
    /// tolerance. The new first and last parameters are
    /// returned to newF, newL
    /// </summary>
    bool ConvertToAnalytical(double theTol, Macad::Occt::Geom_Curve^ theResultCurve, double F, double L, double% newF, double% newL);
    static Macad::Occt::Geom_Curve^ ComputeCurve(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap, Macad::Occt::GeomConvert_ConvType theCurvType, Macad::Occt::GeomAbs_CurveType theTarget);
    static Macad::Occt::Geom_Curve^ ComputeCurve(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap, Macad::Occt::GeomConvert_ConvType theCurvType);
    static Macad::Occt::Geom_Curve^ ComputeCurve(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap);
    /// <summary>
    /// Tries to convert the given curve to circle with given
    /// tolerance. Returns NULL curve if conversion is
    /// not possible.
    /// </summary>
    static Macad::Occt::Geom_Curve^ ComputeCircle(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation);
    /// <summary>
    /// Tries to convert the given curve to ellipse with given
    /// tolerance. Returns NULL curve if conversion is
    /// not possible.
    /// </summary>
    static Macad::Occt::Geom_Curve^ ComputeEllipse(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation);
    /// <summary>
    /// Tries to convert the given curve to line with given
    /// tolerance. Returns NULL curve if conversion is
    /// not possible.
    /// </summary>
    static Macad::Occt::Geom_Line^ ComputeLine(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation);
    /// <summary>
    /// Returns true if the set of points is linear with given
    /// tolerance
    /// </summary>
    static bool IsLinear(Macad::Occt::TColgp_Array1OfPnt^ aPoints, double tolerance, double% Deviation);
    /// <summary>
    /// Creates line on two points.
    /// Resulting parameters returned
    /// </summary>
    static Macad::Occt::gp_Lin^ GetLine(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double% cf, double% cl);
    /// <summary>
    /// Creates circle on points. Returns true if OK.
    /// </summary>
    static bool GetCircle(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt P0, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Returns maximal deviation of converted surface from the original
    /// one computed by last call to ConvertToAnalytical
    /// </summary>
    double Gap();
    /// <summary>
    /// Returns conversion type
    /// </summary>
    Macad::Occt::GeomConvert_ConvType GetConvType();
    /// <summary>
    /// Sets type of conversion
    /// </summary>
    void SetConvType(Macad::Occt::GeomConvert_ConvType theConvType);
    /// <summary>
    /// Returns target curve type
    /// </summary>
    Macad::Occt::GeomAbs_CurveType GetTarget();
    /// <summary>
    /// Sets target curve type
    /// </summary>
    void SetTarget(Macad::Occt::GeomAbs_CurveType theTarget);
}; // class GeomConvert_CurveToAnaCurve

//---------------------------------------------------------------------
//  Class  GeomConvert_SurfToAnaSurf
//---------------------------------------------------------------------
/// <summary>
/// Converts a surface to the analytical form with given
/// precision. Conversion is done only the surface is bspline
/// of bezier and this can be approximated by some analytical
/// surface with that precision.
/// </summary>
public ref class GeomConvert_SurfToAnaSurf sealed
    : public Macad::Occt::BaseClass<::GeomConvert_SurfToAnaSurf>
{

#ifdef Include_GeomConvert_SurfToAnaSurf_h
public:
    Include_GeomConvert_SurfToAnaSurf_h
#endif

public:
    GeomConvert_SurfToAnaSurf(::GeomConvert_SurfToAnaSurf* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_SurfToAnaSurf>( nativeInstance, true )
    {}

    GeomConvert_SurfToAnaSurf(::GeomConvert_SurfToAnaSurf& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_SurfToAnaSurf>( &nativeInstance, false )
    {}

    property ::GeomConvert_SurfToAnaSurf* NativeInstance
    {
        ::GeomConvert_SurfToAnaSurf* get()
        {
            return static_cast<::GeomConvert_SurfToAnaSurf*>(_NativeInstance);
        }
    }

public:
    GeomConvert_SurfToAnaSurf();
    GeomConvert_SurfToAnaSurf(Macad::Occt::Geom_Surface^ S);
    void Init(Macad::Occt::Geom_Surface^ S);
    void SetConvType(Macad::Occt::GeomConvert_ConvType theConvType);
    void SetConvType();
    void SetTarget(Macad::Occt::GeomAbs_SurfaceType theSurfType);
    void SetTarget();
    /// <summary>
    /// Returns maximal deviation of converted surface from the original
    /// one computed by last call to ConvertToAnalytical
    /// </summary>
    double Gap();
    /// <summary>
    /// Tries to convert the Surface to an Analytic form
    /// Returns the result
    /// In case of failure, returns a Null Handle
    /// 
    /// </summary>
    Macad::Occt::Geom_Surface^ ConvertToAnalytical(double InitialToler);
    Macad::Occt::Geom_Surface^ ConvertToAnalytical(double InitialToler, double Umin, double Umax, double Vmin, double Vmax);
    /// <summary>
    /// Returns true if surfaces is same with the given tolerance
    /// </summary>
    static bool IsSame(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double tol);
    /// <summary>
    /// Returns true, if surface is canonical
    /// </summary>
    static bool IsCanonical(Macad::Occt::Geom_Surface^ S);
}; // class GeomConvert_SurfToAnaSurf

//---------------------------------------------------------------------
//  Class  GeomConvert_Units
//---------------------------------------------------------------------
/// <summary>
/// Class contains conversion methods for 2d geom objects
/// </summary>
public ref class GeomConvert_Units sealed
    : public Macad::Occt::BaseClass<::GeomConvert_Units>
{

#ifdef Include_GeomConvert_Units_h
public:
    Include_GeomConvert_Units_h
#endif

public:
    GeomConvert_Units(::GeomConvert_Units* nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_Units>( nativeInstance, true )
    {}

    GeomConvert_Units(::GeomConvert_Units& nativeInstance)
        : Macad::Occt::BaseClass<::GeomConvert_Units>( &nativeInstance, false )
    {}

    property ::GeomConvert_Units* NativeInstance
    {
        ::GeomConvert_Units* get()
        {
            return static_cast<::GeomConvert_Units*>(_NativeInstance);
        }
    }

public:
    GeomConvert_Units();
    /// <summary>
    /// Convert 2d curve for change angle unit from radian to degree
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ RadianToDegree(Macad::Occt::Geom2d_Curve^ theCurve, Macad::Occt::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree);
    /// <summary>
    /// Convert 2d curve for change angle unit from degree to radian
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ DegreeToRadian(Macad::Occt::Geom2d_Curve^ theCurve, Macad::Occt::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree);
    /// <summary>
    /// return 2d curve as 'mirror' for given
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ MirrorPCurve(Macad::Occt::Geom2d_Curve^ theCurve);
}; // class GeomConvert_Units

}; // namespace Occt
}; // namespace Macad
