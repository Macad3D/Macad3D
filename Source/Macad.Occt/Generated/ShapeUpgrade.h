// Generated wrapper code for package ShapeUpgrade

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeUpgrade
//---------------------------------------------------------------------
/// <summary>
/// This package provides tools for splitting and converting shapes by some criteria.
/// It provides modifications of the kind when one topological
/// object can be converted or split in to several ones.
/// In particular this package contains high level API classes which perform:
/// converting geometry of shapes up to given continuity,
/// splitting revolutions by U to segments less than given value,
/// converting to beziers, splitting closed faces.
/// </summary>
public ref class ShapeUpgrade sealed
    : public Macad::Occt::BaseClass<::ShapeUpgrade>
{

#ifdef Include_ShapeUpgrade_h
public:
    Include_ShapeUpgrade_h
#endif

public:
    ShapeUpgrade(::ShapeUpgrade* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeUpgrade>( nativeInstance, true )
    {}

    ShapeUpgrade(::ShapeUpgrade& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeUpgrade>( &nativeInstance, false )
    {}

    property ::ShapeUpgrade* NativeInstance
    {
        ::ShapeUpgrade* get()
        {
            return static_cast<::ShapeUpgrade*>(_NativeInstance);
        }
    }

public:
    ShapeUpgrade();
    /* Method skipped due to unknown mapping: bool C0BSplineToSequenceOfC1BSplineCurve(Geom_BSplineCurve BS, TColGeom_HSequenceOfBoundedCurve seqBS, ) */
    /* Method skipped due to unknown mapping: bool C0BSplineToSequenceOfC1BSplineCurve(Geom2d_BSplineCurve BS, TColGeom2d_HSequenceOfBoundedCurve seqBS, ) */
}; // class ShapeUpgrade

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_Tool
//---------------------------------------------------------------------
/// <summary>
/// Tool is a root class for splitting classes
/// Provides context for recording changes, basic
/// precision value and limit (minimal and maximal)
/// values for tolerances
/// </summary>
public ref class ShapeUpgrade_Tool
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_Tool_h
public:
    Include_ShapeUpgrade_Tool_h
#endif

protected:
    ShapeUpgrade_Tool(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    ShapeUpgrade_Tool(::ShapeUpgrade_Tool* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeUpgrade_Tool(::ShapeUpgrade_Tool& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeUpgrade_Tool* NativeInstance
    {
        ::ShapeUpgrade_Tool* get()
        {
            return static_cast<::ShapeUpgrade_Tool*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeUpgrade_Tool();
    /// <summary>
    /// Copy all fields from another Root object
    /// </summary>
    void Set(Macad::Occt::ShapeUpgrade_Tool^ tool);
    /// <summary>
    /// Sets context
    /// </summary>
    void SetContext(Macad::Occt::ShapeBuild_ReShape^ context);
    /// <summary>
    /// Returns context
    /// </summary>
    Macad::Occt::ShapeBuild_ReShape^ Context();
    /// <summary>
    /// Sets basic precision value
    /// </summary>
    void SetPrecision(double preci);
    /// <summary>
    /// Returns basic precision value
    /// </summary>
    double Precision();
    /// <summary>
    /// Sets minimal allowed tolerance
    /// </summary>
    void SetMinTolerance(double mintol);
    /// <summary>
    /// Returns minimal allowed tolerance
    /// </summary>
    double MinTolerance();
    /// <summary>
    /// Sets maximal allowed tolerance
    /// </summary>
    void SetMaxTolerance(double maxtol);
    /// <summary>
    /// Returns maximal allowed tolerance
    /// </summary>
    double MaxTolerance();
    /// <summary>
    /// Returns tolerance limited by [myMinTol,myMaxTol]
    /// </summary>
    double LimitTolerance(double toler);
    static Macad::Occt::ShapeUpgrade_Tool^ CreateDowncasted(::ShapeUpgrade_Tool* instance);
}; // class ShapeUpgrade_Tool

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve
//---------------------------------------------------------------------
/// <summary>
/// Splits a  curve with a  criterion.
/// </summary>
public ref class ShapeUpgrade_SplitCurve
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_SplitCurve_h
public:
    Include_ShapeUpgrade_SplitCurve_h
#endif

protected:
    ShapeUpgrade_SplitCurve(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    ShapeUpgrade_SplitCurve(::ShapeUpgrade_SplitCurve* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeUpgrade_SplitCurve(::ShapeUpgrade_SplitCurve& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitCurve* NativeInstance
    {
        ::ShapeUpgrade_SplitCurve* get()
        {
            return static_cast<::ShapeUpgrade_SplitCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitCurve();
    /// <summary>
    /// Initializes with curve first and last parameters.
    /// </summary>
    void Init(double First, double Last);
    /// <summary>
    /// Sets the parameters where splitting has to be done.
    /// </summary>
    void SetSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ SplitValues);
    /// <summary>
    /// If Segment is True, the result is composed with
    /// segments of the curve bounded by the SplitValues.  If
    /// Segment is False, the result is composed with trimmed
    /// Curves all based on the same complete curve.
    /// </summary>
    void Build(bool Segment);
    /// <summary>
    /// returns all the splitting values including the
    /// First and Last parameters of the input curve
    /// Merges input split values and new ones into myGlobalKnots
    /// </summary>
    Macad::Occt::TColStd_HSequenceOfReal^ SplitValues();
    /// <summary>
    /// Calculates points for correction/splitting of the curve
    /// </summary>
    void Compute();
    /// <summary>
    /// Performs correction/splitting of the curve.
    /// First defines splitting values by method Compute(), then calls method Build().
    /// </summary>
    void Perform(bool Segment);
    /// <summary>
    /// Performs correction/splitting of the curve.
    /// First defines splitting values by method Compute(), then calls method Build().
    /// </summary>
    void Perform();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    static Macad::Occt::ShapeUpgrade_SplitCurve^ CreateDowncasted(::ShapeUpgrade_SplitCurve* instance);
}; // class ShapeUpgrade_SplitCurve

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve2d
//---------------------------------------------------------------------
/// <summary>
/// Splits a 2d curve with a criterion.
/// </summary>
public ref class ShapeUpgrade_SplitCurve2d
    : public Macad::Occt::ShapeUpgrade_SplitCurve
{

#ifdef Include_ShapeUpgrade_SplitCurve2d_h
public:
    Include_ShapeUpgrade_SplitCurve2d_h
#endif

protected:
    ShapeUpgrade_SplitCurve2d(InitMode init)
        : Macad::Occt::ShapeUpgrade_SplitCurve( init )
    {}

public:
    ShapeUpgrade_SplitCurve2d(::ShapeUpgrade_SplitCurve2d* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve( nativeInstance )
    {}

    ShapeUpgrade_SplitCurve2d(::ShapeUpgrade_SplitCurve2d& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitCurve2d* NativeInstance
    {
        ::ShapeUpgrade_SplitCurve2d* get()
        {
            return static_cast<::ShapeUpgrade_SplitCurve2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitCurve2d();
    /// <summary>
    /// Initializes with pcurve with its first and last parameters.
    /// </summary>
    void Init(Macad::Occt::Geom2d_Curve^ C);
    /// <summary>
    /// Initializes with pcurve with its parameters.
    /// </summary>
    void Init(Macad::Occt::Geom2d_Curve^ C, double First, double Last);
    /// <summary>
    /// If Segment is True, the result is composed with
    /// segments of the curve bounded by the SplitValues.  If
    /// Segment is False, the result is composed with trimmed
    /// Curves all based on the same complete curve.
    /// </summary>
    void Build(bool Segment);
    /* Method skipped due to unknown mapping: TColGeom2d_HArray1OfCurve GetCurves() */
    static Macad::Occt::ShapeUpgrade_SplitCurve2d^ CreateDowncasted(::ShapeUpgrade_SplitCurve2d* instance);
}; // class ShapeUpgrade_SplitCurve2d

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_EdgeDivide
//---------------------------------------------------------------------
public ref class ShapeUpgrade_EdgeDivide
    : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_EdgeDivide_h
public:
    Include_ShapeUpgrade_EdgeDivide_h
#endif

protected:
    ShapeUpgrade_EdgeDivide(InitMode init)
        : Macad::Occt::ShapeUpgrade_Tool( init )
    {}

public:
    ShapeUpgrade_EdgeDivide(::ShapeUpgrade_EdgeDivide* nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    ShapeUpgrade_EdgeDivide(::ShapeUpgrade_EdgeDivide& nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    property ::ShapeUpgrade_EdgeDivide* NativeInstance
    {
        ::ShapeUpgrade_EdgeDivide* get()
        {
            return static_cast<::ShapeUpgrade_EdgeDivide*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeUpgrade_EdgeDivide();
    void Clear();
    /// <summary>
    /// Sets supporting surface by face
    /// </summary>
    void SetFace(Macad::Occt::TopoDS_Face^ F);
    bool Compute(Macad::Occt::TopoDS_Edge^ E);
    bool HasCurve2d();
    bool HasCurve3d();
    Macad::Occt::TColStd_HSequenceOfReal^ Knots2d();
    Macad::Occt::TColStd_HSequenceOfReal^ Knots3d();
    /// <summary>
    /// Sets the tool for splitting pcurves.
    /// </summary>
    void SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool);
    /// <summary>
    /// Sets the tool for splitting 3D curves.
    /// </summary>
    void SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool);
    /// <summary>
    /// Returns the tool for splitting pcurves.
    /// </summary>
    Macad::Occt::ShapeUpgrade_SplitCurve2d^ GetSplitCurve2dTool();
    /// <summary>
    /// Returns the tool for splitting 3D curves.
    /// </summary>
    Macad::Occt::ShapeUpgrade_SplitCurve3d^ GetSplitCurve3dTool();
    static Macad::Occt::ShapeUpgrade_EdgeDivide^ CreateDowncasted(::ShapeUpgrade_EdgeDivide* instance);
}; // class ShapeUpgrade_EdgeDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ClosedEdgeDivide
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ClosedEdgeDivide sealed
    : public Macad::Occt::ShapeUpgrade_EdgeDivide
{

#ifdef Include_ShapeUpgrade_ClosedEdgeDivide_h
public:
    Include_ShapeUpgrade_ClosedEdgeDivide_h
#endif

public:
    ShapeUpgrade_ClosedEdgeDivide(::ShapeUpgrade_ClosedEdgeDivide* nativeInstance)
        : Macad::Occt::ShapeUpgrade_EdgeDivide( nativeInstance )
    {}

    ShapeUpgrade_ClosedEdgeDivide(::ShapeUpgrade_ClosedEdgeDivide& nativeInstance)
        : Macad::Occt::ShapeUpgrade_EdgeDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_ClosedEdgeDivide* NativeInstance
    {
        ::ShapeUpgrade_ClosedEdgeDivide* get()
        {
            return static_cast<::ShapeUpgrade_ClosedEdgeDivide*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_ClosedEdgeDivide();
    bool Compute(Macad::Occt::TopoDS_Edge^ anEdge);
    static Macad::Occt::ShapeUpgrade_ClosedEdgeDivide^ CreateDowncasted(::ShapeUpgrade_ClosedEdgeDivide* instance);
}; // class ShapeUpgrade_ClosedEdgeDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurface
//---------------------------------------------------------------------
/// <summary>
/// Splits a Surface with a criterion.
/// </summary>
public ref class ShapeUpgrade_SplitSurface
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_SplitSurface_h
public:
    Include_ShapeUpgrade_SplitSurface_h
#endif

protected:
    ShapeUpgrade_SplitSurface(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    ShapeUpgrade_SplitSurface(::ShapeUpgrade_SplitSurface* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeUpgrade_SplitSurface(::ShapeUpgrade_SplitSurface& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitSurface* NativeInstance
    {
        ::ShapeUpgrade_SplitSurface* get()
        {
            return static_cast<::ShapeUpgrade_SplitSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitSurface();
    /// <summary>
    /// Initializes with single supporting surface.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Initializes with single supporting surface with bounding parameters.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double theArea);
    /// <summary>
    /// Initializes with single supporting surface with bounding parameters.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast);
    /// <summary>
    /// Sets U parameters where splitting has to be done
    /// </summary>
    void SetUSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ UValues);
    /// <summary>
    /// Sets V parameters where splitting has to be done
    /// </summary>
    void SetVSplitValues(Macad::Occt::TColStd_HSequenceOfReal^ VValues);
    /// <summary>
    /// Performs splitting of the supporting surface.
    /// If resulting surface is B-Spline and Segment is True,
    /// the result is composed with segments of the surface bounded
    /// by the U and V SplitValues (method Geom_BSplineSurface::Segment
    /// is used).
    /// If Segment is False, the result is composed with
    /// Geom_RectangularTrimmedSurface all based on the same complete
    /// surface.
    /// Fields myNbResultingRow and myNbResultingCol must be set to
    /// specify the size of resulting grid of surfaces.
    /// </summary>
    void Build(bool Segment);
    /// <summary>
    /// Calculates points for correction/splitting of the surface.
    /// </summary>
    void Compute(bool Segment);
    /// <summary>
    /// Calculates points for correction/splitting of the surface.
    /// </summary>
    void Compute();
    /// <summary>
    /// Performs correction/splitting of the surface.
    /// First defines splitting values by method Compute(), then calls method Build().
    /// </summary>
    void Perform(bool Segment);
    /// <summary>
    /// Performs correction/splitting of the surface.
    /// First defines splitting values by method Compute(), then calls method Build().
    /// </summary>
    void Perform();
    /// <summary>
    /// returns all the U splitting values including the
    /// First and Last parameters of the input surface
    /// </summary>
    Macad::Occt::TColStd_HSequenceOfReal^ USplitValues();
    /// <summary>
    /// returns all the splitting V values including the
    /// First and Last parameters of the input surface
    /// </summary>
    Macad::Occt::TColStd_HSequenceOfReal^ VSplitValues();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: ShapeExtend_CompositeSurface ResSurfaces() */
    static Macad::Occt::ShapeUpgrade_SplitSurface^ CreateDowncasted(::ShapeUpgrade_SplitSurface* instance);
}; // class ShapeUpgrade_SplitSurface

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_WireDivide
//---------------------------------------------------------------------
/// <summary>
/// Divides edges in the wire lying on the face or free wires or
/// free edges with a criterion.
/// Splits 3D curve and pcurve(s) of the edge on the face.
/// Other pcurves which may be associated with the edge are simply
/// copied.
/// If 3D curve is split then pcurve on the face is split as
/// well, and vice-versa.
/// Input shape is not modified.
/// The modifications made are recorded in external context
/// (ShapeBuild_ReShape). This tool is applied to all edges
/// before splitting them in order to keep sharing.
/// </summary>
public ref class ShapeUpgrade_WireDivide sealed
    : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_WireDivide_h
public:
    Include_ShapeUpgrade_WireDivide_h
#endif

public:
    ShapeUpgrade_WireDivide(::ShapeUpgrade_WireDivide* nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    ShapeUpgrade_WireDivide(::ShapeUpgrade_WireDivide& nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    property ::ShapeUpgrade_WireDivide* NativeInstance
    {
        ::ShapeUpgrade_WireDivide* get()
        {
            return static_cast<::ShapeUpgrade_WireDivide*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeUpgrade_WireDivide();
    /// <summary>
    /// Initializes by wire and face
    /// </summary>
    void Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Initializes by wire and surface
    /// </summary>
    void Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Loads working wire
    /// </summary>
    void Load(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Creates wire of one edge and calls Load for wire
    /// </summary>
    void Load(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Sets supporting surface by face
    /// </summary>
    void SetFace(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Sets supporting surface
    /// </summary>
    void SetSurface(Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Sets supporting surface with location
    /// </summary>
    void SetSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Computes the resulting wire by splitting all the edges
    /// according to splitting criteria.
    /// All the modifications made are recorded in context
    /// (ShapeBuild_ReShape). This tool is applied to all edges
    /// before splitting them in order to keep sharings.
    /// If no supporting face or surface is defined, only 3d
    /// splitting criteria are used.
    /// </summary>
    void Perform();
    /// <summary>
    /// Gives the resulting Wire (equal to initial one if not done
    /// or Null if not loaded)
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Wire();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Sets the tool for splitting 3D curves.
    /// </summary>
    void SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool);
    /// <summary>
    /// Sets the tool for splitting pcurves.
    /// </summary>
    void SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool);
    /// <summary>
    /// Sets the tool for Transfer parameters between curves and pcurves.
    /// </summary>
    void SetTransferParamTool(Macad::Occt::ShapeAnalysis_TransferParameters^ TransferParam);
    /// <summary>
    /// Sets tool for splitting edge
    /// </summary>
    void SetEdgeDivideTool(Macad::Occt::ShapeUpgrade_EdgeDivide^ edgeDivideTool);
    /// <summary>
    /// returns tool for splitting edges
    /// </summary>
    Macad::Occt::ShapeUpgrade_EdgeDivide^ GetEdgeDivideTool();
    /// <summary>
    /// Returns the tool for Transfer of parameters.
    /// </summary>
    Macad::Occt::ShapeAnalysis_TransferParameters^ GetTransferParamTool();
    /// <summary>
    /// Sets mode for splitting 3d curves from edges.
    /// 0 - only curve 3d from free edges.
    /// 1 - only curve 3d from shared edges.
    /// 2 -  all curve 3d.
    /// </summary>
    void SetEdgeMode(int EdgeMode);
    /// <summary>
    /// Sets tool for fixing small curves with specified min tolerance;
    /// </summary>
    void SetFixSmallCurveTool(Macad::Occt::ShapeUpgrade_FixSmallCurves^ FixSmallCurvesTool);
    /// <summary>
    /// Returns tool for fixing small curves
    /// </summary>
    Macad::Occt::ShapeUpgrade_FixSmallCurves^ GetFixSmallCurveTool();
    static Macad::Occt::ShapeUpgrade_WireDivide^ CreateDowncasted(::ShapeUpgrade_WireDivide* instance);
}; // class ShapeUpgrade_WireDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FaceDivide
//---------------------------------------------------------------------
/// <summary>
/// Divides a Face (both edges in the wires, by splitting
/// curves and pcurves, and the face itself, by splitting
/// supporting surface) according to splitting criteria.
/// * The domain of the face to divide is defined by the PCurves
/// of the wires on the Face.
/// 
/// * all the PCurves are supposed to be defined (in the parametric
/// space of the supporting surface).
/// 
/// The result is available after the call to the Build method.
/// It is a Shell containing all the resulting Faces.
/// 
/// All the modifications made during splitting are recorded in the
/// external context (ShapeBuild_ReShape).
/// </summary>
public ref class ShapeUpgrade_FaceDivide
    : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_FaceDivide_h
public:
    Include_ShapeUpgrade_FaceDivide_h
#endif

protected:
    ShapeUpgrade_FaceDivide(InitMode init)
        : Macad::Occt::ShapeUpgrade_Tool( init )
    {}

public:
    ShapeUpgrade_FaceDivide(::ShapeUpgrade_FaceDivide* nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    ShapeUpgrade_FaceDivide(::ShapeUpgrade_FaceDivide& nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    property ::ShapeUpgrade_FaceDivide* NativeInstance
    {
        ::ShapeUpgrade_FaceDivide* get()
        {
            return static_cast<::ShapeUpgrade_FaceDivide*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates empty  constructor.
    /// </summary>
    ShapeUpgrade_FaceDivide();
    /// <summary>
    /// Initialize by a Face.
    /// </summary>
    ShapeUpgrade_FaceDivide(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Initialize by a Face.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Purpose sets mode for trimming (segment) surface by
    /// wire UV bounds.
    /// </summary>
    void SetSurfaceSegmentMode(bool Segment);
    /// <summary>
    /// Performs splitting and computes the resulting shell
    /// The context is used to keep track of former splittings
    /// in order to keep sharings. It is updated according to
    /// modifications made.
    /// The optional argument <theArea> is used to initialize
    /// the tool for splitting surface in the case of
    /// splitting into N parts where N is user-defined.
    /// </summary>
    bool Perform(double theArea);
    /// <summary>
    /// Performs splitting and computes the resulting shell
    /// The context is used to keep track of former splittings
    /// in order to keep sharings. It is updated according to
    /// modifications made.
    /// The optional argument <theArea> is used to initialize
    /// the tool for splitting surface in the case of
    /// splitting into N parts where N is user-defined.
    /// </summary>
    bool Perform();
    /// <summary>
    /// Performs splitting of surface and computes the shell
    /// from source face.
    /// The optional argument <theArea> is used to initialize
    /// the tool for splitting surface in the case of
    /// splitting into N parts where N is user-defined.
    /// </summary>
    bool SplitSurface(double theArea);
    /// <summary>
    /// Performs splitting of surface and computes the shell
    /// from source face.
    /// The optional argument <theArea> is used to initialize
    /// the tool for splitting surface in the case of
    /// splitting into N parts where N is user-defined.
    /// </summary>
    bool SplitSurface();
    /// <summary>
    /// Performs splitting of curves of all the edges in the
    /// shape and divides these edges.
    /// </summary>
    bool SplitCurves();
    /// <summary>
    /// Gives the resulting Shell, or Face, or Null shape if not done.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Result();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Sets the tool for splitting surfaces.
    /// </summary>
    void SetSplitSurfaceTool(Macad::Occt::ShapeUpgrade_SplitSurface^ splitSurfaceTool);
    /// <summary>
    /// Sets the tool for dividing edges on Face.
    /// </summary>
    void SetWireDivideTool(Macad::Occt::ShapeUpgrade_WireDivide^ wireDivideTool);
    /// <summary>
    /// Returns the tool for splitting surfaces.
    /// This tool must be already initialized.
    /// </summary>
    Macad::Occt::ShapeUpgrade_SplitSurface^ GetSplitSurfaceTool();
    /// <summary>
    /// Returns the tool for dividing edges on Face.
    /// This tool must be already initialized.
    /// </summary>
    Macad::Occt::ShapeUpgrade_WireDivide^ GetWireDivideTool();
    static Macad::Occt::ShapeUpgrade_FaceDivide^ CreateDowncasted(::ShapeUpgrade_FaceDivide* instance);
}; // class ShapeUpgrade_FaceDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ClosedFaceDivide
//---------------------------------------------------------------------
/// <summary>
/// Divides a Face with one or more seam edge to avoid closed faces.
/// Splitting is performed by U and V direction. The number of
/// resulting faces can be defined by user.
/// </summary>
public ref class ShapeUpgrade_ClosedFaceDivide sealed
    : public Macad::Occt::ShapeUpgrade_FaceDivide
{

#ifdef Include_ShapeUpgrade_ClosedFaceDivide_h
public:
    Include_ShapeUpgrade_ClosedFaceDivide_h
#endif

public:
    ShapeUpgrade_ClosedFaceDivide(::ShapeUpgrade_ClosedFaceDivide* nativeInstance)
        : Macad::Occt::ShapeUpgrade_FaceDivide( nativeInstance )
    {}

    ShapeUpgrade_ClosedFaceDivide(::ShapeUpgrade_ClosedFaceDivide& nativeInstance)
        : Macad::Occt::ShapeUpgrade_FaceDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_ClosedFaceDivide* NativeInstance
    {
        ::ShapeUpgrade_ClosedFaceDivide* get()
        {
            return static_cast<::ShapeUpgrade_ClosedFaceDivide*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates empty  constructor.
    /// </summary>
    ShapeUpgrade_ClosedFaceDivide();
    /// <summary>
    /// Initialize by a Face.
    /// </summary>
    ShapeUpgrade_ClosedFaceDivide(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Performs splitting of surface and computes the shell
    /// from source face.
    /// </summary>
    bool SplitSurface(double theArea);
    /// <summary>
    /// Performs splitting of surface and computes the shell
    /// from source face.
    /// </summary>
    bool SplitSurface();
    /// <summary>
    /// Sets the number of cutting lines by which closed face will be split.
    /// The resulting faces will be num+1.
    /// </summary>
    void SetNbSplitPoints(int num);
    /// <summary>
    /// Returns the number of splitting points
    /// </summary>
    int GetNbSplitPoints();
    static Macad::Occt::ShapeUpgrade_ClosedFaceDivide^ CreateDowncasted(::ShapeUpgrade_ClosedFaceDivide* instance);
}; // class ShapeUpgrade_ClosedFaceDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve3d
//---------------------------------------------------------------------
/// <summary>
/// Splits a 3d curve with a criterion.
/// </summary>
public ref class ShapeUpgrade_SplitCurve3d
    : public Macad::Occt::ShapeUpgrade_SplitCurve
{

#ifdef Include_ShapeUpgrade_SplitCurve3d_h
public:
    Include_ShapeUpgrade_SplitCurve3d_h
#endif

protected:
    ShapeUpgrade_SplitCurve3d(InitMode init)
        : Macad::Occt::ShapeUpgrade_SplitCurve( init )
    {}

public:
    ShapeUpgrade_SplitCurve3d(::ShapeUpgrade_SplitCurve3d* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve( nativeInstance )
    {}

    ShapeUpgrade_SplitCurve3d(::ShapeUpgrade_SplitCurve3d& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitCurve3d* NativeInstance
    {
        ::ShapeUpgrade_SplitCurve3d* get()
        {
            return static_cast<::ShapeUpgrade_SplitCurve3d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitCurve3d();
    /// <summary>
    /// Initializes with curve with its first and last parameters.
    /// </summary>
    void Init(Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// Initializes with curve with its parameters.
    /// </summary>
    void Init(Macad::Occt::Geom_Curve^ C, double First, double Last);
    /// <summary>
    /// If Segment is True, the result is composed with
    /// segments of the curve bounded by the SplitValues.  If
    /// Segment is False, the result is composed with trimmed
    /// Curves all based on the same complete curve.
    /// </summary>
    void Build(bool Segment);
    /* Method skipped due to unknown mapping: TColGeom_HArray1OfCurve GetCurves() */
    static Macad::Occt::ShapeUpgrade_SplitCurve3d^ CreateDowncasted(::ShapeUpgrade_SplitCurve3d* instance);
}; // class ShapeUpgrade_SplitCurve3d

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertCurve2dToBezier
//---------------------------------------------------------------------
/// <summary>
/// converts/splits a 2d curve to a list of beziers
/// </summary>
public ref class ShapeUpgrade_ConvertCurve2dToBezier sealed
    : public Macad::Occt::ShapeUpgrade_SplitCurve2d
{

#ifdef Include_ShapeUpgrade_ConvertCurve2dToBezier_h
public:
    Include_ShapeUpgrade_ConvertCurve2dToBezier_h
#endif

public:
    ShapeUpgrade_ConvertCurve2dToBezier(::ShapeUpgrade_ConvertCurve2dToBezier* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve2d( nativeInstance )
    {}

    ShapeUpgrade_ConvertCurve2dToBezier(::ShapeUpgrade_ConvertCurve2dToBezier& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve2d( nativeInstance )
    {}

    property ::ShapeUpgrade_ConvertCurve2dToBezier* NativeInstance
    {
        ::ShapeUpgrade_ConvertCurve2dToBezier* get()
        {
            return static_cast<::ShapeUpgrade_ConvertCurve2dToBezier*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_ConvertCurve2dToBezier();
    /// <summary>
    /// Converts curve into a list of beziers, and stores the
    /// splitting parameters on original curve.
    /// </summary>
    void Compute();
    /// <summary>
    /// Splits a list of beziers computed by Compute method according
    /// the split values and splitting parameters.
    /// </summary>
    void Build(bool Segment);
    /// <summary>
    /// Returns the list of split parameters in original curve parametrisation.
    /// </summary>
    Macad::Occt::TColStd_HSequenceOfReal^ SplitParams();
    static Macad::Occt::ShapeUpgrade_ConvertCurve2dToBezier^ CreateDowncasted(::ShapeUpgrade_ConvertCurve2dToBezier* instance);
}; // class ShapeUpgrade_ConvertCurve2dToBezier

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertCurve3dToBezier
//---------------------------------------------------------------------
/// <summary>
/// converts/splits a 3d curve of any type to a list of beziers
/// </summary>
public ref class ShapeUpgrade_ConvertCurve3dToBezier sealed
    : public Macad::Occt::ShapeUpgrade_SplitCurve3d
{

#ifdef Include_ShapeUpgrade_ConvertCurve3dToBezier_h
public:
    Include_ShapeUpgrade_ConvertCurve3dToBezier_h
#endif

public:
    ShapeUpgrade_ConvertCurve3dToBezier(::ShapeUpgrade_ConvertCurve3dToBezier* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve3d( nativeInstance )
    {}

    ShapeUpgrade_ConvertCurve3dToBezier(::ShapeUpgrade_ConvertCurve3dToBezier& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve3d( nativeInstance )
    {}

    property ::ShapeUpgrade_ConvertCurve3dToBezier* NativeInstance
    {
        ::ShapeUpgrade_ConvertCurve3dToBezier* get()
        {
            return static_cast<::ShapeUpgrade_ConvertCurve3dToBezier*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeUpgrade_ConvertCurve3dToBezier();
    /// <summary>
    /// Sets mode for conversion Geom_Line to bezier.
    /// </summary>
    void SetLineMode(bool mode);
    /// <summary>
    /// Returns the Geom_Line conversion mode.
    /// </summary>
    bool GetLineMode();
    /// <summary>
    /// Sets mode for conversion Geom_Circle to bezier.
    /// </summary>
    void SetCircleMode(bool mode);
    /// <summary>
    /// Returns the Geom_Circle conversion mode.
    /// </summary>
    bool GetCircleMode();
    /// <summary>
    /// Returns the Geom_Conic conversion mode.
    /// </summary>
    void SetConicMode(bool mode);
    /// <summary>
    /// Performs converting and computes the resulting shape.
    /// </summary>
    bool GetConicMode();
    /// <summary>
    /// Converts curve into a list of beziers, and stores the
    /// splitting parameters on original curve.
    /// </summary>
    void Compute();
    /// <summary>
    /// Splits a list of beziers computed by Compute method according
    /// the split values and splitting parameters.
    /// </summary>
    void Build(bool Segment);
    /// <summary>
    /// Returns the list of split parameters in original curve parametrisation.
    /// </summary>
    Macad::Occt::TColStd_HSequenceOfReal^ SplitParams();
    static Macad::Occt::ShapeUpgrade_ConvertCurve3dToBezier^ CreateDowncasted(::ShapeUpgrade_ConvertCurve3dToBezier* instance);
}; // class ShapeUpgrade_ConvertCurve3dToBezier

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ConvertSurfaceToBezierBasis
//---------------------------------------------------------------------
/// <summary>
/// Converts a plane, bspline surface, surface of revolution, surface
/// of extrusion, offset surface to grid of bezier basis surface (
/// bezier surface,
/// surface of revolution based on bezier curve,
/// offset surface based on any previous type).
/// </summary>
public ref class ShapeUpgrade_ConvertSurfaceToBezierBasis sealed
    : public Macad::Occt::ShapeUpgrade_SplitSurface
{

#ifdef Include_ShapeUpgrade_ConvertSurfaceToBezierBasis_h
public:
    Include_ShapeUpgrade_ConvertSurfaceToBezierBasis_h
#endif

public:
    ShapeUpgrade_ConvertSurfaceToBezierBasis(::ShapeUpgrade_ConvertSurfaceToBezierBasis* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
    {}

    ShapeUpgrade_ConvertSurfaceToBezierBasis(::ShapeUpgrade_ConvertSurfaceToBezierBasis& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
    {}

    property ::ShapeUpgrade_ConvertSurfaceToBezierBasis* NativeInstance
    {
        ::ShapeUpgrade_ConvertSurfaceToBezierBasis* get()
        {
            return static_cast<::ShapeUpgrade_ConvertSurfaceToBezierBasis*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_ConvertSurfaceToBezierBasis();
    /// <summary>
    /// Splits a list of beziers computed by Compute method according
    /// the split values and splitting parameters.
    /// </summary>
    void Build(bool Segment);
    /// <summary>
    /// Converts surface into a grid of bezier based surfaces, and
    /// stores this grid.
    /// </summary>
    void Compute(bool Segment);
    /* Method skipped due to unknown mapping: ShapeExtend_CompositeSurface Segments() */
    /// <summary>
    /// Sets mode for conversion Geom_Plane to Bezier
    /// </summary>
    void SetPlaneMode(bool mode);
    /// <summary>
    /// Returns the Geom_Pline conversion mode.
    /// </summary>
    bool GetPlaneMode();
    /// <summary>
    /// Sets mode for conversion Geom_SurfaceOfRevolution to Bezier
    /// </summary>
    void SetRevolutionMode(bool mode);
    /// <summary>
    /// Returns the Geom_SurfaceOfRevolution conversion mode.
    /// </summary>
    bool GetRevolutionMode();
    /// <summary>
    /// Sets mode for conversion Geom_SurfaceOfLinearExtrusion to Bezier
    /// </summary>
    void SetExtrusionMode(bool mode);
    /// <summary>
    /// Returns the Geom_SurfaceOfLinearExtrusion conversion mode.
    /// </summary>
    bool GetExtrusionMode();
    /// <summary>
    /// Sets mode for conversion Geom_BSplineSurface to Bezier
    /// </summary>
    void SetBSplineMode(bool mode);
    /// <summary>
    /// Returns the Geom_BSplineSurface conversion mode.
    /// </summary>
    bool GetBSplineMode();
    static Macad::Occt::ShapeUpgrade_ConvertSurfaceToBezierBasis^ CreateDowncasted(::ShapeUpgrade_ConvertSurfaceToBezierBasis* instance);
}; // class ShapeUpgrade_ConvertSurfaceToBezierBasis

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FaceDivideArea
//---------------------------------------------------------------------
/// <summary>
/// Divides face by max area criterium.
/// </summary>
public ref class ShapeUpgrade_FaceDivideArea sealed
    : public Macad::Occt::ShapeUpgrade_FaceDivide
{

#ifdef Include_ShapeUpgrade_FaceDivideArea_h
public:
    Include_ShapeUpgrade_FaceDivideArea_h
#endif

public:
    ShapeUpgrade_FaceDivideArea(::ShapeUpgrade_FaceDivideArea* nativeInstance)
        : Macad::Occt::ShapeUpgrade_FaceDivide( nativeInstance )
    {}

    ShapeUpgrade_FaceDivideArea(::ShapeUpgrade_FaceDivideArea& nativeInstance)
        : Macad::Occt::ShapeUpgrade_FaceDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_FaceDivideArea* NativeInstance
    {
        ::ShapeUpgrade_FaceDivideArea* get()
        {
            return static_cast<::ShapeUpgrade_FaceDivideArea*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Set max area allowed for faces
    /// </summary>
    property double MaxArea {
        double get() {
            return ((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->MaxArea();
        }
        void set(double value) {
            ((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->MaxArea() = value;
        }
    }

    /// <summary>
    /// Set number of parts expected
    /// </summary>
    property int NbParts {
        int get() {
            return ((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->NbParts();
        }
        void set(int value) {
            ((::ShapeUpgrade_FaceDivideArea*)_NativeInstance)->NbParts() = value;
        }
    }

    /// <summary>
    /// Creates empty  constructor.
    /// </summary>
    ShapeUpgrade_FaceDivideArea();
    ShapeUpgrade_FaceDivideArea(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Performs splitting and computes the resulting shell
    /// The context is used to keep track of former splittings
    /// </summary>
    bool Perform(double theArea);
    /// <summary>
    /// Performs splitting and computes the resulting shell
    /// The context is used to keep track of former splittings
    /// </summary>
    bool Perform();
    /// <summary>
    /// Set fixed numbers of splits in U and V directions.
    /// Only for "Splitting By Numbers" mode
    /// </summary>
    void SetNumbersUVSplits(int theNbUsplits, int theNbVsplits);
    /// <summary>
    /// Set splitting mode
    /// If the mode is "splitting by number",
    /// the face is splitted approximately into <myNbParts> parts,
    /// the parts are similar to squares in 2D.
    /// </summary>
    void SetSplittingByNumber(bool theIsSplittingByNumber);
    static Macad::Occt::ShapeUpgrade_FaceDivideArea^ CreateDowncasted(::ShapeUpgrade_FaceDivideArea* instance);
}; // class ShapeUpgrade_FaceDivideArea

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FixSmallCurves
//---------------------------------------------------------------------
public ref class ShapeUpgrade_FixSmallCurves
    : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_FixSmallCurves_h
public:
    Include_ShapeUpgrade_FixSmallCurves_h
#endif

protected:
    ShapeUpgrade_FixSmallCurves(InitMode init)
        : Macad::Occt::ShapeUpgrade_Tool( init )
    {}

public:
    ShapeUpgrade_FixSmallCurves(::ShapeUpgrade_FixSmallCurves* nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    ShapeUpgrade_FixSmallCurves(::ShapeUpgrade_FixSmallCurves& nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    property ::ShapeUpgrade_FixSmallCurves* NativeInstance
    {
        ::ShapeUpgrade_FixSmallCurves* get()
        {
            return static_cast<::ShapeUpgrade_FixSmallCurves*>(_NativeInstance);
        }
    }

public:
    ShapeUpgrade_FixSmallCurves();
    void Init(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace);
    bool Approx(Macad::Occt::Geom_Curve^ Curve3d, Macad::Occt::Geom2d_Curve^ Curve2d, Macad::Occt::Geom2d_Curve^ Curve2dR, double% First, double% Last);
    /// <summary>
    /// Sets the tool for splitting 3D curves.
    /// </summary>
    void SetSplitCurve3dTool(Macad::Occt::ShapeUpgrade_SplitCurve3d^ splitCurve3dTool);
    /// <summary>
    /// Sets the tool for splitting pcurves.
    /// </summary>
    void SetSplitCurve2dTool(Macad::Occt::ShapeUpgrade_SplitCurve2d^ splitCurve2dTool);
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    static Macad::Occt::ShapeUpgrade_FixSmallCurves^ CreateDowncasted(::ShapeUpgrade_FixSmallCurves* instance);
}; // class ShapeUpgrade_FixSmallCurves

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_FixSmallBezierCurves
//---------------------------------------------------------------------
public ref class ShapeUpgrade_FixSmallBezierCurves sealed
    : public Macad::Occt::ShapeUpgrade_FixSmallCurves
{

#ifdef Include_ShapeUpgrade_FixSmallBezierCurves_h
public:
    Include_ShapeUpgrade_FixSmallBezierCurves_h
#endif

public:
    ShapeUpgrade_FixSmallBezierCurves(::ShapeUpgrade_FixSmallBezierCurves* nativeInstance)
        : Macad::Occt::ShapeUpgrade_FixSmallCurves( nativeInstance )
    {}

    ShapeUpgrade_FixSmallBezierCurves(::ShapeUpgrade_FixSmallBezierCurves& nativeInstance)
        : Macad::Occt::ShapeUpgrade_FixSmallCurves( nativeInstance )
    {}

    property ::ShapeUpgrade_FixSmallBezierCurves* NativeInstance
    {
        ::ShapeUpgrade_FixSmallBezierCurves* get()
        {
            return static_cast<::ShapeUpgrade_FixSmallBezierCurves*>(_NativeInstance);
        }
    }

public:
    ShapeUpgrade_FixSmallBezierCurves();
    bool Approx(Macad::Occt::Geom_Curve^ Curve3d, Macad::Occt::Geom2d_Curve^ Curve2d, Macad::Occt::Geom2d_Curve^ Curve2dR, double% First, double% Last);
    static Macad::Occt::ShapeUpgrade_FixSmallBezierCurves^ CreateDowncasted(::ShapeUpgrade_FixSmallBezierCurves* instance);
}; // class ShapeUpgrade_FixSmallBezierCurves

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_RemoveInternalWires
//---------------------------------------------------------------------
/// <summary>
/// Removes all internal wires having area less than specified min area
/// </summary>
public ref class ShapeUpgrade_RemoveInternalWires sealed
    : public Macad::Occt::ShapeUpgrade_Tool
{

#ifdef Include_ShapeUpgrade_RemoveInternalWires_h
public:
    Include_ShapeUpgrade_RemoveInternalWires_h
#endif

public:
    ShapeUpgrade_RemoveInternalWires(::ShapeUpgrade_RemoveInternalWires* nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    ShapeUpgrade_RemoveInternalWires(::ShapeUpgrade_RemoveInternalWires& nativeInstance)
        : Macad::Occt::ShapeUpgrade_Tool( nativeInstance )
    {}

    property ::ShapeUpgrade_RemoveInternalWires* NativeInstance
    {
        ::ShapeUpgrade_RemoveInternalWires* get()
        {
            return static_cast<::ShapeUpgrade_RemoveInternalWires*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Set min area allowed for holes( all holes having area less than mi area will be removed)
    /// </summary>
    property double MinArea {
        double get() {
            return ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->MinArea();
        }
        void set(double value) {
            ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->MinArea() = value;
        }
    }

    /// <summary>
    /// Set mode which manage removing faces which have outer wires consisting only from edges
    /// belonginig to removed internal wires.
    /// By default it is equal to true.
    /// </summary>
    property bool RemoveFaceMode {
        bool get() {
            return ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->RemoveFaceMode();
        }
        void set(bool value) {
            ((::ShapeUpgrade_RemoveInternalWires*)_NativeInstance)->RemoveFaceMode() = value;
        }
    }

    /// <summary>
    /// Creates empty  constructor.
    /// </summary>
    ShapeUpgrade_RemoveInternalWires();
    ShapeUpgrade_RemoveInternalWires(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Initialize by a Shape.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Removes all internal wires having area less than area specified as minimal allowed area
    /// </summary>
    bool Perform();
    /// <summary>
    /// If specified sequence of shape contains -
    /// 1.wires then these wires will be removed if they have area less than allowed min area.
    /// 2.faces than internal wires from these faces will be removed if they have area less than
    /// allowed min area.
    /// </summary>
    bool Perform(Macad::Occt::TopTools_SequenceOfShape^ theSeqShapes);
    /// <summary>
    /// Get result shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetResult();
    /// <summary>
    /// Returns sequence of removed faces.
    /// </summary>
    Macad::Occt::TopTools_SequenceOfShape^ RemovedFaces();
    /// <summary>
    /// Returns sequence of removed faces.
    /// </summary>
    Macad::Occt::TopTools_SequenceOfShape^ RemovedWires();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status theStatus, ) */
    static Macad::Occt::ShapeUpgrade_RemoveInternalWires^ CreateDowncasted(::ShapeUpgrade_RemoveInternalWires* instance);
}; // class ShapeUpgrade_RemoveInternalWires

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_RemoveLocations
//---------------------------------------------------------------------
/// <summary>
/// Removes all locations sub-shapes of specified shape
/// </summary>
public ref class ShapeUpgrade_RemoveLocations sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_RemoveLocations_h
public:
    Include_ShapeUpgrade_RemoveLocations_h
#endif

public:
    ShapeUpgrade_RemoveLocations(::ShapeUpgrade_RemoveLocations* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeUpgrade_RemoveLocations(::ShapeUpgrade_RemoveLocations& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeUpgrade_RemoveLocations* NativeInstance
    {
        ::ShapeUpgrade_RemoveLocations* get()
        {
            return static_cast<::ShapeUpgrade_RemoveLocations*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeUpgrade_RemoveLocations();
    /// <summary>
    /// Removes all location correspondingly to RemoveLevel.
    /// </summary>
    bool Remove(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Returns shape with removed locations.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetResult();
    /// <summary>
    /// sets level starting with that location will be removed,
    /// by default TopAbs_SHAPE. In this case locations will be kept for specified shape
    /// and if specified shape is TopAbs_COMPOUND for sub-shapes of first level.
    /// </summary>
    void SetRemoveLevel(Macad::Occt::TopAbs_ShapeEnum theLevel);
    /// <summary>
    /// sets level starting with that location will be removed.Value of level can be set to
    /// TopAbs_SHAPE,TopAbs_COMPOUND,TopAbs_SOLID,TopAbs_SHELL,TopAbs_FACE.By default TopAbs_SHAPE.
    /// In this case location will be removed for all shape types for exception of compound.
    /// </summary>
    Macad::Occt::TopAbs_ShapeEnum RemoveLevel();
    /// <summary>
    /// Returns modified shape obtained from initial shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ theInitShape);
    /// <summary>
    /// Returns map of modified shapes.
    /// </summary>
    Macad::Occt::TopTools_DataMapOfShapeShape^ GetModifiedShapesMap();
    static Macad::Occt::ShapeUpgrade_RemoveLocations^ CreateDowncasted(::ShapeUpgrade_RemoveLocations* instance);
}; // class ShapeUpgrade_RemoveLocations

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivide
//---------------------------------------------------------------------
/// <summary>
/// Divides a all faces in shell with given criteria Shell.
/// </summary>
public ref class ShapeUpgrade_ShapeDivide
    : public Macad::Occt::BaseClass<::ShapeUpgrade_ShapeDivide>
{

#ifdef Include_ShapeUpgrade_ShapeDivide_h
public:
    Include_ShapeUpgrade_ShapeDivide_h
#endif

protected:
    ShapeUpgrade_ShapeDivide(InitMode init)
        : Macad::Occt::BaseClass<::ShapeUpgrade_ShapeDivide>( init )
    {}

public:
    ShapeUpgrade_ShapeDivide(::ShapeUpgrade_ShapeDivide* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeUpgrade_ShapeDivide>( nativeInstance, true )
    {}

    ShapeUpgrade_ShapeDivide(::ShapeUpgrade_ShapeDivide& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeUpgrade_ShapeDivide>( &nativeInstance, false )
    {}

    property ::ShapeUpgrade_ShapeDivide* NativeInstance
    {
        ::ShapeUpgrade_ShapeDivide* get()
        {
            return static_cast<::ShapeUpgrade_ShapeDivide*>(_NativeInstance);
        }
    }

public:
    ShapeUpgrade_ShapeDivide();
    /// <summary>
    /// Initialize by a Shape.
    /// </summary>
    ShapeUpgrade_ShapeDivide(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Initialize by a Shape.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Defines the spatial precision used for splitting
    /// </summary>
    void SetPrecision(double Prec);
    /// <summary>
    /// Sets maximal allowed tolerance
    /// </summary>
    void SetMaxTolerance(double maxtol);
    /// <summary>
    /// Sets minimal allowed tolerance
    /// </summary>
    void SetMinTolerance(double mintol);
    /// <summary>
    /// Purpose sets mode for trimming (segment) surface by
    /// wire UV bounds.
    /// </summary>
    void SetSurfaceSegmentMode(bool Segment);
    /// <summary>
    /// Performs splitting and computes the resulting shape
    /// If newContext is True (default), the internal context
    /// will be cleared at start, else previous substitutions
    /// will be acting.
    /// </summary>
    bool Perform(bool newContext);
    /// <summary>
    /// Performs splitting and computes the resulting shape
    /// If newContext is True (default), the internal context
    /// will be cleared at start, else previous substitutions
    /// will be acting.
    /// </summary>
    bool Perform();
    /// <summary>
    /// Gives the resulting Shape, or Null shape if not done.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Result();
    /// <summary>
    /// Returns context with all the modifications made during
    /// last call(s) to Perform() recorded
    /// </summary>
    Macad::Occt::ShapeBuild_ReShape^ GetContext();
    /// <summary>
    /// Sets context with recorded modifications to be applied
    /// during next call(s) to Perform(shape,Standard_False)
    /// </summary>
    void SetContext(Macad::Occt::ShapeBuild_ReShape^ context);
    /* Method skipped due to unknown mapping: void SetMsgRegistrator(ShapeExtend_BasicMsgRegistrator msgreg, ) */
    /* Method skipped due to unknown mapping: ShapeExtend_BasicMsgRegistrator MsgRegistrator() */
    /* Method skipped due to unknown mapping: void SendMsg(TopoDS_Shape shape, Message_Msg message, Message_Gravity gravity, ) */
    /* Method skipped due to unknown mapping: void SendMsg(TopoDS_Shape shape, Message_Msg message, Message_Gravity gravity, ) */
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Sets the tool for splitting faces.
    /// </summary>
    void SetSplitFaceTool(Macad::Occt::ShapeUpgrade_FaceDivide^ splitFaceTool);
    /// <summary>
    /// Sets mode for splitting 3d curves from edges.
    /// 0 - only curve 3d from free edges.
    /// 1 - only curve 3d from shared edges.
    /// 2 -  all curve 3d.
    /// </summary>
    void SetEdgeMode(int aEdgeMode);
}; // class ShapeUpgrade_ShapeDivide

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeConvertToBezier
//---------------------------------------------------------------------
/// <summary>
/// API class for performing conversion of 3D, 2D curves to bezier curves
/// and surfaces to bezier based surfaces (
/// bezier surface,
/// surface of revolution based on bezier curve,
/// offset surface based on any previous type).
/// </summary>
public ref class ShapeUpgrade_ShapeConvertToBezier sealed
    : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeConvertToBezier_h
public:
    Include_ShapeUpgrade_ShapeConvertToBezier_h
#endif

public:
    ShapeUpgrade_ShapeConvertToBezier(::ShapeUpgrade_ShapeConvertToBezier* nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    ShapeUpgrade_ShapeConvertToBezier(::ShapeUpgrade_ShapeConvertToBezier& nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_ShapeConvertToBezier* NativeInstance
    {
        ::ShapeUpgrade_ShapeConvertToBezier* get()
        {
            return static_cast<::ShapeUpgrade_ShapeConvertToBezier*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_ShapeConvertToBezier();
    /// <summary>
    /// Initialize by a Shape.
    /// </summary>
    ShapeUpgrade_ShapeConvertToBezier(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Sets mode for conversion 2D curves to bezier.
    /// </summary>
    void Set2dConversion(bool mode);
    /// <summary>
    /// Returns the 2D conversion mode.
    /// </summary>
    bool Get2dConversion();
    /// <summary>
    /// Sets mode for conversion 3d curves to bezier.
    /// </summary>
    void Set3dConversion(bool mode);
    /// <summary>
    /// Returns the 3D conversion mode.
    /// </summary>
    bool Get3dConversion();
    /// <summary>
    /// Sets mode for conversion surfaces curves to
    /// bezier basis.
    /// </summary>
    void SetSurfaceConversion(bool mode);
    /// <summary>
    /// Returns the surface conversion mode.
    /// </summary>
    bool GetSurfaceConversion();
    /// <summary>
    /// Sets mode for conversion Geom_Line to bezier.
    /// </summary>
    void Set3dLineConversion(bool mode);
    /// <summary>
    /// Returns the Geom_Line conversion mode.
    /// </summary>
    bool Get3dLineConversion();
    /// <summary>
    /// Sets mode for conversion Geom_Circle to bezier.
    /// </summary>
    void Set3dCircleConversion(bool mode);
    /// <summary>
    /// Returns the Geom_Circle conversion mode.
    /// </summary>
    bool Get3dCircleConversion();
    /// <summary>
    /// Sets mode for conversion Geom_Conic to bezier.
    /// </summary>
    void Set3dConicConversion(bool mode);
    /// <summary>
    /// Returns the Geom_Conic conversion mode.
    /// </summary>
    bool Get3dConicConversion();
    /// <summary>
    /// Sets mode for conversion Geom_Plane to Bezier
    /// </summary>
    void SetPlaneMode(bool mode);
    /// <summary>
    /// Returns the Geom_Pline conversion mode.
    /// </summary>
    bool GetPlaneMode();
    /// <summary>
    /// Sets mode for conversion Geom_SurfaceOfRevolution to Bezier
    /// </summary>
    void SetRevolutionMode(bool mode);
    /// <summary>
    /// Returns the Geom_SurfaceOfRevolution conversion mode.
    /// </summary>
    bool GetRevolutionMode();
    /// <summary>
    /// Sets mode for conversion Geom_SurfaceOfLinearExtrusion to Bezier
    /// </summary>
    void SetExtrusionMode(bool mode);
    /// <summary>
    /// Returns the Geom_SurfaceOfLinearExtrusion conversion mode.
    /// </summary>
    bool GetExtrusionMode();
    /// <summary>
    /// Sets mode for conversion Geom_BSplineSurface to Bezier
    /// </summary>
    void SetBSplineMode(bool mode);
    /// <summary>
    /// Returns the Geom_BSplineSurface conversion mode.
    /// </summary>
    bool GetBSplineMode();
    /// <summary>
    /// Performs converting and computes the resulting shape
    /// </summary>
    bool Perform(bool newContext);
    /// <summary>
    /// Performs converting and computes the resulting shape
    /// </summary>
    bool Perform();
}; // class ShapeUpgrade_ShapeConvertToBezier

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideAngle
//---------------------------------------------------------------------
/// <summary>
/// Splits all surfaces of revolution, cylindrical, toroidal,
/// conical, spherical surfaces in the given shape so that
/// each resulting segment covers not more than defined number
/// of degrees (to segments less than 90).
/// </summary>
public ref class ShapeUpgrade_ShapeDivideAngle sealed
    : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideAngle_h
public:
    Include_ShapeUpgrade_ShapeDivideAngle_h
#endif

public:
    ShapeUpgrade_ShapeDivideAngle(::ShapeUpgrade_ShapeDivideAngle* nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    ShapeUpgrade_ShapeDivideAngle(::ShapeUpgrade_ShapeDivideAngle& nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_ShapeDivideAngle* NativeInstance
    {
        ::ShapeUpgrade_ShapeDivideAngle* get()
        {
            return static_cast<::ShapeUpgrade_ShapeDivideAngle*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_ShapeDivideAngle(double MaxAngle);
    /// <summary>
    /// Initialize by a Shape.
    /// </summary>
    ShapeUpgrade_ShapeDivideAngle(double MaxAngle, Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Resets tool for splitting face with given angle
    /// </summary>
    void InitTool(double MaxAngle);
    /// <summary>
    /// Set maximal angle (calls InitTool)
    /// </summary>
    void SetMaxAngle(double MaxAngle);
    /// <summary>
    /// Returns maximal angle
    /// </summary>
    double MaxAngle();
}; // class ShapeUpgrade_ShapeDivideAngle

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideArea
//---------------------------------------------------------------------
/// <summary>
/// Divides faces from sprcified shape  by max area criterium.
/// </summary>
public ref class ShapeUpgrade_ShapeDivideArea sealed
    : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideArea_h
public:
    Include_ShapeUpgrade_ShapeDivideArea_h
#endif

public:
    ShapeUpgrade_ShapeDivideArea(::ShapeUpgrade_ShapeDivideArea* nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    ShapeUpgrade_ShapeDivideArea(::ShapeUpgrade_ShapeDivideArea& nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_ShapeDivideArea* NativeInstance
    {
        ::ShapeUpgrade_ShapeDivideArea* get()
        {
            return static_cast<::ShapeUpgrade_ShapeDivideArea*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Set max area allowed for faces
    /// </summary>
    property double MaxArea {
        double get() {
            return ((::ShapeUpgrade_ShapeDivideArea*)_NativeInstance)->MaxArea();
        }
        void set(double value) {
            ((::ShapeUpgrade_ShapeDivideArea*)_NativeInstance)->MaxArea() = value;
        }
    }

    /// <summary>
    /// Set number of parts expected
    /// for the case of splitting by number
    /// </summary>
    property int NbParts {
        int get() {
            return ((::ShapeUpgrade_ShapeDivideArea*)_NativeInstance)->NbParts();
        }
        void set(int value) {
            ((::ShapeUpgrade_ShapeDivideArea*)_NativeInstance)->NbParts() = value;
        }
    }

    ShapeUpgrade_ShapeDivideArea();
    /// <summary>
    /// Initialize by a Shape.
    /// </summary>
    ShapeUpgrade_ShapeDivideArea(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Set fixed numbers of splits in U and V directions.
    /// Only for "Splitting By Numbers" mode
    /// </summary>
    void SetNumbersUVSplits(int theNbUsplits, int theNbVsplits);
    /// <summary>
    /// Set splitting mode
    /// If the mode is "splitting by number",
    /// the face is splitted approximately into <myNbParts> parts,
    /// the parts are similar to squares in 2D.
    /// </summary>
    void SetSplittingByNumber(bool theIsSplittingByNumber);
}; // class ShapeUpgrade_ShapeDivideArea

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideClosed
//---------------------------------------------------------------------
/// <summary>
/// Divides all closed faces in the shape. Class
/// ShapeUpgrade_ClosedFaceDivide is used as divide tool.
/// </summary>
public ref class ShapeUpgrade_ShapeDivideClosed sealed
    : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideClosed_h
public:
    Include_ShapeUpgrade_ShapeDivideClosed_h
#endif

public:
    ShapeUpgrade_ShapeDivideClosed(::ShapeUpgrade_ShapeDivideClosed* nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    ShapeUpgrade_ShapeDivideClosed(::ShapeUpgrade_ShapeDivideClosed& nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_ShapeDivideClosed* NativeInstance
    {
        ::ShapeUpgrade_ShapeDivideClosed* get()
        {
            return static_cast<::ShapeUpgrade_ShapeDivideClosed*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initialises tool with shape and default parameter.
    /// </summary>
    ShapeUpgrade_ShapeDivideClosed(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Sets the number of cuts applied to divide closed faces.
    /// The number of resulting faces will be num+1.
    /// </summary>
    void SetNbSplitPoints(int num);
}; // class ShapeUpgrade_ShapeDivideClosed

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideClosedEdges
//---------------------------------------------------------------------
public ref class ShapeUpgrade_ShapeDivideClosedEdges sealed
    : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideClosedEdges_h
public:
    Include_ShapeUpgrade_ShapeDivideClosedEdges_h
#endif

public:
    ShapeUpgrade_ShapeDivideClosedEdges(::ShapeUpgrade_ShapeDivideClosedEdges* nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    ShapeUpgrade_ShapeDivideClosedEdges(::ShapeUpgrade_ShapeDivideClosedEdges& nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_ShapeDivideClosedEdges* NativeInstance
    {
        ::ShapeUpgrade_ShapeDivideClosedEdges* get()
        {
            return static_cast<::ShapeUpgrade_ShapeDivideClosedEdges*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initialises tool with shape and default parameter.
    /// </summary>
    ShapeUpgrade_ShapeDivideClosedEdges(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Sets the number of cuts applied to divide closed edges.
    /// The number of resulting faces will be num+1.
    /// </summary>
    void SetNbSplitPoints(int num);
}; // class ShapeUpgrade_ShapeDivideClosedEdges

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShapeDivideContinuity
//---------------------------------------------------------------------
/// <summary>
/// API Tool for converting shapes with C0 geometry into C1 ones
/// </summary>
public ref class ShapeUpgrade_ShapeDivideContinuity sealed
    : public Macad::Occt::ShapeUpgrade_ShapeDivide
{

#ifdef Include_ShapeUpgrade_ShapeDivideContinuity_h
public:
    Include_ShapeUpgrade_ShapeDivideContinuity_h
#endif

public:
    ShapeUpgrade_ShapeDivideContinuity(::ShapeUpgrade_ShapeDivideContinuity* nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    ShapeUpgrade_ShapeDivideContinuity(::ShapeUpgrade_ShapeDivideContinuity& nativeInstance)
        : Macad::Occt::ShapeUpgrade_ShapeDivide( nativeInstance )
    {}

    property ::ShapeUpgrade_ShapeDivideContinuity* NativeInstance
    {
        ::ShapeUpgrade_ShapeDivideContinuity* get()
        {
            return static_cast<::ShapeUpgrade_ShapeDivideContinuity*>(_NativeInstance);
        }
    }

public:
    ShapeUpgrade_ShapeDivideContinuity();
    /// <summary>
    /// Initialize by a Shape.
    /// </summary>
    ShapeUpgrade_ShapeDivideContinuity(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Sets tolerance.
    /// </summary>
    void SetTolerance(double Tol);
    /// <summary>
    /// Sets tolerance.
    /// </summary>
    void SetTolerance2d(double Tol);
    /// <summary>
    /// Defines a criterion of continuity for the boundary (all the
    /// Wires)
    /// 
    /// The possible values are C0, G1, C1, G2, C2, C3, CN The
    /// default is C1 to respect the Cas.Cade Shape Validity.  G1
    /// and G2 are not authorized.
    /// </summary>
    void SetBoundaryCriterion(Macad::Occt::GeomAbs_Shape Criterion);
    /// <summary>
    /// Defines a criterion of continuity for the boundary (all the
    /// Wires)
    /// 
    /// The possible values are C0, G1, C1, G2, C2, C3, CN The
    /// default is C1 to respect the Cas.Cade Shape Validity.  G1
    /// and G2 are not authorized.
    /// </summary>
    void SetBoundaryCriterion();
    /// <summary>
    /// Defines a criterion of continuity for the boundary (all the
    /// pcurves of Wires)
    /// 
    /// The possible values are C0, G1, C1, G2, C2, C3, CN The
    /// default is C1 to respect the Cas.Cade Shape Validity.  G1
    /// and G2 are not authorized.
    /// </summary>
    void SetPCurveCriterion(Macad::Occt::GeomAbs_Shape Criterion);
    /// <summary>
    /// Defines a criterion of continuity for the boundary (all the
    /// pcurves of Wires)
    /// 
    /// The possible values are C0, G1, C1, G2, C2, C3, CN The
    /// default is C1 to respect the Cas.Cade Shape Validity.  G1
    /// and G2 are not authorized.
    /// </summary>
    void SetPCurveCriterion();
    /// <summary>
    /// Defines a criterion of continuity for the boundary (all the
    /// Wires)
    /// 
    /// The possible values are C0, G1, C1, G2, C2, C3, CN The
    /// default is C1 to respect the Cas.Cade Shape Validity.  G1
    /// and G2 are not authorized.
    /// </summary>
    void SetSurfaceCriterion(Macad::Occt::GeomAbs_Shape Criterion);
    /// <summary>
    /// Defines a criterion of continuity for the boundary (all the
    /// Wires)
    /// 
    /// The possible values are C0, G1, C1, G2, C2, C3, CN The
    /// default is C1 to respect the Cas.Cade Shape Validity.  G1
    /// and G2 are not authorized.
    /// </summary>
    void SetSurfaceCriterion();
}; // class ShapeUpgrade_ShapeDivideContinuity

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_ShellSewing
//---------------------------------------------------------------------
/// <summary>
/// This class provides a tool for applying sewing algorithm from
/// BRepBuilderAPI: it takes a shape, calls sewing for each shell,
/// and then replaces sewed shells with use of ShapeBuild_ReShape
/// </summary>
public ref class ShapeUpgrade_ShellSewing sealed
    : public Macad::Occt::BaseClass<::ShapeUpgrade_ShellSewing>
{

#ifdef Include_ShapeUpgrade_ShellSewing_h
public:
    Include_ShapeUpgrade_ShellSewing_h
#endif

public:
    ShapeUpgrade_ShellSewing(::ShapeUpgrade_ShellSewing* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeUpgrade_ShellSewing>( nativeInstance, true )
    {}

    ShapeUpgrade_ShellSewing(::ShapeUpgrade_ShellSewing& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeUpgrade_ShellSewing>( &nativeInstance, false )
    {}

    property ::ShapeUpgrade_ShellSewing* NativeInstance
    {
        ::ShapeUpgrade_ShellSewing* get()
        {
            return static_cast<::ShapeUpgrade_ShellSewing*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a ShellSewing, empty
    /// </summary>
    ShapeUpgrade_ShellSewing();
    /// <summary>
    /// Builds a new shape from a former one, by calling Sewing from
    /// BRepBuilderAPI. Rebuilt solids are oriented to be "not infinite"
    /// 
    /// If <tol> is not given (i.e. value 0. by default), it is
    /// computed as the mean tolerance recorded in <shape>
    /// 
    /// If no shell has been sewed, this method returns the input
    /// shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ApplySewing(Macad::Occt::TopoDS_Shape^ shape, double tol);
    /// <summary>
    /// Builds a new shape from a former one, by calling Sewing from
    /// BRepBuilderAPI. Rebuilt solids are oriented to be "not infinite"
    /// 
    /// If <tol> is not given (i.e. value 0. by default), it is
    /// computed as the mean tolerance recorded in <shape>
    /// 
    /// If no shell has been sewed, this method returns the input
    /// shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ApplySewing(Macad::Occt::TopoDS_Shape^ shape);
}; // class ShapeUpgrade_ShellSewing

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve2dContinuity
//---------------------------------------------------------------------
/// <summary>
/// Corrects/splits a 2d curve with a continuity criterion.
/// Tolerance is used to correct the curve at a knot that respects
/// geometrically the criterion, in order to reduce the
/// multiplicity of the knot.
/// </summary>
public ref class ShapeUpgrade_SplitCurve2dContinuity sealed
    : public Macad::Occt::ShapeUpgrade_SplitCurve2d
{

#ifdef Include_ShapeUpgrade_SplitCurve2dContinuity_h
public:
    Include_ShapeUpgrade_SplitCurve2dContinuity_h
#endif

public:
    ShapeUpgrade_SplitCurve2dContinuity(::ShapeUpgrade_SplitCurve2dContinuity* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve2d( nativeInstance )
    {}

    ShapeUpgrade_SplitCurve2dContinuity(::ShapeUpgrade_SplitCurve2dContinuity& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve2d( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitCurve2dContinuity* NativeInstance
    {
        ::ShapeUpgrade_SplitCurve2dContinuity* get()
        {
            return static_cast<::ShapeUpgrade_SplitCurve2dContinuity*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitCurve2dContinuity();
    /// <summary>
    /// Sets criterion for splitting.
    /// </summary>
    void SetCriterion(Macad::Occt::GeomAbs_Shape Criterion);
    /// <summary>
    /// Sets tolerance.
    /// </summary>
    void SetTolerance(double Tol);
    /// <summary>
    /// Calculates points for correction/splitting of the curve
    /// </summary>
    void Compute();
    static Macad::Occt::ShapeUpgrade_SplitCurve2dContinuity^ CreateDowncasted(::ShapeUpgrade_SplitCurve2dContinuity* instance);
}; // class ShapeUpgrade_SplitCurve2dContinuity

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitCurve3dContinuity
//---------------------------------------------------------------------
/// <summary>
/// Corrects/splits a 2d curve with a continuity criterion.
/// Tolerance is used to correct the curve at a knot that respects
/// geometrically the criterion, in order to reduce the
/// multiplicity of the knot.
/// </summary>
public ref class ShapeUpgrade_SplitCurve3dContinuity sealed
    : public Macad::Occt::ShapeUpgrade_SplitCurve3d
{

#ifdef Include_ShapeUpgrade_SplitCurve3dContinuity_h
public:
    Include_ShapeUpgrade_SplitCurve3dContinuity_h
#endif

public:
    ShapeUpgrade_SplitCurve3dContinuity(::ShapeUpgrade_SplitCurve3dContinuity* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve3d( nativeInstance )
    {}

    ShapeUpgrade_SplitCurve3dContinuity(::ShapeUpgrade_SplitCurve3dContinuity& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitCurve3d( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitCurve3dContinuity* NativeInstance
    {
        ::ShapeUpgrade_SplitCurve3dContinuity* get()
        {
            return static_cast<::ShapeUpgrade_SplitCurve3dContinuity*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitCurve3dContinuity();
    /// <summary>
    /// Sets criterion for splitting.
    /// </summary>
    void SetCriterion(Macad::Occt::GeomAbs_Shape Criterion);
    /// <summary>
    /// Sets tolerance.
    /// </summary>
    void SetTolerance(double Tol);
    /// <summary>
    /// Calculates points for correction/splitting of the curve
    /// </summary>
    void Compute();
    Macad::Occt::Geom_Curve^ GetCurve();
    static Macad::Occt::ShapeUpgrade_SplitCurve3dContinuity^ CreateDowncasted(::ShapeUpgrade_SplitCurve3dContinuity* instance);
}; // class ShapeUpgrade_SplitCurve3dContinuity

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceAngle
//---------------------------------------------------------------------
/// <summary>
/// Splits a surfaces of revolution, cylindrical, toroidal,
/// conical, spherical so that each resulting segment covers
/// not more than defined number of degrees.
/// </summary>
public ref class ShapeUpgrade_SplitSurfaceAngle sealed
    : public Macad::Occt::ShapeUpgrade_SplitSurface
{

#ifdef Include_ShapeUpgrade_SplitSurfaceAngle_h
public:
    Include_ShapeUpgrade_SplitSurfaceAngle_h
#endif

public:
    ShapeUpgrade_SplitSurfaceAngle(::ShapeUpgrade_SplitSurfaceAngle* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
    {}

    ShapeUpgrade_SplitSurfaceAngle(::ShapeUpgrade_SplitSurfaceAngle& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitSurfaceAngle* NativeInstance
    {
        ::ShapeUpgrade_SplitSurfaceAngle* get()
        {
            return static_cast<::ShapeUpgrade_SplitSurfaceAngle*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitSurfaceAngle(double MaxAngle);
    /// <summary>
    /// Set maximal angle
    /// </summary>
    void SetMaxAngle(double MaxAngle);
    /// <summary>
    /// Returns maximal angle
    /// </summary>
    double MaxAngle();
    /// <summary>
    /// Performs splitting of the supporting surface(s).
    /// First defines splitting values, then calls inherited method.
    /// </summary>
    void Compute(bool Segment);
    static Macad::Occt::ShapeUpgrade_SplitSurfaceAngle^ CreateDowncasted(::ShapeUpgrade_SplitSurfaceAngle* instance);
}; // class ShapeUpgrade_SplitSurfaceAngle

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceArea
//---------------------------------------------------------------------
/// <summary>
/// Split surface in the parametric space
/// in according specified number of splits on the
/// </summary>
public ref class ShapeUpgrade_SplitSurfaceArea sealed
    : public Macad::Occt::ShapeUpgrade_SplitSurface
{

#ifdef Include_ShapeUpgrade_SplitSurfaceArea_h
public:
    Include_ShapeUpgrade_SplitSurfaceArea_h
#endif

public:
    ShapeUpgrade_SplitSurfaceArea(::ShapeUpgrade_SplitSurfaceArea* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
    {}

    ShapeUpgrade_SplitSurfaceArea(::ShapeUpgrade_SplitSurfaceArea& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitSurfaceArea* NativeInstance
    {
        ::ShapeUpgrade_SplitSurfaceArea* get()
        {
            return static_cast<::ShapeUpgrade_SplitSurfaceArea*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Set number of split for surfaces
    /// </summary>
    property int NbParts {
        int get() {
            return ((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->NbParts();
        }
        void set(int value) {
            ((::ShapeUpgrade_SplitSurfaceArea*)_NativeInstance)->NbParts() = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitSurfaceArea();
    /// <summary>
    /// Set splitting mode
    /// If the mode is "splitting into squares",
    /// the face is splitted approximately into <myNbParts> parts,
    /// the parts are similar to squares in 2D.
    /// </summary>
    void SetSplittingIntoSquares(bool theIsSplittingIntoSquares);
    /// <summary>
    /// Set fixed numbers of splits in U and V directions.
    /// Only for "Splitting Into Squares" mode
    /// </summary>
    void SetNumbersUVSplits(int theNbUsplits, int theNbVsplits);
    void Compute(bool Segment);
    void Compute();
    static Macad::Occt::ShapeUpgrade_SplitSurfaceArea^ CreateDowncasted(::ShapeUpgrade_SplitSurfaceArea* instance);
}; // class ShapeUpgrade_SplitSurfaceArea

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_SplitSurfaceContinuity
//---------------------------------------------------------------------
/// <summary>
/// Splits a Surface with a continuity criterion.
/// At the present moment C1 criterion is used only.
/// This tool works with tolerance. If C0 surface can be corrected
/// at a knot with given tolerance then the surface is corrected,
/// otherwise it is spltted at that knot.
/// </summary>
public ref class ShapeUpgrade_SplitSurfaceContinuity sealed
    : public Macad::Occt::ShapeUpgrade_SplitSurface
{

#ifdef Include_ShapeUpgrade_SplitSurfaceContinuity_h
public:
    Include_ShapeUpgrade_SplitSurfaceContinuity_h
#endif

public:
    ShapeUpgrade_SplitSurfaceContinuity(::ShapeUpgrade_SplitSurfaceContinuity* nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
    {}

    ShapeUpgrade_SplitSurfaceContinuity(::ShapeUpgrade_SplitSurfaceContinuity& nativeInstance)
        : Macad::Occt::ShapeUpgrade_SplitSurface( nativeInstance )
    {}

    property ::ShapeUpgrade_SplitSurfaceContinuity* NativeInstance
    {
        ::ShapeUpgrade_SplitSurfaceContinuity* get()
        {
            return static_cast<::ShapeUpgrade_SplitSurfaceContinuity*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ShapeUpgrade_SplitSurfaceContinuity();
    /// <summary>
    /// Sets criterion for splitting.
    /// </summary>
    void SetCriterion(Macad::Occt::GeomAbs_Shape Criterion);
    /// <summary>
    /// Sets tolerance.
    /// </summary>
    void SetTolerance(double Tol);
    void Compute(bool Segment);
    static Macad::Occt::ShapeUpgrade_SplitSurfaceContinuity^ CreateDowncasted(::ShapeUpgrade_SplitSurfaceContinuity* instance);
}; // class ShapeUpgrade_SplitSurfaceContinuity

//---------------------------------------------------------------------
//  Class  ShapeUpgrade_UnifySameDomain
//---------------------------------------------------------------------
/// <summary>
/// This tool tries to unify faces and edges of the shape which lie on the same geometry.
/// Faces/edges are considering as 'same-domain' if a group of neighbouring faces/edges
/// are lying on coincident surfaces/curves.
/// In this case these faces/edges can be unified into one face/edge.
/// ShapeUpgrade_UnifySameDomain is initialized by a shape and the next optional parameters:
/// UnifyFaces - tries to unify all possible faces
/// UnifyEdges - tries to unify all possible edges
/// ConcatBSplines - if this flag is set to true then all neighbouring edges, which lay
/// on BSpline or Bezier curves with C1 continuity on their common vertices,
/// will be merged into one common edge.
/// 
/// The input shape can be of any type containing faces or edges - compsolid, solid, shell,
/// wire, compound of any kind of shapes. The algorithm preserves the structure of compsolids,
/// solids, shells and wires. E.g., if two shells have a common edge and the faces sharing
/// this edge lie on the same surface the algorithm will not unify these faces, otherwise
/// the structure of shells would be broken. However, if such faces belong to different
/// compounds of faces they will be unified.
/// 
/// The output result of the tool is the unified shape.
/// 
/// All the modifications of initial shape are recorded during unifying.
/// Methods History are intended to: <br>
/// - set a place holder for the history of modifications of sub-shapes of
/// the initial shape; <br>
/// - get the collected history. <br>
/// The algorithm provides a place holder for the history and collects the
/// history by default.
/// To avoid collecting of the history the place holder should be set to null handle.
/// </summary>
public ref class ShapeUpgrade_UnifySameDomain sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeUpgrade_UnifySameDomain_h
public:
    Include_ShapeUpgrade_UnifySameDomain_h
#endif

public:
    ShapeUpgrade_UnifySameDomain(::ShapeUpgrade_UnifySameDomain* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeUpgrade_UnifySameDomain(::ShapeUpgrade_UnifySameDomain& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeUpgrade_UnifySameDomain* NativeInstance
    {
        ::ShapeUpgrade_UnifySameDomain* get()
        {
            return static_cast<::ShapeUpgrade_UnifySameDomain*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeUpgrade_UnifySameDomain();
    /// <summary>
    /// Constructor defining input shape and necessary flags.
    /// It does not perform unification.
    /// </summary>
    ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces, bool ConcatBSplines);
    /// <summary>
    /// Constructor defining input shape and necessary flags.
    /// It does not perform unification.
    /// </summary>
    ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces);
    /// <summary>
    /// Constructor defining input shape and necessary flags.
    /// It does not perform unification.
    /// </summary>
    ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges);
    /// <summary>
    /// Constructor defining input shape and necessary flags.
    /// It does not perform unification.
    /// </summary>
    ShapeUpgrade_UnifySameDomain(Macad::Occt::TopoDS_Shape^ aShape);
    /// <summary>
    /// Initializes with a shape and necessary flags.
    /// It does not perform unification.
    /// If you intend to nullify the History place holder do it after
    /// initialization.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces, bool ConcatBSplines);
    /// <summary>
    /// Initializes with a shape and necessary flags.
    /// It does not perform unification.
    /// If you intend to nullify the History place holder do it after
    /// initialization.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges, bool UnifyFaces);
    /// <summary>
    /// Initializes with a shape and necessary flags.
    /// It does not perform unification.
    /// If you intend to nullify the History place holder do it after
    /// initialization.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Shape^ aShape, bool UnifyEdges);
    /// <summary>
    /// Initializes with a shape and necessary flags.
    /// It does not perform unification.
    /// If you intend to nullify the History place holder do it after
    /// initialization.
    /// </summary>
    void Initialize(Macad::Occt::TopoDS_Shape^ aShape);
    /// <summary>
    /// Sets the flag defining whether it is allowed to create
    /// internal edges inside merged faces in the case of non-manifold
    /// topology. Without this flag merging through multi connected edge
    /// is forbidden. Default value is false.
    /// </summary>
    void AllowInternalEdges(bool theValue);
    /// <summary>
    /// Sets the shape for avoid merging of the faces/edges.
    /// This shape can be vertex or edge.
    /// If the shape is a vertex it forbids merging of connected edges.
    /// If the shape is a edge it forbids merging of connected faces.
    /// This method can be called several times to keep several shapes.
    /// </summary>
    void KeepShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Sets the map of shapes for avoid merging of the faces/edges.
    /// It allows passing a ready to use map instead of calling many times
    /// the method KeepShape.
    /// </summary>
    void KeepShapes(Macad::Occt::TopTools_MapOfShape^ theShapes);
    /// <summary>
    /// Sets the flag defining the behavior of the algorithm regarding
    /// modification of input shape.
    /// If this flag is equal to True then the input (original) shape can't be
    /// modified during modification process. Default value is true.
    /// </summary>
    void SetSafeInputMode(bool theValue);
    /// <summary>
    /// Sets the linear tolerance. It plays the role of chord error when
    /// taking decision about merging of shapes. Default value is Precision::Confusion().
    /// </summary>
    void SetLinearTolerance(double theValue);
    /// <summary>
    /// Sets the angular tolerance. If two shapes form a connection angle greater than
    /// this value they will not be merged. Default value is Precision::Angular().
    /// </summary>
    void SetAngularTolerance(double theValue);
    /// <summary>
    /// Performs unification and builds the resulting shape.
    /// </summary>
    void Build();
    /// <summary>
    /// Gives the resulting shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Returns the history of the processed shapes.
    /// </summary>
    Macad::Occt::BRepTools_History^ History();
    static Macad::Occt::ShapeUpgrade_UnifySameDomain^ CreateDowncasted(::ShapeUpgrade_UnifySameDomain* instance);
}; // class ShapeUpgrade_UnifySameDomain

}; // namespace Occt
}; // namespace Macad
