// Generated wrapper code for package IntCurvesFace

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  IntCurvesFace_Intersector
//---------------------------------------------------------------------
public ref class IntCurvesFace_Intersector sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_IntCurvesFace_Intersector_h
public:
    Include_IntCurvesFace_Intersector_h
#endif

public:
    IntCurvesFace_Intersector(::IntCurvesFace_Intersector* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    IntCurvesFace_Intersector(::IntCurvesFace_Intersector& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::IntCurvesFace_Intersector* NativeInstance
    {
        ::IntCurvesFace_Intersector* get()
        {
            return static_cast<::IntCurvesFace_Intersector*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Load a Face.
    /// 
    /// The Tolerance <Tol> is used to determine if the
    /// first point of the segment is near the face. In
    /// that case, the parameter of the intersection point
    /// on the line can be a negative value (greater than -Tol).
    /// If aRestr = true UV bounding box of face is used to restrict
    /// it's underlined surface,
    /// otherwise surface is not restricted.
    /// If UseBToler = false then the 2d-point of intersection is classified with null-tolerance
    /// (relative to face);
    /// otherwise it's using maximum between input tolerance(aTol) and tolerances of face bounds
    /// (edges).
    /// </summary>
    IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol, bool aRestr, bool UseBToler);
    /// <summary>
    /// Load a Face.
    /// 
    /// The Tolerance <Tol> is used to determine if the
    /// first point of the segment is near the face. In
    /// that case, the parameter of the intersection point
    /// on the line can be a negative value (greater than -Tol).
    /// If aRestr = true UV bounding box of face is used to restrict
    /// it's underlined surface,
    /// otherwise surface is not restricted.
    /// If UseBToler = false then the 2d-point of intersection is classified with null-tolerance
    /// (relative to face);
    /// otherwise it's using maximum between input tolerance(aTol) and tolerances of face bounds
    /// (edges).
    /// </summary>
    IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol, bool aRestr);
    /// <summary>
    /// Load a Face.
    /// 
    /// The Tolerance <Tol> is used to determine if the
    /// first point of the segment is near the face. In
    /// that case, the parameter of the intersection point
    /// on the line can be a negative value (greater than -Tol).
    /// If aRestr = true UV bounding box of face is used to restrict
    /// it's underlined surface,
    /// otherwise surface is not restricted.
    /// If UseBToler = false then the 2d-point of intersection is classified with null-tolerance
    /// (relative to face);
    /// otherwise it's using maximum between input tolerance(aTol) and tolerances of face bounds
    /// (edges).
    /// </summary>
    IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol);
    /// <summary>
    /// Perform the intersection between the
    /// segment L and the loaded face.
    /// 
    /// PInf is the smallest parameter on the line
    /// PSup is the highest  parameter on the line
    /// 
    /// For an infinite line PInf and PSup can be
    /// +/- RealLast.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin^ L, double PInf, double PSup);
    /// <summary>
    /// same method for a HCurve from Adaptor3d.
    /// PInf an PSup can also be - and + INF.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Curve^ HCu, double PInf, double PSup);
    /// <summary>
    /// Return the surface type
    /// </summary>
    Macad::Occt::GeomAbs_SurfaceType SurfaceType();
    /// <summary>
    /// True is returned when the intersection have been computed.
    /// </summary>
    bool IsDone();
    int NbPnt();
    /// <summary>
    /// Returns the U parameter of the ith intersection point
    /// on the surface.
    /// </summary>
    double UParameter(int I);
    /// <summary>
    /// Returns the V parameter of the ith intersection point
    /// on the surface.
    /// </summary>
    double VParameter(int I);
    /// <summary>
    /// Returns the parameter of the ith intersection point
    /// on the line.
    /// </summary>
    double WParameter(int I);
    /// <summary>
    /// Returns the geometric point of the ith intersection
    /// between the line and the surface.
    /// </summary>
    Macad::Occt::Pnt Pnt(int I);
    /* Method skipped due to unknown mapping: IntCurveSurface_TransitionOnCurve Transition(int I, ) */
    /// <summary>
    /// Returns the ith state of the point on the face.
    /// The values can be either TopAbs_IN
    /// ( the point is in the face)
    /// or TopAbs_ON
    /// ( the point is on a boundary of the face).
    /// </summary>
    Macad::Occt::TopAbs_State State(int I);
    /// <summary>
    /// Returns true if curve is parallel or belongs face surface
    /// This case is recognized only for some pairs
    /// of analytical curves and surfaces (plane - line, ...)
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the significant face used to determine
    /// the intersection.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
    Macad::Occt::TopAbs_State ClassifyUVPoint(Macad::Occt::Pnt2d Puv);
    Macad::Occt::Bnd_Box^ Bounding();
    /// <summary>
    /// Sets the boundary tolerance flag
    /// </summary>
    void SetUseBoundToler(bool UseBToler);
    /// <summary>
    /// Returns the boundary tolerance flag
    /// </summary>
    bool GetUseBoundToler();
    static Macad::Occt::IntCurvesFace_Intersector^ CreateDowncasted(::IntCurvesFace_Intersector* instance);
}; // class IntCurvesFace_Intersector

//---------------------------------------------------------------------
//  Class  IntCurvesFace_ShapeIntersector
//---------------------------------------------------------------------
public ref class IntCurvesFace_ShapeIntersector sealed
    : public Macad::Occt::BaseClass<::IntCurvesFace_ShapeIntersector>
{

#ifdef Include_IntCurvesFace_ShapeIntersector_h
public:
    Include_IntCurvesFace_ShapeIntersector_h
#endif

public:
    IntCurvesFace_ShapeIntersector(::IntCurvesFace_ShapeIntersector* nativeInstance)
        : Macad::Occt::BaseClass<::IntCurvesFace_ShapeIntersector>( nativeInstance, true )
    {}

    IntCurvesFace_ShapeIntersector(::IntCurvesFace_ShapeIntersector& nativeInstance)
        : Macad::Occt::BaseClass<::IntCurvesFace_ShapeIntersector>( &nativeInstance, false )
    {}

    property ::IntCurvesFace_ShapeIntersector* NativeInstance
    {
        ::IntCurvesFace_ShapeIntersector* get()
        {
            return static_cast<::IntCurvesFace_ShapeIntersector*>(_NativeInstance);
        }
    }

public:
    IntCurvesFace_ShapeIntersector();
    void Load(Macad::Occt::TopoDS_Shape^ Sh, double Tol);
    /// <summary>
    /// Perform the intersection between the
    /// segment L and the loaded shape.
    /// 
    /// PInf is the smallest parameter on the line
    /// PSup is the highest  parameter on the line
    /// 
    /// For an infinite line PInf and PSup can be
    /// +/- RealLast.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin^ L, double PInf, double PSup);
    /// <summary>
    /// Perform the intersection between the
    /// segment L and the loaded shape.
    /// 
    /// PInf is the smallest parameter on the line
    /// PSup is the highest  parameter on the line
    /// 
    /// For an infinite line PInf and PSup can be
    /// +/- RealLast.
    /// </summary>
    void PerformNearest(Macad::Occt::gp_Lin^ L, double PInf, double PSup);
    /// <summary>
    /// same method for a HCurve from Adaptor3d.
    /// PInf an PSup can also be -INF and +INF.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Curve^ HCu, double PInf, double PSup);
    /// <summary>
    /// True when the intersection has been computed.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of the intersection points
    /// </summary>
    int NbPnt();
    /// <summary>
    /// Returns the U parameter of the ith intersection point
    /// on the surface.
    /// </summary>
    double UParameter(int I);
    /// <summary>
    /// Returns the V parameter of the ith intersection point
    /// on the surface.
    /// </summary>
    double VParameter(int I);
    /// <summary>
    /// Returns the parameter of the ith intersection point
    /// on the line.
    /// </summary>
    double WParameter(int I);
    /// <summary>
    /// Returns the geometric point of the ith intersection
    /// between the line and the surface.
    /// </summary>
    Macad::Occt::Pnt Pnt(int I);
    /* Method skipped due to unknown mapping: IntCurveSurface_TransitionOnCurve Transition(int I, ) */
    /// <summary>
    /// Returns the ith state of the point on the face.
    /// The values can be either TopAbs_IN
    /// ( the point is in the face)
    /// or TopAbs_ON
    /// ( the point is on a boundary of the face).
    /// </summary>
    Macad::Occt::TopAbs_State State(int I);
    /// <summary>
    /// Returns the significant face used to determine
    /// the intersection.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face(int I);
    /// <summary>
    /// Internal method. Sort the result on the Curve
    /// parameter.
    /// </summary>
    void SortResult();
}; // class IntCurvesFace_ShapeIntersector

}; // namespace Occt
}; // namespace Macad
