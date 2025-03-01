// Generated wrapper code for package BRepIntCurveSurface

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepIntCurveSurface_Inter
//---------------------------------------------------------------------
/// <summary>
/// Computes the intersection between a face and a
/// curve. To intersect one curve with shape method
/// Init(Shape, curve, tTol) should be used. To
/// intersect a few curves with specified shape it is
/// necessary to load shape one time using method
/// Load(shape, tol) and find intersection points for
/// each curve using method Init(curve). For
/// iteration by intersection points method More() and
/// Next() should be used.
/// 
/// Example:
/// Inter.Load(shape, tol);
/// for( i =1; i <= nbCurves;i++)
/// {
/// Inter.Init(curve);
/// for(  ;Inter.More(); Inter.Next())
/// {
/// .......
/// }
/// }
/// </summary>
public ref class BRepIntCurveSurface_Inter sealed
    : public Macad::Occt::BaseClass<::BRepIntCurveSurface_Inter>
{

#ifdef Include_BRepIntCurveSurface_Inter_h
public:
    Include_BRepIntCurveSurface_Inter_h
#endif

public:
    BRepIntCurveSurface_Inter(::BRepIntCurveSurface_Inter* nativeInstance)
        : Macad::Occt::BaseClass<::BRepIntCurveSurface_Inter>( nativeInstance, true )
    {}

    BRepIntCurveSurface_Inter(::BRepIntCurveSurface_Inter& nativeInstance)
        : Macad::Occt::BaseClass<::BRepIntCurveSurface_Inter>( &nativeInstance, false )
    {}

    property ::BRepIntCurveSurface_Inter* NativeInstance
    {
        ::BRepIntCurveSurface_Inter* get()
        {
            return static_cast<::BRepIntCurveSurface_Inter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor;
    /// </summary>
    BRepIntCurveSurface_Inter();
    /// <summary>
    /// Load the Shape, the curve and initialize the
    /// tolerance used for the classification.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::GeomAdaptor_Curve^ theCurve, double theTol);
    /// <summary>
    /// Load the Shape, the curve and initialize the
    /// tolerance used for the classification.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::gp_Lin^ theLine, double theTol);
    /// <summary>
    /// Load the Shape, and initialize the
    /// tolerance used for the classification.
    /// </summary>
    void Load(Macad::Occt::TopoDS_Shape^ theShape, double theTol);
    /// <summary>
    /// Method to find intersections of specified curve with loaded shape.
    /// </summary>
    void Init(Macad::Occt::GeomAdaptor_Curve^ theCurve);
    /// <summary>
    /// returns True if there is a current face.
    /// </summary>
    bool More();
    /// <summary>
    /// Sets the next intersection point to check.
    /// </summary>
    void Next();
    /* Method skipped due to unknown mapping: IntCurveSurface_IntersectionPoint Point() */
    /// <summary>
    /// returns the current geometric Point
    /// </summary>
    Macad::Occt::Pnt Pnt();
    /// <summary>
    /// returns the U parameter of the current point
    /// on the current face.
    /// </summary>
    double U();
    /// <summary>
    /// returns the V parameter of the current point
    /// on the current face.
    /// </summary>
    double V();
    /// <summary>
    /// returns the parameter of the current point
    /// on the curve.
    /// </summary>
    double W();
    /// <summary>
    /// returns the current state (IN or ON)
    /// </summary>
    Macad::Occt::TopAbs_State State();
    /* Method skipped due to unknown mapping: IntCurveSurface_TransitionOnCurve Transition() */
    /// <summary>
    /// returns the current face.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
}; // class BRepIntCurveSurface_Inter

}; // namespace Occt
}; // namespace Macad
