// Generated wrapper code for package ShapeFix

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeFix_SequenceOfWireSegment
//---------------------------------------------------------------------
public ref class ShapeFix_SequenceOfWireSegment sealed
    : public Macad::Occt::BaseClass<::ShapeFix_SequenceOfWireSegment>
    , public IIndexEnumerable<Macad::Occt::ShapeFix_WireSegment^>
{

#ifdef Include_ShapeFix_SequenceOfWireSegment_h
public:
    Include_ShapeFix_SequenceOfWireSegment_h
#endif

public:
    ShapeFix_SequenceOfWireSegment(::ShapeFix_SequenceOfWireSegment* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_SequenceOfWireSegment>( nativeInstance, true )
    {}

    ShapeFix_SequenceOfWireSegment(::ShapeFix_SequenceOfWireSegment& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_SequenceOfWireSegment>( &nativeInstance, false )
    {}

    property ::ShapeFix_SequenceOfWireSegment* NativeInstance
    {
        ::ShapeFix_SequenceOfWireSegment* get()
        {
            return static_cast<::ShapeFix_SequenceOfWireSegment*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::ShapeFix_SequenceOfWireSegment::Iterator>
    {

#ifdef Include_ShapeFix_SequenceOfWireSegment_Iterator_h
    public:
        Include_ShapeFix_SequenceOfWireSegment_Iterator_h
#endif

    public:
        Iterator(::ShapeFix_SequenceOfWireSegment::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::ShapeFix_SequenceOfWireSegment::Iterator>( nativeInstance, true )
        {}

        Iterator(::ShapeFix_SequenceOfWireSegment::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::ShapeFix_SequenceOfWireSegment::Iterator>( &nativeInstance, false )
        {}

        property ::ShapeFix_SequenceOfWireSegment::Iterator* NativeInstance
        {
            ::ShapeFix_SequenceOfWireSegment::Iterator* get()
            {
                return static_cast<::ShapeFix_SequenceOfWireSegment::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::ShapeFix_WireSegment^ Value();
        Macad::Occt::ShapeFix_WireSegment^ ChangeValue();
        bool IsEqual(Macad::Occt::ShapeFix_SequenceOfWireSegment::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    ShapeFix_SequenceOfWireSegment();
    ShapeFix_SequenceOfWireSegment(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::ShapeFix_SequenceOfWireSegment^ Assign(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theOther);
    void Remove(Macad::Occt::ShapeFix_SequenceOfWireSegment::Iterator^ thePosition);
    void Append(Macad::Occt::ShapeFix_WireSegment^ theItem);
    void Prepend(Macad::Occt::ShapeFix_WireSegment^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::ShapeFix_WireSegment^ theItem);
    void InsertAfter(Macad::Occt::ShapeFix_SequenceOfWireSegment::Iterator^ thePosition, Macad::Occt::ShapeFix_WireSegment^ theItem);
    void Split(int theIndex, Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq);
    Macad::Occt::ShapeFix_WireSegment^ First();
    Macad::Occt::ShapeFix_WireSegment^ ChangeFirst();
    Macad::Occt::ShapeFix_WireSegment^ Last();
    Macad::Occt::ShapeFix_WireSegment^ ChangeLast();
    virtual Macad::Occt::ShapeFix_WireSegment^ Value(int theIndex);
    Macad::Occt::ShapeFix_WireSegment^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::ShapeFix_WireSegment^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::ShapeFix_WireSegment^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class ShapeFix_SequenceOfWireSegment

//---------------------------------------------------------------------
//  Class  ShapeFix_DataMapOfShapeBox2d
//---------------------------------------------------------------------
public ref class ShapeFix_DataMapOfShapeBox2d sealed
    : public Macad::Occt::BaseClass<::ShapeFix_DataMapOfShapeBox2d>
{

#ifdef Include_ShapeFix_DataMapOfShapeBox2d_h
public:
    Include_ShapeFix_DataMapOfShapeBox2d_h
#endif

public:
    ShapeFix_DataMapOfShapeBox2d(::ShapeFix_DataMapOfShapeBox2d* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_DataMapOfShapeBox2d>( nativeInstance, true )
    {}

    ShapeFix_DataMapOfShapeBox2d(::ShapeFix_DataMapOfShapeBox2d& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_DataMapOfShapeBox2d>( &nativeInstance, false )
    {}

    property ::ShapeFix_DataMapOfShapeBox2d* NativeInstance
    {
        ::ShapeFix_DataMapOfShapeBox2d* get()
        {
            return static_cast<::ShapeFix_DataMapOfShapeBox2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::ShapeFix_DataMapOfShapeBox2d::Iterator>
    {

#ifdef Include_ShapeFix_DataMapOfShapeBox2d_Iterator_h
    public:
        Include_ShapeFix_DataMapOfShapeBox2d_Iterator_h
#endif

    public:
        Iterator(::ShapeFix_DataMapOfShapeBox2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::ShapeFix_DataMapOfShapeBox2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::ShapeFix_DataMapOfShapeBox2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::ShapeFix_DataMapOfShapeBox2d::Iterator>( &nativeInstance, false )
        {}

        property ::ShapeFix_DataMapOfShapeBox2d::Iterator* NativeInstance
        {
            ::ShapeFix_DataMapOfShapeBox2d::Iterator* get()
            {
                return static_cast<::ShapeFix_DataMapOfShapeBox2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Bnd_Box2d^ Value();
        Macad::Occt::Bnd_Box2d^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    ShapeFix_DataMapOfShapeBox2d();
    ShapeFix_DataMapOfShapeBox2d(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    ShapeFix_DataMapOfShapeBox2d(int theNbBuckets);
    void Exchange(Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ theOther);
    Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ Assign(Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box2d^ theItem);
    Macad::Occt::Bnd_Box2d^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box2d^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::Bnd_Box2d^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::Bnd_Box2d^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::Bnd_Box2d^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::Bnd_Box2d^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class ShapeFix_DataMapOfShapeBox2d

//---------------------------------------------------------------------
//  Class  ShapeFix
//---------------------------------------------------------------------
/// <summary>
/// This package provides algorithms for fixing
/// problematic (violating Open CASCADE requirements) shapes.
/// Tools from package ShapeAnalysis are used for detecting the problems. The
/// detecting and fixing is done taking in account various
/// criteria implemented in BRepCheck package.
/// Each class of package ShapeFix deals with one
/// certain type of shapes or with some family of problems.
/// </summary>
public ref class ShapeFix sealed
    : public Macad::Occt::BaseClass<::ShapeFix>
{

#ifdef Include_ShapeFix_h
public:
    Include_ShapeFix_h
#endif

public:
    ShapeFix(::ShapeFix* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix>( nativeInstance, true )
    {}

    ShapeFix(::ShapeFix& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix>( &nativeInstance, false )
    {}

    property ::ShapeFix* NativeInstance
    {
        ::ShapeFix* get()
        {
            return static_cast<::ShapeFix*>(_NativeInstance);
        }
    }

public:
    ShapeFix();
    /* Method skipped due to unknown mapping: bool SameParameter(TopoDS_Shape shape, bool enforce, double preci, Message_ProgressRange theProgress, ShapeExtend_BasicMsgRegistrator theMsgReg, ) */
    /// <summary>
    /// Runs SameParameter from BRepLib with these adaptations :
    /// <enforce> forces computations, else they are made only on
    /// Edges with flag SameParameter false
    /// <preci>, if not precised, is taken for each EDge as its own
    /// Tolerance
    /// Returns True when done, False if an exception has been raised
    /// In case of exception anyway, as many edges as possible have
    /// been processed. The passed progress indicator allows user
    /// to consult the current progress stage and abort algorithm
    /// if needed.
    /// </summary>
    static bool SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce, double preci, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Runs SameParameter from BRepLib with these adaptations :
    /// <enforce> forces computations, else they are made only on
    /// Edges with flag SameParameter false
    /// <preci>, if not precised, is taken for each EDge as its own
    /// Tolerance
    /// Returns True when done, False if an exception has been raised
    /// In case of exception anyway, as many edges as possible have
    /// been processed. The passed progress indicator allows user
    /// to consult the current progress stage and abort algorithm
    /// if needed.
    /// </summary>
    static bool SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce, double preci);
    /// <summary>
    /// Runs SameParameter from BRepLib with these adaptations :
    /// <enforce> forces computations, else they are made only on
    /// Edges with flag SameParameter false
    /// <preci>, if not precised, is taken for each EDge as its own
    /// Tolerance
    /// Returns True when done, False if an exception has been raised
    /// In case of exception anyway, as many edges as possible have
    /// been processed. The passed progress indicator allows user
    /// to consult the current progress stage and abort algorithm
    /// if needed.
    /// </summary>
    static bool SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce);
    /// <summary>
    /// Runs EncodeRegularity from BRepLib taking into account
    /// shared components of assemblies, so that each component
    /// is processed only once
    /// </summary>
    static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ shape, double tolang);
    /// <summary>
    /// Runs EncodeRegularity from BRepLib taking into account
    /// shared components of assemblies, so that each component
    /// is processed only once
    /// </summary>
    static void EncodeRegularity(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Removes edges which are less than given tolerance from shape
    /// with help of ShapeFix_Wire::FixSmall()
    /// </summary>
    static Macad::Occt::TopoDS_Shape^ RemoveSmallEdges(Macad::Occt::TopoDS_Shape^ shape, double Tolerance, Macad::Occt::ShapeBuild_ReShape^ context);
    /// <summary>
    /// Fix position of the vertices having tolerance more tnan specified one.;
    /// </summary>
    static bool FixVertexPosition(Macad::Occt::TopoDS_Shape^ theshape, double theTolerance, Macad::Occt::ShapeBuild_ReShape^ thecontext);
    /// <summary>
    /// Calculate size of least edge;
    /// </summary>
    static double LeastEdgeSize(Macad::Occt::TopoDS_Shape^ theshape);
}; // class ShapeFix

//---------------------------------------------------------------------
//  Class  ShapeFix_Root
//---------------------------------------------------------------------
/// <summary>
/// Root class for fixing operations
/// Provides context for recording changes (optional),
/// basic precision value and limit (minimal and
/// maximal) values for tolerances,
/// and message registrator
/// </summary>
public ref class ShapeFix_Root
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeFix_Root_h
public:
    Include_ShapeFix_Root_h
#endif

protected:
    ShapeFix_Root(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    ShapeFix_Root(::ShapeFix_Root* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeFix_Root(::ShapeFix_Root& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeFix_Root* NativeInstance
    {
        ::ShapeFix_Root* get()
        {
            return static_cast<::ShapeFix_Root*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty Constructor (no context is created)
    /// </summary>
    ShapeFix_Root();
    /// <summary>
    /// Copy all fields from another Root object
    /// </summary>
    void Set(Macad::Occt::ShapeFix_Root^ Root);
    /// <summary>
    /// Sets context
    /// </summary>
    void SetContext(Macad::Occt::ShapeBuild_ReShape^ context);
    /// <summary>
    /// Returns context
    /// </summary>
    Macad::Occt::ShapeBuild_ReShape^ Context();
    /* Method skipped due to unknown mapping: void SetMsgRegistrator(ShapeExtend_BasicMsgRegistrator msgreg, ) */
    /* Method skipped due to unknown mapping: ShapeExtend_BasicMsgRegistrator MsgRegistrator() */
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
    /* Method skipped due to unknown mapping: void SendMsg(TopoDS_Shape shape, Message_Msg message, Message_Gravity gravity, ) */
    /* Method skipped due to unknown mapping: void SendMsg(TopoDS_Shape shape, Message_Msg message, Message_Gravity gravity, ) */
    /* Method skipped due to unknown mapping: void SendMsg(Message_Msg message, Message_Gravity gravity, ) */
    /* Method skipped due to unknown mapping: void SendMsg(Message_Msg message, Message_Gravity gravity, ) */
    /* Method skipped due to unknown mapping: void SendWarning(TopoDS_Shape shape, Message_Msg message, ) */
    /* Method skipped due to unknown mapping: void SendWarning(Message_Msg message, ) */
    /* Method skipped due to unknown mapping: void SendFail(TopoDS_Shape shape, Message_Msg message, ) */
    /* Method skipped due to unknown mapping: void SendFail(Message_Msg message, ) */
    static Macad::Occt::ShapeFix_Root^ CreateDowncasted(::ShapeFix_Root* instance);
}; // class ShapeFix_Root

//---------------------------------------------------------------------
//  Class  ShapeFix_WireSegment
//---------------------------------------------------------------------
/// <summary>
/// This class is auxiliary class (data storage) used in ComposeShell.
/// It is intended for representing segment of the wire
/// (or whole wire). The segment itself is represented by
/// ShapeExtend_WireData. In addition, some associated data
/// necessary for computations are stored:
/// 
/// * Orientation flag - determines current use of the segment
/// and used for parity checking:
/// 
/// TopAbs_FORWARD and TopAbs_REVERSED - says that segment was
/// traversed once in the corresponding direction, and hence
/// it should be traversed once more in opposite direction;
/// 
/// TopAbs_EXTERNAL - the segment was not yet traversed in any
/// direction (i.e. not yet used as boundary)
/// 
/// TopAbs_INTERNAL - the segment was traversed in both
/// directions and hence is out of further work.
/// 
/// Segments of initial bounding wires are created with
/// orientation REVERSED (for outer wire) or FORWARD (for inner
/// wires), and segments of splitting seams - with orientation
/// EXTERNAL.
/// </summary>
public ref class ShapeFix_WireSegment sealed
    : public Macad::Occt::BaseClass<::ShapeFix_WireSegment>
{

#ifdef Include_ShapeFix_WireSegment_h
public:
    Include_ShapeFix_WireSegment_h
#endif

public:
    ShapeFix_WireSegment(::ShapeFix_WireSegment* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_WireSegment>( nativeInstance, true )
    {}

    ShapeFix_WireSegment(::ShapeFix_WireSegment& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_WireSegment>( &nativeInstance, false )
    {}

    property ::ShapeFix_WireSegment* NativeInstance
    {
        ::ShapeFix_WireSegment* get()
        {
            return static_cast<::ShapeFix_WireSegment*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Clears all fields.
    /// </summary>
    void Clear();
    /* Method skipped due to unknown mapping: void Load(ShapeExtend_WireData wire, ) */
    /* Method skipped due to unknown mapping: ShapeExtend_WireData WireData() */
    /// <summary>
    /// Sets orientation flag.
    /// </summary>
    void Orientation(Macad::Occt::TopAbs_Orientation ori);
    /// <summary>
    /// Returns orientation flag.
    /// </summary>
    Macad::Occt::TopAbs_Orientation Orientation();
    /// <summary>
    /// Returns first vertex of the first edge in the wire
    /// (no dependence on Orientation()).
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ FirstVertex();
    /// <summary>
    /// Returns last vertex of the last edge in the wire
    /// (no dependence on Orientation()).
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ LastVertex();
    /// <summary>
    /// Returns True if FirstVertex() == LastVertex()
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// Returns Number of edges in the wire
    /// </summary>
    int NbEdges();
    /// <summary>
    /// Returns edge by given index in the wire
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge(int i);
    /// <summary>
    /// Replaces edge at index i by new one.
    /// </summary>
    void SetEdge(int i, Macad::Occt::TopoDS_Edge^ edge);
    /// <summary>
    /// Insert a new edge with index i and implicitly defined
    /// patch indices (indefinite patch).
    /// If i==0, edge is inserted at end of wire.
    /// </summary>
    void AddEdge(int i, Macad::Occt::TopoDS_Edge^ edge);
    /// <summary>
    /// Insert a new edge with index i and explicitly defined
    /// patch indices. If i==0, edge is inserted at end of wire.
    /// </summary>
    void AddEdge(int i, Macad::Occt::TopoDS_Edge^ edge, int iumin, int iumax, int ivmin, int ivmax);
    /// <summary>
    /// Set patch indices for edge i.
    /// </summary>
    void SetPatchIndex(int i, int iumin, int iumax, int ivmin, int ivmax);
    void DefineIUMin(int i, int iumin);
    void DefineIUMax(int i, int iumax);
    void DefineIVMin(int i, int ivmin);
    /// <summary>
    /// Modify minimal or maximal patch index for edge i.
    /// The corresponding patch index for that edge is modified so
    /// as to satisfy eq. iumin <= myIUMin(i) <= myIUMax(i) <= iumax
    /// </summary>
    void DefineIVMax(int i, int ivmax);
    /// <summary>
    /// Returns patch indices for edge i.
    /// </summary>
    void GetPatchIndex(int i, int% iumin, int% iumax, int% ivmin, int% ivmax);
    /// <summary>
    /// Checks patch indices for edge i to satisfy equations
    /// IUMin(i) <= IUMax(i) <= IUMin(i)+1
    /// </summary>
    bool CheckPatchIndex(int i);
    void SetVertex(Macad::Occt::TopoDS_Vertex^ theVertex);
    Macad::Occt::TopoDS_Vertex^ GetVertex();
    bool IsVertex();
}; // class ShapeFix_WireSegment

//---------------------------------------------------------------------
//  Class  ShapeFix_ComposeShell
//---------------------------------------------------------------------
/// <summary>
/// This class is intended to create a shell from the composite
/// surface (grid of surfaces) and set of wires.
/// It may be either division of the supporting surface of the
/// face, or creating a shape corresponding to face on composite
/// surface which is missing in CAS.CADE but exists in some other
/// systems.
/// 
/// It splits (if necessary) original face to several ones by
/// splitting lines which are joint lines on a supplied grid of
/// surfaces (U- and V- isolines of the  composite surface).
/// There are two modes of work, which differ in the way of
/// handling faces on periodic surfaces:
/// 
/// - if ClosedMode is False (default), when splitting itself is
/// done as if surface were not periodic. The periodicity of the
/// underlying surface is taken into account by duplicating splitting
/// lines in the periodic direction, as necessary to split all
/// the wires (whole parametrical range of a face)
/// In this mode, some regularization procedures are performed
/// (indexation of split segments by patch numbers), and it is
/// expected to be more reliable and robust in case of bad shapes
/// 
/// - if ClosedMode is True, when everything on a periodic surfaces
/// is considered as modulo period. This allows to deal with wires
/// which are closed in 3d but not in 2d, with wires which may be
/// shifted on several periods in 2d etc. However, this mode is
/// less reliable since some regularizations do not work for it.
/// 
/// The work is made basing on pcurves of the edges. These pcurves
/// should already exist (for example, in the case of division of
/// existing face), then they are taken as is. The existing pcurves
/// should be assigned to one surface (face) for all edges,
/// this surface (face) will be used only for accessing pcurves,
/// and it may have any geometry.
/// 
/// All the modifications are recorded in the context tool
/// (ShapeBuild_ReShape).
/// </summary>
public ref class ShapeFix_ComposeShell sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_ComposeShell_h
public:
    Include_ShapeFix_ComposeShell_h
#endif

public:
    ShapeFix_ComposeShell(::ShapeFix_ComposeShell* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_ComposeShell(::ShapeFix_ComposeShell& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_ComposeShell* NativeInstance
    {
        ::ShapeFix_ComposeShell* get()
        {
            return static_cast<::ShapeFix_ComposeShell*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) flag for special 'closed'
    /// mode which forces ComposeShell to consider
    /// all pcurves on closed surface as modulo period.
    /// This can reduce reliability, but allows to deal
    /// with wires closed in 3d but open in 2d (missing seam)
    /// Default is False
    /// </summary>
    property bool ClosedMode {
        bool get() {
            return ((::ShapeFix_ComposeShell*)_NativeInstance)->ClosedMode();
        }
        void set(bool value) {
            ((::ShapeFix_ComposeShell*)_NativeInstance)->ClosedMode() = value;
        }
    }

    /// <summary>
    /// Creates empty tool.
    /// </summary>
    ShapeFix_ComposeShell();
    /* Method skipped due to unknown mapping: void Init(ShapeExtend_CompositeSurface Grid, TopLoc_Location L, TopoDS_Face Face, double Prec, ) */
    /// <summary>
    /// Performs the work on already loaded data.
    /// </summary>
    bool Perform();
    /// <summary>
    /// Splits edges in the original shape by grid.
    /// This is a part of Perform() which does not produce any
    /// resulting shape; the only result is filled context
    /// where splittings are recorded.
    /// 
    /// NOTE: If edge is split, it is replaced by wire, and
    /// order of edges in the wire corresponds to FORWARD orientation
    /// of the edge.
    /// </summary>
    void SplitEdges();
    /// <summary>
    /// Returns resulting shell or face (or Null shape if not done)
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Result();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Creates new faces from the set of (closed) wires. Each wire
    /// is put on corresponding patch in the composite surface,
    /// and all pcurves on the initial (pseudo)face are reassigned to
    /// that surface. If several wires are one inside another, single
    /// face is created.
    /// </summary>
    void DispatchWires(Macad::Occt::TopTools_SequenceOfShape^ faces, Macad::Occt::ShapeFix_SequenceOfWireSegment^ wires);
    /// <summary>
    /// Sets tool for transfer parameters from 3d to 2d and vice versa.
    /// </summary>
    void SetTransferParamTool(Macad::Occt::ShapeAnalysis_TransferParameters^ TransferParam);
    /// <summary>
    /// Gets tool for transfer parameters from 3d to 2d and vice versa.
    /// </summary>
    Macad::Occt::ShapeAnalysis_TransferParameters^ GetTransferParamTool();
    static Macad::Occt::ShapeFix_ComposeShell^ CreateDowncasted(::ShapeFix_ComposeShell* instance);
}; // class ShapeFix_ComposeShell

//---------------------------------------------------------------------
//  Class  ShapeFix_Edge
//---------------------------------------------------------------------
/// <summary>
/// Fixing invalid edge.
/// Geometrical and/or topological inconsistency:
/// - no 3d curve or pcurve,
/// - mismatching orientation of 3d curve and pcurve,
/// - incorrect SameParameter flag (curve deviation is greater than
/// edge tolerance),
/// - not adjacent curves (3d or pcurve) to the vertices.
/// </summary>
public ref class ShapeFix_Edge sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeFix_Edge_h
public:
    Include_ShapeFix_Edge_h
#endif

public:
    ShapeFix_Edge(::ShapeFix_Edge* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeFix_Edge(::ShapeFix_Edge& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeFix_Edge* NativeInstance
    {
        ::ShapeFix_Edge* get()
        {
            return static_cast<::ShapeFix_Edge*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeFix_Edge();
    /// <summary>
    /// Returns the projector used for recomputing missing pcurves
    /// Can be used for adjusting parameters of projector
    /// </summary>
    Macad::Occt::ShapeConstruct_ProjectCurveOnSurface^ Projector();
    bool FixRemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Removes the pcurve(s) of the edge if it does not match the
    /// vertices
    /// Check is done
    /// Use    : It is to be called when pcurve of an edge can be wrong
    /// (e.g., after import from IGES)
    /// Returns: True, if does not match, removed (status DONE)
    /// False, (status OK) if matches or (status FAIL) if no pcurve,
    /// nothing done
    /// </summary>
    bool FixRemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
    /// <summary>
    /// Removes 3d curve of the edge if it does not match the vertices
    /// Returns: True,  if does not match, removed (status DONE)
    /// False, (status OK) if matches or (status FAIL) if no 3d curve,
    /// nothing done
    /// </summary>
    bool FixRemoveCurve3d(Macad::Occt::TopoDS_Edge^ edge);
    /// <summary>
    /// See method below for information
    /// </summary>
    bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, double prec);
    /// <summary>
    /// See method below for information
    /// </summary>
    bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam);
    /// <summary>
    /// See method below for information
    /// </summary>
    bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, double prec);
    /// <summary>
    /// See method below for information
    /// </summary>
    bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam);
    /// <summary>
    /// See method below for information
    /// </summary>
    bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana, double prec);
    /// <summary>
    /// See method below for information
    /// </summary>
    bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana);
    /// <summary>
    /// Adds pcurve(s) of the edge if missing (by projecting 3d curve)
    /// Parameter isSeam indicates if the edge is a seam.
    /// The parameter <prec> defines the precision for calculations.
    /// If it is 0 (default), the tolerance of the edge is taken.
    /// Remark : This method is rather for internal use since it accepts parameter
    /// <surfana> for optimization of computations
    /// Use    : It is to be called after FixRemovePCurve (if removed) or in any
    /// case when edge can have no pcurve
    /// Returns: True if pcurve was added, else False
    /// Status :
    /// OK   : Pcurve exists
    /// FAIL1: No 3d curve
    /// FAIL2: fail during projecting
    /// DONE1: Pcurve was added
    /// DONE2: specific case of pcurve going through degenerated point on
    /// sphere encountered during projection (see class
    /// ShapeConstruct_ProjectCurveOnSurface for more info)
    /// </summary>
    bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana, double prec);
    /// <summary>
    /// Adds pcurve(s) of the edge if missing (by projecting 3d curve)
    /// Parameter isSeam indicates if the edge is a seam.
    /// The parameter <prec> defines the precision for calculations.
    /// If it is 0 (default), the tolerance of the edge is taken.
    /// Remark : This method is rather for internal use since it accepts parameter
    /// <surfana> for optimization of computations
    /// Use    : It is to be called after FixRemovePCurve (if removed) or in any
    /// case when edge can have no pcurve
    /// Returns: True if pcurve was added, else False
    /// Status :
    /// OK   : Pcurve exists
    /// FAIL1: No 3d curve
    /// FAIL2: fail during projecting
    /// DONE1: Pcurve was added
    /// DONE2: specific case of pcurve going through degenerated point on
    /// sphere encountered during projection (see class
    /// ShapeConstruct_ProjectCurveOnSurface for more info)
    /// </summary>
    bool FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana);
    /// <summary>
    /// Tries to build 3d curve of the edge if missing
    /// Use    : It is to be called after FixRemoveCurve3d (if removed) or in any
    /// case when edge can have no 3d curve
    /// Returns: True if 3d curve was added, else False
    /// Status :
    /// OK   : 3d curve exists
    /// FAIL1: BRepLib::BuildCurve3d() has failed
    /// DONE1: 3d curve was added
    /// </summary>
    bool FixAddCurve3d(Macad::Occt::TopoDS_Edge^ edge);
    bool FixVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Increases the tolerances of the edge vertices to comprise
    /// the ends of 3d curve and pcurve on the given face
    /// (first method) or all pcurves stored in an edge (second one)
    /// Returns: True, if tolerances have been increased, otherwise False
    /// Status:
    /// OK   : the original tolerances have not been changed
    /// DONE1: the tolerance of first vertex has been increased
    /// DONE2: the tolerance of last  vertex has been increased
    /// </summary>
    bool FixVertexTolerance(Macad::Occt::TopoDS_Edge^ edge);
    bool FixReversed2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Fixes edge if pcurve is directed opposite to 3d curve
    /// Check is done by call to the function
    /// ShapeAnalysis_Edge::CheckCurve3dWithPCurve()
    /// Warning: For seam edge this method will check and fix the pcurve in only
    /// one direction. Hence, it should be called twice for seam edge:
    /// once with edge orientation FORWARD and once with REVERSED.
    /// Returns: False if nothing done, True if reversed (status DONE)
    /// Status:  OK    - pcurve OK, nothing done
    /// FAIL1 - no pcurve
    /// FAIL2 - no 3d curve
    /// DONE1 - pcurve was reversed
    /// </summary>
    bool FixReversed2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
    /// <summary>
    /// Tries to make edge SameParameter and sets corresponding
    /// tolerance and SameParameter flag.
    /// First, it makes edge same range if SameRange flag is not set.
    /// 
    /// If flag SameParameter is set, this method calls the
    /// function ShapeAnalysis_Edge::CheckSameParameter() that
    /// calculates the maximal deviation of pcurves of the edge from
    /// its 3d curve. If deviation > tolerance, the tolerance of edge
    /// is increased to a value of deviation. If deviation < tolerance
    /// nothing happens.
    /// 
    /// If flag SameParameter is not set, this method chooses the best
    /// variant (one that has minimal tolerance), either
    /// a. only after computing deviation (as above) or
    /// b. after calling standard procedure BRepLib::SameParameter
    /// and computing deviation (as above). If <tolerance> > 0, it is
    /// used as parameter for BRepLib::SameParameter, otherwise,
    /// tolerance of the edge is used.
    /// 
    /// Use    : Is to be called after all pcurves and 3d curve of the edge are
    /// correctly computed
    /// Remark : SameParameter flag is always set to True after this method
    /// Returns: True, if something done, else False
    /// Status : OK    - edge was initially SameParameter, nothing is done
    /// FAIL1 - computation of deviation of pcurves from 3d curve has failed
    /// FAIL2 - BRepLib::SameParameter() has failed
    /// DONE1 - tolerance of the edge was increased
    /// DONE2 - flag SameParameter was set to True (only if
    /// BRepLib::SameParameter() did not set it)
    /// DONE3 - edge was modified by BRepLib::SameParameter() to SameParameter
    /// DONE4 - not used anymore
    /// DONE5 - if the edge resulting from BRepLib has been chosen, i.e. variant b. above
    /// (only for edges with not set SameParameter)
    /// </summary>
    bool FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, double tolerance);
    /// <summary>
    /// Tries to make edge SameParameter and sets corresponding
    /// tolerance and SameParameter flag.
    /// First, it makes edge same range if SameRange flag is not set.
    /// 
    /// If flag SameParameter is set, this method calls the
    /// function ShapeAnalysis_Edge::CheckSameParameter() that
    /// calculates the maximal deviation of pcurves of the edge from
    /// its 3d curve. If deviation > tolerance, the tolerance of edge
    /// is increased to a value of deviation. If deviation < tolerance
    /// nothing happens.
    /// 
    /// If flag SameParameter is not set, this method chooses the best
    /// variant (one that has minimal tolerance), either
    /// a. only after computing deviation (as above) or
    /// b. after calling standard procedure BRepLib::SameParameter
    /// and computing deviation (as above). If <tolerance> > 0, it is
    /// used as parameter for BRepLib::SameParameter, otherwise,
    /// tolerance of the edge is used.
    /// 
    /// Use    : Is to be called after all pcurves and 3d curve of the edge are
    /// correctly computed
    /// Remark : SameParameter flag is always set to True after this method
    /// Returns: True, if something done, else False
    /// Status : OK    - edge was initially SameParameter, nothing is done
    /// FAIL1 - computation of deviation of pcurves from 3d curve has failed
    /// FAIL2 - BRepLib::SameParameter() has failed
    /// DONE1 - tolerance of the edge was increased
    /// DONE2 - flag SameParameter was set to True (only if
    /// BRepLib::SameParameter() did not set it)
    /// DONE3 - edge was modified by BRepLib::SameParameter() to SameParameter
    /// DONE4 - not used anymore
    /// DONE5 - if the edge resulting from BRepLib has been chosen, i.e. variant b. above
    /// (only for edges with not set SameParameter)
    /// </summary>
    bool FixSameParameter(Macad::Occt::TopoDS_Edge^ edge);
    /// <summary>
    /// Tries to make edge SameParameter and sets corresponding
    /// tolerance and SameParameter flag.
    /// First, it makes edge same range if SameRange flag is not set.
    /// 
    /// If flag SameParameter is set, this method calls the
    /// function ShapeAnalysis_Edge::CheckSameParameter() that
    /// calculates the maximal deviation of pcurves of the edge from
    /// its 3d curve. If deviation > tolerance, the tolerance of edge
    /// is increased to a value of deviation. If deviation < tolerance
    /// nothing happens.
    /// 
    /// If flag SameParameter is not set, this method chooses the best
    /// variant (one that has minimal tolerance), either
    /// a. only after computing deviation (as above) or
    /// b. after calling standard procedure BRepLib::SameParameter
    /// and computing deviation (as above). If <tolerance> > 0, it is
    /// used as parameter for BRepLib::SameParameter, otherwise,
    /// tolerance of the edge is used.
    /// 
    /// Use    : Is to be called after all pcurves and 3d curve of the edge are
    /// correctly computed
    /// Remark : SameParameter flag is always set to True after this method
    /// Returns: True, if something done, else False
    /// Status : OK    - edge was initially SameParameter, nothing is done
    /// FAIL1 - computation of deviation of pcurves from 3d curve has failed
    /// FAIL2 - BRepLib::SameParameter() has failed
    /// DONE1 - tolerance of the edge was increased
    /// DONE2 - flag SameParameter was set to True (only if
    /// BRepLib::SameParameter() did not set it)
    /// DONE3 - edge was modified by BRepLib::SameParameter() to SameParameter
    /// DONE4 - not used anymore
    /// DONE5 - if the edge resulting from BRepLib has been chosen, i.e. variant b. above
    /// (only for edges with not set SameParameter)
    /// </summary>
    bool FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double tolerance);
    /// <summary>
    /// Tries to make edge SameParameter and sets corresponding
    /// tolerance and SameParameter flag.
    /// First, it makes edge same range if SameRange flag is not set.
    /// 
    /// If flag SameParameter is set, this method calls the
    /// function ShapeAnalysis_Edge::CheckSameParameter() that
    /// calculates the maximal deviation of pcurves of the edge from
    /// its 3d curve. If deviation > tolerance, the tolerance of edge
    /// is increased to a value of deviation. If deviation < tolerance
    /// nothing happens.
    /// 
    /// If flag SameParameter is not set, this method chooses the best
    /// variant (one that has minimal tolerance), either
    /// a. only after computing deviation (as above) or
    /// b. after calling standard procedure BRepLib::SameParameter
    /// and computing deviation (as above). If <tolerance> > 0, it is
    /// used as parameter for BRepLib::SameParameter, otherwise,
    /// tolerance of the edge is used.
    /// 
    /// Use    : Is to be called after all pcurves and 3d curve of the edge are
    /// correctly computed
    /// Remark : SameParameter flag is always set to True after this method
    /// Returns: True, if something done, else False
    /// Status : OK    - edge was initially SameParameter, nothing is done
    /// FAIL1 - computation of deviation of pcurves from 3d curve has failed
    /// FAIL2 - BRepLib::SameParameter() has failed
    /// DONE1 - tolerance of the edge was increased
    /// DONE2 - flag SameParameter was set to True (only if
    /// BRepLib::SameParameter() did not set it)
    /// DONE3 - edge was modified by BRepLib::SameParameter() to SameParameter
    /// DONE4 - not used anymore
    /// DONE5 - if the edge resulting from BRepLib has been chosen, i.e. variant b. above
    /// (only for edges with not set SameParameter)
    /// </summary>
    bool FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Sets context
    /// </summary>
    void SetContext(Macad::Occt::ShapeBuild_ReShape^ context);
    /// <summary>
    /// Returns context
    /// </summary>
    Macad::Occt::ShapeBuild_ReShape^ Context();
    static Macad::Occt::ShapeFix_Edge^ CreateDowncasted(::ShapeFix_Edge* instance);
}; // class ShapeFix_Edge

//---------------------------------------------------------------------
//  Class  ShapeFix_EdgeConnect
//---------------------------------------------------------------------
/// <summary>
/// Rebuilds edges to connect with new vertices, was moved from ShapeBuild.
/// Makes vertices to be shared to connect edges,
/// updates positions and tolerances for shared vertices.
/// Accepts edges bounded by two vertices each.
/// </summary>
public ref class ShapeFix_EdgeConnect sealed
    : public Macad::Occt::BaseClass<::ShapeFix_EdgeConnect>
{

#ifdef Include_ShapeFix_EdgeConnect_h
public:
    Include_ShapeFix_EdgeConnect_h
#endif

public:
    ShapeFix_EdgeConnect(::ShapeFix_EdgeConnect* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_EdgeConnect>( nativeInstance, true )
    {}

    ShapeFix_EdgeConnect(::ShapeFix_EdgeConnect& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_EdgeConnect>( &nativeInstance, false )
    {}

    property ::ShapeFix_EdgeConnect* NativeInstance
    {
        ::ShapeFix_EdgeConnect* get()
        {
            return static_cast<::ShapeFix_EdgeConnect*>(_NativeInstance);
        }
    }

public:
    ShapeFix_EdgeConnect();
    /// <summary>
    /// Adds information on connectivity between start vertex
    /// of second edge and end vertex of first edge,
    /// taking edges orientation into account
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ aFirst, Macad::Occt::TopoDS_Edge^ aSecond);
    /// <summary>
    /// Adds connectivity information for the whole shape.
    /// Note: edges in wires must be well ordered
    /// Note: flag Closed should be set for closed wires
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ aShape);
    /// <summary>
    /// Builds shared vertices, updates their positions and tolerances
    /// </summary>
    void Build();
    /// <summary>
    /// Clears internal data structure
    /// </summary>
    void Clear();
}; // class ShapeFix_EdgeConnect

//---------------------------------------------------------------------
//  Class  ShapeFix_EdgeProjAux
//---------------------------------------------------------------------
/// <summary>
/// Project 3D point (vertex) on pcurves to find Vertex Parameter
/// on parametric representation of an edge
/// </summary>
public ref class ShapeFix_EdgeProjAux sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeFix_EdgeProjAux_h
public:
    Include_ShapeFix_EdgeProjAux_h
#endif

public:
    ShapeFix_EdgeProjAux(::ShapeFix_EdgeProjAux* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeFix_EdgeProjAux(::ShapeFix_EdgeProjAux& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeFix_EdgeProjAux* NativeInstance
    {
        ::ShapeFix_EdgeProjAux* get()
        {
            return static_cast<::ShapeFix_EdgeProjAux*>(_NativeInstance);
        }
    }

public:
    ShapeFix_EdgeProjAux();
    ShapeFix_EdgeProjAux(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E);
    void Init(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E);
    void Compute(double preci);
    bool IsFirstDone();
    bool IsLastDone();
    double FirstParam();
    double LastParam();
    bool IsIso(Macad::Occt::Geom2d_Curve^ C);
    static Macad::Occt::ShapeFix_EdgeProjAux^ CreateDowncasted(::ShapeFix_EdgeProjAux* instance);
}; // class ShapeFix_EdgeProjAux

//---------------------------------------------------------------------
//  Class  ShapeFix_Wire
//---------------------------------------------------------------------
/// <summary>
/// This class provides a set of tools for repairing a wire.
/// 
/// These are methods Fix...(), organised in two levels:
/// 
/// Level 1: Advanced - each method in this level fixes one separate problem,
/// usually dealing with either single edge or connection of the
/// two adjacent edges. These methods should be used carefully and
/// called in right sequence, because some of them depend on others.
/// 
/// Level 2: Public (API) - methods which group several methods of level 1
/// and call them in a proper sequence in order to make some
/// consistent set of fixes for a whole wire. It is possible to
/// control calls to methods of the advanced level from methods of
/// the public level by use of flags Fix..Mode() (see below).
/// 
/// Fixes can be made in three ways:
/// 1. Increasing tolerance of an edge or a vertex
/// 2. Changing topology (adding/removing/replacing edge in the wire
/// and/or replacing the vertex in the edge)
/// 3. Changing geometry (shifting vertex or adjusting ends of edge
/// curve to vertices, or recomputing curves of the edge)
/// 
/// When fix can be made in more than one way (e.g., either
/// by increasing tolerance or shifting a vertex), it is chosen
/// according to the flags:
/// ModifyTopologyMode - allows modification of the topology.
/// This flag can be set when fixing a wire on
/// the separate (free) face, and should be
/// unset for face which is part of shell.
/// ModifyGeometryMode - allows modification of the geometry.
/// 
/// The order of descriptions of Fix() methods in this CDL
/// approximately corresponds to the optimal order of calls.
/// 
/// NOTE: most of fixing methods expect edges in the
/// ShapeExtend_WireData to be ordered, so it is necessary to make
/// call to FixReorder() before any other fixes
/// 
/// ShapeFix_Wire should be initialized prior to any fix by the
/// following data:
/// a) Wire (ether TopoDS_Wire or ShapeExtend_Wire)
/// b) Face or surface
/// c) Precision
/// d) Maximal tail angle and width
/// This can be done either by calling corresponding methods
/// (LoadWire, SetFace or SetSurface, SetPrecision, SetMaxTailAngle
/// and SetMaxTailWidth), or
/// by loading already filled ShapeAnalisis_Wire with method Load
/// </summary>
public ref class ShapeFix_Wire sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Wire_h
public:
    Include_ShapeFix_Wire_h
#endif

public:
    ShapeFix_Wire(::ShapeFix_Wire* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_Wire(::ShapeFix_Wire& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_Wire* NativeInstance
    {
        ::ShapeFix_Wire* get()
        {
            return static_cast<::ShapeFix_Wire*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) the flag which defines whether it is
    /// allowed to modify topology of the wire during fixing
    /// (adding/removing edges etc.)
    /// </summary>
    property bool ModifyTopologyMode {
        bool get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->ModifyTopologyMode();
        }
        void set(bool value) {
            ((::ShapeFix_Wire*)_NativeInstance)->ModifyTopologyMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether the Fix..()
    /// methods are allowed to modify geometry of the edges and vertices
    /// </summary>
    property bool ModifyGeometryMode {
        bool get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->ModifyGeometryMode();
        }
        void set(bool value) {
            ((::ShapeFix_Wire*)_NativeInstance)->ModifyGeometryMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether the Fix..()
    /// methods are allowed to modify RemoveLoop of the edges
    /// </summary>
    property int ModifyRemoveLoopMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->ModifyRemoveLoopMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->ModifyRemoveLoopMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether the wire
    /// is to be closed (by calling methods like FixDegenerated()
    /// and FixConnected() for last and first edges).
    /// </summary>
    property bool ClosedWireMode {
        bool get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->ClosedWireMode();
        }
        void set(bool value) {
            ((::ShapeFix_Wire*)_NativeInstance)->ClosedWireMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether the 2d (True)
    /// representation of the wire is preferable over 3d one (in the
    /// case of ambiguity in FixEdgeCurves).
    /// </summary>
    property bool PreferencePCurveMode {
        bool get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->PreferencePCurveMode();
        }
        void set(bool value) {
            ((::ShapeFix_Wire*)_NativeInstance)->PreferencePCurveMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether tool
    /// tries to fix gaps first by changing curves ranges (i.e.
    /// using intersection, extrema, projections) or not.
    /// </summary>
    property bool FixGapsByRangesMode {
        bool get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixGapsByRangesMode();
        }
        void set(bool value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixGapsByRangesMode() = value;
        }
    }

    property int FixReorderMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixReorderMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixReorderMode() = value;
        }
    }

    property int FixSmallMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixSmallMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixSmallMode() = value;
        }
    }

    property int FixConnectedMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixConnectedMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixConnectedMode() = value;
        }
    }

    property int FixEdgeCurvesMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixEdgeCurvesMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixEdgeCurvesMode() = value;
        }
    }

    property int FixDegeneratedMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixDegeneratedMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixDegeneratedMode() = value;
        }
    }

    property int FixSelfIntersectionMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixSelfIntersectionMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixSelfIntersectionMode() = value;
        }
    }

    property int FixLackingMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixLackingMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixLackingMode() = value;
        }
    }

    property int FixGaps3dMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixGaps3dMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixGaps3dMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag for corresponding Fix..() method
    /// which defines whether this method will be called from the
    /// method APIFix():
    /// -1 default
    /// 1 method will be called
    /// 0 method will not be called
    /// </summary>
    property int FixGaps2dMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixGaps2dMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixGaps2dMode() = value;
        }
    }

    property int FixReversed2dMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixReversed2dMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixReversed2dMode() = value;
        }
    }

    property int FixRemovePCurveMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixRemovePCurveMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixRemovePCurveMode() = value;
        }
    }

    property int FixAddPCurveMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixAddPCurveMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixAddPCurveMode() = value;
        }
    }

    property int FixRemoveCurve3dMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixRemoveCurve3dMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixRemoveCurve3dMode() = value;
        }
    }

    property int FixAddCurve3dMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixAddCurve3dMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixAddCurve3dMode() = value;
        }
    }

    property int FixSeamMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixSeamMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixSeamMode() = value;
        }
    }

    property int FixShiftedMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixShiftedMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixShiftedMode() = value;
        }
    }

    property int FixSameParameterMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixSameParameterMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixSameParameterMode() = value;
        }
    }

    property int FixVertexToleranceMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixVertexToleranceMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixVertexToleranceMode() = value;
        }
    }

    property int FixNotchedEdgesMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixNotchedEdgesMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixNotchedEdgesMode() = value;
        }
    }

    property int FixSelfIntersectingEdgeMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixSelfIntersectingEdgeMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixSelfIntersectingEdgeMode() = value;
        }
    }

    property int FixIntersectingEdgesMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixIntersectingEdgesMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixIntersectingEdgesMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag for corresponding Fix..() method
    /// which defines whether this method will be called from the
    /// corresponding Fix..() method of the public level:
    /// -1 default
    /// 1 method will be called
    /// 0 method will not be called
    /// </summary>
    property int FixNonAdjacentIntersectingEdgesMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixNonAdjacentIntersectingEdgesMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixNonAdjacentIntersectingEdgesMode() = value;
        }
    }

    property int FixTailMode {
        int get() {
            return ((::ShapeFix_Wire*)_NativeInstance)->FixTailMode();
        }
        void set(int value) {
            ((::ShapeFix_Wire*)_NativeInstance)->FixTailMode() = value;
        }
    }

    /// <summary>
    /// Empty Constructor, creates clear object with default flags
    /// </summary>
    ShapeFix_Wire();
    /// <summary>
    /// Create new object with default flags and prepare it for use
    /// (Loads analyzer with all the data for the wire and face)
    /// </summary>
    ShapeFix_Wire(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double prec);
    /// <summary>
    /// Sets all modes to default
    /// </summary>
    void ClearModes();
    /// <summary>
    /// Clears all statuses
    /// </summary>
    void ClearStatuses();
    /// <summary>
    /// Load analyzer with all the data for the wire and face
    /// and drops all fixing statuses
    /// </summary>
    void Init(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double prec);
    /// <summary>
    /// Load analyzer with all the data already prepared
    /// and drops all fixing statuses
    /// If analyzer contains face, there is no need to set it
    /// by SetFace or SetSurface
    /// </summary>
    void Init(Macad::Occt::ShapeAnalysis_Wire^ saw);
    /// <summary>
    /// Load data for the wire, and drops all fixing statuses
    /// </summary>
    void Load(Macad::Occt::TopoDS_Wire^ wire);
    /* Method skipped due to unknown mapping: void Load(ShapeExtend_WireData sbwd, ) */
    /// <summary>
    /// Set working face for the wire
    /// </summary>
    void SetFace(Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Set surface for the wire
    /// </summary>
    void SetSurface(Macad::Occt::Geom_Surface^ surf);
    /// <summary>
    /// Set surface for the wire
    /// </summary>
    void SetSurface(Macad::Occt::Geom_Surface^ surf, Macad::Occt::TopLoc_Location^ loc);
    /// <summary>
    /// Set working precision (to root and to analyzer)
    /// </summary>
    void SetPrecision(double prec);
    /// <summary>
    /// Sets the maximal allowed angle of the tails in radians.
    /// </summary>
    void SetMaxTailAngle(double theMaxTailAngle);
    /// <summary>
    /// Sets the maximal allowed width of the tails.
    /// </summary>
    void SetMaxTailWidth(double theMaxTailWidth);
    /// <summary>
    /// Tells if the wire is loaded
    /// </summary>
    bool IsLoaded();
    /// <summary>
    /// Tells if the wire and face are loaded
    /// </summary>
    bool IsReady();
    /// <summary>
    /// returns number of edges in the working wire
    /// </summary>
    int NbEdges();
    /// <summary>
    /// Makes the resulting Wire (by basic Brep_Builder)
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Wire();
    /// <summary>
    /// Makes the resulting Wire (by BRepAPI_MakeWire)
    /// </summary>
    Macad::Occt::TopoDS_Wire^ WireAPIMake();
    /// <summary>
    /// returns field Analyzer (working tool)
    /// </summary>
    Macad::Occt::ShapeAnalysis_Wire^ Analyzer();
    /* Method skipped due to unknown mapping: ShapeExtend_WireData WireData() */
    /// <summary>
    /// returns working face (Analyzer.Face())
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
    /// <summary>
    /// This method performs all the available fixes.
    /// If some fix is turned on or off explicitly by the Fix..Mode() flag,
    /// this fix is either called or not depending on that flag.
    /// Else (i.e. if flag is default) fix is called depending on the
    /// situation: some fixes are not called or are limited if order of
    /// edges in the wire is not OK, or depending on modes
    /// 
    /// The order of the fixes and default behaviour of Perform() are:
    /// FixReorder
    /// FixSmall (with lockvtx true if ! TopoMode or if wire is not ordered)
    /// FixConnected (if wire is ordered)
    /// FixEdgeCurves (without FixShifted if wire is not ordered)
    /// FixDegenerated (if wire is ordered)
    /// FixSelfIntersection (if wire is ordered and ClosedMode is True)
    /// FixLacking (if wire is ordered)
    /// </summary>
    bool Perform();
    /// <summary>
    /// Performs an analysis and reorders edges in the wire using class WireOrder.
    /// Flag <theModeBoth> determines the use of miscible mode if necessary.
    /// </summary>
    bool FixReorder(bool theModeBoth);
    /// <summary>
    /// Performs an analysis and reorders edges in the wire using class WireOrder.
    /// Flag <theModeBoth> determines the use of miscible mode if necessary.
    /// </summary>
    bool FixReorder();
    /// <summary>
    /// Applies FixSmall(num) to all edges in the wire
    /// </summary>
    int FixSmall(bool lockvtx, double precsmall);
    /// <summary>
    /// Applies FixSmall(num) to all edges in the wire
    /// </summary>
    int FixSmall(bool lockvtx);
    /// <summary>
    /// Applies FixConnected(num) to all edges in the wire
    /// Connection between first and last edges is treated only if
    /// flag ClosedMode is True
    /// If <prec> is -1 then MaxTolerance() is taken.
    /// </summary>
    bool FixConnected(double prec);
    /// <summary>
    /// Applies FixConnected(num) to all edges in the wire
    /// Connection between first and last edges is treated only if
    /// flag ClosedMode is True
    /// If <prec> is -1 then MaxTolerance() is taken.
    /// </summary>
    bool FixConnected();
    /// <summary>
    /// Groups the fixes dealing with 3d and pcurves of the edges.
    /// The order of the fixes and the default behaviour are:
    /// ShapeFix_Edge::FixReversed2d
    /// ShapeFix_Edge::FixRemovePCurve (only if forced)
    /// ShapeFix_Edge::FixAddPCurve
    /// ShapeFix_Edge::FixRemoveCurve3d (only if forced)
    /// ShapeFix_Edge::FixAddCurve3d
    /// FixSeam,
    /// FixShifted,
    /// ShapeFix_Edge::FixSameParameter
    /// </summary>
    bool FixEdgeCurves();
    /// <summary>
    /// Applies FixDegenerated(num) to all edges in the wire
    /// Connection between first and last edges is treated only if
    /// flag ClosedMode is True
    /// </summary>
    bool FixDegenerated();
    /// <summary>
    /// Applies FixSelfIntersectingEdge(num) and
    /// FixIntersectingEdges(num) to all edges in the wire and
    /// FixIntersectingEdges(num1, num2) for all pairs num1 and num2
    /// such that num2 >= num1 + 2
    /// and removes wrong edges if any
    /// </summary>
    bool FixSelfIntersection();
    /// <summary>
    /// Applies FixLacking(num) to all edges in the wire
    /// Connection between first and last edges is treated only if
    /// flag ClosedMode is True
    /// If <force> is False (default), test for connectness is done with
    /// precision of vertex between edges, else it is done with minimal
    /// value of vertex tolerance and Analyzer.Precision().
    /// Hence, <force> will lead to inserting lacking edges in replacement
    /// of vertices which have big tolerances.
    /// </summary>
    bool FixLacking(bool force);
    /// <summary>
    /// Applies FixLacking(num) to all edges in the wire
    /// Connection between first and last edges is treated only if
    /// flag ClosedMode is True
    /// If <force> is False (default), test for connectness is done with
    /// precision of vertex between edges, else it is done with minimal
    /// value of vertex tolerance and Analyzer.Precision().
    /// Hence, <force> will lead to inserting lacking edges in replacement
    /// of vertices which have big tolerances.
    /// </summary>
    bool FixLacking();
    /// <summary>
    /// Fixes a wire to be well closed
    /// It performs FixConnected, FixDegenerated and FixLacking between
    /// last and first edges (independingly on flag ClosedMode and modes
    /// for these fixings)
    /// If <prec> is -1 then MaxTolerance() is taken.
    /// </summary>
    bool FixClosed(double prec);
    /// <summary>
    /// Fixes a wire to be well closed
    /// It performs FixConnected, FixDegenerated and FixLacking between
    /// last and first edges (independingly on flag ClosedMode and modes
    /// for these fixings)
    /// If <prec> is -1 then MaxTolerance() is taken.
    /// </summary>
    bool FixClosed();
    /// <summary>
    /// Fixes gaps between ends of 3d curves on adjacent edges
    /// myPrecision is used to detect the gaps.
    /// </summary>
    bool FixGaps3d();
    /// <summary>
    /// Fixes gaps between ends of pcurves on adjacent edges
    /// myPrecision is used to detect the gaps.
    /// </summary>
    bool FixGaps2d();
    /// <summary>
    /// Reorder edges in the wire as determined by WireOrder
    /// that should be filled and computed before
    /// </summary>
    bool FixReorder(Macad::Occt::ShapeAnalysis_WireOrder^ wi);
    /// <summary>
    /// Fixes Null Length Edge to be removed
    /// If an Edge has Null Length (regarding preci, or <precsmall>
    /// - what is smaller), it should be removed
    /// It can be with no problem if its two vertices are the same
    /// Else, if lockvtx is False, it is removed and its end vertex
    /// is put on the preceding edge
    /// But if lockvtx is True, this edge must be kept ...
    /// </summary>
    bool FixSmall(int num, bool lockvtx, double precsmall);
    /// <summary>
    /// Fixes connected edges (preceding and current)
    /// Forces Vertices (end of preceding-begin of current) to be
    /// the same one
    /// Tests with starting preci or, if given greater, <prec>
    /// If <prec> is -1 then MaxTolerance() is taken.
    /// </summary>
    bool FixConnected(int num, double prec);
    /// <summary>
    /// Fixes a seam edge
    /// A Seam edge has two pcurves, one for forward. one for reversed
    /// The forward pcurve must be set as first
    /// 
    /// NOTE that correct order of pcurves in the seam edge depends on
    /// its orientation (i.e., on orientation of the wire, method of
    /// exploration of edges etc.).
    /// Since wire represented by the ShapeExtend_WireData is always forward
    /// (orientation is accounted by edges), it will work correct if:
    /// 1. Wire created from ShapeExtend_WireData with methods
    /// ShapeExtend_WireData::Wire..() is added into the FORWARD face
    /// (orientation can be applied later)
    /// 2. Wire is extracted from the face with orientation not composed
    /// with orientation of the face
    /// </summary>
    bool FixSeam(int num);
    /// <summary>
    /// Fixes edges which have pcurves shifted by whole parameter
    /// range on the closed surface (the case may occur if pcurve
    /// of edge was computed by projecting 3d curve, which goes
    /// along the seam).
    /// It compares each two consequent edges and tries to connect them
    /// if distance between ends is near to range of the surface.
    /// It also can detect and fix the case if all pcurves are connected,
    /// but lie out of parametric bounds of the surface.
    /// In addition to FixShifted from ShapeFix_Wire, more
    /// sophisticated check of degenerate points is performed,
    /// and special cases like sphere given by two meridians
    /// are treated.
    /// </summary>
    bool FixShifted();
    /// <summary>
    /// Fixes Degenerated Edge
    /// Checks an <num-th> edge or a point between <num>th-1 and <num>th
    /// edges for a singularity on a supporting surface.
    /// If singularity is detected, either adds new degenerated edge
    /// (before <num>th), or makes <num>th edge to be degenerated.
    /// </summary>
    bool FixDegenerated(int num);
    /// <summary>
    /// Fixes Lacking Edge
    /// Test if two adjucent edges are disconnected in 2d (while
    /// connected in 3d), and in that case either increase tolerance
    /// of the vertex or add a new edge (straight in 2d space), in
    /// order to close wire in 2d.
    /// Returns True if edge was added or tolerance was increased.
    /// </summary>
    bool FixLacking(int num, bool force);
    /// <summary>
    /// Fixes Lacking Edge
    /// Test if two adjucent edges are disconnected in 2d (while
    /// connected in 3d), and in that case either increase tolerance
    /// of the vertex or add a new edge (straight in 2d space), in
    /// order to close wire in 2d.
    /// Returns True if edge was added or tolerance was increased.
    /// </summary>
    bool FixLacking(int num);
    bool FixNotchedEdges();
    /// <summary>
    /// Fixes gap between ends of 3d curves on num-1 and num-th edges.
    /// myPrecision is used to detect the gap.
    /// If convert is True, converts curves to bsplines to bend.
    /// </summary>
    bool FixGap3d(int num, bool convert);
    /// <summary>
    /// Fixes gap between ends of 3d curves on num-1 and num-th edges.
    /// myPrecision is used to detect the gap.
    /// If convert is True, converts curves to bsplines to bend.
    /// </summary>
    bool FixGap3d(int num);
    /// <summary>
    /// Fixes gap between ends of pcurves on num-1 and num-th edges.
    /// myPrecision is used to detect the gap.
    /// If convert is True, converts pcurves to bsplines to bend.
    /// </summary>
    bool FixGap2d(int num, bool convert);
    /// <summary>
    /// Fixes gap between ends of pcurves on num-1 and num-th edges.
    /// myPrecision is used to detect the gap.
    /// If convert is True, converts pcurves to bsplines to bend.
    /// </summary>
    bool FixGap2d(int num);
    bool FixTails();
    /* Method skipped due to unknown mapping: bool StatusReorder(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusSmall(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusConnected(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusEdgeCurves(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusDegenerated(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusSelfIntersection(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusLacking(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusClosed(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusGaps3d(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusGaps2d(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusNotches(ShapeExtend_Status status, ) */
    /// <summary>
    /// Querying the status of performed API fixing procedures
    /// Each Status..() methods gives information about the last call to
    /// the corresponding Fix..() method of API level:
    /// OK  : no problems detected; nothing done
    /// DONE: some problem(s) was(were) detected and successfully fixed
    /// FAIL: some problem(s) cannot be fixed
    /// </summary>
    bool StatusRemovedSegment();
    /* Method skipped due to unknown mapping: bool StatusFixTails(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool LastFixStatus(ShapeExtend_Status status, ) */
    /// <summary>
    /// Returns tool for fixing wires.
    /// </summary>
    Macad::Occt::ShapeFix_Edge^ FixEdgeTool();
    static Macad::Occt::ShapeFix_Wire^ CreateDowncasted(::ShapeFix_Wire* instance);
}; // class ShapeFix_Wire

//---------------------------------------------------------------------
//  Class  ShapeFix_Face
//---------------------------------------------------------------------
/// <summary>
/// This operator allows to perform various fixes on face
/// and its wires: fixes provided by ShapeFix_Wire,
/// fixing orientation of wires, addition of natural bounds,
/// fixing of missing seam edge,
/// and detection and removal of null-area wires
/// </summary>
public ref class ShapeFix_Face sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Face_h
public:
    Include_ShapeFix_Face_h
#endif

public:
    ShapeFix_Face(::ShapeFix_Face* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_Face(::ShapeFix_Face& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_Face* NativeInstance
    {
        ::ShapeFix_Face* get()
        {
            return static_cast<::ShapeFix_Face*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) the mode for applying fixes of
    /// ShapeFix_Wire, by default True.
    /// </summary>
    property int FixWireMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixWireMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixWireMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the fix orientation mode, by default
    /// True. If True, wires oriented to border limited square.
    /// </summary>
    property int FixOrientationMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixOrientationMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixOrientationMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the add natural bound mode.
    /// If true, natural boundary is added on faces that miss them.
    /// Default is False for faces with single wire (they are
    /// handled by FixOrientation in that case) and True for others.
    /// </summary>
    property int FixAddNaturalBoundMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixAddNaturalBoundMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixAddNaturalBoundMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the fix missing seam mode, by default
    /// True. If True, tries to insert seam is missed.
    /// </summary>
    property int FixMissingSeamMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixMissingSeamMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixMissingSeamMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the fix small area wire mode, by default
    /// False. If True, drops small wires.
    /// </summary>
    property int FixSmallAreaWireMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixSmallAreaWireMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixSmallAreaWireMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the remove face with small area, by default
    /// False. If True, drops faces with small outer wires.
    /// </summary>
    property int RemoveSmallAreaFaceMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->RemoveSmallAreaFaceMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->RemoveSmallAreaFaceMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the fix intersecting wires mode
    /// by default True.
    /// </summary>
    property int FixIntersectingWiresMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixIntersectingWiresMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixIntersectingWiresMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the fix loop wires mode
    /// by default True.
    /// </summary>
    property int FixLoopWiresMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixLoopWiresMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixLoopWiresMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the fix split face mode
    /// by default True.
    /// </summary>
    property int FixSplitFaceMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixSplitFaceMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixSplitFaceMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the auto-correct precision mode
    /// by default False.
    /// </summary>
    property int AutoCorrectPrecisionMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->AutoCorrectPrecisionMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->AutoCorrectPrecisionMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the activation flag for periodic
    /// degenerated fix. False by default.
    /// </summary>
    property int FixPeriodicDegeneratedMode {
        int get() {
            return ((::ShapeFix_Face*)_NativeInstance)->FixPeriodicDegeneratedMode();
        }
        void set(int value) {
            ((::ShapeFix_Face*)_NativeInstance)->FixPeriodicDegeneratedMode() = value;
        }
    }

    /// <summary>
    /// Creates an empty tool
    /// </summary>
    ShapeFix_Face();
    /// <summary>
    /// Creates a tool and loads a face
    /// </summary>
    ShapeFix_Face(Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Sets all modes to default
    /// </summary>
    void ClearModes();
    /// <summary>
    /// Loads a whole face already created, with its wires, sense and
    /// location
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Starts the creation of the face
    /// By default it will be FORWARD, or REVERSED if <fwd> is False
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ surf, double preci, bool fwd);
    /// <summary>
    /// Starts the creation of the face
    /// By default it will be FORWARD, or REVERSED if <fwd> is False
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ surf, double preci);
    /// <summary>
    /// Starts the creation of the face
    /// By default it will be FORWARD, or REVERSED if <fwd> is False
    /// </summary>
    void Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci, bool fwd);
    /// <summary>
    /// Starts the creation of the face
    /// By default it will be FORWARD, or REVERSED if <fwd> is False
    /// </summary>
    void Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci);
    /* Method skipped due to unknown mapping: void SetMsgRegistrator(ShapeExtend_BasicMsgRegistrator msgreg, ) */
    /// <summary>
    /// Sets basic precision value (also to FixWireTool)
    /// </summary>
    void SetPrecision(double preci);
    /// <summary>
    /// Sets minimal allowed tolerance (also to FixWireTool)
    /// </summary>
    void SetMinTolerance(double mintol);
    /// <summary>
    /// Sets maximal allowed tolerance (also to FixWireTool)
    /// </summary>
    void SetMaxTolerance(double maxtol);
    /// <summary>
    /// Returns a face which corresponds to the current state
    /// Warning: The finally produced face may be another one ... but with the
    /// same support
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
    /// <summary>
    /// Returns resulting shape (Face or Shell if split)
    /// To be used instead of Face() if FixMissingSeam involved
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Result();
    /// <summary>
    /// Add a wire to current face using BRep_Builder.
    /// Wire is added without taking into account orientation of face
    /// (as if face were FORWARD).
    /// </summary>
    void Add(Macad::Occt::TopoDS_Wire^ wire);
    /// <summary>
    /// Performs all the fixes, depending on modes
    /// Function Status returns the status of last call to Perform()
    /// ShapeExtend_OK   : face was OK, nothing done
    /// ShapeExtend_DONE1: some wires are fixed
    /// ShapeExtend_DONE2: orientation of wires fixed
    /// ShapeExtend_DONE3: missing seam added
    /// ShapeExtend_DONE4: small area wire removed
    /// ShapeExtend_DONE5: natural bounds added
    /// ShapeExtend_FAIL1: some fails during fixing wires
    /// ShapeExtend_FAIL2: cannot fix orientation of wires
    /// ShapeExtend_FAIL3: cannot add missing seam
    /// ShapeExtend_FAIL4: cannot remove small area wire
    /// </summary>
    bool Perform();
    /// <summary>
    /// Fixes orientation of wires on the face
    /// It tries to make all wires lie outside all others (according
    /// to orientation) by reversing orientation of some of them.
    /// If face lying on sphere or torus has single wire and
    /// AddNaturalBoundMode is True, that wire is not reversed in
    /// any case (supposing that natural bound will be added).
    /// Returns True if wires were reversed
    /// </summary>
    bool FixOrientation();
    /// <summary>
    /// Fixes orientation of wires on the face
    /// It tries to make all wires lie outside all others (according
    /// to orientation) by reversing orientation of some of them.
    /// If face lying on sphere or torus has single wire and
    /// AddNaturalBoundMode is True, that wire is not reversed in
    /// any case (supposing that natural bound will be added).
    /// Returns True if wires were reversed
    /// OutWires return information about out wires + list of
    /// internal wires for each (for performing split face).
    /// </summary>
    bool FixOrientation(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapWires);
    /// <summary>
    /// Adds natural boundary on face if it is missing.
    /// Two cases are supported:
    /// - face has no wires
    /// - face lies on geometrically double-closed surface
    /// (sphere or torus) and none of wires is left-oriented
    /// Returns True if natural boundary was added
    /// </summary>
    bool FixAddNaturalBound();
    /// <summary>
    /// Detects and fixes the special case when face on a closed
    /// surface is given by two wires closed in 3d but with gap in 2d.
    /// In that case it creates a new wire from the two, and adds a
    /// missing seam edge
    /// Returns True if missing seam was added
    /// </summary>
    bool FixMissingSeam();
    /// <summary>
    /// Detects wires with small area (that is less than
    /// 100*Precision::PConfusion(). Removes these wires if they are internal.
    /// Returns : True if at least one small wire removed,
    /// False if does nothing.
    /// </summary>
    bool FixSmallAreaWire(bool theIsRemoveSmallFace);
    /// <summary>
    /// Detects if wire has a loop and fixes this situation by splitting on the few parts.
    /// if wire has a loops and it was split Status was set to value ShapeExtend_DONE6.
    /// </summary>
    bool FixLoopWire(Macad::Occt::TopTools_SequenceOfShape^ aResWires);
    /// <summary>
    /// Detects and fixes the special case when face has more than one wire
    /// and this wires have intersection point
    /// </summary>
    bool FixIntersectingWires();
    /// <summary>
    /// If wire contains two coincidence edges it must be removed
    /// Queries on status after Perform()
    /// </summary>
    bool FixWiresTwoCoincEdges();
    /// <summary>
    /// Split face if there are more than one out wire
    /// using inrormation after FixOrientation()
    /// </summary>
    bool FixSplitFace(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapWires);
    /// <summary>
    /// Fixes topology for a specific case when face is composed
    /// by a single wire belting a periodic surface. In that case
    /// a degenerated edge is reconstructed in the degenerated pole
    /// of the surface. Initial wire gets consistent orientation.
    /// Must be used in couple and before FixMissingSeam routine
    /// </summary>
    bool FixPeriodicDegenerated();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Returns tool for fixing wires.
    /// </summary>
    Macad::Occt::ShapeFix_Wire^ FixWireTool();
    static Macad::Occt::ShapeFix_Face^ CreateDowncasted(::ShapeFix_Face* instance);
}; // class ShapeFix_Face

//---------------------------------------------------------------------
//  Class  ShapeFix_FaceConnect
//---------------------------------------------------------------------
/// <summary>
/// Rebuilds connectivity between faces in shell
/// </summary>
public ref class ShapeFix_FaceConnect sealed
    : public Macad::Occt::BaseClass<::ShapeFix_FaceConnect>
{

#ifdef Include_ShapeFix_FaceConnect_h
public:
    Include_ShapeFix_FaceConnect_h
#endif

public:
    ShapeFix_FaceConnect(::ShapeFix_FaceConnect* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_FaceConnect>( nativeInstance, true )
    {}

    ShapeFix_FaceConnect(::ShapeFix_FaceConnect& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_FaceConnect>( &nativeInstance, false )
    {}

    property ::ShapeFix_FaceConnect* NativeInstance
    {
        ::ShapeFix_FaceConnect* get()
        {
            return static_cast<::ShapeFix_FaceConnect*>(_NativeInstance);
        }
    }

public:
    ShapeFix_FaceConnect();
    bool Add(Macad::Occt::TopoDS_Face^ aFirst, Macad::Occt::TopoDS_Face^ aSecond);
    Macad::Occt::TopoDS_Shell^ Build(Macad::Occt::TopoDS_Shell^ shell, double sewtoler, double fixtoler);
    /// <summary>
    /// Clears internal data structure
    /// </summary>
    void Clear();
}; // class ShapeFix_FaceConnect

//---------------------------------------------------------------------
//  Class  ShapeFix_FixSmallFace
//---------------------------------------------------------------------
/// <summary>
/// Fixing face with small size
/// </summary>
public ref class ShapeFix_FixSmallFace sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_FixSmallFace_h
public:
    Include_ShapeFix_FixSmallFace_h
#endif

public:
    ShapeFix_FixSmallFace(::ShapeFix_FixSmallFace* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_FixSmallFace(::ShapeFix_FixSmallFace& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_FixSmallFace* NativeInstance
    {
        ::ShapeFix_FixSmallFace* get()
        {
            return static_cast<::ShapeFix_FixSmallFace*>(_NativeInstance);
        }
    }

public:
    ShapeFix_FixSmallFace();
    void Init(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Fixing case of spot face
    /// </summary>
    void Perform();
    /// <summary>
    /// Fixing case of spot face, if tol = -1 used local tolerance.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ FixSpotFace();
    /// <summary>
    /// Compute average vertex and replacing vertices by new one.
    /// </summary>
    bool ReplaceVerticesInCaseOfSpot(Macad::Occt::TopoDS_Face^ F, double tol);
    /// <summary>
    /// Remove spot face from compound
    /// </summary>
    bool RemoveFacesInCaseOfSpot(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Fixing case of strip face, if tol = -1 used local tolerance
    /// </summary>
    Macad::Occt::TopoDS_Shape^ FixStripFace(bool wasdone);
    /// <summary>
    /// Fixing case of strip face, if tol = -1 used local tolerance
    /// </summary>
    Macad::Occt::TopoDS_Shape^ FixStripFace();
    /// <summary>
    /// Replace veretces and edges.
    /// </summary>
    bool ReplaceInCaseOfStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol);
    /// <summary>
    /// Remove strip face from compound.
    /// </summary>
    bool RemoveFacesInCaseOfStrip(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Compute average edge for strip face
    /// </summary>
    Macad::Occt::TopoDS_Edge^ ComputeSharedEdgeForStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Face^ F1, double tol);
    Macad::Occt::TopoDS_Shape^ FixSplitFace(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Compute data for face splitting.
    /// </summary>
    bool SplitOneFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Compound^ theSplittedFaces);
    Macad::Occt::TopoDS_Face^ FixFace(Macad::Occt::TopoDS_Face^ F);
    Macad::Occt::TopoDS_Shape^ FixShape();
    Macad::Occt::TopoDS_Shape^ Shape();
    bool FixPinFace(Macad::Occt::TopoDS_Face^ F);
    static Macad::Occt::ShapeFix_FixSmallFace^ CreateDowncasted(::ShapeFix_FixSmallFace* instance);
}; // class ShapeFix_FixSmallFace

//---------------------------------------------------------------------
//  Class  ShapeFix_FixSmallSolid
//---------------------------------------------------------------------
/// <summary>
/// Fixing solids with small size
/// </summary>
public ref class ShapeFix_FixSmallSolid sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_FixSmallSolid_h
public:
    Include_ShapeFix_FixSmallSolid_h
#endif

public:
    ShapeFix_FixSmallSolid(::ShapeFix_FixSmallSolid* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_FixSmallSolid(::ShapeFix_FixSmallSolid& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_FixSmallSolid* NativeInstance
    {
        ::ShapeFix_FixSmallSolid* get()
        {
            return static_cast<::ShapeFix_FixSmallSolid*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Construct
    /// </summary>
    ShapeFix_FixSmallSolid();
    /// <summary>
    /// Set working mode for operator:
    /// - theMode = 0 use both WidthFactorThreshold and VolumeThreshold parameters
    /// - theMode = 1 use only WidthFactorThreshold parameter
    /// - theMode = 2 use only VolumeThreshold parameter
    /// </summary>
    void SetFixMode(int theMode);
    /// <summary>
    /// Set or clear volume threshold for small solids
    /// </summary>
    void SetVolumeThreshold(double theThreshold);
    /// <summary>
    /// Set or clear volume threshold for small solids
    /// </summary>
    void SetVolumeThreshold();
    /// <summary>
    /// Set or clear width factor threshold for small solids
    /// </summary>
    void SetWidthFactorThreshold(double theThreshold);
    /// <summary>
    /// Set or clear width factor threshold for small solids
    /// </summary>
    void SetWidthFactorThreshold();
    /// <summary>
    /// Remove small solids from the given shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Remove(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::ShapeBuild_ReShape^ theContext);
    /// <summary>
    /// Merge small solids in the given shape to adjacent non-small ones
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Merge(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::ShapeBuild_ReShape^ theContext);
    static Macad::Occt::ShapeFix_FixSmallSolid^ CreateDowncasted(::ShapeFix_FixSmallSolid* instance);
}; // class ShapeFix_FixSmallSolid

//---------------------------------------------------------------------
//  Class  ShapeFix_FreeBounds
//---------------------------------------------------------------------
/// <summary>
/// This class is intended to output free bounds of the shape
/// (free bounds are the wires consisting of edges referenced by the
/// only face).
/// For building free bounds it uses ShapeAnalysis_FreeBounds class.
/// This class complements it with the feature to reduce the number
/// of open wires.
/// This reduction is performed with help of connecting several
/// adjacent open wires one to another what can lead to:
/// 1. making an open wire with greater length out of several
/// open wires
/// 2. making closed wire out of several open wires
/// 
/// The connecting open wires is performed with a user-given
/// tolerance.
/// 
/// When connecting several open wires into one wire their previous
/// end vertices are replaced with new connecting vertices. After
/// that all the edges in the shape sharing previous vertices inside
/// the shape are updated with new vertices. Thus source shape can
/// be modified.
/// 
/// Since interface of this class is the same as one of
/// ShapeAnalysis_FreeBounds refer to its CDL for details.
/// </summary>
public ref class ShapeFix_FreeBounds sealed
    : public Macad::Occt::BaseClass<::ShapeFix_FreeBounds>
{

#ifdef Include_ShapeFix_FreeBounds_h
public:
    Include_ShapeFix_FreeBounds_h
#endif

public:
    ShapeFix_FreeBounds(::ShapeFix_FreeBounds* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_FreeBounds>( nativeInstance, true )
    {}

    ShapeFix_FreeBounds(::ShapeFix_FreeBounds& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_FreeBounds>( &nativeInstance, false )
    {}

    property ::ShapeFix_FreeBounds* NativeInstance
    {
        ::ShapeFix_FreeBounds* get()
        {
            return static_cast<::ShapeFix_FreeBounds*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeFix_FreeBounds();
    /// <summary>
    /// Builds forecasting free bounds of the <shape> and connects
    /// open wires with tolerance <closetoler>.
    /// <shape> should be a compound of faces.
    /// Tolerance <closetoler> should be greater than tolerance
    /// <sewtoler> used for initializing sewing analyzer, otherwise
    /// connection of open wires is not performed.
    /// </summary>
    ShapeFix_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double sewtoler, double closetoler, bool splitclosed, bool splitopen);
    /// <summary>
    /// Builds actual free bounds of the <shape> and connects
    /// open wires with tolerance <closetoler>.
    /// <shape> should be a compound of shells.
    /// </summary>
    ShapeFix_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double closetoler, bool splitclosed, bool splitopen);
    /// <summary>
    /// Returns compound of closed wires out of free edges.
    /// </summary>
    Macad::Occt::TopoDS_Compound^ GetClosedWires();
    /// <summary>
    /// Returns compound of open wires out of free edges.
    /// </summary>
    Macad::Occt::TopoDS_Compound^ GetOpenWires();
    /// <summary>
    /// Returns modified source shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetShape();
}; // class ShapeFix_FreeBounds

//---------------------------------------------------------------------
//  Class  ShapeFix_IntersectionTool
//---------------------------------------------------------------------
/// <summary>
/// Tool for fixing selfintersecting wire
/// and intersecting wires
/// </summary>
public ref class ShapeFix_IntersectionTool sealed
    : public Macad::Occt::BaseClass<::ShapeFix_IntersectionTool>
{

#ifdef Include_ShapeFix_IntersectionTool_h
public:
    Include_ShapeFix_IntersectionTool_h
#endif

public:
    ShapeFix_IntersectionTool(::ShapeFix_IntersectionTool* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_IntersectionTool>( nativeInstance, true )
    {}

    ShapeFix_IntersectionTool(::ShapeFix_IntersectionTool& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_IntersectionTool>( &nativeInstance, false )
    {}

    property ::ShapeFix_IntersectionTool* NativeInstance
    {
        ::ShapeFix_IntersectionTool* get()
        {
            return static_cast<::ShapeFix_IntersectionTool*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor
    /// </summary>
    ShapeFix_IntersectionTool(Macad::Occt::ShapeBuild_ReShape^ context, double preci, double maxtol);
    /// <summary>
    /// Constructor
    /// </summary>
    ShapeFix_IntersectionTool(Macad::Occt::ShapeBuild_ReShape^ context, double preci);
    /// <summary>
    /// Returns context
    /// </summary>
    Macad::Occt::ShapeBuild_ReShape^ Context();
    /// <summary>
    /// Split edge on two new edges using new vertex "vert"
    /// and "param" - parameter for splitting
    /// The "face" is necessary for pcurves and using TransferParameterProj
    /// </summary>
    bool SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double preci);
    /// <summary>
    /// Cut edge by parameters pend and cut
    /// </summary>
    bool CutEdge(Macad::Occt::TopoDS_Edge^ edge, double pend, double cut, Macad::Occt::TopoDS_Face^ face, bool% iscutline);
    /* Method skipped due to unknown mapping: bool FixSelfIntersectWire(ShapeExtend_WireData sewd, TopoDS_Face face, int NbSplit, int NbCut, int NbRemoved, ) */
    bool FixIntersectingWires(Macad::Occt::TopoDS_Face^ face);
}; // class ShapeFix_IntersectionTool

//---------------------------------------------------------------------
//  Class  ShapeFix_Solid
//---------------------------------------------------------------------
/// <summary>
/// Provides method to build a solid from a shells and
/// orients them in order to have a valid solid with finite volume
/// </summary>
public ref class ShapeFix_Solid sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Solid_h
public:
    Include_ShapeFix_Solid_h
#endif

public:
    ShapeFix_Solid(::ShapeFix_Solid* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_Solid(::ShapeFix_Solid& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_Solid* NativeInstance
    {
        ::ShapeFix_Solid* get()
        {
            return static_cast<::ShapeFix_Solid*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) the mode for applying fixes of
    /// ShapeFix_Shell, by default True.
    /// </summary>
    property int FixShellMode {
        int get() {
            return ((::ShapeFix_Solid*)_NativeInstance)->FixShellMode();
        }
        void set(int value) {
            ((::ShapeFix_Solid*)_NativeInstance)->FixShellMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for applying analysis and fixes of
    /// orientation of shells in the solid; by default True.
    /// </summary>
    property int FixShellOrientationMode {
        int get() {
            return ((::ShapeFix_Solid*)_NativeInstance)->FixShellOrientationMode();
        }
        void set(int value) {
            ((::ShapeFix_Solid*)_NativeInstance)->FixShellOrientationMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for creation of solids.
    /// If mode myCreateOpenSolidMode is equal to true
    /// solids are created from open shells
    /// else solids are created  from closed shells only.
    /// ShapeFix_Shell, by default False.
    /// </summary>
    property bool CreateOpenSolidMode {
        bool get() {
            return ((::ShapeFix_Solid*)_NativeInstance)->CreateOpenSolidMode();
        }
        void set(bool value) {
            ((::ShapeFix_Solid*)_NativeInstance)->CreateOpenSolidMode() = value;
        }
    }

    /// <summary>
    /// Empty constructor;
    /// </summary>
    ShapeFix_Solid();
    /// <summary>
    /// Initializes by solid.
    /// </summary>
    ShapeFix_Solid(Macad::Occt::TopoDS_Solid^ solid);
    /// <summary>
    /// Initializes by solid .
    /// </summary>
    void Init(Macad::Occt::TopoDS_Solid^ solid);
    /// <summary>
    /// Iterates on shells and performs fixes
    /// (calls ShapeFix_Shell for each subshell). The passed
    /// progress indicator allows user to consult the current
    /// progress stage and abort algorithm if needed.
    /// </summary>
    bool Perform(Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Iterates on shells and performs fixes
    /// (calls ShapeFix_Shell for each subshell). The passed
    /// progress indicator allows user to consult the current
    /// progress stage and abort algorithm if needed.
    /// </summary>
    bool Perform();
    /// <summary>
    /// Calls MakeSolid and orients the solid to be "not infinite"
    /// </summary>
    Macad::Occt::TopoDS_Solid^ SolidFromShell(Macad::Occt::TopoDS_Shell^ shell);
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Returns resulting solid.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Solid();
    /// <summary>
    /// Returns tool for fixing shells.
    /// </summary>
    Macad::Occt::ShapeFix_Shell^ FixShellTool();
    /* Method skipped due to unknown mapping: void SetMsgRegistrator(ShapeExtend_BasicMsgRegistrator msgreg, ) */
    /// <summary>
    /// Sets basic precision value (also to FixShellTool)
    /// </summary>
    void SetPrecision(double preci);
    /// <summary>
    /// Sets minimal allowed tolerance (also to FixShellTool)
    /// </summary>
    void SetMinTolerance(double mintol);
    /// <summary>
    /// Sets maximal allowed tolerance (also to FixShellTool)
    /// </summary>
    void SetMaxTolerance(double maxtol);
    /// <summary>
    /// In case of multiconnexity returns compound of fixed solids
    /// else returns one solid.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    static Macad::Occt::ShapeFix_Solid^ CreateDowncasted(::ShapeFix_Solid* instance);
}; // class ShapeFix_Solid

//---------------------------------------------------------------------
//  Class  ShapeFix_Shell
//---------------------------------------------------------------------
/// <summary>
/// Fixing orientation of faces in shell
/// </summary>
public ref class ShapeFix_Shell sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Shell_h
public:
    Include_ShapeFix_Shell_h
#endif

public:
    ShapeFix_Shell(::ShapeFix_Shell* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_Shell(::ShapeFix_Shell& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_Shell* NativeInstance
    {
        ::ShapeFix_Shell* get()
        {
            return static_cast<::ShapeFix_Shell*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) the mode for applying fixes of
    /// ShapeFix_Face, by default True.
    /// </summary>
    property int FixFaceMode {
        int get() {
            return ((::ShapeFix_Shell*)_NativeInstance)->FixFaceMode();
        }
        void set(int value) {
            ((::ShapeFix_Shell*)_NativeInstance)->FixFaceMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for applying
    /// FixFaceOrientation, by default True.
    /// </summary>
    property int FixOrientationMode {
        int get() {
            return ((::ShapeFix_Shell*)_NativeInstance)->FixOrientationMode();
        }
        void set(int value) {
            ((::ShapeFix_Shell*)_NativeInstance)->FixOrientationMode() = value;
        }
    }

    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeFix_Shell();
    /// <summary>
    /// Initializes by shell.
    /// </summary>
    ShapeFix_Shell(Macad::Occt::TopoDS_Shell^ shape);
    /// <summary>
    /// Initializes by shell.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shell^ shell);
    /// <summary>
    /// Iterates on subshapes and performs fixes
    /// (for each face calls ShapeFix_Face::Perform and
    /// then calls FixFaceOrientation). The passed progress
    /// indicator allows user to consult the current progress
    /// stage and abort algorithm if needed.
    /// </summary>
    bool Perform(Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Iterates on subshapes and performs fixes
    /// (for each face calls ShapeFix_Face::Perform and
    /// then calls FixFaceOrientation). The passed progress
    /// indicator allows user to consult the current progress
    /// stage and abort algorithm if needed.
    /// </summary>
    bool Perform();
    /// <summary>
    /// Fixes orientation of faces in shell.
    /// Changes orientation of face in the shell, if it is oriented opposite
    /// to neighbouring faces. If it is not possible to orient all faces in the
    /// shell (like in case of mebious band), this method orients only subset
    /// of faces. Other faces are stored in Error compound.
    /// Modes :
    /// isAccountMultiConex - mode for account cases of multiconnexity.
    /// If this mode is equal to Standard_True, separate shells will be created
    /// in the cases of multiconnexity. If this mode is equal to Standard_False,
    /// one shell will be created without account of multiconnexity.By default - Standard_True;
    /// NonManifold - mode for creation of non-manifold shells.
    /// If this mode is equal to Standard_True one non-manifold will be created from shell
    /// contains multishared edges. Else if this mode is equal to Standard_False only
    /// manifold shells will be created. By default - Standard_False.
    /// </summary>
    bool FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell, bool isAccountMultiConex, bool NonManifold);
    /// <summary>
    /// Fixes orientation of faces in shell.
    /// Changes orientation of face in the shell, if it is oriented opposite
    /// to neighbouring faces. If it is not possible to orient all faces in the
    /// shell (like in case of mebious band), this method orients only subset
    /// of faces. Other faces are stored in Error compound.
    /// Modes :
    /// isAccountMultiConex - mode for account cases of multiconnexity.
    /// If this mode is equal to Standard_True, separate shells will be created
    /// in the cases of multiconnexity. If this mode is equal to Standard_False,
    /// one shell will be created without account of multiconnexity.By default - Standard_True;
    /// NonManifold - mode for creation of non-manifold shells.
    /// If this mode is equal to Standard_True one non-manifold will be created from shell
    /// contains multishared edges. Else if this mode is equal to Standard_False only
    /// manifold shells will be created. By default - Standard_False.
    /// </summary>
    bool FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell, bool isAccountMultiConex);
    /// <summary>
    /// Fixes orientation of faces in shell.
    /// Changes orientation of face in the shell, if it is oriented opposite
    /// to neighbouring faces. If it is not possible to orient all faces in the
    /// shell (like in case of mebious band), this method orients only subset
    /// of faces. Other faces are stored in Error compound.
    /// Modes :
    /// isAccountMultiConex - mode for account cases of multiconnexity.
    /// If this mode is equal to Standard_True, separate shells will be created
    /// in the cases of multiconnexity. If this mode is equal to Standard_False,
    /// one shell will be created without account of multiconnexity.By default - Standard_True;
    /// NonManifold - mode for creation of non-manifold shells.
    /// If this mode is equal to Standard_True one non-manifold will be created from shell
    /// contains multishared edges. Else if this mode is equal to Standard_False only
    /// manifold shells will be created. By default - Standard_False.
    /// </summary>
    bool FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell);
    /// <summary>
    /// Returns fixed shell (or subset of oriented faces).
    /// </summary>
    Macad::Occt::TopoDS_Shell^ Shell();
    /// <summary>
    /// In case of multiconnexity returns compound of fixed shells
    /// else returns one shell..
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Returns Number of obtainrd shells;
    /// </summary>
    int NbShells();
    /// <summary>
    /// Returns not oriented subset of faces.
    /// </summary>
    Macad::Occt::TopoDS_Compound^ ErrorFaces();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Returns tool for fixing faces.
    /// </summary>
    Macad::Occt::ShapeFix_Face^ FixFaceTool();
    /* Method skipped due to unknown mapping: void SetMsgRegistrator(ShapeExtend_BasicMsgRegistrator msgreg, ) */
    /// <summary>
    /// Sets basic precision value (also to FixWireTool)
    /// </summary>
    void SetPrecision(double preci);
    /// <summary>
    /// Sets minimal allowed tolerance (also to FixWireTool)
    /// </summary>
    void SetMinTolerance(double mintol);
    /// <summary>
    /// Sets maximal allowed tolerance (also to FixWireTool)
    /// </summary>
    void SetMaxTolerance(double maxtol);
    /// <summary>
    /// Sets NonManifold flag
    /// </summary>
    void SetNonManifoldFlag(bool isNonManifold);
    static Macad::Occt::ShapeFix_Shell^ CreateDowncasted(::ShapeFix_Shell* instance);
}; // class ShapeFix_Shell

//---------------------------------------------------------------------
//  Class  ShapeFix_Shape
//---------------------------------------------------------------------
/// <summary>
/// Fixing shape in general
/// </summary>
public ref class ShapeFix_Shape sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Shape_h
public:
    Include_ShapeFix_Shape_h
#endif

public:
    ShapeFix_Shape(::ShapeFix_Shape* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_Shape(::ShapeFix_Shape& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_Shape* NativeInstance
    {
        ::ShapeFix_Shape* get()
        {
            return static_cast<::ShapeFix_Shape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) the mode for applying fixes of
    /// ShapeFix_Solid, by default True.
    /// </summary>
    property int FixSolidMode {
        int get() {
            return ((::ShapeFix_Shape*)_NativeInstance)->FixSolidMode();
        }
        void set(int value) {
            ((::ShapeFix_Shape*)_NativeInstance)->FixSolidMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for applying fixes of
    /// ShapeFix_Shell, by default True.
    /// </summary>
    property int FixFreeShellMode {
        int get() {
            return ((::ShapeFix_Shape*)_NativeInstance)->FixFreeShellMode();
        }
        void set(int value) {
            ((::ShapeFix_Shape*)_NativeInstance)->FixFreeShellMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for applying fixes of
    /// ShapeFix_Face, by default True.
    /// </summary>
    property int FixFreeFaceMode {
        int get() {
            return ((::ShapeFix_Shape*)_NativeInstance)->FixFreeFaceMode();
        }
        void set(int value) {
            ((::ShapeFix_Shape*)_NativeInstance)->FixFreeFaceMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for applying fixes of
    /// ShapeFix_Wire, by default True.
    /// </summary>
    property int FixFreeWireMode {
        int get() {
            return ((::ShapeFix_Shape*)_NativeInstance)->FixFreeWireMode();
        }
        void set(int value) {
            ((::ShapeFix_Shape*)_NativeInstance)->FixFreeWireMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for applying
    /// ShapeFix::SameParameter after all fixes, by default True.
    /// </summary>
    property int FixSameParameterMode {
        int get() {
            return ((::ShapeFix_Shape*)_NativeInstance)->FixSameParameterMode();
        }
        void set(int value) {
            ((::ShapeFix_Shape*)_NativeInstance)->FixSameParameterMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for applying
    /// ShapeFix::FixVertexPosition before all fixes, by default False.
    /// </summary>
    property int FixVertexPositionMode {
        int get() {
            return ((::ShapeFix_Shape*)_NativeInstance)->FixVertexPositionMode();
        }
        void set(int value) {
            ((::ShapeFix_Shape*)_NativeInstance)->FixVertexPositionMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the mode for fixing tolerances of vertices on whole shape
    /// after performing all fixes
    /// </summary>
    property int FixVertexTolMode {
        int get() {
            return ((::ShapeFix_Shape*)_NativeInstance)->FixVertexTolMode();
        }
        void set(int value) {
            ((::ShapeFix_Shape*)_NativeInstance)->FixVertexTolMode() = value;
        }
    }

    /// <summary>
    /// Empty Constructor
    /// </summary>
    ShapeFix_Shape();
    /// <summary>
    /// Initislises by shape.
    /// </summary>
    ShapeFix_Shape(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Initislises by shape.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Iterates on sub- shape and performs fixes
    /// </summary>
    bool Perform(Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Iterates on sub- shape and performs fixes
    /// </summary>
    bool Perform();
    /// <summary>
    /// Returns resulting shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Returns tool for fixing solids.
    /// </summary>
    Macad::Occt::ShapeFix_Solid^ FixSolidTool();
    /// <summary>
    /// Returns tool for fixing shells.
    /// </summary>
    Macad::Occt::ShapeFix_Shell^ FixShellTool();
    /// <summary>
    /// Returns tool for fixing faces.
    /// </summary>
    Macad::Occt::ShapeFix_Face^ FixFaceTool();
    /// <summary>
    /// Returns tool for fixing wires.
    /// </summary>
    Macad::Occt::ShapeFix_Wire^ FixWireTool();
    /// <summary>
    /// Returns tool for fixing edges.
    /// </summary>
    Macad::Occt::ShapeFix_Edge^ FixEdgeTool();
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: void SetMsgRegistrator(ShapeExtend_BasicMsgRegistrator msgreg, ) */
    /// <summary>
    /// Sets basic precision value (also to FixSolidTool)
    /// </summary>
    void SetPrecision(double preci);
    /// <summary>
    /// Sets minimal allowed tolerance (also to FixSolidTool)
    /// </summary>
    void SetMinTolerance(double mintol);
    /// <summary>
    /// Sets maximal allowed tolerance (also to FixSolidTool)
    /// </summary>
    void SetMaxTolerance(double maxtol);
    static Macad::Occt::ShapeFix_Shape^ CreateDowncasted(::ShapeFix_Shape* instance);
}; // class ShapeFix_Shape

//---------------------------------------------------------------------
//  Class  ShapeFix_ShapeTolerance
//---------------------------------------------------------------------
/// <summary>
/// Modifies tolerances of sub-shapes (vertices, edges, faces)
/// </summary>
public ref class ShapeFix_ShapeTolerance sealed
    : public Macad::Occt::BaseClass<::ShapeFix_ShapeTolerance>
{

#ifdef Include_ShapeFix_ShapeTolerance_h
public:
    Include_ShapeFix_ShapeTolerance_h
#endif

public:
    ShapeFix_ShapeTolerance(::ShapeFix_ShapeTolerance* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_ShapeTolerance>( nativeInstance, true )
    {}

    ShapeFix_ShapeTolerance(::ShapeFix_ShapeTolerance& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_ShapeTolerance>( &nativeInstance, false )
    {}

    property ::ShapeFix_ShapeTolerance* NativeInstance
    {
        ::ShapeFix_ShapeTolerance* get()
        {
            return static_cast<::ShapeFix_ShapeTolerance*>(_NativeInstance);
        }
    }

public:
    ShapeFix_ShapeTolerance();
    /// <summary>
    /// Limits tolerances in a shape as follows :
    /// tmin = tmax -> as SetTolerance (forces)
    /// tmin = 0   -> maximum tolerance will be <tmax>
    /// tmax = 0 or not given (more generally, tmax < tmin) ->
    /// <tmax> ignored, minimum will be <tmin>
    /// else, maximum will be <max> and minimum will be <min>
    /// styp = VERTEX : only vertices are set
    /// styp = EDGE   : only edges are set
    /// styp = FACE   : only faces are set
    /// styp = WIRE   : to have edges and their vertices set
    /// styp = other value : all (vertices,edges,faces) are set
    /// Returns True if at least one tolerance of the sub-shape has
    /// been modified
    /// </summary>
    bool LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin, double tmax, Macad::Occt::TopAbs_ShapeEnum styp);
    /// <summary>
    /// Limits tolerances in a shape as follows :
    /// tmin = tmax -> as SetTolerance (forces)
    /// tmin = 0   -> maximum tolerance will be <tmax>
    /// tmax = 0 or not given (more generally, tmax < tmin) ->
    /// <tmax> ignored, minimum will be <tmin>
    /// else, maximum will be <max> and minimum will be <min>
    /// styp = VERTEX : only vertices are set
    /// styp = EDGE   : only edges are set
    /// styp = FACE   : only faces are set
    /// styp = WIRE   : to have edges and their vertices set
    /// styp = other value : all (vertices,edges,faces) are set
    /// Returns True if at least one tolerance of the sub-shape has
    /// been modified
    /// </summary>
    bool LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin, double tmax);
    /// <summary>
    /// Limits tolerances in a shape as follows :
    /// tmin = tmax -> as SetTolerance (forces)
    /// tmin = 0   -> maximum tolerance will be <tmax>
    /// tmax = 0 or not given (more generally, tmax < tmin) ->
    /// <tmax> ignored, minimum will be <tmin>
    /// else, maximum will be <max> and minimum will be <min>
    /// styp = VERTEX : only vertices are set
    /// styp = EDGE   : only edges are set
    /// styp = FACE   : only faces are set
    /// styp = WIRE   : to have edges and their vertices set
    /// styp = other value : all (vertices,edges,faces) are set
    /// Returns True if at least one tolerance of the sub-shape has
    /// been modified
    /// </summary>
    bool LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin);
    /// <summary>
    /// Sets (enforces) tolerances in a shape to the given value
    /// styp = VERTEX : only vertices are set
    /// styp = EDGE   : only edges are set
    /// styp = FACE   : only faces are set
    /// styp = WIRE   : to have edges and their vertices set
    /// styp = other value : all (vertices,edges,faces) are set
    /// </summary>
    void SetTolerance(Macad::Occt::TopoDS_Shape^ shape, double preci, Macad::Occt::TopAbs_ShapeEnum styp);
    /// <summary>
    /// Sets (enforces) tolerances in a shape to the given value
    /// styp = VERTEX : only vertices are set
    /// styp = EDGE   : only edges are set
    /// styp = FACE   : only faces are set
    /// styp = WIRE   : to have edges and their vertices set
    /// styp = other value : all (vertices,edges,faces) are set
    /// </summary>
    void SetTolerance(Macad::Occt::TopoDS_Shape^ shape, double preci);
}; // class ShapeFix_ShapeTolerance

//---------------------------------------------------------------------
//  Class  ShapeFix_SplitCommonVertex
//---------------------------------------------------------------------
/// <summary>
/// Two wires have common vertex - this case is valid in BRep model
/// and isn't valid in STEP => before writing into STEP it is necessary
/// to split this vertex (each wire must has one vertex)
/// </summary>
public ref class ShapeFix_SplitCommonVertex sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_SplitCommonVertex_h
public:
    Include_ShapeFix_SplitCommonVertex_h
#endif

public:
    ShapeFix_SplitCommonVertex(::ShapeFix_SplitCommonVertex* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_SplitCommonVertex(::ShapeFix_SplitCommonVertex& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_SplitCommonVertex* NativeInstance
    {
        ::ShapeFix_SplitCommonVertex* get()
        {
            return static_cast<::ShapeFix_SplitCommonVertex*>(_NativeInstance);
        }
    }

public:
    ShapeFix_SplitCommonVertex();
    void Init(Macad::Occt::TopoDS_Shape^ S);
    void Perform();
    Macad::Occt::TopoDS_Shape^ Shape();
    static Macad::Occt::ShapeFix_SplitCommonVertex^ CreateDowncasted(::ShapeFix_SplitCommonVertex* instance);
}; // class ShapeFix_SplitCommonVertex

//---------------------------------------------------------------------
//  Class  ShapeFix_SplitTool
//---------------------------------------------------------------------
/// <summary>
/// Tool for splitting and cutting edges; includes methods
/// used in OverlappingTool and IntersectionTool
/// </summary>
public ref class ShapeFix_SplitTool sealed
    : public Macad::Occt::BaseClass<::ShapeFix_SplitTool>
{

#ifdef Include_ShapeFix_SplitTool_h
public:
    Include_ShapeFix_SplitTool_h
#endif

public:
    ShapeFix_SplitTool(::ShapeFix_SplitTool* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_SplitTool>( nativeInstance, true )
    {}

    ShapeFix_SplitTool(::ShapeFix_SplitTool& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_SplitTool>( &nativeInstance, false )
    {}

    property ::ShapeFix_SplitTool* NativeInstance
    {
        ::ShapeFix_SplitTool* get()
        {
            return static_cast<::ShapeFix_SplitTool*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeFix_SplitTool();
    /// <summary>
    /// Split edge on two new edges using new vertex "vert"
    /// and "param" - parameter for splitting
    /// The "face" is necessary for pcurves and using TransferParameterProj
    /// </summary>
    bool SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double tol3d, double tol2d);
    /// <summary>
    /// Split edge on two new edges using new vertex "vert"
    /// and "param1" and "param2" - parameter for splitting and cutting
    /// The "face" is necessary for pcurves and using TransferParameterProj
    /// </summary>
    bool SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param1, double param2, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double tol3d, double tol2d);
    /// <summary>
    /// Cut edge by parameters pend and cut
    /// </summary>
    bool CutEdge(Macad::Occt::TopoDS_Edge^ edge, double pend, double cut, Macad::Occt::TopoDS_Face^ face, bool% iscutline);
    /// <summary>
    /// Split edge on two new edges using two new vertex V1 and V2
    /// and two parameters for splitting - fp and lp correspondingly
    /// The "face" is necessary for pcurves and using TransferParameterProj
    /// aNum - number of edge in SeqE which corresponding to [fp,lp]
    /// </summary>
    bool SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double fp, Macad::Occt::TopoDS_Vertex^ V1, double lp, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopTools_SequenceOfShape^ SeqE, int% aNum, Macad::Occt::ShapeBuild_ReShape^ context, double tol3d, double tol2d);
}; // class ShapeFix_SplitTool

//---------------------------------------------------------------------
//  Class  ShapeFix_Wireframe
//---------------------------------------------------------------------
/// <summary>
/// Provides methods for fixing wireframe of shape
/// </summary>
public ref class ShapeFix_Wireframe sealed
    : public Macad::Occt::ShapeFix_Root
{

#ifdef Include_ShapeFix_Wireframe_h
public:
    Include_ShapeFix_Wireframe_h
#endif

public:
    ShapeFix_Wireframe(::ShapeFix_Wireframe* nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    ShapeFix_Wireframe(::ShapeFix_Wireframe& nativeInstance)
        : Macad::Occt::ShapeFix_Root( nativeInstance )
    {}

    property ::ShapeFix_Wireframe* NativeInstance
    {
        ::ShapeFix_Wireframe* get()
        {
            return static_cast<::ShapeFix_Wireframe*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns mode managing removing small edges.
    /// </summary>
    property bool ModeDropSmallEdges {
        bool get() {
            return ((::ShapeFix_Wireframe*)_NativeInstance)->ModeDropSmallEdges();
        }
        void set(bool value) {
            ((::ShapeFix_Wireframe*)_NativeInstance)->ModeDropSmallEdges() = value;
        }
    }

    ShapeFix_Wireframe();
    ShapeFix_Wireframe(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Clears all statuses
    /// </summary>
    void ClearStatuses();
    /// <summary>
    /// Loads a shape, resets statuses
    /// </summary>
    void Load(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Fixes gaps between ends of curves of adjacent edges
    /// (both 3d and pcurves) in wires
    /// If precision is 0.0, uses Precision::Confusion().
    /// </summary>
    bool FixWireGaps();
    /// <summary>
    /// Fixes small edges in shape by merging adjacent edges
    /// If precision is 0.0, uses Precision::Confusion().
    /// </summary>
    bool FixSmallEdges();
    /// <summary>
    /// Auxiliary tool for FixSmallEdges which checks for small edges and fills the maps.
    /// Returns True if at least one small edge has been found.
    /// </summary>
    bool CheckSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges);
    /// <summary>
    /// Auxiliary tool for FixSmallEdges which merges small edges.
    /// If theModeDrop is equal to Standard_True then small edges,
    /// which cannot be connected with adjacent edges are dropped.
    /// Otherwise they are kept.
    /// theLimitAngle specifies maximum allowed tangency
    /// discontinuity between adjacent edges.
    /// If theLimitAngle is equal to -1, this angle is not taken into account.
    /// </summary>
    bool MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges, bool theModeDrop, double theLimitAngle);
    /// <summary>
    /// Auxiliary tool for FixSmallEdges which merges small edges.
    /// If theModeDrop is equal to Standard_True then small edges,
    /// which cannot be connected with adjacent edges are dropped.
    /// Otherwise they are kept.
    /// theLimitAngle specifies maximum allowed tangency
    /// discontinuity between adjacent edges.
    /// If theLimitAngle is equal to -1, this angle is not taken into account.
    /// </summary>
    bool MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges, bool theModeDrop);
    /// <summary>
    /// Auxiliary tool for FixSmallEdges which merges small edges.
    /// If theModeDrop is equal to Standard_True then small edges,
    /// which cannot be connected with adjacent edges are dropped.
    /// Otherwise they are kept.
    /// theLimitAngle specifies maximum allowed tangency
    /// discontinuity between adjacent edges.
    /// If theLimitAngle is equal to -1, this angle is not taken into account.
    /// </summary>
    bool MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges);
    /* Method skipped due to unknown mapping: bool StatusWireGaps(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusSmallEdges(ShapeExtend_Status status, ) */
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Set limit angle for merging edges.
    /// </summary>
    void SetLimitAngle(double theLimitAngle);
    /// <summary>
    /// Get limit angle for merging edges.
    /// </summary>
    double LimitAngle();
    static Macad::Occt::ShapeFix_Wireframe^ CreateDowncasted(::ShapeFix_Wireframe* instance);
}; // class ShapeFix_Wireframe

//---------------------------------------------------------------------
//  Class  ShapeFix_WireVertex
//---------------------------------------------------------------------
/// <summary>
/// Fixing disconnected edges in the wire
/// Fixes vertices in the wire on the basis of pre-analysis
/// made by ShapeAnalysis_WireVertex (given as argument).
/// The Wire has formerly been loaded in a ShapeExtend_WireData.
/// </summary>
public ref class ShapeFix_WireVertex sealed
    : public Macad::Occt::BaseClass<::ShapeFix_WireVertex>
{

#ifdef Include_ShapeFix_WireVertex_h
public:
    Include_ShapeFix_WireVertex_h
#endif

public:
    ShapeFix_WireVertex(::ShapeFix_WireVertex* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_WireVertex>( nativeInstance, true )
    {}

    ShapeFix_WireVertex(::ShapeFix_WireVertex& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeFix_WireVertex>( &nativeInstance, false )
    {}

    property ::ShapeFix_WireVertex* NativeInstance
    {
        ::ShapeFix_WireVertex* get()
        {
            return static_cast<::ShapeFix_WireVertex*>(_NativeInstance);
        }
    }

public:
    ShapeFix_WireVertex();
    /// <summary>
    /// Loads the wire, ininializes internal analyzer
    /// (ShapeAnalysis_WireVertex) with the given precision,
    /// and performs analysis
    /// </summary>
    void Init(Macad::Occt::TopoDS_Wire^ wire, double preci);
    /* Method skipped due to unknown mapping: void Init(ShapeExtend_WireData sbwd, double preci, ) */
    /// <summary>
    /// Loads all the data on wire, already analysed by
    /// ShapeAnalysis_WireVertex
    /// </summary>
    void Init(Macad::Occt::ShapeAnalysis_WireVertex^ sawv);
    /// <summary>
    /// returns internal analyzer
    /// </summary>
    Macad::Occt::ShapeAnalysis_WireVertex^ Analyzer();
    /* Method skipped due to unknown mapping: ShapeExtend_WireData WireData() */
    /// <summary>
    /// returns resulting wire (fixed)
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Wire();
    /// <summary>
    /// Fixes "Same" or "Close" status (same vertex may be set,
    /// without changing parameters)
    /// Returns the count of fixed vertices, 0 if none
    /// </summary>
    int FixSame();
    /// <summary>
    /// Fixes all statuses except "Disjoined", i.e. the cases in which a
    /// common value has been set, with or without changing parameters
    /// Returns the count of fixed vertices, 0 if none
    /// </summary>
    int Fix();
}; // class ShapeFix_WireVertex

}; // namespace Occt
}; // namespace Macad
