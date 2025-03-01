// Generated wrapper code for package BRepBuilderAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_EdgeError
//---------------------------------------------------------------------
/// <summary>
/// Indicates the outcome of the
/// construction of an edge, i.e. whether it has been successful or
/// not, as explained below:
/// -      BRepBuilderAPI_EdgeDone No    error occurred; The edge is
/// correctly built.
/// -      BRepBuilderAPI_PointProjectionFailed No parameters were given but
/// the projection of the 3D points on the curve failed. This
/// happens when the point distance to the curve is greater than
/// the precision value.
/// -      BRepBuilderAPI_ParameterOutOfRange
/// The given parameters are not in the parametric range
/// C->FirstParameter(), C->LastParameter()
/// -      BRepBuilderAPI_DifferentPointsOnClosedCurve
/// The two vertices or points are the extremities of a closed
/// curve but have different locations.
/// -      BRepBuilderAPI_PointWithInfiniteParameter
/// A finite coordinate point was associated with an infinite
/// parameter (see the Precision package for a definition of    infinite values).
/// -      BRepBuilderAPI_DifferentsPointAndParameter
/// The distance between the 3D point and the point evaluated
/// on the curve with the parameter is greater than the precision.
/// -      BRepBuilderAPI_LineThroughIdenticPoints
/// Two identical points were given to define a line (construction
/// of an edge without curve); gp::Resolution is used for the    confusion test.
/// </summary>
public enum class BRepBuilderAPI_EdgeError
{
    EdgeDone = 0,
    PointProjectionFailed = 1,
    ParameterOutOfRange = 2,
    DifferentPointsOnClosedCurve = 3,
    PointWithInfiniteParameter = 4,
    DifferentsPointAndParameter = 5,
    LineThroughIdenticPoints = 6
}; // enum  class BRepBuilderAPI_EdgeError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_FaceError
//---------------------------------------------------------------------
/// <summary>
/// Indicates the outcome of the
/// construction of a face, i.e. whether it has been successful or
/// not, as explained below:
/// -      BRepBuilderAPI_FaceDone No error occurred. The face is
/// correctly built.
/// -      BRepBuilderAPI_NoFace No initialization of the
/// algorithm; only an empty constructor was used.
/// -      BRepBuilderAPI_NotPlanar
/// No surface was given and the wire was not planar.
/// -      BRepBuilderAPI_CurveProjectionFailed
/// Not used so far.
/// -      BRepBuilderAPI_ParametersOutOfRange
/// The parameters given to limit the surface are out of its    bounds.
/// </summary>
public enum class BRepBuilderAPI_FaceError
{
    FaceDone = 0,
    NoFace = 1,
    NotPlanar = 2,
    CurveProjectionFailed = 3,
    ParametersOutOfRange = 4
}; // enum  class BRepBuilderAPI_FaceError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_ShellError
//---------------------------------------------------------------------
/// <summary>
/// Indicates the outcome of the construction of a face, i.e.
/// whether it is successful or not, as explained below:
/// -   BRepBuilderAPI_ShellDone No error occurred.
/// The shell is correctly built.
/// -   BRepBuilderAPI_EmptyShell No initialization of
/// the algorithm: only an empty constructor was used.
/// -   BRepBuilderAPI_DisconnectedShell not yet used
/// -   BRepBuilderAPI_ShellParametersOutOfRange
/// The parameters given to limit the surface are out of its bounds.
/// </summary>
public enum class BRepBuilderAPI_ShellError
{
    ShellDone = 0,
    EmptyShell = 1,
    DisconnectedShell = 2,
    ShellParametersOutOfRange = 3
}; // enum  class BRepBuilderAPI_ShellError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_WireError
//---------------------------------------------------------------------
/// <summary>
/// Indicates the outcome of wire
/// construction, i.e. whether it is successful or not, as explained below:
/// -      BRepBuilderAPI_WireDone No
/// error occurred. The wire is correctly built.
/// -      BRepBuilderAPI_EmptyWire No
/// initialization of the algorithm. Only an empty constructor was used.
/// -      BRepBuilderAPI_DisconnectedWire
/// The last edge which you attempted to add was not connected to the wire.
/// -      BRepBuilderAPI_NonManifoldWire
/// The wire with some singularity.
/// </summary>
public enum class BRepBuilderAPI_WireError
{
    WireDone = 0,
    EmptyWire = 1,
    DisconnectedWire = 2,
    NonManifoldWire = 3
}; // enum  class BRepBuilderAPI_WireError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_PipeError
//---------------------------------------------------------------------
/// <summary>
/// Errors that can occur at (shell)pipe construction.
/// </summary>
public enum class BRepBuilderAPI_PipeError
{
    PipeDone = 0,
    PipeNotDone = 1,
    PlaneNotIntersectGuide = 2,
    ImpossibleContact = 3
}; // enum  class BRepBuilderAPI_PipeError

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_ShapeModification
//---------------------------------------------------------------------
/// <summary>
/// Lists the possible types of modification to a shape
/// following a topological operation: Preserved, Deleted,
/// Trimmed, Merged or BoundaryModified.
/// This enumeration enables you to assign a "state" to the
/// different shapes that are on the list of operands for
/// each API function. The MakeShape class then uses this
/// to determine what has happened to the shapes which
/// constitute the list of operands.
/// </summary>
public enum class BRepBuilderAPI_ShapeModification
{
    Preserved = 0,
    Deleted = 1,
    Trimmed = 2,
    Merged = 3,
    BoundaryModified = 4
}; // enum  class BRepBuilderAPI_ShapeModification

//---------------------------------------------------------------------
//  Enum  BRepBuilderAPI_TransitionMode
//---------------------------------------------------------------------
/// <summary>
/// Option to manage  discontinuities in  Sweep
/// </summary>
public enum class BRepBuilderAPI_TransitionMode
{
    Transformed = 0,
    RightCorner = 1,
    RoundCorner = 2
}; // enum  class BRepBuilderAPI_TransitionMode

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_BndBoxTree
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_BndBoxTree sealed
    : public Macad::Occt::BaseClass<::BRepBuilderAPI_BndBoxTree>
{

#ifdef Include_BRepBuilderAPI_BndBoxTree_h
public:
    Include_BRepBuilderAPI_BndBoxTree_h
#endif

public:
    BRepBuilderAPI_BndBoxTree(::BRepBuilderAPI_BndBoxTree* nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_BndBoxTree>( nativeInstance, true )
    {}

    BRepBuilderAPI_BndBoxTree(::BRepBuilderAPI_BndBoxTree& nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_BndBoxTree>( &nativeInstance, false )
    {}

    property ::BRepBuilderAPI_BndBoxTree* NativeInstance
    {
        ::BRepBuilderAPI_BndBoxTree* get()
        {
            return static_cast<::BRepBuilderAPI_BndBoxTree*>(_NativeInstance);
        }
    }

public:
    BRepBuilderAPI_BndBoxTree();
    BRepBuilderAPI_BndBoxTree(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    bool Add(int theObj, Macad::Occt::Bnd_Box^ theBnd);
    /* Method skipped due to unknown mapping: int Select(Selector theSelector, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ aNewAlloc);
    void Clear();
    bool IsEmpty();
    /* Method skipped due to unknown mapping: TreeNode Root() */
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
}; // class BRepBuilderAPI_BndBoxTree

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI
//---------------------------------------------------------------------
/// <summary>
/// The  BRepBuilderAPI  package   provides  an   Application
/// Programming Interface  for the BRep  topology data
/// structure.
/// 
/// The API is a set of classes aiming to provide :
/// 
/// * High level and simple calls  for the most common
/// operations.
/// 
/// *    Keeping   an   access  on    the    low-level
/// implementation of high-level calls.
/// 
/// * Examples  of programming of high-level operations
/// from low-level operations.
/// 
/// * A complete coverage of modelling :
/// 
/// - Creating vertices ,edges, faces, solids.
/// 
/// - Sweeping operations.
/// 
/// - Boolean operations.
/// 
/// - Global properties computation.
/// 
/// The API provides  classes to  build  objects:
/// 
/// * The  constructors  of the classes  provides  the
/// different constructions methods.
/// 
/// * The  class keeps as fields the   different tools
/// used to build the object.
/// 
/// *   The class  provides  a  casting  method to get
/// automatically the  result  with  a   function-like
/// call.
/// 
/// For example to make a  vertex <V> from a point <P>
/// one can writes :
/// 
/// V = BRepBuilderAPI_MakeVertex(P);
/// 
/// or
/// 
/// BRepBuilderAPI_MakeVertex MV(P);
/// V = MV.Vertex();
/// 
/// For tolerances  a default precision is  used which
/// can    be   changed    by    the   packahe  method
/// BRepBuilderAPI::Precision.
/// 
/// For error handling the BRepBuilderAPI commands raise only
/// the NotDone error. When Done is false on a command
/// the error description can be asked to the command.
/// 
/// In theory the commands can be called with any
/// arguments, argument checking is performed by the
/// command.
/// </summary>
public ref class BRepBuilderAPI sealed
    : public Macad::Occt::BaseClass<::BRepBuilderAPI>
{

#ifdef Include_BRepBuilderAPI_h
public:
    Include_BRepBuilderAPI_h
#endif

public:
    BRepBuilderAPI(::BRepBuilderAPI* nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI>( nativeInstance, true )
    {}

    BRepBuilderAPI(::BRepBuilderAPI& nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI>( &nativeInstance, false )
    {}

    property ::BRepBuilderAPI* NativeInstance
    {
        ::BRepBuilderAPI* get()
        {
            return static_cast<::BRepBuilderAPI*>(_NativeInstance);
        }
    }

public:
    BRepBuilderAPI();
    /// <summary>
    /// Sets    the current plane.
    /// </summary>
    static void Plane(Macad::Occt::Geom_Plane^ P);
    /// <summary>
    /// Returns the current plane.
    /// </summary>
    static Macad::Occt::Geom_Plane^ Plane();
    /// <summary>
    /// Sets the default precision.  The current Precision
    /// is returned.
    /// </summary>
    static void Precision(double P);
    /// <summary>
    /// Returns the default precision.
    /// </summary>
    static double Precision();
}; // class BRepBuilderAPI

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_VertexInspector
//---------------------------------------------------------------------
/// <summary>
/// Class BRepBuilderAPI_VertexInspector
/// derived from NCollection_CellFilter_InspectorXYZ
/// This class define the Inspector interface for CellFilter algorithm,
/// working with gp_XYZ points in 3d space.
/// Used in search of coincidence points with a certain tolerance.
/// </summary>
public ref class BRepBuilderAPI_VertexInspector sealed
    : public Macad::Occt::BaseClass<::BRepBuilderAPI_VertexInspector>
{

#ifdef Include_BRepBuilderAPI_VertexInspector_h
public:
    Include_BRepBuilderAPI_VertexInspector_h
#endif

public:
    BRepBuilderAPI_VertexInspector(::BRepBuilderAPI_VertexInspector* nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_VertexInspector>( nativeInstance, true )
    {}

    BRepBuilderAPI_VertexInspector(::BRepBuilderAPI_VertexInspector& nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_VertexInspector>( &nativeInstance, false )
    {}

    property ::BRepBuilderAPI_VertexInspector* NativeInstance
    {
        ::BRepBuilderAPI_VertexInspector* get()
        {
            return static_cast<::BRepBuilderAPI_VertexInspector*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor; remembers the tolerance
    /// </summary>
    BRepBuilderAPI_VertexInspector(double theTol);
    /// <summary>
    /// Keep the points used for comparison
    /// </summary>
    void Add(Macad::Occt::XYZ thePnt);
    /// <summary>
    /// Clear the list of adjacent points
    /// </summary>
    void ClearResList();
    /// <summary>
    /// Set current point to search for coincidence
    /// </summary>
    void SetCurrent(Macad::Occt::XYZ theCurPnt);
    /// <summary>
    /// Get list of indexes of points adjacent with the current
    /// </summary>
    Macad::Occt::TColStd_ListOfInteger^ ResInd();
    /// <summary>
    /// Implementation of inspection method
    /// </summary>
    Macad::Occt::NCollection_CellFilter_Action Inspect(int theTarget);
}; // class BRepBuilderAPI_VertexInspector

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Command
//---------------------------------------------------------------------
/// <summary>
/// Root class for all commands in BRepBuilderAPI.
/// 
/// Provides :
/// 
/// * Managements of the notDone flag.
/// 
/// * Catching of exceptions (not implemented).
/// 
/// * Logging (not implemented).
/// </summary>
public ref class BRepBuilderAPI_Command
    : public Macad::Occt::BaseClass<::BRepBuilderAPI_Command>
{

#ifdef Include_BRepBuilderAPI_Command_h
public:
    Include_BRepBuilderAPI_Command_h
#endif

protected:
    BRepBuilderAPI_Command(InitMode init)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_Command>( init )
    {}

public:
    BRepBuilderAPI_Command(::BRepBuilderAPI_Command* nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_Command>( nativeInstance, true )
    {}

    BRepBuilderAPI_Command(::BRepBuilderAPI_Command& nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_Command>( &nativeInstance, false )
    {}

    property ::BRepBuilderAPI_Command* NativeInstance
    {
        ::BRepBuilderAPI_Command* get()
        {
            return static_cast<::BRepBuilderAPI_Command*>(_NativeInstance);
        }
    }

public:
    bool IsDone();
    /// <summary>
    /// Raises NotDone if done is false.
    /// </summary>
    void Check();
}; // class BRepBuilderAPI_Command

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Collect
//---------------------------------------------------------------------
public ref class BRepBuilderAPI_Collect sealed
    : public Macad::Occt::BaseClass<::BRepBuilderAPI_Collect>
{

#ifdef Include_BRepBuilderAPI_Collect_h
public:
    Include_BRepBuilderAPI_Collect_h
#endif

public:
    BRepBuilderAPI_Collect(::BRepBuilderAPI_Collect* nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_Collect>( nativeInstance, true )
    {}

    BRepBuilderAPI_Collect(::BRepBuilderAPI_Collect& nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_Collect>( &nativeInstance, false )
    {}

    property ::BRepBuilderAPI_Collect* NativeInstance
    {
        ::BRepBuilderAPI_Collect* get()
        {
            return static_cast<::BRepBuilderAPI_Collect*>(_NativeInstance);
        }
    }

public:
    BRepBuilderAPI_Collect();
    void Add(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepBuilderAPI_MakeShape^ MKS);
    void AddGenerated(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ Gen);
    void AddModif(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ Mod);
    void Filter(Macad::Occt::TopoDS_Shape^ SF);
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Modification();
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Generated();
}; // class BRepBuilderAPI_Collect

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShape
//---------------------------------------------------------------------
/// <summary>
/// This    is  the  root     class for     all  shape
/// constructions.  It stores the result.
/// 
/// It  provides deferred methods to trace the history
/// of sub-shapes.
/// </summary>
public ref class BRepBuilderAPI_MakeShape
    : public Macad::Occt::BRepBuilderAPI_Command
{

#ifdef Include_BRepBuilderAPI_MakeShape_h
public:
    Include_BRepBuilderAPI_MakeShape_h
#endif

protected:
    BRepBuilderAPI_MakeShape(InitMode init)
        : Macad::Occt::BRepBuilderAPI_Command( init )
    {}

public:
    BRepBuilderAPI_MakeShape(::BRepBuilderAPI_MakeShape* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_Command( nativeInstance )
    {}

    BRepBuilderAPI_MakeShape(::BRepBuilderAPI_MakeShape& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_Command( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeShape* NativeInstance
    {
        ::BRepBuilderAPI_MakeShape* get()
        {
            return static_cast<::BRepBuilderAPI_MakeShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// This is  called by  Shape().  It does  nothing but
    /// may be redefined.
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// This is  called by  Shape().  It does  nothing but
    /// may be redefined.
    /// </summary>
    void Build();
    /// <summary>
    /// Returns a shape built by the shape construction algorithm.
    /// Raises exception StdFail_NotDone if the shape was not built.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Returns the  list   of shapes generated   from the
    /// shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns true if the shape S has been deleted.
    /// </summary>
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_MakeShape

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_ModifyShape
//---------------------------------------------------------------------
/// <summary>
/// Implements   the  methods   of MakeShape for   the
/// constant  topology modifications.  The methods are
/// implemented  when the modification uses a Modifier
/// from BRepTools. Some of  them have to be redefined
/// if  the  modification is  implemented with another
/// tool (see Transform from BRepBuilderAPI for example).
/// The BRepBuilderAPI package provides the following
/// frameworks to perform modifications of this sort:
/// -   BRepBuilderAPI_Copy to produce the copy of a shape,
/// -   BRepBuilderAPI_Transform and
/// BRepBuilderAPI_GTransform to apply a geometric
/// transformation to a shape,
/// -   BRepBuilderAPI_NurbsConvert to convert the
/// whole geometry of a shape into NURBS geometry,
/// -   BRepOffsetAPI_DraftAngle to build a tapered shape.
/// </summary>
public ref class BRepBuilderAPI_ModifyShape
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_ModifyShape_h
public:
    Include_BRepBuilderAPI_ModifyShape_h
#endif

protected:
    BRepBuilderAPI_ModifyShape(InitMode init)
        : Macad::Occt::BRepBuilderAPI_MakeShape( init )
    {}

public:
    BRepBuilderAPI_ModifyShape(::BRepBuilderAPI_ModifyShape* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_ModifyShape(::BRepBuilderAPI_ModifyShape& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_ModifyShape* NativeInstance
    {
        ::BRepBuilderAPI_ModifyShape* get()
        {
            return static_cast<::BRepBuilderAPI_ModifyShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the modified shape corresponding to <S>.
    /// S can correspond to the entire initial shape or to its subshape.
    /// Exceptions
    /// Standard_NoSuchObject if S is not the initial shape or
    /// a subshape of the initial shape to which the
    /// transformation has been applied. Raises NoSuchObject from Standard
    /// if S is not the initial shape or a sub-shape
    /// of the initial shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_ModifyShape

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Copy
//---------------------------------------------------------------------
/// <summary>
/// Duplication of a shape.
/// A Copy object provides a framework for:
/// -   defining the construction of a duplicate shape,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class BRepBuilderAPI_Copy sealed
    : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepBuilderAPI_Copy_h
public:
    Include_BRepBuilderAPI_Copy_h
#endif

public:
    BRepBuilderAPI_Copy(::BRepBuilderAPI_Copy* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    BRepBuilderAPI_Copy(::BRepBuilderAPI_Copy& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_Copy* NativeInstance
    {
        ::BRepBuilderAPI_Copy* get()
        {
            return static_cast<::BRepBuilderAPI_Copy*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty copy framework. Use the function
    /// Perform to copy shapes.
    /// </summary>
    BRepBuilderAPI_Copy();
    /// <summary>
    /// Constructs a copy framework and copies the shape S.
    /// Use the function Shape to access the result.
    /// If copyMesh is True, triangulation contained in original shape will be
    /// copied along with geometry (by default, triangulation gets lost).
    /// If copyGeom is False, only topological objects will be copied, while
    /// geometry and triangulation will be shared with original shape.
    /// Note: the constructed framework can be reused to copy
    /// other shapes: just specify them with the function Perform.
    /// </summary>
    BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S, bool copyGeom, bool copyMesh);
    /// <summary>
    /// Constructs a copy framework and copies the shape S.
    /// Use the function Shape to access the result.
    /// If copyMesh is True, triangulation contained in original shape will be
    /// copied along with geometry (by default, triangulation gets lost).
    /// If copyGeom is False, only topological objects will be copied, while
    /// geometry and triangulation will be shared with original shape.
    /// Note: the constructed framework can be reused to copy
    /// other shapes: just specify them with the function Perform.
    /// </summary>
    BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S, bool copyGeom);
    /// <summary>
    /// Constructs a copy framework and copies the shape S.
    /// Use the function Shape to access the result.
    /// If copyMesh is True, triangulation contained in original shape will be
    /// copied along with geometry (by default, triangulation gets lost).
    /// If copyGeom is False, only topological objects will be copied, while
    /// geometry and triangulation will be shared with original shape.
    /// Note: the constructed framework can be reused to copy
    /// other shapes: just specify them with the function Perform.
    /// </summary>
    BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Copies the shape S.
    /// Use the function Shape to access the result.
    /// If copyMesh is True, triangulation contained in original shape will be
    /// copied along with geometry (by default, triangulation gets lost).
    /// If copyGeom is False, only topological objects will be copied, while
    /// geometry and triangulation will be shared with original shape.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ S, bool copyGeom, bool copyMesh);
    /// <summary>
    /// Copies the shape S.
    /// Use the function Shape to access the result.
    /// If copyMesh is True, triangulation contained in original shape will be
    /// copied along with geometry (by default, triangulation gets lost).
    /// If copyGeom is False, only topological objects will be copied, while
    /// geometry and triangulation will be shared with original shape.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ S, bool copyGeom);
    /// <summary>
    /// Copies the shape S.
    /// Use the function Shape to access the result.
    /// If copyMesh is True, triangulation contained in original shape will be
    /// copied along with geometry (by default, triangulation gets lost).
    /// If copyGeom is False, only topological objects will be copied, while
    /// geometry and triangulation will be shared with original shape.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_Copy

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_FastSewing
//---------------------------------------------------------------------
/// <summary>
/// This class performs fast sewing of surfaces (faces). It supposes
/// that all surfaces are finite and are naturally restricted by their bounds.
/// Moreover, it supposes that stitched together surfaces have the same parameterization
/// along common boundaries, therefore it does not perform time-consuming check for
/// SameParameter property of edges.
/// 
/// For sewing, use this function as following:
/// - set tolerance value (default tolerance is 1.E-06)
/// - add all necessary surfaces (faces)
/// - check status if adding is correctly completed.
/// - compute -> Perform
/// - retrieve the error status if any
/// - retrieve the resulted shape
/// </summary>
public ref class BRepBuilderAPI_FastSewing sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepBuilderAPI_FastSewing_h
public:
    Include_BRepBuilderAPI_FastSewing_h
#endif

public:
    BRepBuilderAPI_FastSewing(::BRepBuilderAPI_FastSewing* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepBuilderAPI_FastSewing(::BRepBuilderAPI_FastSewing& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepBuilderAPI_FastSewing* NativeInstance
    {
        ::BRepBuilderAPI_FastSewing* get()
        {
            return static_cast<::BRepBuilderAPI_FastSewing*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  FS_Statuses
    //---------------------------------------------------------------------
    /// <summary>
    /// Enumeration of result statuses
    /// </summary>
    enum class FS_Statuses
    {
        OK = 0,
        Degenerated = 1,
        FindVertexError = 2,
        FindEdgeError = 4,
        FaceWithNullSurface = 8,
        NotNaturalBoundsFace = 16,
        InfiniteSurface = 32,
        EmptyInput = 64,
        Exception = 128
    }; // enum  class FS_Statuses

    /// <summary>
    /// Creates an object with tolerance of connexity
    /// </summary>
    BRepBuilderAPI_FastSewing(double theTolerance);
    /// <summary>
    /// Creates an object with tolerance of connexity
    /// </summary>
    BRepBuilderAPI_FastSewing();
    /// <summary>
    /// Adds faces of a shape
    /// </summary>
    bool Add(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Adds a surface
    /// </summary>
    bool Add(Macad::Occt::Geom_Surface^ theSurface);
    /// <summary>
    /// Compute resulted shape
    /// </summary>
    void Perform();
    /// <summary>
    /// Sets tolerance
    /// </summary>
    void SetTolerance(double theToler);
    /// <summary>
    /// Returns tolerance
    /// </summary>
    double GetTolerance();
    /// <summary>
    /// Returns resulted shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetResult();
    /// <summary>
    /// Returns list of statuses. Print message if theOS != 0
    /// </summary>
    unsigned int GetStatuses(System::IO::TextWriter^ theOS);
    /// <summary>
    /// Returns list of statuses. Print message if theOS != 0
    /// </summary>
    unsigned int GetStatuses();
    static Macad::Occt::BRepBuilderAPI_FastSewing^ CreateDowncasted(::BRepBuilderAPI_FastSewing* instance);
}; // class BRepBuilderAPI_FastSewing

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_FindPlane
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to find the plane in which the edges
/// of a given shape are located.
/// A FindPlane object provides a framework for:
/// -   extracting the edges of a given shape,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class BRepBuilderAPI_FindPlane sealed
    : public Macad::Occt::BaseClass<::BRepBuilderAPI_FindPlane>
{

#ifdef Include_BRepBuilderAPI_FindPlane_h
public:
    Include_BRepBuilderAPI_FindPlane_h
#endif

public:
    BRepBuilderAPI_FindPlane(::BRepBuilderAPI_FindPlane* nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_FindPlane>( nativeInstance, true )
    {}

    BRepBuilderAPI_FindPlane(::BRepBuilderAPI_FindPlane& nativeInstance)
        : Macad::Occt::BaseClass<::BRepBuilderAPI_FindPlane>( &nativeInstance, false )
    {}

    property ::BRepBuilderAPI_FindPlane* NativeInstance
    {
        ::BRepBuilderAPI_FindPlane* get()
        {
            return static_cast<::BRepBuilderAPI_FindPlane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an empty algorithm. The function Init is then used to define the shape.
    /// </summary>
    BRepBuilderAPI_FindPlane();
    /// <summary>
    /// Constructs the plane containing the edges of the shape S.
    /// A plane is built only if all the edges are within a distance
    /// of less than or equal to tolerance from a planar surface.
    /// This tolerance value is equal to the larger of the following two values:
    /// -   Tol, where the default value is negative, or
    /// -   the largest of the tolerance values assigned to the individual edges of S.
    /// Use the function Found to verify that a plane is built.
    /// The resulting plane is then retrieved using the function Plane.
    /// </summary>
    BRepBuilderAPI_FindPlane(Macad::Occt::TopoDS_Shape^ S, double Tol);
    /// <summary>
    /// Constructs the plane containing the edges of the shape S.
    /// A plane is built only if all the edges are within a distance
    /// of less than or equal to tolerance from a planar surface.
    /// This tolerance value is equal to the larger of the following two values:
    /// -   Tol, where the default value is negative, or
    /// -   the largest of the tolerance values assigned to the individual edges of S.
    /// Use the function Found to verify that a plane is built.
    /// The resulting plane is then retrieved using the function Plane.
    /// </summary>
    BRepBuilderAPI_FindPlane(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Constructs the plane containing the edges of the shape S.
    /// A plane is built only if all the edges are within a distance
    /// of less than or equal to tolerance from a planar surface.
    /// This tolerance value is equal to the larger of the following two values:
    /// -   Tol, where the default value is negative, or
    /// -   the largest of the tolerance values assigned to the individual edges of S.
    /// Use the function Found to verify that a plane is built.
    /// The resulting plane is then retrieved using the function Plane.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S, double Tol);
    /// <summary>
    /// Constructs the plane containing the edges of the shape S.
    /// A plane is built only if all the edges are within a distance
    /// of less than or equal to tolerance from a planar surface.
    /// This tolerance value is equal to the larger of the following two values:
    /// -   Tol, where the default value is negative, or
    /// -   the largest of the tolerance values assigned to the individual edges of S.
    /// Use the function Found to verify that a plane is built.
    /// The resulting plane is then retrieved using the function Plane.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns true if a plane containing the edges of the
    /// shape is found and built. Use the function Plane to consult the result.
    /// </summary>
    bool Found();
    /// <summary>
    /// Returns the plane containing the edges of the shape.
    /// Warning
    /// Use the function Found to verify that the plane is built. If
    /// a plane is not found, Plane returns a null handle.
    /// </summary>
    Macad::Occt::Geom_Plane^ Plane();
}; // class BRepBuilderAPI_FindPlane

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_GTransform
//---------------------------------------------------------------------
/// <summary>
/// Geometric transformation on a shape.
/// The transformation to be applied is defined as a gp_GTrsf
/// transformation. It may be:
/// -      a transformation equivalent to a gp_Trsf transformation, the
/// most common case: you should , however, use a BRepAPI_Transform
/// object to perform this kind of transformation; or
/// -      an affinity, or
/// -      more generally, any type of point transformation which may
/// be defined by a three row, four column matrix of transformation.
/// In the last two cases, the underlying geometry of the
/// following shapes may change:
/// -      a curve which supports an edge of the shape, or
/// -      a surface which supports a face of the shape;
/// For example, a circle may be transformed into an ellipse when
/// applying an affinity transformation.
/// The transformation is applied to:
/// -      all the curves which support edges of the shape, and
/// -      all the surfaces which support faces of the shape.
/// A GTransform object provides a framework for:
/// -      defining the geometric transformation to be applied,
/// -      implementing the transformation algorithm, and
/// -      consulting the result.
/// </summary>
public ref class BRepBuilderAPI_GTransform sealed
    : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepBuilderAPI_GTransform_h
public:
    Include_BRepBuilderAPI_GTransform_h
#endif

public:
    BRepBuilderAPI_GTransform(::BRepBuilderAPI_GTransform* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    BRepBuilderAPI_GTransform(::BRepBuilderAPI_GTransform& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_GTransform* NativeInstance
    {
        ::BRepBuilderAPI_GTransform* get()
        {
            return static_cast<::BRepBuilderAPI_GTransform*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a framework for applying the geometric
    /// transformation T to a shape. Use the function
    /// Perform to define the shape to transform.
    /// </summary>
    BRepBuilderAPI_GTransform(Macad::Occt::gp_GTrsf^ T);
    /// <summary>
    /// Constructs a framework for applying the geometric
    /// transformation T to a shape, and applies it to the shape S.
    /// -   If the transformation T is direct and isometric (i.e. if
    /// the determinant of the vectorial part of T is equal to
    /// 1.), and if Copy equals false (default value), the
    /// resulting shape is the same as the original but with
    /// a new location assigned to it.
    /// -   In all other cases, the transformation is applied to
    /// a duplicate of S.
    /// Use the function Shape to access the result.
    /// Note: the constructed framework can be reused to
    /// apply the same geometric transformation to other
    /// shapes: just specify them with the function Perform.
    /// </summary>
    BRepBuilderAPI_GTransform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::gp_GTrsf^ T, bool Copy);
    /// <summary>
    /// Constructs a framework for applying the geometric
    /// transformation T to a shape, and applies it to the shape S.
    /// -   If the transformation T is direct and isometric (i.e. if
    /// the determinant of the vectorial part of T is equal to
    /// 1.), and if Copy equals false (default value), the
    /// resulting shape is the same as the original but with
    /// a new location assigned to it.
    /// -   In all other cases, the transformation is applied to
    /// a duplicate of S.
    /// Use the function Shape to access the result.
    /// Note: the constructed framework can be reused to
    /// apply the same geometric transformation to other
    /// shapes: just specify them with the function Perform.
    /// </summary>
    BRepBuilderAPI_GTransform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::gp_GTrsf^ T);
    /// <summary>
    /// Applies the geometric transformation defined at the
    /// time of construction of this framework to the shape S.
    /// -   If the transformation T is direct and isometric (i.e. if
    /// the determinant of the vectorial part of T is equal to
    /// 1.), and if Copy equals false (default value), the
    /// resulting shape is the same as the original but with
    /// a new location assigned to it.
    /// -   In all other cases, the transformation is applied to a duplicate of S.
    /// Use the function Shape to access the result.
    /// Note: this framework can be reused to apply the same
    /// geometric transformation to other shapes: just specify
    /// them by calling the function Perform again.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ S, bool Copy);
    /// <summary>
    /// Applies the geometric transformation defined at the
    /// time of construction of this framework to the shape S.
    /// -   If the transformation T is direct and isometric (i.e. if
    /// the determinant of the vectorial part of T is equal to
    /// 1.), and if Copy equals false (default value), the
    /// resulting shape is the same as the original but with
    /// a new location assigned to it.
    /// -   In all other cases, the transformation is applied to a duplicate of S.
    /// Use the function Shape to access the result.
    /// Note: this framework can be reused to apply the same
    /// geometric transformation to other shapes: just specify
    /// them by calling the function Perform again.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the modified shape corresponding to <S>.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_GTransform

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeEdge
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
public ref class BRepBuilderAPI_MakeEdge sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeEdge_h
public:
    Include_BRepBuilderAPI_MakeEdge_h
#endif

public:
    BRepBuilderAPI_MakeEdge(::BRepBuilderAPI_MakeEdge* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakeEdge(::BRepBuilderAPI_MakeEdge& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeEdge* NativeInstance
    {
        ::BRepBuilderAPI_MakeEdge* get()
        {
            return static_cast<::BRepBuilderAPI_MakeEdge*>(_NativeInstance);
        }
    }

public:
    BRepBuilderAPI_MakeEdge();
    BRepBuilderAPI_MakeEdge(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, double p1, double p2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2);
    /// <summary>
    /// The general method to directly create an edge is to give
    /// -      a 3D curve C as the support (geometric domain) of the edge,
    /// -      two vertices V1 and V2 to limit the curve (definition of the restriction of
    /// the edge), and
    /// -      two real values p1 and p2 which are the parameters for the vertices V1 and V2
    /// on the curve.
    /// The curve may be defined as a 2d curve in the parametric space of a surface: a
    /// pcurve. The surface on which the edge is built is then kept at the level of the edge.
    /// The default tolerance will be associated with this edge.
    /// Rules applied to the arguments:
    /// For the curve:
    /// -      The curve must not be a 'null handle'.
    /// -      If the curve is a trimmed curve the basis curve is used.
    /// For the vertices:
    /// -      Vertices may be null shapes. When V1 or V2 is null the edge is open in the
    /// corresponding direction and the parameter value p1 or p2 must be infinite
    /// (remember that Precision::Infinite() defines an infinite value).
    /// -      The two vertices must be identical if they have the same 3D location.
    /// Identical vertices are used in particular when the curve is closed.
    /// For the parameters:
    /// -      The parameters must be in the parametric range of the curve (or the basis
    /// curve if the curve is trimmed). If this condition is not satisfied the edge is not
    /// built, and the Error function will return BRepAPI_ParameterOutOfRange.
    /// -      Parameter values must not be equal. If this condition is not satisfied (i.e.
    /// if | p1 - p2 | ) the edge is not built, and the Error function will return
    /// BRepAPI_LineThroughIdenticPoints.
    /// Parameter values are expected to be given in increasing order:
    /// C->FirstParameter()
    /// - If the parameter values are given in decreasing order the vertices are switched,
    /// i.e. the "first vertex" is on the point of parameter p2 and the "second vertex" is
    /// on the point of parameter p1. In such a case, to keep the original intent of the
    /// construction, the edge will be oriented "reversed".
    /// - On a periodic curve the parameter values p1 and p2 are adjusted by adding or
    /// subtracting the period to obtain p1 in the parametric range of the curve, and p2]
    /// such that [ p1 , where Period is the period of the curve.
    /// - A parameter value may be infinite. The edge is open in the corresponding
    /// direction. However the corresponding vertex must be a null shape. If this condition
    /// is not satisfied the edge is not built, and the Error function will return
    /// BRepAPI_PointWithInfiniteParameter.
    /// - The distance between the vertex and the point evaluated on the curve with the
    /// parameter, must be lower than the precision of the vertex. If this condition is not
    /// satisfied the edge is not built, and the Error function will return
    /// BRepAPI_DifferentsPointAndParameter.
    /// Other edge constructions
    /// - The parameter values can be omitted, they will be computed by projecting the
    /// vertices on the curve. Note that projection is the only way to evaluate the
    /// parameter values of the vertices on the curve: vertices must be given on the curve,
    /// i.e. the distance from a vertex to the curve must be less than or equal to the
    /// precision of the vertex. If this condition is not satisfied the edge is not built,
    /// and the Error function will return BRepAPI_PointProjectionFailed.
    /// -      3D points can be given in place of vertices. Vertices will be created from the
    /// points (with the default topological precision Precision::Confusion()).
    /// Note:
    /// -      Giving vertices is useful when creating a connected edge.
    /// -      If the parameter values correspond to the extremities of a closed curve,
    /// points must be identical, or at least coincident. If this condition is not
    /// satisfied the edge is not built, and the Error function will return
    /// BRepAPI_DifferentPointsOnClosedCurve.
    /// -      The vertices or points can be omitted if the parameter values are given. The
    /// points will be computed from the parameters on the curve.
    /// The vertices or points and the parameter values can be omitted. The first and last
    /// parameters of the curve will then be used.
    /// 
    /// Auxiliary methods
    /// </summary>
    BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
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
    /// <summary>
    /// Defines or redefines the arguments for the construction of an edge.
    /// This function is currently used after the empty constructor BRepAPI_MakeEdge().
    /// </summary>
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    /// <summary>
    /// Returns true if the edge is built.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the construction status
    /// -   BRepBuilderAPI_EdgeDone if the edge is built, or
    /// -   another value of the BRepBuilderAPI_EdgeError
    /// enumeration indicating the reason of construction failure.
    /// </summary>
    Macad::Occt::BRepBuilderAPI_EdgeError Error();
    /// <summary>
    /// Returns the constructed edge.
    /// Exceptions StdFail_NotDone if the edge is not built.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the first vertex of the edge. May be Null.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex1();
    /// <summary>
    /// Returns the second vertex of the edge. May be Null.
    /// 
    /// Warning
    /// The returned vertex in each function corresponds respectively to
    /// -   the lowest, or
    /// -   the highest parameter on the curve along which the edge is built.
    /// It does not correspond to the first or second vertex
    /// given at the time of the construction, if the edge is oriented reversed.
    /// Exceptions
    /// StdFail_NotDone if the edge is not built.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex2();
}; // class BRepBuilderAPI_MakeEdge

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeEdge2d
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
public ref class BRepBuilderAPI_MakeEdge2d sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeEdge2d_h
public:
    Include_BRepBuilderAPI_MakeEdge2d_h
#endif

public:
    BRepBuilderAPI_MakeEdge2d(::BRepBuilderAPI_MakeEdge2d* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakeEdge2d(::BRepBuilderAPI_MakeEdge2d& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeEdge2d* NativeInstance
    {
        ::BRepBuilderAPI_MakeEdge2d* get()
        {
            return static_cast<::BRepBuilderAPI_MakeEdge2d*>(_NativeInstance);
        }
    }

public:
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, double p1, double p2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2);
    BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C);
    void Init(Macad::Occt::Geom2d_Curve^ C, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2);
    void Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2);
    bool IsDone();
    /// <summary>
    /// Returns the error description when NotDone.
    /// </summary>
    Macad::Occt::BRepBuilderAPI_EdgeError Error();
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the first vertex of the edge. May be Null.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex1();
    /// <summary>
    /// Returns the second vertex of the edge. May be Null.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex2();
}; // class BRepBuilderAPI_MakeEdge2d

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeFace
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
public ref class BRepBuilderAPI_MakeFace sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeFace_h
public:
    Include_BRepBuilderAPI_MakeFace_h
#endif

public:
    BRepBuilderAPI_MakeFace(::BRepBuilderAPI_MakeFace* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakeFace(::BRepBuilderAPI_MakeFace& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeFace* NativeInstance
    {
        ::BRepBuilderAPI_MakeFace* get()
        {
            return static_cast<::BRepBuilderAPI_MakeFace*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Not done.
    /// </summary>
    BRepBuilderAPI_MakeFace();
    /// <summary>
    /// Load a face. useful to add wires.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Make a face from a plane.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::Pln P);
    /// <summary>
    /// Make a face from a cylinder.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C);
    /// <summary>
    /// Make a face from a cone.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C);
    /// <summary>
    /// Make a face from a sphere.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S);
    /// <summary>
    /// Make a face from a torus.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C);
    /// <summary>
    /// Make a face from a Surface. Accepts tolerance value (TolDegen)
    /// for resolution of degenerated edges.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, double TolDegen);
    /// <summary>
    /// Make a face from a plane.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a cylinder.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a cone.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a sphere.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a torus.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Make a face from a Surface. Accepts tolerance value (TolDegen)
    /// for resolution of degenerated edges.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen);
    /// <summary>
    /// Find a surface from the wire and make a face.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Wire^ W, bool OnlyPlane);
    /// <summary>
    /// Find a surface from the wire and make a face.
    /// if <OnlyPlane> is true, the computed surface will be
    /// a plane. If it is not possible to find a plane, the
    /// flag NotDone will be set.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a plane and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a plane and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a cylinder and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a cylinder and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a cone and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a cone and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a sphere and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a sphere and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a torus and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a torus and a wire.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Make a face from a Surface and a wire.
    /// If the surface S is not plane,
    /// it must contain pcurves for all edges in W,
    /// otherwise the wrong shape will be created.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside);
    /// <summary>
    /// Make a face from a Surface and a wire.
    /// If the surface S is not plane,
    /// it must contain pcurves for all edges in W,
    /// otherwise the wrong shape will be created.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Adds the wire <W> in the face <F>
    /// A general method to create a face is to give
    /// -      a surface S as the support (the geometric domain) of the face,
    /// -      and a wire W to bound it.
    /// The bounds of the face can also be defined by four parameter values
    /// umin, umax, vmin, vmax which determine isoparametric limitations on
    /// the parametric space of the surface. In this way, a patch is
    /// defined. The parameter values are optional. If they are omitted, the
    /// natural bounds of the surface are used. A wire is automatically
    /// built using the defined bounds. Up to four edges and four vertices
    /// are created with this wire (no edge is created when the
    /// corresponding parameter value is infinite).
    /// Wires can then be added using the function Add to define other
    /// restrictions on the face. These restrictions represent holes. More
    /// than one wire may be added by this way, provided that the wires do
    /// not cross each other and that they define only one area on the
    /// surface. (Be careful, however, as this is not checked).
    /// Forbidden addition of wires
    /// Note that in this schema, the third case is valid if edges of the
    /// wire W are declared internal to the face. As a result, these edges
    /// are no longer bounds of the face.
    /// A default tolerance (Precision::Confusion()) is given to the face,
    /// this tolerance may be increased during construction of the face
    /// using various algorithms.
    /// Rules applied to the arguments
    /// For the surface:
    /// -      The surface must not be a 'null handle'.
    /// -      If the surface is a trimmed surface, the basis surface is used.
    /// -      For the wire: the wire is composed of connected edges, each
    /// edge having a parametric curve description in the parametric
    /// domain of the surface; in other words, as a pcurve.
    /// For the parameters:
    /// -      The parameter values must be in the parametric range of the
    /// surface (or the basis surface, if the surface is trimmed). If this
    /// condition is not satisfied, the face is not built, and the Error
    /// function will return BRepBuilderAPI_ParametersOutOfRange.
    /// -      The bounding parameters p1 and p2 are adjusted on a periodic
    /// surface in a given parametric direction by adding or subtracting
    /// the period to obtain p1 in the parametric range of the surface and
    /// such p2, that p2 - p1 <= Period, where Period is the period of the
    /// surface in this parametric direction.
    /// -      A parameter value may be infinite. There will be no edge and
    /// no vertex in the corresponding direction.
    /// </summary>
    BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Initializes (or reinitializes) the
    /// construction of a face by creating a new object which is a copy of
    /// the face F, in order to add wires to it, using the function Add.
    /// Note: this complete copy of the geometry is only required if you
    /// want to work on the geometries of the two faces independently.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Initializes (or reinitializes) the construction of a face on
    /// the surface S. If Bound is true, a wire is
    /// automatically created from the natural bounds of the
    /// surface S and added to the face in order to bound it. If
    /// Bound is false, no wire is added. This option is used
    /// when real bounds are known. These will be added to
    /// the face after this initialization, using the function Add.
    /// TolDegen parameter is used for resolution of degenerated edges
    /// if calculation of natural bounds is turned on.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, bool Bound, double TolDegen);
    /// <summary>
    /// Initializes (or reinitializes) the construction of a face on
    /// the surface S, limited in the u parametric direction by
    /// the two parameter values UMin and UMax and in the
    /// v parametric direction by the two parameter values VMin and VMax.
    /// Warning
    /// Error returns:
    /// -      BRepBuilderAPI_ParametersOutOfRange
    /// when the parameters given are outside the bounds of the
    /// surface or the basis surface of a trimmed surface.
    /// TolDegen parameter is used for resolution of degenerated edges.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen);
    /// <summary>
    /// Adds the wire W to the constructed face as a hole.
    /// Warning
    /// W must not cross the other bounds of the face, and all
    /// the bounds must define only one area on the surface.
    /// (Be careful, however, as this is not checked.)
    /// Example
    /// // a cylinder
    /// gp_Cylinder C = ..;
    /// // a wire
    /// TopoDS_Wire W = ...;
    /// BRepBuilderAPI_MakeFace MF(C);
    /// MF.Add(W);
    /// TopoDS_Face F = MF;
    /// </summary>
    void Add(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Returns true if this algorithm has a valid face.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the construction status
    /// BRepBuilderAPI_FaceDone if the face is built, or
    /// -   another value of the BRepBuilderAPI_FaceError
    /// enumeration indicating why the construction failed, in
    /// particular when the given parameters are outside the
    /// bounds of the surface.
    /// </summary>
    Macad::Occt::BRepBuilderAPI_FaceError Error();
    /// <summary>
    /// Returns the constructed face.
    /// Exceptions
    /// StdFail_NotDone if no face is built.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
}; // class BRepBuilderAPI_MakeFace

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakePolygon
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build polygonal wires. A
/// polygonal wire can be built from any number of points
/// or vertices, and consists of a sequence of connected
/// rectilinear edges.
/// When a point or vertex is added to the  polygon if
/// it is identic  to the previous  point no  edge  is
/// built. The method added can be used to test it.
/// Construction of a Polygonal Wire
/// You can construct:
/// -   a complete polygonal wire by defining all its points
/// or vertices (limited to four), or
/// -   an empty polygonal wire and add its points or
/// vertices in sequence (unlimited number).
/// A MakePolygon object provides a framework for:
/// -   initializing the construction of a polygonal wire,
/// -   adding points or vertices to the polygonal wire under construction, and
/// -   consulting the result.
/// </summary>
public ref class BRepBuilderAPI_MakePolygon sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakePolygon_h
public:
    Include_BRepBuilderAPI_MakePolygon_h
#endif

public:
    BRepBuilderAPI_MakePolygon(::BRepBuilderAPI_MakePolygon* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakePolygon(::BRepBuilderAPI_MakePolygon& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakePolygon* NativeInstance
    {
        ::BRepBuilderAPI_MakePolygon* get()
        {
            return static_cast<::BRepBuilderAPI_MakePolygon*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an empty polygonal wire, to which points or
    /// vertices are added using the Add function.
    /// As soon as the polygonal wire under construction
    /// contains vertices, it can be consulted using the Wire function.
    /// </summary>
    BRepBuilderAPI_MakePolygon();
    BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, bool Close);
    BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
    /// <summary>
    /// Constructs a polygonal wire from 2, 3 or 4 points. Vertices are
    /// automatically created on the given points. The polygonal wire is
    /// closed if Close is true; otherwise it is open. Further vertices can
    /// be added using the Add function. The polygonal wire under
    /// construction can be consulted at any time by using the Wire function.
    /// Example
    /// //an open polygon from four points
    /// TopoDS_Wire W = BRepBuilderAPI_MakePolygon(P1,P2,P3,P4);
    /// Warning: The process is equivalent to:
    /// - initializing an empty polygonal wire,
    /// - and adding the given points in sequence.
    /// Consequently, be careful when using this function: if the
    /// sequence of points p1 - p2 - p1 is found among the arguments of the
    /// constructor, you will create a polygonal wire with two
    /// consecutive coincident edges.
    /// </summary>
    BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4, bool Close);
    /// <summary>
    /// Constructs a polygonal wire from 2, 3 or 4 points. Vertices are
    /// automatically created on the given points. The polygonal wire is
    /// closed if Close is true; otherwise it is open. Further vertices can
    /// be added using the Add function. The polygonal wire under
    /// construction can be consulted at any time by using the Wire function.
    /// Example
    /// //an open polygon from four points
    /// TopoDS_Wire W = BRepBuilderAPI_MakePolygon(P1,P2,P3,P4);
    /// Warning: The process is equivalent to:
    /// - initializing an empty polygonal wire,
    /// - and adding the given points in sequence.
    /// Consequently, be careful when using this function: if the
    /// sequence of points p1 - p2 - p1 is found among the arguments of the
    /// constructor, you will create a polygonal wire with two
    /// consecutive coincident edges.
    /// </summary>
    BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
    BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, bool Close);
    BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3);
    /// <summary>
    /// Constructs a polygonal wire from
    /// 2, 3 or 4 vertices. The polygonal wire is closed if Close is true;
    /// otherwise it is open (default value). Further vertices can be
    /// added using the Add function. The polygonal wire under
    /// construction can be consulted at any time by using the Wire function.
    /// Example
    /// //a closed triangle from three vertices
    /// TopoDS_Wire W = BRepBuilderAPI_MakePolygon(V1,V2,V3,Standard_True);
    /// Warning
    /// The process is equivalent to:
    /// -      initializing an empty polygonal wire,
    /// -      then adding the given points in sequence.
    /// So be careful, as when using this function, you could create a
    /// polygonal wire with two consecutive coincident edges if
    /// the sequence of vertices v1 - v2 - v1 is found among the
    /// constructor's arguments.
    /// </summary>
    BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4, bool Close);
    /// <summary>
    /// Constructs a polygonal wire from
    /// 2, 3 or 4 vertices. The polygonal wire is closed if Close is true;
    /// otherwise it is open (default value). Further vertices can be
    /// added using the Add function. The polygonal wire under
    /// construction can be consulted at any time by using the Wire function.
    /// Example
    /// //a closed triangle from three vertices
    /// TopoDS_Wire W = BRepBuilderAPI_MakePolygon(V1,V2,V3,Standard_True);
    /// Warning
    /// The process is equivalent to:
    /// -      initializing an empty polygonal wire,
    /// -      then adding the given points in sequence.
    /// So be careful, as when using this function, you could create a
    /// polygonal wire with two consecutive coincident edges if
    /// the sequence of vertices v1 - v2 - v1 is found among the
    /// constructor's arguments.
    /// </summary>
    BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4);
    void Add(Macad::Occt::Pnt P);
    /// <summary>
    /// Adds the point P or the vertex V at the end of the
    /// polygonal wire under construction. A vertex is
    /// automatically created on the point P.
    /// Warning
    /// -   When P or V is coincident to the previous vertex,
    /// no edge is built. The method Added can be used to
    /// test for this. Neither P nor V is checked to verify
    /// that it is coincident with another vertex than the last
    /// one, of the polygonal wire under construction. It is
    /// also possible to add vertices on a closed polygon
    /// (built for example by using a constructor which
    /// declares the polygon closed, or after the use of the Close function).
    /// Consequently, be careful using this function: you might create:
    /// -      a polygonal wire with two consecutive coincident edges, or
    /// -      a non manifold polygonal wire.
    /// -      P or V is not checked to verify if it is
    /// coincident with another vertex but the last one, of
    /// the polygonal wire under construction. It is also
    /// possible to add vertices on a closed polygon (built
    /// for example by using a constructor which declares
    /// the polygon closed, or after the use of the Close function).
    /// Consequently, be careful when using this function: you might create:
    /// -   a polygonal wire with two consecutive coincident edges, or
    /// -   a non-manifold polygonal wire.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Returns true if the last vertex added to the constructed
    /// polygonal wire is not coincident with the previous one.
    /// </summary>
    bool Added();
    /// <summary>
    /// Closes the polygonal wire under construction. Note - this
    /// is equivalent to adding the first vertex to the polygonal
    /// wire under construction.
    /// </summary>
    void Close();
    Macad::Occt::TopoDS_Vertex^ FirstVertex();
    /// <summary>
    /// Returns the first or the last vertex of the polygonal wire under construction.
    /// If the constructed polygonal wire is closed, the first and the last vertices are identical.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ LastVertex();
    /// <summary>
    /// Returns true if this algorithm contains a valid polygonal
    /// wire (i.e. if there is at least one edge).
    /// IsDone returns false if fewer than two vertices have
    /// been chained together by this construction algorithm.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the edge built between the last two points or
    /// vertices added to the constructed polygonal wire under construction.
    /// Warning
    /// If there is only one vertex in the polygonal wire, the result is a null edge.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the constructed polygonal wire, or the already
    /// built part of the polygonal wire under construction.
    /// Exceptions
    /// StdFail_NotDone if the wire is not built, i.e. if fewer than
    /// two vertices have been chained together by this construction algorithm.
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Wire();
}; // class BRepBuilderAPI_MakePolygon

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShapeOnMesh
//---------------------------------------------------------------------
/// <summary>
/// Builds shape on per-facet basis on the input mesh. Resulting shape has shared
/// edges by construction, but no maximization (unify same domain) is applied.
/// No generation history is provided.
/// </summary>
public ref class BRepBuilderAPI_MakeShapeOnMesh sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeShapeOnMesh_h
public:
    Include_BRepBuilderAPI_MakeShapeOnMesh_h
#endif

public:
    BRepBuilderAPI_MakeShapeOnMesh(::BRepBuilderAPI_MakeShapeOnMesh* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakeShapeOnMesh(::BRepBuilderAPI_MakeShapeOnMesh& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeShapeOnMesh* NativeInstance
    {
        ::BRepBuilderAPI_MakeShapeOnMesh* get()
        {
            return static_cast<::BRepBuilderAPI_MakeShapeOnMesh*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRepBuilderAPI_MakeShapeOnMesh(Poly_Triangulation theMesh, ) */
    /// <summary>
    /// Builds shape on mesh.
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds shape on mesh.
    /// </summary>
    void Build();
}; // class BRepBuilderAPI_MakeShapeOnMesh

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShell
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build a
/// shape corresponding to the skin of a surface.
/// Note that the term shell in the class name has the same definition
/// as that of a shell in STEP, in other words the skin of a shape,
/// and not a solid model defined by surface and thickness. If you want
/// to build the second sort of shell, you must use
/// BRepOffsetAPI_MakeOffsetShape. A shell is made of a series of
/// faces connected by their common edges.
/// If the underlying surface of a face is not C2 continuous and
/// the flag Segment is True, MakeShell breaks the surface down into
/// several faces which are all C2 continuous and which are
/// connected along the non-regular curves on the surface.
/// The resulting shell contains all these faces.
/// Construction of a Shell from a non-C2 continuous Surface
/// A MakeShell object provides a framework for:
/// -      defining the construction of a shell,
/// -      implementing the construction algorithm, and
/// -      consulting the result.
/// Warning
/// The connected C2 faces in the shell resulting from a decomposition of
/// the surface are not sewn. For a sewn result, you need to use
/// BRepOffsetAPI_Sewing. For a shell with thickness, you need to use
/// BRepOffsetAPI_MakeOffsetShape.
/// </summary>
public ref class BRepBuilderAPI_MakeShell sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeShell_h
public:
    Include_BRepBuilderAPI_MakeShell_h
#endif

public:
    BRepBuilderAPI_MakeShell(::BRepBuilderAPI_MakeShell* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakeShell(::BRepBuilderAPI_MakeShell& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeShell* NativeInstance
    {
        ::BRepBuilderAPI_MakeShell* get()
        {
            return static_cast<::BRepBuilderAPI_MakeShell*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty shell framework. The Init
    /// function is used to define the construction arguments.
    /// Warning
    /// The function Error will return
    /// BRepBuilderAPI_EmptyShell if it is called before the function Init.
    /// </summary>
    BRepBuilderAPI_MakeShell();
    /// <summary>
    /// Constructs a shell from the surface S.
    /// </summary>
    BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, bool Segment);
    /// <summary>
    /// Constructs a shell from the surface S.
    /// </summary>
    BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Constructs a shell from the surface S,
    /// limited in the u parametric direction by the two
    /// parameter values UMin and UMax, and limited in the v
    /// parametric direction by the two parameter values VMin and VMax.
    /// </summary>
    BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment);
    /// <summary>
    /// Constructs a shell from the surface S,
    /// limited in the u parametric direction by the two
    /// parameter values UMin and UMax, and limited in the v
    /// parametric direction by the two parameter values VMin and VMax.
    /// </summary>
    BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Defines or redefines the arguments
    /// for the construction of a shell. The construction is initialized
    /// with the surface S, limited in the u parametric direction by the
    /// two parameter values UMin and UMax, and in the v parametric
    /// direction by the two parameter values VMin and VMax.
    /// Warning
    /// The function Error returns:
    /// -      BRepBuilderAPI_ShellParametersOutOfRange
    /// when the given parameters are outside the bounds of the
    /// surface or the basis surface if S is trimmed
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment);
    /// <summary>
    /// Defines or redefines the arguments
    /// for the construction of a shell. The construction is initialized
    /// with the surface S, limited in the u parametric direction by the
    /// two parameter values UMin and UMax, and in the v parametric
    /// direction by the two parameter values VMin and VMax.
    /// Warning
    /// The function Error returns:
    /// -      BRepBuilderAPI_ShellParametersOutOfRange
    /// when the given parameters are outside the bounds of the
    /// surface or the basis surface if S is trimmed
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax);
    /// <summary>
    /// Returns true if the shell is built.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the construction status:
    /// -   BRepBuilderAPI_ShellDone if the shell is built, or
    /// -   another value of the BRepBuilderAPI_ShellError
    /// enumeration indicating why the construction failed.
    /// This is frequently BRepBuilderAPI_ShellParametersOutOfRange
    /// indicating that the given parameters are outside the bounds of the surface.
    /// </summary>
    Macad::Occt::BRepBuilderAPI_ShellError Error();
    /// <summary>
    /// Returns the new Shell.
    /// </summary>
    Macad::Occt::TopoDS_Shell^ Shell();
}; // class BRepBuilderAPI_MakeShell

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeSolid
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build a solid from shells.
/// A solid is made of one shell, or a series of shells, which
/// do not intersect each other. One of these shells
/// constitutes the outside skin of the solid. It may be closed
/// (a finite solid) or open (an infinite solid). Other shells
/// form hollows (cavities) in these previous ones. Each
/// must bound a closed volume.
/// A MakeSolid object provides a framework for:
/// -   defining and implementing the construction of a solid, and
/// -   consulting the result.
/// </summary>
public ref class BRepBuilderAPI_MakeSolid sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeSolid_h
public:
    Include_BRepBuilderAPI_MakeSolid_h
#endif

public:
    BRepBuilderAPI_MakeSolid(::BRepBuilderAPI_MakeSolid* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakeSolid(::BRepBuilderAPI_MakeSolid& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeSolid* NativeInstance
    {
        ::BRepBuilderAPI_MakeSolid* get()
        {
            return static_cast<::BRepBuilderAPI_MakeSolid*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the construction of a solid. An empty solid is
    /// considered to cover the whole space. The Add function
    /// is used to define shells to bound it.
    /// </summary>
    BRepBuilderAPI_MakeSolid();
    /// <summary>
    /// Make a solid from a CompSolid.
    /// </summary>
    BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_CompSolid^ S);
    /// <summary>
    /// Make a solid from a shell.
    /// </summary>
    BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S);
    /// <summary>
    /// Make a solid from two shells.
    /// </summary>
    BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2);
    /// <summary>
    /// Make a solid from three shells.
    /// Constructs a solid
    /// -   covering the whole space, or
    /// -   from shell S, or
    /// -   from two shells S1 and S2, or
    /// -   from three shells S1, S2 and S3, or
    /// Warning
    /// No check is done to verify the conditions of coherence
    /// of the resulting solid. In particular, S1, S2 (and S3) must
    /// not intersect each other.
    /// Besides, after all shells have been added using the Add
    /// function, one of these shells should constitute the outside
    /// skin of the solid; it may be closed (a finite solid) or open
    /// (an infinite solid). Other shells form hollows (cavities) in
    /// these previous ones. Each must bound a closed volume.
    /// </summary>
    BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2, Macad::Occt::TopoDS_Shell^ S3);
    /// <summary>
    /// Make a solid from a solid. useful for adding later.
    /// </summary>
    BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Solid^ So);
    /// <summary>
    /// Add a shell to a solid.
    /// 
    /// Constructs a solid:
    /// -   from the solid So, to which shells can be added, or
    /// -   by adding the shell S to the solid So.
    /// Warning
    /// No check is done to verify the conditions of coherence
    /// of the resulting solid. In particular S must not intersect the solid S0.
    /// Besides, after all shells have been added using the Add
    /// function, one of these shells should constitute the outside
    /// skin of the solid. It may be closed (a finite solid) or open
    /// (an infinite solid). Other shells form hollows (cavities) in
    /// the previous ones. Each must bound a closed volume.
    /// </summary>
    BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Solid^ So, Macad::Occt::TopoDS_Shell^ S);
    /// <summary>
    /// Adds the shell to the current solid.
    /// Warning
    /// No check is done to verify the conditions of coherence
    /// of the resulting solid. In particular, S must not intersect
    /// other shells of the solid under construction.
    /// Besides, after all shells have been added, one of
    /// these shells should constitute the outside skin of the
    /// solid. It may be closed (a finite solid) or open (an
    /// infinite solid). Other shells form hollows (cavities) in
    /// these previous ones. Each must bound a closed volume.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shell^ S);
    /// <summary>
    /// Returns true if the solid is built.
    /// For this class, a solid under construction is always valid.
    /// If no shell has been added, it could be a whole-space
    /// solid. However, no check was done to verify the
    /// conditions of coherence of the resulting solid.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the new Solid.
    /// </summary>
    Macad::Occt::TopoDS_Solid^ Solid();
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_MakeSolid

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeVertex
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build BRepBuilder vertices directly
/// from 3D geometric points. A vertex built using a
/// MakeVertex object is only composed of a 3D point and
/// a default precision value (Precision::Confusion()).
/// Later on, 2D representations can be added, for example,
/// when inserting a vertex in an edge.
/// A MakeVertex object provides a framework for:
/// -   defining and implementing the construction of a vertex, and
/// -   consulting the result.
/// </summary>
public ref class BRepBuilderAPI_MakeVertex sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeVertex_h
public:
    Include_BRepBuilderAPI_MakeVertex_h
#endif

public:
    BRepBuilderAPI_MakeVertex(::BRepBuilderAPI_MakeVertex* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakeVertex(::BRepBuilderAPI_MakeVertex& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeVertex* NativeInstance
    {
        ::BRepBuilderAPI_MakeVertex* get()
        {
            return static_cast<::BRepBuilderAPI_MakeVertex*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a vertex from point P.
    /// Example create a vertex from a 3D point.
    /// gp_Pnt P(0,0,10);
    /// TopoDS_Vertex V = BRepBuilderAPI_MakeVertex(P);
    /// </summary>
    BRepBuilderAPI_MakeVertex(Macad::Occt::Pnt P);
    /// <summary>
    /// Returns the constructed vertex.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class BRepBuilderAPI_MakeVertex

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeWire
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build wires from edges. A wire can
/// be built from any number of edges.
/// To build a wire you first initialize the construction, then
/// add edges in sequence. An unlimited number of edges
/// can be added. The initialization of construction is done with:
/// -   no edge (an empty wire), or
/// -   edges of an existing wire, or
/// -   up to four connectable edges.
/// In order to be added to a wire under construction, an
/// edge (unless it is the first one) must satisfy the following
/// condition: one of its vertices must be geometrically
/// coincident with one of the vertices of the wire (provided
/// that the highest tolerance factor is assigned to the two
/// vertices). It could also be the same vertex.
/// -   The given edge is shared by the wire if it contains:
/// -   two vertices, identical to two vertices of the wire
/// under construction (a general case of the wire closure), or
/// -   one vertex, identical to a vertex of the wire under
/// construction; the other vertex not being
/// geometrically coincident with another vertex of the wire.
/// -   In other cases, when one of the vertices of the edge
/// is simply geometrically coincident with a vertex of the
/// wire under construction (provided that the highest
/// tolerance factor is assigned to the two vertices), the
/// given edge is first copied and the coincident vertex is
/// replaced in this new edge, by the coincident vertex of the wire.
/// Note: it is possible to build non manifold wires using this construction tool.
/// A MakeWire object provides a framework for:
/// -   initializing the construction of a wire,
/// -   adding edges to the wire under construction, and
/// -   consulting the result.
/// </summary>
public ref class BRepBuilderAPI_MakeWire sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepBuilderAPI_MakeWire_h
public:
    Include_BRepBuilderAPI_MakeWire_h
#endif

public:
    BRepBuilderAPI_MakeWire(::BRepBuilderAPI_MakeWire* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepBuilderAPI_MakeWire(::BRepBuilderAPI_MakeWire& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_MakeWire* NativeInstance
    {
        ::BRepBuilderAPI_MakeWire* get()
        {
            return static_cast<::BRepBuilderAPI_MakeWire*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty wire framework, to which edges
    /// are added using the Add function.
    /// As soon as the wire contains one edge, it can return
    /// with the use of the function Wire.
    /// Warning
    /// The function Error will return
    /// BRepBuilderAPI_EmptyWire if it is called before at
    /// least one edge is added to the wire under construction.
    /// </summary>
    BRepBuilderAPI_MakeWire();
    /// <summary>
    /// Make a Wire from an edge.
    /// </summary>
    BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Make a Wire from two edges.
    /// </summary>
    BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
    /// <summary>
    /// Make a Wire from three edges.
    /// </summary>
    BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3);
    /// <summary>
    /// Make a Wire from four edges.
    /// Constructs a wire
    /// -   from the TopoDS_Wire W composed of the edge E, or
    /// -   from edge E, or
    /// -   from two edges E1 and E2, or
    /// -   from three edges E1, E2 and E3, or
    /// -   from four edges E1, E2, E3 and E4.
    /// Further edges can be added using the function Add.
    /// Given edges are added in a sequence. Each of them
    /// must be connectable to the wire under construction,
    /// and so must satisfy the following condition (unless it is
    /// the first edge of the wire): one of its vertices must be
    /// geometrically coincident with one of the vertices of the
    /// wire (provided that the highest tolerance factor is
    /// assigned to the two vertices). It could also be the same vertex.
    /// Warning
    /// If an edge is not connectable to the wire under
    /// construction it is not added. The function Error will
    /// return BRepBuilderAPI_DisconnectedWire, the
    /// function IsDone will return false and the function Wire
    /// will raise an error, until a new connectable edge is added.
    /// </summary>
    BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3, Macad::Occt::TopoDS_Edge^ E4);
    /// <summary>
    /// Make a Wire from a Wire. useful for adding later.
    /// </summary>
    BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Add an edge to a wire.
    /// </summary>
    BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Adds the edge E to the wire under construction.
    /// E must be connectable to the wire under construction, and, unless it
    /// is the first edge of the wire, must satisfy the following
    /// condition: one of its vertices must be geometrically coincident
    /// with one of the vertices of the wire (provided that the highest
    /// tolerance factor is assigned to the two vertices). It could also
    /// be the same vertex.
    /// Warning
    /// If E is not connectable to the wire under construction it is not
    /// added. The function Error will return
    /// BRepBuilderAPI_DisconnectedWire, the function IsDone will return
    /// false and the function Wire will raise an error, until a new
    /// connectable edge is added.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Add the edges of <W> to the current wire.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// Adds  the edges of <L>   to the current  wire.  The
    /// edges are not to be consecutive.   But they are to
    /// be  all  connected geometrically or topologically.
    /// If some of them are  not connected the Status give
    /// DisconnectedWire but the "Maker" is Done() and you
    /// can get the  partial result. (ie connected to  the
    /// first edgeof the list <L>)
    /// </summary>
    void Add(Macad::Occt::TopTools_ListOfShape^ L);
    /// <summary>
    /// Returns true if this algorithm contains a valid wire.
    /// IsDone returns false if:
    /// -   there are no edges in the wire, or
    /// -   the last edge which you tried to add was not connectable.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the construction status
    /// -   BRepBuilderAPI_WireDone if the wire is built, or
    /// -   another value of the BRepBuilderAPI_WireError
    /// enumeration indicating why the construction failed.
    /// </summary>
    Macad::Occt::BRepBuilderAPI_WireError Error();
    /// <summary>
    /// Returns the constructed wire; or the part of the wire
    /// under construction already built.
    /// Exceptions StdFail_NotDone if a wire is not built.
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Wire();
    /// <summary>
    /// Returns the last edge added to the wire under construction.
    /// Warning
    /// -   This edge can be different from the original one (the
    /// argument of the function Add, for instance,)
    /// -   A null edge is returned if there are no edges in the
    /// wire under construction, or if the last edge which you
    /// tried to add was not connectable..
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the last vertex of the last edge added to the
    /// wire under construction.
    /// Warning
    /// A null vertex is returned if there are no edges in the wire
    /// under construction, or if the last edge which you tried to
    /// add was not connectableR
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex();
}; // class BRepBuilderAPI_MakeWire

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_NurbsConvert
//---------------------------------------------------------------------
/// <summary>
/// Conversion of the complete geometry of a shape
/// (all 3D analytical representation of surfaces and curves)
/// into NURBS geometry (except for Planes). For example,
/// all curves supporting edges of the basis shape are converted
/// into BSpline curves, and all surfaces supporting its faces are
/// converted into BSpline surfaces.
/// </summary>
public ref class BRepBuilderAPI_NurbsConvert sealed
    : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepBuilderAPI_NurbsConvert_h
public:
    Include_BRepBuilderAPI_NurbsConvert_h
#endif

public:
    BRepBuilderAPI_NurbsConvert(::BRepBuilderAPI_NurbsConvert* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    BRepBuilderAPI_NurbsConvert(::BRepBuilderAPI_NurbsConvert& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_NurbsConvert* NativeInstance
    {
        ::BRepBuilderAPI_NurbsConvert* get()
        {
            return static_cast<::BRepBuilderAPI_NurbsConvert*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a framework for converting the geometry of a
    /// shape into NURBS geometry. Use the function Perform
    /// to define the shape to convert.
    /// </summary>
    BRepBuilderAPI_NurbsConvert();
    /// <summary>
    /// Builds a new shape by converting the geometry of the
    /// shape S into NURBS geometry. Specifically, all curves
    /// supporting edges of S are converted into BSpline
    /// curves, and all surfaces supporting its faces are
    /// converted into BSpline surfaces.
    /// Use the function Shape to access the new shape.
    /// Note: the constructed framework can be reused to
    /// convert other shapes. You specify these with the
    /// function Perform.
    /// </summary>
    BRepBuilderAPI_NurbsConvert(Macad::Occt::TopoDS_Shape^ S, bool Copy);
    /// <summary>
    /// Builds a new shape by converting the geometry of the
    /// shape S into NURBS geometry. Specifically, all curves
    /// supporting edges of S are converted into BSpline
    /// curves, and all surfaces supporting its faces are
    /// converted into BSpline surfaces.
    /// Use the function Shape to access the new shape.
    /// Note: the constructed framework can be reused to
    /// convert other shapes. You specify these with the
    /// function Perform.
    /// </summary>
    BRepBuilderAPI_NurbsConvert(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Builds a new shape by converting the geometry of the
    /// shape S into NURBS geometry.
    /// Specifically, all curves supporting edges of S are
    /// converted into BSpline curves, and all surfaces
    /// supporting its faces are converted into BSpline surfaces.
    /// Use the function Shape to access the new shape.
    /// Note: this framework can be reused to convert other
    /// shapes: you specify them by calling the function Perform again.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ S, bool Copy);
    /// <summary>
    /// Builds a new shape by converting the geometry of the
    /// shape S into NURBS geometry.
    /// Specifically, all curves supporting edges of S are
    /// converted into BSpline curves, and all surfaces
    /// supporting its faces are converted into BSpline surfaces.
    /// Use the function Shape to access the new shape.
    /// Note: this framework can be reused to convert other
    /// shapes: you specify them by calling the function Perform again.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the modified shape corresponding to <S>.
    /// S can correspond to the entire initial shape or to its subshape.
    /// Exceptions
    /// Standard_NoSuchObject if S is not the initial shape or
    /// a subshape of the initial shape to which the
    /// transformation has been applied.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_NurbsConvert

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Sewing
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to
/// 
/// - identify possible contiguous boundaries (for control
/// afterwards (of continuity: C0, C1, ...))
/// 
/// - assemble contiguous shapes into one shape.
/// Only manifold shapes will be found. Sewing will not
/// be done in case of multiple edges.
/// 
/// For sewing, use this function as following:
/// - create an empty object
/// - default tolerance 1.E-06
/// - with face analysis on
/// - with sewing operation on
/// - set the cutting option as you need (default True)
/// - define a tolerance
/// - add shapes to be sewed -> Add
/// - compute -> Perform
/// - output the resulted shapes
/// - output free edges if necessary
/// - output multiple edges if necessary
/// - output the problems if any
/// </summary>
public ref class BRepBuilderAPI_Sewing sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepBuilderAPI_Sewing_h
public:
    Include_BRepBuilderAPI_Sewing_h
#endif

public:
    BRepBuilderAPI_Sewing(::BRepBuilderAPI_Sewing* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepBuilderAPI_Sewing(::BRepBuilderAPI_Sewing& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepBuilderAPI_Sewing* NativeInstance
    {
        ::BRepBuilderAPI_Sewing* get()
        {
            return static_cast<::BRepBuilderAPI_Sewing*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an object with
    /// tolerance of connexity
    /// option for sewing (if false only control)
    /// option for analysis of degenerated shapes
    /// option for cutting of free edges.
    /// option for non manifold processing
    /// </summary>
    BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2, bool option3, bool option4);
    /// <summary>
    /// Creates an object with
    /// tolerance of connexity
    /// option for sewing (if false only control)
    /// option for analysis of degenerated shapes
    /// option for cutting of free edges.
    /// option for non manifold processing
    /// </summary>
    BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2, bool option3);
    /// <summary>
    /// Creates an object with
    /// tolerance of connexity
    /// option for sewing (if false only control)
    /// option for analysis of degenerated shapes
    /// option for cutting of free edges.
    /// option for non manifold processing
    /// </summary>
    BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2);
    /// <summary>
    /// Creates an object with
    /// tolerance of connexity
    /// option for sewing (if false only control)
    /// option for analysis of degenerated shapes
    /// option for cutting of free edges.
    /// option for non manifold processing
    /// </summary>
    BRepBuilderAPI_Sewing(double tolerance, bool option1);
    /// <summary>
    /// Creates an object with
    /// tolerance of connexity
    /// option for sewing (if false only control)
    /// option for analysis of degenerated shapes
    /// option for cutting of free edges.
    /// option for non manifold processing
    /// </summary>
    BRepBuilderAPI_Sewing(double tolerance);
    /// <summary>
    /// Creates an object with
    /// tolerance of connexity
    /// option for sewing (if false only control)
    /// option for analysis of degenerated shapes
    /// option for cutting of free edges.
    /// option for non manifold processing
    /// </summary>
    BRepBuilderAPI_Sewing();
    /// <summary>
    /// initialize the parameters if necessary
    /// </summary>
    void Init(double tolerance, bool option1, bool option2, bool option3, bool option4);
    /// <summary>
    /// initialize the parameters if necessary
    /// </summary>
    void Init(double tolerance, bool option1, bool option2, bool option3);
    /// <summary>
    /// initialize the parameters if necessary
    /// </summary>
    void Init(double tolerance, bool option1, bool option2);
    /// <summary>
    /// initialize the parameters if necessary
    /// </summary>
    void Init(double tolerance, bool option1);
    /// <summary>
    /// initialize the parameters if necessary
    /// </summary>
    void Init(double tolerance);
    /// <summary>
    /// initialize the parameters if necessary
    /// </summary>
    void Init();
    /// <summary>
    /// Loads the context shape.
    /// </summary>
    void Load(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Defines the shapes to be sewed or controlled
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Computing
    /// theProgress - progress indicator of algorithm
    /// </summary>
    void Perform(Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Computing
    /// theProgress - progress indicator of algorithm
    /// </summary>
    void Perform();
    /// <summary>
    /// Gives the sewed shape
    /// a null shape if nothing constructed
    /// may be a face, a shell, a solid or a compound
    /// </summary>
    Macad::Occt::TopoDS_Shape^ SewedShape();
    /// <summary>
    /// set context
    /// </summary>
    void SetContext(Macad::Occt::BRepTools_ReShape^ theContext);
    /// <summary>
    /// return context
    /// </summary>
    Macad::Occt::BRepTools_ReShape^ GetContext();
    /// <summary>
    /// Gives the number of free edges (edge shared by one face)
    /// </summary>
    int NbFreeEdges();
    /// <summary>
    /// Gives each free edge
    /// </summary>
    Macad::Occt::TopoDS_Edge^ FreeEdge(int index);
    /// <summary>
    /// Gives the number of multiple edges
    /// (edge shared by more than two faces)
    /// </summary>
    int NbMultipleEdges();
    /// <summary>
    /// Gives each multiple edge
    /// </summary>
    Macad::Occt::TopoDS_Edge^ MultipleEdge(int index);
    /// <summary>
    /// Gives the number of contiguous edges (edge shared by two faces)
    /// </summary>
    int NbContigousEdges();
    /// <summary>
    /// Gives each contiguous edge
    /// </summary>
    Macad::Occt::TopoDS_Edge^ ContigousEdge(int index);
    /// <summary>
    /// Gives the sections (edge) belonging to a contiguous edge
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ ContigousEdgeCouple(int index);
    /// <summary>
    /// Indicates if a section is bound (before use SectionToBoundary)
    /// </summary>
    bool IsSectionBound(Macad::Occt::TopoDS_Edge^ section);
    /// <summary>
    /// Gives the original edge (free boundary) which becomes the
    /// the section. Remember that sections constitute  common edges.
    /// This information is important for control because with
    /// original edge we can find the surface to which the section
    /// is attached.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ SectionToBoundary(Macad::Occt::TopoDS_Edge^ section);
    /// <summary>
    /// Gives the number of degenerated shapes
    /// </summary>
    int NbDegeneratedShapes();
    /// <summary>
    /// Gives each degenerated shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ DegeneratedShape(int index);
    /// <summary>
    /// Indicates if a input shape is degenerated
    /// </summary>
    bool IsDegenerated(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Indicates if a input shape has been modified
    /// </summary>
    bool IsModified(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Gives a modifieded shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Modified(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Indicates if a input subshape has been modified
    /// </summary>
    bool IsModifiedSubShape(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Gives a modifieded subshape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ModifiedSubShape(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// print the information
    /// </summary>
    void Dump();
    /// <summary>
    /// Gives the number of deleted faces (faces smallest than tolerance)
    /// </summary>
    int NbDeletedFaces();
    /// <summary>
    /// Gives each deleted face
    /// </summary>
    Macad::Occt::TopoDS_Face^ DeletedFace(int index);
    /// <summary>
    /// Gives a modified shape
    /// </summary>
    Macad::Occt::TopoDS_Face^ WhichFace(Macad::Occt::TopoDS_Edge^ theEdg, int index);
    /// <summary>
    /// Gives a modified shape
    /// </summary>
    Macad::Occt::TopoDS_Face^ WhichFace(Macad::Occt::TopoDS_Edge^ theEdg);
    /// <summary>
    /// Gets same parameter mode.
    /// </summary>
    bool SameParameterMode();
    /// <summary>
    /// Sets same parameter mode.
    /// </summary>
    void SetSameParameterMode(bool SameParameterMode);
    /// <summary>
    /// Gives set tolerance.
    /// </summary>
    double Tolerance();
    /// <summary>
    /// Sets tolerance
    /// </summary>
    void SetTolerance(double theToler);
    /// <summary>
    /// Gives set min tolerance.
    /// </summary>
    double MinTolerance();
    /// <summary>
    /// Sets min tolerance
    /// </summary>
    void SetMinTolerance(double theMinToler);
    /// <summary>
    /// Gives set max tolerance
    /// </summary>
    double MaxTolerance();
    /// <summary>
    /// Sets max tolerance.
    /// </summary>
    void SetMaxTolerance(double theMaxToler);
    /// <summary>
    /// Returns mode for sewing faces By default - true.
    /// </summary>
    bool FaceMode();
    /// <summary>
    /// Sets mode for sewing faces By default - true.
    /// </summary>
    void SetFaceMode(bool theFaceMode);
    /// <summary>
    /// Returns mode for sewing floating edges By default - false.
    /// </summary>
    bool FloatingEdgesMode();
    /// <summary>
    /// Sets mode for sewing floating edges By default - false.
    /// Returns mode for cutting floating edges By default - false.
    /// Sets mode for cutting floating edges By default - false.
    /// </summary>
    void SetFloatingEdgesMode(bool theFloatingEdgesMode);
    /// <summary>
    /// Returns mode for accounting of local tolerances
    /// of edges and vertices during of merging.
    /// </summary>
    bool LocalTolerancesMode();
    /// <summary>
    /// Sets mode for accounting of local tolerances
    /// of edges and vertices during of merging
    /// in this case WorkTolerance = myTolerance + tolEdge1+ tolEdg2;
    /// </summary>
    void SetLocalTolerancesMode(bool theLocalTolerancesMode);
    /// <summary>
    /// Sets mode for non-manifold sewing.
    /// </summary>
    void SetNonManifoldMode(bool theNonManifoldMode);
    /// <summary>
    /// Gets mode for non-manifold sewing.
    /// 
    /// INTERNAL FUNCTIONS ---
    /// </summary>
    bool NonManifoldMode();
    static Macad::Occt::BRepBuilderAPI_Sewing^ CreateDowncasted(::BRepBuilderAPI_Sewing* instance);
}; // class BRepBuilderAPI_Sewing

//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Transform
//---------------------------------------------------------------------
/// <summary>
/// Geometric transformation on a shape.
/// The transformation to be applied is defined as a
/// gp_Trsf transformation, i.e. a transformation which does
/// not modify the underlying geometry of shapes.
/// The transformation is applied to:
/// -   all curves which support edges of a shape, and
/// -   all surfaces which support its faces.
/// A Transform object provides a framework for:
/// -   defining the geometric transformation to be applied,
/// -   implementing the transformation algorithm, and
/// -   consulting the results.
/// </summary>
public ref class BRepBuilderAPI_Transform sealed
    : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepBuilderAPI_Transform_h
public:
    Include_BRepBuilderAPI_Transform_h
#endif

public:
    BRepBuilderAPI_Transform(::BRepBuilderAPI_Transform* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    BRepBuilderAPI_Transform(::BRepBuilderAPI_Transform& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    property ::BRepBuilderAPI_Transform* NativeInstance
    {
        ::BRepBuilderAPI_Transform* get()
        {
            return static_cast<::BRepBuilderAPI_Transform*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a framework for applying the geometric
    /// transformation T to a shape. Use the function Perform
    /// to define the shape to transform.
    /// </summary>
    BRepBuilderAPI_Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a transformation from the gp_Trsf <theTrsf>, and
    /// applies it to the shape <theShape>. If the transformation
    /// is  direct   and isometric (determinant  =  1) and
    /// <theCopyGeom> =  Standard_False,  the resulting shape  is
    /// <theShape> on   which  a  new  location has    been  set.
    /// Otherwise,  the   transformation is applied   on a
    /// duplication of <theShape>.
    /// If <theCopyMesh> is true, the triangulation will be copied,
    /// and the copy will be assigned to the result shape.
    /// </summary>
    BRepBuilderAPI_Transform(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Trsf theTrsf, bool theCopyGeom, bool theCopyMesh);
    /// <summary>
    /// Creates a transformation from the gp_Trsf <theTrsf>, and
    /// applies it to the shape <theShape>. If the transformation
    /// is  direct   and isometric (determinant  =  1) and
    /// <theCopyGeom> =  Standard_False,  the resulting shape  is
    /// <theShape> on   which  a  new  location has    been  set.
    /// Otherwise,  the   transformation is applied   on a
    /// duplication of <theShape>.
    /// If <theCopyMesh> is true, the triangulation will be copied,
    /// and the copy will be assigned to the result shape.
    /// </summary>
    BRepBuilderAPI_Transform(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Trsf theTrsf, bool theCopyGeom);
    /// <summary>
    /// Creates a transformation from the gp_Trsf <theTrsf>, and
    /// applies it to the shape <theShape>. If the transformation
    /// is  direct   and isometric (determinant  =  1) and
    /// <theCopyGeom> =  Standard_False,  the resulting shape  is
    /// <theShape> on   which  a  new  location has    been  set.
    /// Otherwise,  the   transformation is applied   on a
    /// duplication of <theShape>.
    /// If <theCopyMesh> is true, the triangulation will be copied,
    /// and the copy will be assigned to the result shape.
    /// </summary>
    BRepBuilderAPI_Transform(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Applies the geometric transformation defined at the
    /// time of construction of this framework to the shape S.
    /// - If the transformation T is direct and isometric, in
    /// other words, if the determinant of the vectorial part
    /// of T is equal to 1., and if theCopyGeom equals false (the
    /// default value), the resulting shape is the same as
    /// the original but with a new location assigned to it.
    /// - In all other cases, the transformation is applied to a duplicate of theShape.
    /// - If theCopyMesh is true, the triangulation will be copied,
    /// and the copy will be assigned to the result shape.
    /// Use the function Shape to access the result.
    /// Note: this framework can be reused to apply the same
    /// geometric transformation to other shapes. You only
    /// need to specify them by calling the function Perform again.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ theShape, bool theCopyGeom, bool theCopyMesh);
    /// <summary>
    /// Applies the geometric transformation defined at the
    /// time of construction of this framework to the shape S.
    /// - If the transformation T is direct and isometric, in
    /// other words, if the determinant of the vectorial part
    /// of T is equal to 1., and if theCopyGeom equals false (the
    /// default value), the resulting shape is the same as
    /// the original but with a new location assigned to it.
    /// - In all other cases, the transformation is applied to a duplicate of theShape.
    /// - If theCopyMesh is true, the triangulation will be copied,
    /// and the copy will be assigned to the result shape.
    /// Use the function Shape to access the result.
    /// Note: this framework can be reused to apply the same
    /// geometric transformation to other shapes. You only
    /// need to specify them by calling the function Perform again.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ theShape, bool theCopyGeom);
    /// <summary>
    /// Applies the geometric transformation defined at the
    /// time of construction of this framework to the shape S.
    /// - If the transformation T is direct and isometric, in
    /// other words, if the determinant of the vectorial part
    /// of T is equal to 1., and if theCopyGeom equals false (the
    /// default value), the resulting shape is the same as
    /// the original but with a new location assigned to it.
    /// - In all other cases, the transformation is applied to a duplicate of theShape.
    /// - If theCopyMesh is true, the triangulation will be copied,
    /// and the copy will be assigned to the result shape.
    /// Use the function Shape to access the result.
    /// Note: this framework can be reused to apply the same
    /// geometric transformation to other shapes. You only
    /// need to specify them by calling the function Perform again.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Returns the modified shape corresponding to <S>.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepBuilderAPI_Transform

}; // namespace Occt
}; // namespace Macad
