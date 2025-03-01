// Generated wrapper code for package ShapeConstruct

#pragma once

#include "BRepBuilderAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeConstruct
//---------------------------------------------------------------------
/// <summary>
/// This package provides new algorithms for constructing
/// new geometrical objects and topological shapes. It
/// complements and extends algorithms available in Open
/// CASCADE topological and geometrical toolkist.
/// The functionality provided by this package are the
/// following:
/// projecting curves on surface,
/// adjusting curve to have given start and end points. P
/// </summary>
public ref class ShapeConstruct sealed
    : public Macad::Occt::BaseClass<::ShapeConstruct>
{

#ifdef Include_ShapeConstruct_h
public:
    Include_ShapeConstruct_h
#endif

public:
    ShapeConstruct(::ShapeConstruct* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeConstruct>( nativeInstance, true )
    {}

    ShapeConstruct(::ShapeConstruct& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeConstruct>( &nativeInstance, false )
    {}

    property ::ShapeConstruct* NativeInstance
    {
        ::ShapeConstruct* get()
        {
            return static_cast<::ShapeConstruct*>(_NativeInstance);
        }
    }

public:
    ShapeConstruct();
    /// <summary>
    /// Tool for wire triangulation
    /// </summary>
    static Macad::Occt::Geom_BSplineCurve^ ConvertCurveToBSpline(Macad::Occt::Geom_Curve^ C3D, double First, double Last, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
    static Macad::Occt::Geom2d_BSplineCurve^ ConvertCurveToBSpline(Macad::Occt::Geom2d_Curve^ C2D, double First, double Last, double Tol2d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
    static Macad::Occt::Geom_BSplineSurface^ ConvertSurfaceToBSpline(Macad::Occt::Geom_Surface^ surf, double UF, double UL, double VF, double VL, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree);
    /// <summary>
    /// join pcurves of the <theEdge> on the <theFace>
    /// try to use pcurves from originas edges <theEdges>
    /// Returns false if cannot join pcurves
    /// </summary>
    static bool JoinPCurves(Macad::Occt::TopTools_HSequenceOfShape^ theEdges, Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge);
    /// <summary>
    /// Method for joininig curves 3D.
    /// Parameters : c3d1,ac3d2 - initial curves
    /// Orient1, Orient2 - initial edges orientations.
    /// first1,last1,first2,last2 - parameters for trimming curves
    /// (re-calculate with account of orientation edges)
    /// c3dOut - result curve
    /// isRev1,isRev2 - out parameters indicative on possible errors.
    /// Return value : True - if curves were joined successfully,
    /// else - False.
    /// </summary>
    static bool JoinCurves(Macad::Occt::Geom_Curve^ c3d1, Macad::Occt::Geom_Curve^ ac3d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom_Curve^ c3dOut, bool% isRev1, bool% isRev2);
    /// <summary>
    /// Method for joininig curves 3D.
    /// Parameters : c3d1,ac3d2 - initial curves
    /// Orient1, Orient2 - initial edges orientations.
    /// first1,last1,first2,last2 - parameters for trimming curves
    /// (re-calculate with account of orientation edges)
    /// c3dOut - result curve
    /// isRev1,isRev2 - out parameters indicative on possible errors.
    /// isError - input parameter indicative possible errors due to that one from edges have one
    /// vertex Return value : True - if curves were joined successfully, else - False.
    /// </summary>
    static bool JoinCurves(Macad::Occt::Geom2d_Curve^ c2d1, Macad::Occt::Geom2d_Curve^ ac2d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2, bool isError);
    /// <summary>
    /// Method for joininig curves 3D.
    /// Parameters : c3d1,ac3d2 - initial curves
    /// Orient1, Orient2 - initial edges orientations.
    /// first1,last1,first2,last2 - parameters for trimming curves
    /// (re-calculate with account of orientation edges)
    /// c3dOut - result curve
    /// isRev1,isRev2 - out parameters indicative on possible errors.
    /// isError - input parameter indicative possible errors due to that one from edges have one
    /// vertex Return value : True - if curves were joined successfully, else - False.
    /// </summary>
    static bool JoinCurves(Macad::Occt::Geom2d_Curve^ c2d1, Macad::Occt::Geom2d_Curve^ ac2d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2);
}; // class ShapeConstruct

//---------------------------------------------------------------------
//  Class  ShapeConstruct_Curve
//---------------------------------------------------------------------
/// <summary>
/// Adjusts curve to have start and end points at the given
/// points (currently works on lines and B-Splines only)
/// </summary>
public ref class ShapeConstruct_Curve sealed
    : public Macad::Occt::BaseClass<::ShapeConstruct_Curve>
{

#ifdef Include_ShapeConstruct_Curve_h
public:
    Include_ShapeConstruct_Curve_h
#endif

public:
    ShapeConstruct_Curve(::ShapeConstruct_Curve* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeConstruct_Curve>( nativeInstance, true )
    {}

    ShapeConstruct_Curve(::ShapeConstruct_Curve& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeConstruct_Curve>( &nativeInstance, false )
    {}

    property ::ShapeConstruct_Curve* NativeInstance
    {
        ::ShapeConstruct_Curve* get()
        {
            return static_cast<::ShapeConstruct_Curve*>(_NativeInstance);
        }
    }

public:
    ShapeConstruct_Curve();
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool take1, bool take2);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool take1);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines.
    /// 
    /// For lines works as previous method, B-Splines are segmented
    /// at the given values and then are adjusted to the points.
    /// </summary>
    bool AdjustCurveSegment(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double U1, double U2);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// 
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool take1, bool take2);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// 
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool take1);
    /// <summary>
    /// Modifies a curve in order to make its bounds confused with
    /// given points.
    /// Works only on lines and B-Splines, returns True in this case,
    /// else returns False.
    /// 
    /// For line considers both bounding points, for B-Splines only
    /// specified.
    /// 
    /// Warning : Does not check if curve should be reversed
    /// </summary>
    bool AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    /// <summary>
    /// Converts a curve of any type (only part from first to last)
    /// to bspline. The method of conversion depends on the type
    /// of original curve:
    /// BSpline -> C.Segment(first,last)
    /// Bezier and Line -> GeomConvert::CurveToBSplineCurve(C).Segment(first,last)
    /// Conic and Other -> Approx_Curve3d(C[first,last],prec,C1,9,1000)
    /// </summary>
    Macad::Occt::Geom_BSplineCurve^ ConvertToBSpline(Macad::Occt::Geom_Curve^ C, double first, double last, double prec);
    /// <summary>
    /// Converts a curve of any type (only part from first to last)
    /// to bspline. The method of conversion depends on the type
    /// of original curve:
    /// BSpline -> C.Segment(first,last)
    /// Bezier and Line -> GeomConvert::CurveToBSplineCurve(C).Segment(first,last)
    /// Conic and Other -> Approx_Curve2d(C[first,last],prec,C1,9,1000)
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ ConvertToBSpline(Macad::Occt::Geom2d_Curve^ C, double first, double last, double prec);
    static bool FixKnots(Macad::Occt::TColStd_HArray1OfReal^ knots);
    /// <summary>
    /// Fix bspline knots to ensure that there is enough
    /// gap between neighbouring values
    /// Returns True if something fixed (by shifting knot)
    /// </summary>
    static bool FixKnots(Macad::Occt::TColStd_Array1OfReal^ knots);
}; // class ShapeConstruct_Curve

//---------------------------------------------------------------------
//  Class  ShapeConstruct_MakeTriangulation
//---------------------------------------------------------------------
public ref class ShapeConstruct_MakeTriangulation sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_ShapeConstruct_MakeTriangulation_h
public:
    Include_ShapeConstruct_MakeTriangulation_h
#endif

public:
    ShapeConstruct_MakeTriangulation(::ShapeConstruct_MakeTriangulation* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    ShapeConstruct_MakeTriangulation(::ShapeConstruct_MakeTriangulation& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::ShapeConstruct_MakeTriangulation* NativeInstance
    {
        ::ShapeConstruct_MakeTriangulation* get()
        {
            return static_cast<::ShapeConstruct_MakeTriangulation*>(_NativeInstance);
        }
    }

public:
    ShapeConstruct_MakeTriangulation(Macad::Occt::TColgp_Array1OfPnt^ pnts, double prec);
    ShapeConstruct_MakeTriangulation(Macad::Occt::TColgp_Array1OfPnt^ pnts);
    ShapeConstruct_MakeTriangulation(Macad::Occt::TopoDS_Wire^ wire, double prec);
    ShapeConstruct_MakeTriangulation(Macad::Occt::TopoDS_Wire^ wire);
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    void Build();
    bool IsDone();
}; // class ShapeConstruct_MakeTriangulation

//---------------------------------------------------------------------
//  Class  ShapeConstruct_ProjectCurveOnSurface
//---------------------------------------------------------------------
/// <summary>
/// This tool provides a method for computing pcurve by projecting
/// 3d curve onto a surface.
/// Projection is done by 23 or more points (this number is changed
/// for B-Splines according to the following rule:
/// the total number of the points is not less than number of spans *
/// (degree + 1);
/// it is increased recursively starting with 23 and is added with 22
/// until the condition is fulfilled).
/// Isoparametric cases (if curve corresponds to U=const or V=const on
/// the surface) are recognized with the given precision.
/// </summary>
public ref class ShapeConstruct_ProjectCurveOnSurface sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeConstruct_ProjectCurveOnSurface_h
public:
    Include_ShapeConstruct_ProjectCurveOnSurface_h
#endif

public:
    ShapeConstruct_ProjectCurveOnSurface(::ShapeConstruct_ProjectCurveOnSurface* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeConstruct_ProjectCurveOnSurface(::ShapeConstruct_ProjectCurveOnSurface& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeConstruct_ProjectCurveOnSurface* NativeInstance
    {
        ::ShapeConstruct_ProjectCurveOnSurface* get()
        {
            return static_cast<::ShapeConstruct_ProjectCurveOnSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) the build-curve-3d mode, by default False
    /// If True, if the projected curve has been recomputed by
    /// interpolation, the 3d curve is also rebuild by interpolation
    /// </summary>
    property bool BuildCurveMode {
        bool get() {
            return ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->BuildCurveMode();
        }
        void set(bool value) {
            ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->BuildCurveMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag specifying to which side of
    /// parametrical space adjust part of pcurve which lies on seam.
    /// This is required in very rare case when 3d curve which is
    /// to be projected goes partly along the seam on the closed
    /// surface with singularity (e.g. sphere), goes through the
    /// degenerated point and paerly lies on internal area of surface.
    /// 
    /// If this flag is True, the seam part of such curve will be
    /// adjusted to the left side of parametric space (on sphere U=0),
    /// else to the right side (on sphere U=2*PI)
    /// Default value is True
    /// </summary>
    property int AdjustOverDegenMode {
        int get() {
            return ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->AdjustOverDegenMode();
        }
        void set(int value) {
            ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->AdjustOverDegenMode() = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeConstruct_ProjectCurveOnSurface();
    /// <summary>
    /// Initializes the object with all necessary parameters,
    /// i.e. surface and precision
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ surf, double preci);
    /// <summary>
    /// Initializes the object with all necessary parameters,
    /// i.e. surface and precision
    /// </summary>
    void Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci);
    /// <summary>
    /// Loads a surface (in the form of Geom_Surface) to project on
    /// </summary>
    void SetSurface(Macad::Occt::Geom_Surface^ surf);
    /// <summary>
    /// Loads a surface (in the form of ShapeAnalysis_Surface) to project on
    /// </summary>
    void SetSurface(Macad::Occt::ShapeAnalysis_Surface^ surf);
    /// <summary>
    /// Sets value for current precision
    /// </summary>
    void SetPrecision(double preci);
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status theStatus, ) */
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// specialized algorithm. Returns False if projector fails,
    /// otherwise, if pcurve computed successfully, returns True.
    /// The output curve 2D is guaranteed to be same-parameter
    /// with input curve 3D on the interval [First, Last]. If the output curve
    /// lies on a direct line the infinite line is returned, in the case
    /// same-parameter condition is satisfied.
    /// TolFirst and TolLast are the tolerances at the ends of input curve 3D.
    /// </summary>
    bool Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, double TolFirst, double TolLast);
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// specialized algorithm. Returns False if projector fails,
    /// otherwise, if pcurve computed successfully, returns True.
    /// The output curve 2D is guaranteed to be same-parameter
    /// with input curve 3D on the interval [First, Last]. If the output curve
    /// lies on a direct line the infinite line is returned, in the case
    /// same-parameter condition is satisfied.
    /// TolFirst and TolLast are the tolerances at the ends of input curve 3D.
    /// </summary>
    bool Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, double TolFirst);
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// specialized algorithm. Returns False if projector fails,
    /// otherwise, if pcurve computed successfully, returns True.
    /// The output curve 2D is guaranteed to be same-parameter
    /// with input curve 3D on the interval [First, Last]. If the output curve
    /// lies on a direct line the infinite line is returned, in the case
    /// same-parameter condition is satisfied.
    /// TolFirst and TolLast are the tolerances at the ends of input curve 3D.
    /// </summary>
    bool Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d);
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// standard algorithm from ProjLib. Returns False if standard
    /// projector fails or raises an exception or cuts the curve by
    /// parametrical bounds of the surface. Else, if pcurve computed
    /// successfully, returns True.
    /// The continuity, maxdeg and nbinterval are parameters of call
    /// to Approx_CurveOnSurface. If nbinterval is equal to -1
    /// (default), this value is computed depending on source 3d curve
    /// and surface.
    /// </summary>
    bool PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity, int maxdeg, int nbinterval);
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// standard algorithm from ProjLib. Returns False if standard
    /// projector fails or raises an exception or cuts the curve by
    /// parametrical bounds of the surface. Else, if pcurve computed
    /// successfully, returns True.
    /// The continuity, maxdeg and nbinterval are parameters of call
    /// to Approx_CurveOnSurface. If nbinterval is equal to -1
    /// (default), this value is computed depending on source 3d curve
    /// and surface.
    /// </summary>
    bool PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity, int maxdeg);
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// standard algorithm from ProjLib. Returns False if standard
    /// projector fails or raises an exception or cuts the curve by
    /// parametrical bounds of the surface. Else, if pcurve computed
    /// successfully, returns True.
    /// The continuity, maxdeg and nbinterval are parameters of call
    /// to Approx_CurveOnSurface. If nbinterval is equal to -1
    /// (default), this value is computed depending on source 3d curve
    /// and surface.
    /// </summary>
    bool PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity);
    /// <summary>
    /// Computes the projection of 3d curve onto a surface using the
    /// standard algorithm from ProjLib. Returns False if standard
    /// projector fails or raises an exception or cuts the curve by
    /// parametrical bounds of the surface. Else, if pcurve computed
    /// successfully, returns True.
    /// The continuity, maxdeg and nbinterval are parameters of call
    /// to Approx_CurveOnSurface. If nbinterval is equal to -1
    /// (default), this value is computed depending on source 3d curve
    /// and surface.
    /// </summary>
    bool PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d);
    static Macad::Occt::ShapeConstruct_ProjectCurveOnSurface^ CreateDowncasted(::ShapeConstruct_ProjectCurveOnSurface* instance);
}; // class ShapeConstruct_ProjectCurveOnSurface

}; // namespace Occt
}; // namespace Macad
