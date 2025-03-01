// Generated wrapper code for package BRepOffsetAPI

#pragma once

#include "BRepBuilderAPI.h"
#include "BRepPrimAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfShape
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_SequenceOfSequenceOfShape sealed
    : public Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>
    , public IIndexEnumerable<Macad::Occt::TopTools_SequenceOfShape^>
{

#ifdef Include_BRepOffsetAPI_SequenceOfSequenceOfShape_h
public:
    Include_BRepOffsetAPI_SequenceOfSequenceOfShape_h
#endif

public:
    BRepOffsetAPI_SequenceOfSequenceOfShape(::BRepOffsetAPI_SequenceOfSequenceOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>( nativeInstance, true )
    {}

    BRepOffsetAPI_SequenceOfSequenceOfShape(::BRepOffsetAPI_SequenceOfSequenceOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>( &nativeInstance, false )
    {}

    property ::BRepOffsetAPI_SequenceOfSequenceOfShape* NativeInstance
    {
        ::BRepOffsetAPI_SequenceOfSequenceOfShape* get()
        {
            return static_cast<::BRepOffsetAPI_SequenceOfSequenceOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator>
    {

#ifdef Include_BRepOffsetAPI_SequenceOfSequenceOfShape_Iterator_h
    public:
        Include_BRepOffsetAPI_SequenceOfSequenceOfShape_Iterator_h
#endif

    public:
        Iterator(::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator* NativeInstance
        {
            ::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator* get()
            {
                return static_cast<::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TopTools_SequenceOfShape^ Value();
        Macad::Occt::TopTools_SequenceOfShape^ ChangeValue();
        bool IsEqual(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    BRepOffsetAPI_SequenceOfSequenceOfShape();
    BRepOffsetAPI_SequenceOfSequenceOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ Assign(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theOther);
    void Remove(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator^ thePosition);
    void Append(Macad::Occt::TopTools_SequenceOfShape^ theItem);
    void Prepend(Macad::Occt::TopTools_SequenceOfShape^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theItem);
    void InsertAfter(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator^ thePosition, Macad::Occt::TopTools_SequenceOfShape^ theItem);
    void Split(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq);
    Macad::Occt::TopTools_SequenceOfShape^ First();
    Macad::Occt::TopTools_SequenceOfShape^ ChangeFirst();
    Macad::Occt::TopTools_SequenceOfShape^ Last();
    Macad::Occt::TopTools_SequenceOfShape^ ChangeLast();
    virtual Macad::Occt::TopTools_SequenceOfShape^ Value(int theIndex);
    Macad::Occt::TopTools_SequenceOfShape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopTools_SequenceOfShape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepOffsetAPI_SequenceOfSequenceOfShape

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfReal
//---------------------------------------------------------------------
public ref class BRepOffsetAPI_SequenceOfSequenceOfReal sealed
    : public Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>
    , public IIndexEnumerable<Macad::Occt::TColStd_SequenceOfReal^>
{

#ifdef Include_BRepOffsetAPI_SequenceOfSequenceOfReal_h
public:
    Include_BRepOffsetAPI_SequenceOfSequenceOfReal_h
#endif

public:
    BRepOffsetAPI_SequenceOfSequenceOfReal(::BRepOffsetAPI_SequenceOfSequenceOfReal* nativeInstance)
        : Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>( nativeInstance, true )
    {}

    BRepOffsetAPI_SequenceOfSequenceOfReal(::BRepOffsetAPI_SequenceOfSequenceOfReal& nativeInstance)
        : Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>( &nativeInstance, false )
    {}

    property ::BRepOffsetAPI_SequenceOfSequenceOfReal* NativeInstance
    {
        ::BRepOffsetAPI_SequenceOfSequenceOfReal* get()
        {
            return static_cast<::BRepOffsetAPI_SequenceOfSequenceOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator>
    {

#ifdef Include_BRepOffsetAPI_SequenceOfSequenceOfReal_Iterator_h
    public:
        Include_BRepOffsetAPI_SequenceOfSequenceOfReal_Iterator_h
#endif

    public:
        Iterator(::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator* NativeInstance
        {
            ::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator* get()
            {
                return static_cast<::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColStd_SequenceOfReal^ Value();
        Macad::Occt::TColStd_SequenceOfReal^ ChangeValue();
        bool IsEqual(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    BRepOffsetAPI_SequenceOfSequenceOfReal();
    BRepOffsetAPI_SequenceOfSequenceOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ Assign(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theOther);
    void Remove(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator^ thePosition);
    void Append(Macad::Occt::TColStd_SequenceOfReal^ theItem);
    void Prepend(Macad::Occt::TColStd_SequenceOfReal^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theItem);
    void InsertAfter(Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator^ thePosition, Macad::Occt::TColStd_SequenceOfReal^ theItem);
    void Split(int theIndex, Macad::Occt::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq);
    Macad::Occt::TColStd_SequenceOfReal^ First();
    Macad::Occt::TColStd_SequenceOfReal^ ChangeFirst();
    Macad::Occt::TColStd_SequenceOfReal^ Last();
    Macad::Occt::TColStd_SequenceOfReal^ ChangeLast();
    virtual Macad::Occt::TColStd_SequenceOfReal^ Value(int theIndex);
    Macad::Occt::TColStd_SequenceOfReal^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TColStd_SequenceOfReal^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepOffsetAPI_SequenceOfSequenceOfReal

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_DraftAngle
//---------------------------------------------------------------------
/// <summary>
/// Taper-adding transformations on a shape.
/// The resulting shape is constructed by defining one face
/// to be tapered after another one, as well as the
/// geometric properties of their tapered transformation.
/// Each tapered transformation is propagated along the
/// series of faces which are tangential to one another and
/// which contains the face to be tapered.
/// This algorithm is useful in the construction of molds or
/// dies. It facilitates the removal of the article being produced.
/// A DraftAngle object provides a framework for:
/// - initializing the construction algorithm with a given shape,
/// - acquiring the data characterizing the faces to be tapered,
/// - implementing the construction algorithm, and
/// - consulting the results.
/// Warning
/// - This algorithm treats planar, cylindrical and conical faces.
/// - Do not use shapes, which with a draft angle added to
/// a face would modify the topology. This would, for
/// example, involve creation of new vertices, edges or
/// faces, or suppression of existing vertices, edges or faces.
/// - Any face, which is continuous in tangency with the
/// face to be tapered, will also be tapered. These
/// connected faces must also respect the above criteria.
/// </summary>
public ref class BRepOffsetAPI_DraftAngle sealed
    : public Macad::Occt::BRepBuilderAPI_ModifyShape
{

#ifdef Include_BRepOffsetAPI_DraftAngle_h
public:
    Include_BRepOffsetAPI_DraftAngle_h
#endif

public:
    BRepOffsetAPI_DraftAngle(::BRepOffsetAPI_DraftAngle* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    BRepOffsetAPI_DraftAngle(::BRepOffsetAPI_DraftAngle& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_ModifyShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_DraftAngle* NativeInstance
    {
        ::BRepOffsetAPI_DraftAngle* get()
        {
            return static_cast<::BRepOffsetAPI_DraftAngle*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty algorithm to perform
    /// taper-adding transformations on faces of a shape.
    /// Use the Init function to define the shape to be tapered.
    /// </summary>
    BRepOffsetAPI_DraftAngle();
    /// <summary>
    /// Initializes an algorithm to perform taper-adding
    /// transformations on faces of the shape S.
    /// S will be referred to as the initial shape of the algorithm.
    /// </summary>
    BRepOffsetAPI_DraftAngle(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Cancels the results of all taper-adding transformations
    /// performed by this algorithm on the initial shape. These
    /// results will have been defined by successive calls to the function Add.
    /// </summary>
    void Clear();
    /// <summary>
    /// Initializes, or reinitializes this taper-adding algorithm with the shape S.
    /// S will be referred to as the initial shape of this algorithm.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Adds the face F, the direction
    /// Direction, the angle Angle, the plane NeutralPlane, and the flag
    /// Flag to the framework created at construction time, and with this
    /// data, defines the taper-adding transformation.
    /// F is a face, which belongs to the initial shape of this algorithm or
    /// to the shape loaded by the function Init.
    /// Only planar, cylindrical or conical faces can be tapered:
    /// - If the face F is planar, it is tapered by inclining it
    /// through the angle Angle about the line of intersection between the
    /// plane NeutralPlane and F.
    /// Direction indicates the side of NeutralPlane from which matter is
    /// removed if Angle is positive or added if Angle is negative.
    /// - If F is cylindrical or conical, it is transformed in the
    /// same way on a single face, resulting in a conical face if F
    /// is cylindrical, and a conical or cylindrical face if it is already conical.
    /// The taper-adding transformation is propagated from the face F along
    /// the series of planar, cylindrical or conical faces containing F,
    /// which are tangential to one another.
    /// Use the function AddDone to check if this taper-adding transformation is successful.
    /// Warning
    /// Nothing is done if:
    /// - the face F does not belong to the initial shape of this algorithm, or
    /// - the face F is not planar, cylindrical or conical.
    /// Exceptions
    /// - Standard_NullObject if the initial shape is not
    /// defined, i.e. if this algorithm has not been initialized
    /// with the non-empty constructor or the Init function.
    /// - Standard_ConstructionError if the previous call to
    /// Add has failed. The function AddDone ought to have
    /// been used to check for this, and the function Remove
    /// to cancel the results of the unsuccessful taper-adding
    /// transformation and to retrieve the previous shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Dir Direction, double Angle, Macad::Occt::Pln NeutralPlane, bool Flag);
    /// <summary>
    /// Adds the face F, the direction
    /// Direction, the angle Angle, the plane NeutralPlane, and the flag
    /// Flag to the framework created at construction time, and with this
    /// data, defines the taper-adding transformation.
    /// F is a face, which belongs to the initial shape of this algorithm or
    /// to the shape loaded by the function Init.
    /// Only planar, cylindrical or conical faces can be tapered:
    /// - If the face F is planar, it is tapered by inclining it
    /// through the angle Angle about the line of intersection between the
    /// plane NeutralPlane and F.
    /// Direction indicates the side of NeutralPlane from which matter is
    /// removed if Angle is positive or added if Angle is negative.
    /// - If F is cylindrical or conical, it is transformed in the
    /// same way on a single face, resulting in a conical face if F
    /// is cylindrical, and a conical or cylindrical face if it is already conical.
    /// The taper-adding transformation is propagated from the face F along
    /// the series of planar, cylindrical or conical faces containing F,
    /// which are tangential to one another.
    /// Use the function AddDone to check if this taper-adding transformation is successful.
    /// Warning
    /// Nothing is done if:
    /// - the face F does not belong to the initial shape of this algorithm, or
    /// - the face F is not planar, cylindrical or conical.
    /// Exceptions
    /// - Standard_NullObject if the initial shape is not
    /// defined, i.e. if this algorithm has not been initialized
    /// with the non-empty constructor or the Init function.
    /// - Standard_ConstructionError if the previous call to
    /// Add has failed. The function AddDone ought to have
    /// been used to check for this, and the function Remove
    /// to cancel the results of the unsuccessful taper-adding
    /// transformation and to retrieve the previous shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Dir Direction, double Angle, Macad::Occt::Pln NeutralPlane);
    /// <summary>
    /// Returns true if the previous taper-adding
    /// transformation performed by this algorithm in the last
    /// call to Add, was successful.
    /// If AddDone returns false:
    /// - the function ProblematicShape returns the face
    /// on which the error occurred,
    /// - the function Remove has to be used to cancel the
    /// results of the unsuccessful taper-adding
    /// transformation and to retrieve the previous shape.
    /// Exceptions
    /// Standard_NullObject if the initial shape has not
    /// been defined, i.e. if this algorithm has not been
    /// initialized with the non-empty constructor or the .Init function.
    /// </summary>
    bool AddDone();
    /// <summary>
    /// Cancels the taper-adding transformation previously
    /// performed by this algorithm on the face F and the
    /// series of tangential faces which contain F, and retrieves
    /// the shape before the last taper-adding transformation.
    /// Warning
    /// You will have to use this function if the previous call to
    /// Add fails. Use the function AddDone to check it.
    /// Exceptions
    /// - Standard_NullObject if the initial shape has not
    /// been defined, i.e. if this algorithm has not been
    /// initialized with the non-empty constructor or the Init function.
    /// - Standard_NoSuchObject if F has not been added
    /// or has already been removed.
    /// </summary>
    void Remove(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns the shape on which an error occurred after an
    /// unsuccessful call to Add or when IsDone returns false.
    /// Exceptions
    /// Standard_NullObject if the initial shape has not been
    /// defined, i.e. if this algorithm has not been initialized with
    /// the non-empty constructor or the Init function.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ProblematicShape();
    /* Method skipped due to unknown mapping: Draft_ErrorStatus Status() */
    /// <summary>
    /// Returns all  the  faces   which  have been   added
    /// together with the face <F>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ ConnectedFaces(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns all the faces  on which a modification has
    /// been given.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ ModifiedFaces();
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build();
    void CorrectWires();
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
    /// Returns the modified shape corresponding to <S>.
    /// S can correspond to the entire initial shape or to its subshape.
    /// Raises exceptions
    /// Standard_NoSuchObject if S is not the initial shape or
    /// a subshape of the initial shape to which the
    /// transformation has been applied.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffsetAPI_DraftAngle

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_FindContigousEdges
//---------------------------------------------------------------------
/// <summary>
/// Provides methods to identify contiguous boundaries for continuity control (C0, C1, ...)
/// 
/// Use this function as following:
/// - create an object
/// - default tolerance 1.E-06
/// - with analysis of degenerated faces on
/// - define if necessary a new tolerance
/// - set if necessary analysis of degenerated shapes off
/// - add shapes to be controlled -> Add
/// - compute -> Perform
/// - output couples of connected edges for control
/// - output the problems if any
/// </summary>
public ref class BRepOffsetAPI_FindContigousEdges sealed
    : public Macad::Occt::BaseClass<::BRepOffsetAPI_FindContigousEdges>
{

#ifdef Include_BRepOffsetAPI_FindContigousEdges_h
public:
    Include_BRepOffsetAPI_FindContigousEdges_h
#endif

public:
    BRepOffsetAPI_FindContigousEdges(::BRepOffsetAPI_FindContigousEdges* nativeInstance)
        : Macad::Occt::BaseClass<::BRepOffsetAPI_FindContigousEdges>( nativeInstance, true )
    {}

    BRepOffsetAPI_FindContigousEdges(::BRepOffsetAPI_FindContigousEdges& nativeInstance)
        : Macad::Occt::BaseClass<::BRepOffsetAPI_FindContigousEdges>( &nativeInstance, false )
    {}

    property ::BRepOffsetAPI_FindContigousEdges* NativeInstance
    {
        ::BRepOffsetAPI_FindContigousEdges* get()
        {
            return static_cast<::BRepOffsetAPI_FindContigousEdges*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an algorithm for identifying contiguous edges
    /// on shapes with tolerance as the tolerance of contiguity
    /// (defaulted to 1.0e-6). This tolerance value is used to
    /// determine whether two edges or sections of edges are coincident.
    /// Use the function Add to define the shapes to be checked.
    /// Set option to false. This argument (defaulted to true) will
    /// serve in subsequent software releases for performing an
    /// analysis of degenerated shapes.
    /// </summary>
    BRepOffsetAPI_FindContigousEdges(double tolerance, bool option);
    /// <summary>
    /// Initializes an algorithm for identifying contiguous edges
    /// on shapes with tolerance as the tolerance of contiguity
    /// (defaulted to 1.0e-6). This tolerance value is used to
    /// determine whether two edges or sections of edges are coincident.
    /// Use the function Add to define the shapes to be checked.
    /// Set option to false. This argument (defaulted to true) will
    /// serve in subsequent software releases for performing an
    /// analysis of degenerated shapes.
    /// </summary>
    BRepOffsetAPI_FindContigousEdges(double tolerance);
    /// <summary>
    /// Initializes an algorithm for identifying contiguous edges
    /// on shapes with tolerance as the tolerance of contiguity
    /// (defaulted to 1.0e-6). This tolerance value is used to
    /// determine whether two edges or sections of edges are coincident.
    /// Use the function Add to define the shapes to be checked.
    /// Set option to false. This argument (defaulted to true) will
    /// serve in subsequent software releases for performing an
    /// analysis of degenerated shapes.
    /// </summary>
    BRepOffsetAPI_FindContigousEdges();
    /// <summary>
    /// Initializes this algorithm for identifying contiguous edges
    /// on shapes using the tolerance of contiguity tolerance.
    /// This tolerance value is used to determine whether two
    /// edges or sections of edges are coincident.
    /// Use the function Add to define the shapes to be checked.
    /// Sets <option> to false.
    /// </summary>
    void Init(double tolerance, bool option);
    /// <summary>
    /// Adds the shape shape to the list of shapes to be
    /// checked by this algorithm.
    /// Once all the shapes to be checked have been added,
    /// use the function Perform to find the contiguous edges
    /// and the function ContigousEdge to return these edges.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Finds coincident parts of edges of two or more shapes
    /// added to this algorithm and breaks down these edges
    /// into contiguous and non-contiguous sections on copies
    /// of the initial shapes.
    /// The function ContigousEdge returns contiguous
    /// edges. The function Modified can be used to return
    /// modified copies of the initial shapes where one or more
    /// edges were broken down into contiguous and non-contiguous sections.
    /// Warning
    /// This function must be used once all the shapes to be
    /// checked have been added. It is not possible to add
    /// further shapes subsequently and then to repeat the call to Perform.
    /// </summary>
    void Perform();
    /// <summary>
    /// Returns the number of contiguous edges found by the
    /// function Perform on the shapes added to this algorithm.
    /// </summary>
    int NbContigousEdges();
    /// <summary>
    /// Returns the contiguous edge of index index found by
    /// the function Perform on the shapes added to this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if:
    /// - index is less than 1, or
    /// - index is greater than the number of contiguous
    /// edges found by the function Perform on the shapes added to this algorithm.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ ContigousEdge(int index);
    /// <summary>
    /// Returns a list of edges coincident with the contiguous
    /// edge of index index found by the function Perform.
    /// There are as many edges in the list as there are faces
    /// adjacent to this contiguous edge.
    /// Exceptions
    /// Standard_OutOfRange if:
    /// - index is less than 1, or
    /// - index is greater than the number of contiguous edges
    /// found by the function Perform on the shapes added to this algorithm.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ ContigousEdgeCouple(int index);
    /// <summary>
    /// Returns the edge on the initial shape, of which the
    /// modified copy contains the edge section.
    /// section is coincident with a contiguous edge found by
    /// the function Perform. Use the function
    /// ContigousEdgeCouple to obtain a valid section.
    /// This information is useful for verification purposes, since
    /// it provides a means of determining the surface to which
    /// the contiguous edge belongs.
    /// Exceptions
    /// Standard_NoSuchObject if section is not coincident
    /// with a contiguous edge. Use the function
    /// ContigousEdgeCouple to obtain a valid section.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ SectionToBoundary(Macad::Occt::TopoDS_Edge^ section);
    /// <summary>
    /// Gives the number of degenerated shapes
    /// </summary>
    int NbDegeneratedShapes();
    /// <summary>
    /// Gives a degenerated shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ DegeneratedShape(int index);
    /// <summary>
    /// Indicates if a input shape is degenerated
    /// </summary>
    bool IsDegenerated(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Returns true if the copy of the initial shape shape was
    /// modified by the function Perform (i.e. if one or more of
    /// its edges was broken down into contiguous and non-contiguous sections).
    /// Warning
    /// Returns false if shape is not one of the initial shapes
    /// added to this algorithm.
    /// </summary>
    bool IsModified(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Gives a modifieded shape
    /// Raises   NoSuchObject if shape has not been modified
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Modified(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Dump properties of resulting shape.
    /// </summary>
    void Dump();
}; // class BRepOffsetAPI_FindContigousEdges

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeDraft
//---------------------------------------------------------------------
/// <summary>
/// Build a draft surface along a wire
/// </summary>
public ref class BRepOffsetAPI_MakeDraft sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeDraft_h
public:
    Include_BRepOffsetAPI_MakeDraft_h
#endif

public:
    BRepOffsetAPI_MakeDraft(::BRepOffsetAPI_MakeDraft* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepOffsetAPI_MakeDraft(::BRepOffsetAPI_MakeDraft& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_MakeDraft* NativeInstance
    {
        ::BRepOffsetAPI_MakeDraft* get()
        {
            return static_cast<::BRepOffsetAPI_MakeDraft*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs the draft surface object defined by the shape
    /// Shape, the direction Dir, and the angle Angle.
    /// Shape must be a TopoDS_Wire, Topo_DS_Face or
    /// TopoDS_Shell with free boundaries.
    /// Exceptions
    /// Standard_NotDone if Shape is not a TopoDS_Wire,
    /// Topo_DS_Face or TopoDS_Shell with free boundaries.
    /// </summary>
    BRepOffsetAPI_MakeDraft(Macad::Occt::TopoDS_Shape^ Shape, Macad::Occt::Dir Dir, double Angle);
    /// <summary>
    /// Sets the options of this draft tool.
    /// If a transition has to be performed, it can be defined by
    /// the mode Style as RightCorner or RoundCorner,
    /// RightCorner being a corner defined by a sharp angle,
    /// and RoundCorner being a rounded corner.
    /// AngleMin is an angular tolerance used to detect
    /// whether a transition has to be performed or not.
    /// AngleMax sets the maximum value within which a
    /// RightCorner transition can be performed.
    /// AngleMin and AngleMax are expressed in radians.
    /// </summary>
    void SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style, double AngleMin, double AngleMax);
    /// <summary>
    /// Sets the options of this draft tool.
    /// If a transition has to be performed, it can be defined by
    /// the mode Style as RightCorner or RoundCorner,
    /// RightCorner being a corner defined by a sharp angle,
    /// and RoundCorner being a rounded corner.
    /// AngleMin is an angular tolerance used to detect
    /// whether a transition has to be performed or not.
    /// AngleMax sets the maximum value within which a
    /// RightCorner transition can be performed.
    /// AngleMin and AngleMax are expressed in radians.
    /// </summary>
    void SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style, double AngleMin);
    /// <summary>
    /// Sets the options of this draft tool.
    /// If a transition has to be performed, it can be defined by
    /// the mode Style as RightCorner or RoundCorner,
    /// RightCorner being a corner defined by a sharp angle,
    /// and RoundCorner being a rounded corner.
    /// AngleMin is an angular tolerance used to detect
    /// whether a transition has to be performed or not.
    /// AngleMax sets the maximum value within which a
    /// RightCorner transition can be performed.
    /// AngleMin and AngleMax are expressed in radians.
    /// </summary>
    void SetOptions(Macad::Occt::BRepBuilderAPI_TransitionMode Style);
    /// <summary>
    /// Sets the options of this draft tool.
    /// If a transition has to be performed, it can be defined by
    /// the mode Style as RightCorner or RoundCorner,
    /// RightCorner being a corner defined by a sharp angle,
    /// and RoundCorner being a rounded corner.
    /// AngleMin is an angular tolerance used to detect
    /// whether a transition has to be performed or not.
    /// AngleMax sets the maximum value within which a
    /// RightCorner transition can be performed.
    /// AngleMin and AngleMax are expressed in radians.
    /// </summary>
    void SetOptions();
    /// <summary>
    /// Sets the direction of the draft for this object.
    /// If IsInternal is true, the draft is internal to the argument
    /// Shape used in the constructor.
    /// </summary>
    void SetDraft(bool IsInternal);
    /// <summary>
    /// Sets the direction of the draft for this object.
    /// If IsInternal is true, the draft is internal to the argument
    /// Shape used in the constructor.
    /// </summary>
    void SetDraft();
    /// <summary>
    /// Performs the draft using the length LengthMax as the
    /// maximum length for the corner edge between two draft faces.
    /// </summary>
    void Perform(double LengthMax);
    /// <summary>
    /// Performs the draft up to the surface Surface.
    /// If KeepInsideSurface is true, the part of Surface inside
    /// the draft is kept in the result.
    /// </summary>
    void Perform(Macad::Occt::Geom_Surface^ Surface, bool KeepInsideSurface);
    /// <summary>
    /// Performs the draft up to the surface Surface.
    /// If KeepInsideSurface is true, the part of Surface inside
    /// the draft is kept in the result.
    /// </summary>
    void Perform(Macad::Occt::Geom_Surface^ Surface);
    /// <summary>
    /// Performs the draft up to the shape StopShape.
    /// If KeepOutSide is true, the part of StopShape which is
    /// outside the Draft is kept in the result.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ StopShape, bool KeepOutSide);
    /// <summary>
    /// Performs the draft up to the shape StopShape.
    /// If KeepOutSide is true, the part of StopShape which is
    /// outside the Draft is kept in the result.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ StopShape);
    /// <summary>
    /// Returns the shell resulting from performance of the
    /// draft along the wire.
    /// </summary>
    Macad::Occt::TopoDS_Shell^ Shell();
    /// <summary>
    /// Returns the  list   of shapes generated   from the
    /// shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffsetAPI_MakeDraft

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeEvolved
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build evolved shapes.
/// An evolved shape is built from a planar spine (face or
/// wire) and a profile (wire). The evolved shape is the
/// unlooped sweep (pipe) of the profile along the spine.
/// Self-intersections are removed.
/// A MakeEvolved object provides a framework for:
/// - defining the construction of an evolved shape,
/// - implementing the construction algorithm, and
/// - consulting the result.
/// Computes an Evolved by
/// 1 - sweeping a profile along a spine.
/// 2 - removing the self-intersections.
/// 
/// The Profile is expected to be planar and can be a line
/// (which lies in infinite number of planes).
/// 
/// The profile is defined in a Referential R. The position of
/// the profile at the current point of the  spine is given by
/// confusing R  and the local  referential given by (  D0, D1
/// and the normal of the Spine).
/// 
/// The coordinate system is determined by theIsAxeProf argument:
/// - if theIsAxeProf is true, R is the global coordinate system,
/// - if theIsAxeProf is false, R is computed so that:
/// * its origin is given by the point on the spine which is
/// closest to the profile,
/// * its "X Axis" is given by the tangent to the spine at this point, and
/// * its "Z Axis" is the normal to the plane which contains the spine.
/// 
/// theJoinType defines the type of pipe generated by the salient
/// vertices of the spine. The default type is GeomAbs_Arc
/// where the vertices generate revolved pipes about the
/// axis passing along the vertex and the normal to the
/// plane of the spine. At present, this is the only
/// construction type implemented.
/// 
/// if <theIsSolid> is TRUE the Shape result is completed to be a
/// solid or a compound of solids.
/// 
/// If theIsProfOnSpine == TRUE then the profile must connect with the spine.
/// 
/// If theIsVolume option is switched on then self-intersections
/// in the result of Pipe-algorithm will be removed by
/// BOPAlgo_MakerVolume algorithm. At that the arguments
/// "theJoinType", "theIsAxeProf", "theIsProfOnSpine" are not used.
/// </summary>
public ref class BRepOffsetAPI_MakeEvolved sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeEvolved_h
public:
    Include_BRepOffsetAPI_MakeEvolved_h
#endif

public:
    BRepOffsetAPI_MakeEvolved(::BRepOffsetAPI_MakeEvolved* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepOffsetAPI_MakeEvolved(::BRepOffsetAPI_MakeEvolved& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_MakeEvolved* NativeInstance
    {
        ::BRepOffsetAPI_MakeEvolved* get()
        {
            return static_cast<::BRepOffsetAPI_MakeEvolved*>(_NativeInstance);
        }
    }

public:
    BRepOffsetAPI_MakeEvolved();
    /// <summary>
    /// Constructs an evolved shape by sweeping the profile
    /// (theProfile) along the spine (theSpine).
    /// theSpine can be shape only of type wire or face.
    /// See description to this class for detailed information.
    /// </summary>
    BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol, bool theIsVolume, bool theRunInParallel);
    /// <summary>
    /// Constructs an evolved shape by sweeping the profile
    /// (theProfile) along the spine (theSpine).
    /// theSpine can be shape only of type wire or face.
    /// See description to this class for detailed information.
    /// </summary>
    BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol, bool theIsVolume);
    /// <summary>
    /// Constructs an evolved shape by sweeping the profile
    /// (theProfile) along the spine (theSpine).
    /// theSpine can be shape only of type wire or face.
    /// See description to this class for detailed information.
    /// </summary>
    BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol);
    /// <summary>
    /// Constructs an evolved shape by sweeping the profile
    /// (theProfile) along the spine (theSpine).
    /// theSpine can be shape only of type wire or face.
    /// See description to this class for detailed information.
    /// </summary>
    BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine);
    /// <summary>
    /// Constructs an evolved shape by sweeping the profile
    /// (theProfile) along the spine (theSpine).
    /// theSpine can be shape only of type wire or face.
    /// See description to this class for detailed information.
    /// </summary>
    BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid);
    /// <summary>
    /// Constructs an evolved shape by sweeping the profile
    /// (theProfile) along the spine (theSpine).
    /// theSpine can be shape only of type wire or face.
    /// See description to this class for detailed information.
    /// </summary>
    BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType, bool theIsAxeProf);
    /// <summary>
    /// Constructs an evolved shape by sweeping the profile
    /// (theProfile) along the spine (theSpine).
    /// theSpine can be shape only of type wire or face.
    /// See description to this class for detailed information.
    /// </summary>
    BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, Macad::Occt::GeomAbs_JoinType theJoinType);
    /// <summary>
    /// Constructs an evolved shape by sweeping the profile
    /// (theProfile) along the spine (theSpine).
    /// theSpine can be shape only of type wire or face.
    /// See description to this class for detailed information.
    /// </summary>
    BRepOffsetAPI_MakeEvolved(Macad::Occt::TopoDS_Shape^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile);
    /* Method skipped due to unknown mapping: BRepFill_Evolved Evolved() */
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build();
    /// <summary>
    /// Returns   the  shapes  created  from   a  subshape
    /// <SpineShape>  of     the  spine   and   a subshape
    /// <ProfShape> on the profile.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ GeneratedShapes(Macad::Occt::TopoDS_Shape^ SpineShape, Macad::Occt::TopoDS_Shape^ ProfShape);
    /// <summary>
    /// Return the face Top if <Solid> is True in the constructor.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Top();
    /// <summary>
    /// Return the face Bottom  if <Solid> is True in the constructor.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Bottom();
}; // class BRepOffsetAPI_MakeEvolved

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeFilling
//---------------------------------------------------------------------
/// <summary>
/// N-Side Filling
/// This algorithm avoids to build a face from:
/// * a set of edges defining the bounds of the face and some
/// constraints the surface of the face has to satisfy
/// * a set of edges and points defining some constraints
/// the support surface has to satisfy
/// * an initial surface to deform for satisfying the constraints
/// * a set of parameters to control the constraints.
/// 
/// The support surface of the face is computed by deformation
/// of the initial surface in order to satisfy the given constraints.
/// The set of bounding edges defines the wire of the face.
/// 
/// If no initial surface is given, the algorithm computes it
/// automatically.
/// If the set of edges is not connected (Free constraint)
/// missing edges are automatically computed.
/// 
/// Limitations:
/// * If some constraints are not compatible
/// The algorithm does not take them into account.
/// So the constraints will not be satisfyed in an area containing
/// the incompatibilitries.
/// * The constraints defining the bound of the face have to be
/// entered in order to have a continuous wire.
/// 
/// Other Applications:
/// * Deformation of a face to satisfy internal constraints
/// * Deformation of a face to improve Gi continuity with
/// connected faces
/// </summary>
public ref class BRepOffsetAPI_MakeFilling sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeFilling_h
public:
    Include_BRepOffsetAPI_MakeFilling_h
#endif

public:
    BRepOffsetAPI_MakeFilling(::BRepOffsetAPI_MakeFilling* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepOffsetAPI_MakeFilling(::BRepOffsetAPI_MakeFilling& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_MakeFilling* NativeInstance
    {
        ::BRepOffsetAPI_MakeFilling* get()
        {
            return static_cast<::BRepOffsetAPI_MakeFilling*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg, int MaxSegments);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling(int Degree);
    /// <summary>
    /// Constructs a wire filling object defined by
    /// - the energy minimizing criterion Degree
    /// - the number of points on the curve NbPntsOnCur
    /// - the number of iterations NbIter
    /// - the Boolean Anisotropie
    /// - the 2D tolerance Tol2d
    /// - the 3D tolerance Tol3d
    /// - the angular tolerance TolAng
    /// - the tolerance for curvature TolCur
    /// - the highest polynomial degree MaxDeg
    /// - the greatest number of segments MaxSeg.
    /// If the Boolean Anistropie is true, the algorithm's
    /// performance is better in cases where the ratio of the
    /// length U and the length V indicate a great difference
    /// between the two. In other words, when the surface is, for
    /// example, extremely long.
    /// </summary>
    BRepOffsetAPI_MakeFilling();
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam(double Tol2d, double Tol3d, double TolAng, double TolCurv);
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam(double Tol2d, double Tol3d, double TolAng);
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam(double Tol2d, double Tol3d);
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam(double Tol2d);
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam();
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie);
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam(int Degree, int NbPtsOnCur, int NbIter);
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam(int Degree, int NbPtsOnCur);
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam(int Degree);
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam();
    /// <summary>
    /// Sets the parameters used to approximate the filling
    /// surface. These include:
    /// - MaxDeg - the highest degree which the polynomial
    /// defining the filling surface can have
    /// - MaxSegments - the greatest number of segments
    /// which the filling surface can have.
    /// </summary>
    void SetApproxParam(int MaxDeg, int MaxSegments);
    /// <summary>
    /// Sets the parameters used to approximate the filling
    /// surface. These include:
    /// - MaxDeg - the highest degree which the polynomial
    /// defining the filling surface can have
    /// - MaxSegments - the greatest number of segments
    /// which the filling surface can have.
    /// </summary>
    void SetApproxParam(int MaxDeg);
    /// <summary>
    /// Sets the parameters used to approximate the filling
    /// surface. These include:
    /// - MaxDeg - the highest degree which the polynomial
    /// defining the filling surface can have
    /// - MaxSegments - the greatest number of segments
    /// which the filling surface can have.
    /// </summary>
    void SetApproxParam();
    /// <summary>
    /// Loads the initial surface Surf to
    /// begin the construction of the surface.
    /// This optional function is useful if the surface resulting from
    /// construction for the algorithm is likely to be complex.
    /// The support surface of the face under construction is computed by a
    /// deformation of Surf which satisfies the given constraints.
    /// The set of bounding edges defines the wire of the face.
    /// If no initial surface is given, the algorithm computes it
    /// automatically. If the set of edges is not connected (Free constraint),
    /// missing edges are automatically computed.
    /// Important: the initial surface must have orthogonal local coordinates,
    /// i.e. partial derivatives dS/du and dS/dv must be orthogonal
    /// at each point of surface.
    /// If this condition breaks, distortions of resulting surface
    /// are possible.
    /// </summary>
    void LoadInitSurface(Macad::Occt::TopoDS_Face^ Surf);
    /// <summary>
    /// Adds a new constraint which also defines an edge of the wire
    /// of the face
    /// Order: Order of the constraint:
    /// GeomAbs_C0 : the surface has to pass by 3D representation
    /// of the edge
    /// GeomAbs_G1 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency with the first
    /// face of the edge
    /// GeomAbs_G2 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency and curvature
    /// with the first face of the edge.
    /// Raises ConstructionError if the edge has no representation on a face and Order is
    /// GeomAbs_G1 or GeomAbs_G2.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::GeomAbs_Shape Order, bool IsBound);
    /// <summary>
    /// Adds a new constraint which also defines an edge of the wire
    /// of the face
    /// Order: Order of the constraint:
    /// GeomAbs_C0 : the surface has to pass by 3D representation
    /// of the edge
    /// GeomAbs_G1 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency with the first
    /// face of the edge
    /// GeomAbs_G2 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency and curvature
    /// with the first face of the edge.
    /// Raises ConstructionError if the edge has no representation on a face and Order is
    /// GeomAbs_G1 or GeomAbs_G2.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::GeomAbs_Shape Order);
    /// <summary>
    /// Adds a new constraint which also defines an edge of the wire
    /// of the face
    /// Order: Order of the constraint:
    /// GeomAbs_C0 : the surface has to pass by 3D representation
    /// of the edge
    /// GeomAbs_G1 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency with the
    /// given face
    /// GeomAbs_G2 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency and curvature
    /// with the given face.
    /// Raises ConstructionError if the edge has no 2d representation on the given face
    /// </summary>
    int Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order, bool IsBound);
    /// <summary>
    /// Adds a new constraint which also defines an edge of the wire
    /// of the face
    /// Order: Order of the constraint:
    /// GeomAbs_C0 : the surface has to pass by 3D representation
    /// of the edge
    /// GeomAbs_G1 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency with the
    /// given face
    /// GeomAbs_G2 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency and curvature
    /// with the given face.
    /// Raises ConstructionError if the edge has no 2d representation on the given face
    /// </summary>
    int Add(Macad::Occt::TopoDS_Edge^ Constr, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
    /// <summary>
    /// Adds a free constraint on a face. The corresponding edge has to
    /// be automatically recomputed. It is always a bound.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
    /// <summary>
    /// Adds a punctual constraint.
    /// </summary>
    int Add(Macad::Occt::Pnt Point);
    /// <summary>
    /// Adds a punctual constraint.
    /// </summary>
    int Add(double U, double V, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
    /// <summary>
    /// Builds the resulting faces
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the resulting faces
    /// </summary>
    void Build();
    /// <summary>
    /// Tests whether computation of the filling plate has been completed.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the list of shapes generated from the
    /// shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the maximum distance between the result and
    /// the constraints. This is set at construction time.
    /// </summary>
    double G0Error();
    /// <summary>
    /// Returns the maximum angle between the result and the
    /// constraints. This is set at construction time.
    /// </summary>
    double G1Error();
    /// <summary>
    /// Returns the maximum angle between the result and the
    /// constraints. This is set at construction time.
    /// </summary>
    double G2Error();
    /// <summary>
    /// Returns the maximum distance attained between the
    /// result and the constraint Index. This is set at construction time.
    /// </summary>
    double G0Error(int Index);
    /// <summary>
    /// Returns the maximum angle between the result and the
    /// constraints. This is set at construction time.
    /// </summary>
    double G1Error(int Index);
    /// <summary>
    /// Returns the greatest difference in curvature found
    /// between the result and the constraint Index.
    /// </summary>
    double G2Error(int Index);
}; // class BRepOffsetAPI_MakeFilling

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeOffset
//---------------------------------------------------------------------
/// <summary>
/// Describes algorithms for offsetting wires from a set of
/// wires contained in a planar face.
/// A MakeOffset object provides a framework for:
/// - defining the construction of an offset,
/// - implementing the construction algorithm, and
/// - consulting the result.
/// </summary>
public ref class BRepOffsetAPI_MakeOffset sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeOffset_h
public:
    Include_BRepOffsetAPI_MakeOffset_h
#endif

public:
    BRepOffsetAPI_MakeOffset(::BRepOffsetAPI_MakeOffset* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepOffsetAPI_MakeOffset(::BRepOffsetAPI_MakeOffset& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_MakeOffset* NativeInstance
    {
        ::BRepOffsetAPI_MakeOffset* get()
        {
            return static_cast<::BRepOffsetAPI_MakeOffset*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an algorithm for creating an empty offset
    /// </summary>
    BRepOffsetAPI_MakeOffset();
    /// <summary>
    /// Constructs an algorithm for creating an algorithm
    /// to build parallels to the spine Spine
    /// </summary>
    BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
    /// <summary>
    /// Constructs an algorithm for creating an algorithm
    /// to build parallels to the spine Spine
    /// </summary>
    BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Constructs an algorithm for creating an algorithm
    /// to build parallels to the spine Spine
    /// </summary>
    BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Face^ Spine);
    BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
    BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::GeomAbs_JoinType Join);
    BRepOffsetAPI_MakeOffset(Macad::Occt::TopoDS_Wire^ Spine);
    /// <summary>
    /// Initializes the algorithm to construct parallels to the spine Spine.
    /// Join defines the type of parallel generated by the
    /// salient vertices of the spine.
    /// The default type is GeomAbs_Arc where the vertices generate
    /// sections of a circle.
    /// If join type is GeomAbs_Intersection, the edges that
    /// intersect in a salient vertex generate the edges
    /// prolonged until intersection.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
    /// <summary>
    /// Initializes the algorithm to construct parallels to the spine Spine.
    /// Join defines the type of parallel generated by the
    /// salient vertices of the spine.
    /// The default type is GeomAbs_Arc where the vertices generate
    /// sections of a circle.
    /// If join type is GeomAbs_Intersection, the edges that
    /// intersect in a salient vertex generate the edges
    /// prolonged until intersection.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Initializes the algorithm to construct parallels to the spine Spine.
    /// Join defines the type of parallel generated by the
    /// salient vertices of the spine.
    /// The default type is GeomAbs_Arc where the vertices generate
    /// sections of a circle.
    /// If join type is GeomAbs_Intersection, the edges that
    /// intersect in a salient vertex generate the edges
    /// prolonged until intersection.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ Spine);
    /// <summary>
    /// Initialize the evaluation of Offsetting.
    /// </summary>
    void Init(Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
    /// <summary>
    /// Initialize the evaluation of Offsetting.
    /// </summary>
    void Init(Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Initialize the evaluation of Offsetting.
    /// </summary>
    void Init();
    /// <summary>
    /// Set approximation flag
    /// for conversion input contours into ones consisting of
    /// 2D circular arcs and 2D linear segments only.
    /// </summary>
    void SetApprox(bool ToApprox);
    /// <summary>
    /// Initializes the algorithm to construct parallels to the wire Spine.
    /// </summary>
    void AddWire(Macad::Occt::TopoDS_Wire^ Spine);
    /// <summary>
    /// Computes a parallel to the spine at distance Offset and
    /// at an altitude Alt from the plane of the spine in relation
    /// to the normal to the spine.
    /// Exceptions: StdFail_NotDone if the offset is not built.
    /// </summary>
    void Perform(double Offset, double Alt);
    /// <summary>
    /// Computes a parallel to the spine at distance Offset and
    /// at an altitude Alt from the plane of the spine in relation
    /// to the normal to the spine.
    /// Exceptions: StdFail_NotDone if the offset is not built.
    /// </summary>
    void Perform(double Offset);
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build();
    /// <summary>
    /// returns a list of the created shapes
    /// from the shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Converts each wire of the face into contour consisting only of
    /// arcs and segments. New 3D curves are built too.
    /// </summary>
    static Macad::Occt::TopoDS_Face^ ConvertFace(Macad::Occt::TopoDS_Face^ theFace, double theAngleTolerance);
}; // class BRepOffsetAPI_MakeOffset

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeOffsetShape
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build a shell out of a shape. The
/// result is an unlooped shape parallel to the source shape.
/// A MakeOffsetShape object provides a framework for:
/// - defining the construction of a shell
/// - implementing the construction algorithm
/// - consulting the result.
/// </summary>
public ref class BRepOffsetAPI_MakeOffsetShape
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MakeOffsetShape_h
public:
    Include_BRepOffsetAPI_MakeOffsetShape_h
#endif

protected:
    BRepOffsetAPI_MakeOffsetShape(InitMode init)
        : Macad::Occt::BRepBuilderAPI_MakeShape( init )
    {}

public:
    BRepOffsetAPI_MakeOffsetShape(::BRepOffsetAPI_MakeOffsetShape* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepOffsetAPI_MakeOffsetShape(::BRepOffsetAPI_MakeOffsetShape& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_MakeOffsetShape* NativeInstance
    {
        ::BRepOffsetAPI_MakeOffsetShape* get()
        {
            return static_cast<::BRepOffsetAPI_MakeOffsetShape*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  OffsetAlgo_Type
    //---------------------------------------------------------------------
    enum class OffsetAlgo_Type
    {
        NONE = 0,
        JOIN = 1,
        SIMPLE = 2
    }; // enum  class OffsetAlgo_Type

    /// <summary>
    /// Constructor does nothing.
    /// </summary>
    BRepOffsetAPI_MakeOffsetShape();
    /// <summary>
    /// Constructs offset shape for the given one using simple algorithm without intersections
    /// computation.
    /// </summary>
    void PerformBySimple(Macad::Occt::TopoDS_Shape^ theS, double theOffsetValue);
    /// <summary>
    /// Constructs a shape parallel to the shape S, where
    /// - S may be a face, a shell, a solid or a compound of these shape kinds;
    /// - Offset is the offset value. The offset shape is constructed:
    /// - outside S, if Offset is positive,
    /// - inside S, if Offset is negative;
    /// - Tol defines the coincidence tolerance criterion for generated shapes;
    /// - Mode defines the construction type of parallels
    /// applied to the free edges of shape S; currently, only one
    /// construction type is implemented, namely the one where the free
    /// edges do not generate parallels; this corresponds to the default
    /// value BRepOffset_Skin;
    /// - Intersection specifies how the algorithm must work in
    /// order to limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// - if Intersection is true, the intersection is calculated by
    /// taking all generated parallels into account; this computation method is
    /// more general as it avoids some self-intersections generated in the
    /// offset shape from features of small dimensions on shape S, however this
    /// method has not been completely implemented and therefore is not
    /// recommended for use;
    /// - SelfInter tells the algorithm whether a computation
    /// to eliminate self-intersections must be applied to the resulting
    /// shape; however, as this functionality is not yet
    /// implemented, it is recommended to use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection, then the parallels to the
    /// two adjacent faces are enlarged and intersected,
    /// so that there are no free edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// 1. All the faces of the shape S should be based on the surfaces
    /// with continuity at least C1.
    /// 2. The offset value should be sufficiently small to avoid
    /// self-intersections in resulting shape. Otherwise these
    /// self-intersections may appear inside an offset face if its
    /// initial surface is not plane or sphere or cylinder, also some
    /// non-adjacent offset faces may intersect each other. Also, some
    /// offset surfaces may "turn inside out".
    /// 3. The algorithm may fail if the shape S contains vertices where
    /// more than 3 edges converge.
    /// 4. Since 3d-offset algorithm involves intersection of surfaces,
    /// it is under limitations of surface intersection algorithm.
    /// 5. A result cannot be generated if the underlying geometry of S is
    /// BSpline with continuity C0.
    /// Exceptions
    /// Geom_UndefinedDerivative if the underlying
    /// geometry of S is BSpline with continuity C0.
    /// </summary>
    void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Constructs a shape parallel to the shape S, where
    /// - S may be a face, a shell, a solid or a compound of these shape kinds;
    /// - Offset is the offset value. The offset shape is constructed:
    /// - outside S, if Offset is positive,
    /// - inside S, if Offset is negative;
    /// - Tol defines the coincidence tolerance criterion for generated shapes;
    /// - Mode defines the construction type of parallels
    /// applied to the free edges of shape S; currently, only one
    /// construction type is implemented, namely the one where the free
    /// edges do not generate parallels; this corresponds to the default
    /// value BRepOffset_Skin;
    /// - Intersection specifies how the algorithm must work in
    /// order to limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// - if Intersection is true, the intersection is calculated by
    /// taking all generated parallels into account; this computation method is
    /// more general as it avoids some self-intersections generated in the
    /// offset shape from features of small dimensions on shape S, however this
    /// method has not been completely implemented and therefore is not
    /// recommended for use;
    /// - SelfInter tells the algorithm whether a computation
    /// to eliminate self-intersections must be applied to the resulting
    /// shape; however, as this functionality is not yet
    /// implemented, it is recommended to use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection, then the parallels to the
    /// two adjacent faces are enlarged and intersected,
    /// so that there are no free edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// 1. All the faces of the shape S should be based on the surfaces
    /// with continuity at least C1.
    /// 2. The offset value should be sufficiently small to avoid
    /// self-intersections in resulting shape. Otherwise these
    /// self-intersections may appear inside an offset face if its
    /// initial surface is not plane or sphere or cylinder, also some
    /// non-adjacent offset faces may intersect each other. Also, some
    /// offset surfaces may "turn inside out".
    /// 3. The algorithm may fail if the shape S contains vertices where
    /// more than 3 edges converge.
    /// 4. Since 3d-offset algorithm involves intersection of surfaces,
    /// it is under limitations of surface intersection algorithm.
    /// 5. A result cannot be generated if the underlying geometry of S is
    /// BSpline with continuity C0.
    /// Exceptions
    /// Geom_UndefinedDerivative if the underlying
    /// geometry of S is BSpline with continuity C0.
    /// </summary>
    void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges);
    /// <summary>
    /// Constructs a shape parallel to the shape S, where
    /// - S may be a face, a shell, a solid or a compound of these shape kinds;
    /// - Offset is the offset value. The offset shape is constructed:
    /// - outside S, if Offset is positive,
    /// - inside S, if Offset is negative;
    /// - Tol defines the coincidence tolerance criterion for generated shapes;
    /// - Mode defines the construction type of parallels
    /// applied to the free edges of shape S; currently, only one
    /// construction type is implemented, namely the one where the free
    /// edges do not generate parallels; this corresponds to the default
    /// value BRepOffset_Skin;
    /// - Intersection specifies how the algorithm must work in
    /// order to limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// - if Intersection is true, the intersection is calculated by
    /// taking all generated parallels into account; this computation method is
    /// more general as it avoids some self-intersections generated in the
    /// offset shape from features of small dimensions on shape S, however this
    /// method has not been completely implemented and therefore is not
    /// recommended for use;
    /// - SelfInter tells the algorithm whether a computation
    /// to eliminate self-intersections must be applied to the resulting
    /// shape; however, as this functionality is not yet
    /// implemented, it is recommended to use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection, then the parallels to the
    /// two adjacent faces are enlarged and intersected,
    /// so that there are no free edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// 1. All the faces of the shape S should be based on the surfaces
    /// with continuity at least C1.
    /// 2. The offset value should be sufficiently small to avoid
    /// self-intersections in resulting shape. Otherwise these
    /// self-intersections may appear inside an offset face if its
    /// initial surface is not plane or sphere or cylinder, also some
    /// non-adjacent offset faces may intersect each other. Also, some
    /// offset surfaces may "turn inside out".
    /// 3. The algorithm may fail if the shape S contains vertices where
    /// more than 3 edges converge.
    /// 4. Since 3d-offset algorithm involves intersection of surfaces,
    /// it is under limitations of surface intersection algorithm.
    /// 5. A result cannot be generated if the underlying geometry of S is
    /// BSpline with continuity C0.
    /// Exceptions
    /// Geom_UndefinedDerivative if the underlying
    /// geometry of S is BSpline with continuity C0.
    /// </summary>
    void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Constructs a shape parallel to the shape S, where
    /// - S may be a face, a shell, a solid or a compound of these shape kinds;
    /// - Offset is the offset value. The offset shape is constructed:
    /// - outside S, if Offset is positive,
    /// - inside S, if Offset is negative;
    /// - Tol defines the coincidence tolerance criterion for generated shapes;
    /// - Mode defines the construction type of parallels
    /// applied to the free edges of shape S; currently, only one
    /// construction type is implemented, namely the one where the free
    /// edges do not generate parallels; this corresponds to the default
    /// value BRepOffset_Skin;
    /// - Intersection specifies how the algorithm must work in
    /// order to limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// - if Intersection is true, the intersection is calculated by
    /// taking all generated parallels into account; this computation method is
    /// more general as it avoids some self-intersections generated in the
    /// offset shape from features of small dimensions on shape S, however this
    /// method has not been completely implemented and therefore is not
    /// recommended for use;
    /// - SelfInter tells the algorithm whether a computation
    /// to eliminate self-intersections must be applied to the resulting
    /// shape; however, as this functionality is not yet
    /// implemented, it is recommended to use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection, then the parallels to the
    /// two adjacent faces are enlarged and intersected,
    /// so that there are no free edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// 1. All the faces of the shape S should be based on the surfaces
    /// with continuity at least C1.
    /// 2. The offset value should be sufficiently small to avoid
    /// self-intersections in resulting shape. Otherwise these
    /// self-intersections may appear inside an offset face if its
    /// initial surface is not plane or sphere or cylinder, also some
    /// non-adjacent offset faces may intersect each other. Also, some
    /// offset surfaces may "turn inside out".
    /// 3. The algorithm may fail if the shape S contains vertices where
    /// more than 3 edges converge.
    /// 4. Since 3d-offset algorithm involves intersection of surfaces,
    /// it is under limitations of surface intersection algorithm.
    /// 5. A result cannot be generated if the underlying geometry of S is
    /// BSpline with continuity C0.
    /// Exceptions
    /// Geom_UndefinedDerivative if the underlying
    /// geometry of S is BSpline with continuity C0.
    /// </summary>
    void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
    /// <summary>
    /// Constructs a shape parallel to the shape S, where
    /// - S may be a face, a shell, a solid or a compound of these shape kinds;
    /// - Offset is the offset value. The offset shape is constructed:
    /// - outside S, if Offset is positive,
    /// - inside S, if Offset is negative;
    /// - Tol defines the coincidence tolerance criterion for generated shapes;
    /// - Mode defines the construction type of parallels
    /// applied to the free edges of shape S; currently, only one
    /// construction type is implemented, namely the one where the free
    /// edges do not generate parallels; this corresponds to the default
    /// value BRepOffset_Skin;
    /// - Intersection specifies how the algorithm must work in
    /// order to limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// - if Intersection is true, the intersection is calculated by
    /// taking all generated parallels into account; this computation method is
    /// more general as it avoids some self-intersections generated in the
    /// offset shape from features of small dimensions on shape S, however this
    /// method has not been completely implemented and therefore is not
    /// recommended for use;
    /// - SelfInter tells the algorithm whether a computation
    /// to eliminate self-intersections must be applied to the resulting
    /// shape; however, as this functionality is not yet
    /// implemented, it is recommended to use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection, then the parallels to the
    /// two adjacent faces are enlarged and intersected,
    /// so that there are no free edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// 1. All the faces of the shape S should be based on the surfaces
    /// with continuity at least C1.
    /// 2. The offset value should be sufficiently small to avoid
    /// self-intersections in resulting shape. Otherwise these
    /// self-intersections may appear inside an offset face if its
    /// initial surface is not plane or sphere or cylinder, also some
    /// non-adjacent offset faces may intersect each other. Also, some
    /// offset surfaces may "turn inside out".
    /// 3. The algorithm may fail if the shape S contains vertices where
    /// more than 3 edges converge.
    /// 4. Since 3d-offset algorithm involves intersection of surfaces,
    /// it is under limitations of surface intersection algorithm.
    /// 5. A result cannot be generated if the underlying geometry of S is
    /// BSpline with continuity C0.
    /// Exceptions
    /// Geom_UndefinedDerivative if the underlying
    /// geometry of S is BSpline with continuity C0.
    /// </summary>
    void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
    /// <summary>
    /// Constructs a shape parallel to the shape S, where
    /// - S may be a face, a shell, a solid or a compound of these shape kinds;
    /// - Offset is the offset value. The offset shape is constructed:
    /// - outside S, if Offset is positive,
    /// - inside S, if Offset is negative;
    /// - Tol defines the coincidence tolerance criterion for generated shapes;
    /// - Mode defines the construction type of parallels
    /// applied to the free edges of shape S; currently, only one
    /// construction type is implemented, namely the one where the free
    /// edges do not generate parallels; this corresponds to the default
    /// value BRepOffset_Skin;
    /// - Intersection specifies how the algorithm must work in
    /// order to limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// - if Intersection is true, the intersection is calculated by
    /// taking all generated parallels into account; this computation method is
    /// more general as it avoids some self-intersections generated in the
    /// offset shape from features of small dimensions on shape S, however this
    /// method has not been completely implemented and therefore is not
    /// recommended for use;
    /// - SelfInter tells the algorithm whether a computation
    /// to eliminate self-intersections must be applied to the resulting
    /// shape; however, as this functionality is not yet
    /// implemented, it is recommended to use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection, then the parallels to the
    /// two adjacent faces are enlarged and intersected,
    /// so that there are no free edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// 1. All the faces of the shape S should be based on the surfaces
    /// with continuity at least C1.
    /// 2. The offset value should be sufficiently small to avoid
    /// self-intersections in resulting shape. Otherwise these
    /// self-intersections may appear inside an offset face if its
    /// initial surface is not plane or sphere or cylinder, also some
    /// non-adjacent offset faces may intersect each other. Also, some
    /// offset surfaces may "turn inside out".
    /// 3. The algorithm may fail if the shape S contains vertices where
    /// more than 3 edges converge.
    /// 4. Since 3d-offset algorithm involves intersection of surfaces,
    /// it is under limitations of surface intersection algorithm.
    /// 5. A result cannot be generated if the underlying geometry of S is
    /// BSpline with continuity C0.
    /// Exceptions
    /// Geom_UndefinedDerivative if the underlying
    /// geometry of S is BSpline with continuity C0.
    /// </summary>
    void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
    /// <summary>
    /// Constructs a shape parallel to the shape S, where
    /// - S may be a face, a shell, a solid or a compound of these shape kinds;
    /// - Offset is the offset value. The offset shape is constructed:
    /// - outside S, if Offset is positive,
    /// - inside S, if Offset is negative;
    /// - Tol defines the coincidence tolerance criterion for generated shapes;
    /// - Mode defines the construction type of parallels
    /// applied to the free edges of shape S; currently, only one
    /// construction type is implemented, namely the one where the free
    /// edges do not generate parallels; this corresponds to the default
    /// value BRepOffset_Skin;
    /// - Intersection specifies how the algorithm must work in
    /// order to limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// - if Intersection is true, the intersection is calculated by
    /// taking all generated parallels into account; this computation method is
    /// more general as it avoids some self-intersections generated in the
    /// offset shape from features of small dimensions on shape S, however this
    /// method has not been completely implemented and therefore is not
    /// recommended for use;
    /// - SelfInter tells the algorithm whether a computation
    /// to eliminate self-intersections must be applied to the resulting
    /// shape; however, as this functionality is not yet
    /// implemented, it is recommended to use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection, then the parallels to the
    /// two adjacent faces are enlarged and intersected,
    /// so that there are no free edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// 1. All the faces of the shape S should be based on the surfaces
    /// with continuity at least C1.
    /// 2. The offset value should be sufficiently small to avoid
    /// self-intersections in resulting shape. Otherwise these
    /// self-intersections may appear inside an offset face if its
    /// initial surface is not plane or sphere or cylinder, also some
    /// non-adjacent offset faces may intersect each other. Also, some
    /// offset surfaces may "turn inside out".
    /// 3. The algorithm may fail if the shape S contains vertices where
    /// more than 3 edges converge.
    /// 4. Since 3d-offset algorithm involves intersection of surfaces,
    /// it is under limitations of surface intersection algorithm.
    /// 5. A result cannot be generated if the underlying geometry of S is
    /// BSpline with continuity C0.
    /// Exceptions
    /// Geom_UndefinedDerivative if the underlying
    /// geometry of S is BSpline with continuity C0.
    /// </summary>
    void PerformByJoin(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol);
    /// <summary>
    /// Returns instance of the underlying intersection / arc algorithm.
    /// </summary>
    Macad::Occt::BRepOffset_MakeOffset^ MakeOffset();
    /// <summary>
    /// Does nothing.
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Does nothing.
    /// </summary>
    void Build();
    /// <summary>
    /// Returns the list of shapes generated from the shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list of shapes Modified from the shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns true if the shape has been removed from the result.
    /// </summary>
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns offset join type.
    /// </summary>
    Macad::Occt::GeomAbs_JoinType GetJoinType();
}; // class BRepOffsetAPI_MakeOffsetShape

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakePipe
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build pipes.
/// A pipe is built a basis shape (called the profile) along
/// a wire (called the spine) by sweeping.
/// The profile must not contain solids.
/// A MakePipe object provides a framework for:
/// - defining the construction of a pipe,
/// - implementing the construction algorithm, and
/// - consulting the result.
/// Warning
/// The MakePipe class implements pipe constructions
/// with G1 continuous spines only.
/// </summary>
public ref class BRepOffsetAPI_MakePipe sealed
    : public Macad::Occt::BRepPrimAPI_MakeSweep
{

#ifdef Include_BRepOffsetAPI_MakePipe_h
public:
    Include_BRepOffsetAPI_MakePipe_h
#endif

public:
    BRepOffsetAPI_MakePipe(::BRepOffsetAPI_MakePipe* nativeInstance)
        : Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
    {}

    BRepOffsetAPI_MakePipe(::BRepOffsetAPI_MakePipe& nativeInstance)
        : Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
    {}

    property ::BRepOffsetAPI_MakePipe* NativeInstance
    {
        ::BRepOffsetAPI_MakePipe* get()
        {
            return static_cast<::BRepOffsetAPI_MakePipe*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a pipe by sweeping the shape Profile along
    /// the wire Spine.The angle made by the spine with the profile is
    /// maintained along the length of the pipe.
    /// Warning
    /// Spine must be G1 continuous; that is, on the connection
    /// vertex of two edges of the wire, the tangent vectors on
    /// the left and on the right must have the same direction,
    /// though not necessarily the same magnitude.
    /// Exceptions
    /// Standard_DomainError if the profile is a solid or a
    /// composite solid.
    /// </summary>
    BRepOffsetAPI_MakePipe(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile);
    /* Method skipped due to unknown mapping: void BRepOffsetAPI_MakePipe(TopoDS_Wire Spine, TopoDS_Shape Profile, GeomFill_Trihedron aMode, bool ForceApproxC1, ) */
    /* Method skipped due to unknown mapping: void BRepOffsetAPI_MakePipe(TopoDS_Wire Spine, TopoDS_Shape Profile, GeomFill_Trihedron aMode, bool ForceApproxC1, ) */
    /* Method skipped due to unknown mapping: BRepFill_Pipe Pipe() */
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build();
    /// <summary>
    /// Returns the  TopoDS  Shape of the bottom of the prism.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ FirstShape();
    /// <summary>
    /// Returns the TopoDS Shape of the top of the prism.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ LastShape();
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    Macad::Occt::TopoDS_Shape^ Generated(Macad::Occt::TopoDS_Shape^ SSpine, Macad::Occt::TopoDS_Shape^ SProfile);
    double ErrorOnSurface();
}; // class BRepOffsetAPI_MakePipe

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakePipeShell
//---------------------------------------------------------------------
/// <summary>
/// This class provides for a framework to construct a shell
/// or a solid along a spine consisting in a wire.
/// To produce a solid, the initial wire must be closed.
/// Two approaches are used:
/// - definition by section
/// - by a section and a scaling law
/// - by addition of successive intermediary sections
/// - definition by sweep mode.
/// - pseudo-Frenet
/// - constant
/// - binormal constant
/// - normal defined by a surface support
/// - normal defined by a guiding contour.
/// The two global approaches can also be combined.
/// You can also close the surface later in order to form a solid.
/// Warning: some limitations exist
/// -- Mode with auxiliary spine is incompatible with hometetic laws
/// -- Mode with auxiliary spine and keep contact produce only CO surface.
/// </summary>
public ref class BRepOffsetAPI_MakePipeShell sealed
    : public Macad::Occt::BRepPrimAPI_MakeSweep
{

#ifdef Include_BRepOffsetAPI_MakePipeShell_h
public:
    Include_BRepOffsetAPI_MakePipeShell_h
#endif

public:
    BRepOffsetAPI_MakePipeShell(::BRepOffsetAPI_MakePipeShell* nativeInstance)
        : Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
    {}

    BRepOffsetAPI_MakePipeShell(::BRepOffsetAPI_MakePipeShell& nativeInstance)
        : Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
    {}

    property ::BRepOffsetAPI_MakePipeShell* NativeInstance
    {
        ::BRepOffsetAPI_MakePipeShell* get()
        {
            return static_cast<::BRepOffsetAPI_MakePipeShell*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs the shell-generating framework defined by the wire Spine.
    /// Sets an sweep's mode
    /// If no mode are set, the mode use in MakePipe is used
    /// </summary>
    BRepOffsetAPI_MakePipeShell(Macad::Occt::TopoDS_Wire^ Spine);
    /// <summary>
    /// Sets a Frenet or a CorrectedFrenet trihedron
    /// to  perform  the  sweeping
    /// If IsFrenet is false, a corrected Frenet trihedron is used.
    /// </summary>
    void SetMode(bool IsFrenet);
    /// <summary>
    /// Sets a Frenet or a CorrectedFrenet trihedron
    /// to  perform  the  sweeping
    /// If IsFrenet is false, a corrected Frenet trihedron is used.
    /// </summary>
    void SetMode();
    /// <summary>
    /// Sets a Discrete trihedron
    /// to  perform  the  sweeping
    /// </summary>
    void SetDiscreteMode();
    /// <summary>
    /// Sets  a  fixed  trihedron  to  perform  the  sweeping
    /// all sections will be parallel.
    /// </summary>
    void SetMode(Macad::Occt::Ax2 Axe);
    /// <summary>
    /// Sets a fixed BiNormal  direction to perform the --
    /// sweeping.   Angular   relations   between  the
    /// section(s) and <BiNormal> will be constant
    /// </summary>
    void SetMode(Macad::Occt::Dir BiNormal);
    /// <summary>
    /// Sets support to the spine to define the BiNormal of
    /// the trihedron, like the normal  to the surfaces.
    /// Warning:  To be effective, Each  edge of the <spine> must
    /// have a representation on one face of<SpineSupport>
    /// </summary>
    bool SetMode(Macad::Occt::TopoDS_Shape^ SpineSupport);
    /* Method skipped due to unknown mapping: void SetMode(TopoDS_Wire AuxiliarySpine, bool CurvilinearEquivalence, BRepFill_TypeOfContact KeepContact, ) */
    /// <summary>
    /// Sets  an  auxiliary  spine  to  define  the Normal
    /// For  each  Point  of  the  Spine  P,  an  Point  Q  is  evalued
    /// on  <AuxiliarySpine>
    /// If <CurvilinearEquivalence>
    /// Q split <AuxiliarySpine> with  the  same  length ratio
    /// than P split  <Spline>.
    /// Else  the  plan  define  by  P  and  the  tangent  to  the  <Spine>
    /// intersect <AuxiliarySpine> in Q.
    /// If <KeepContact> equals BRepFill_NoContact: The Normal is defined
    /// by the vector PQ.
    /// If <KeepContact> equals BRepFill_Contact: The Normal is defined to
    /// achieve that the sweeped section is in contact to the
    /// auxiliarySpine. The width of section is constant all along the path.
    /// In other words, the auxiliary spine lies on the swept surface,
    /// but not necessarily is a boundary of this surface. However,
    /// the auxiliary spine has to be close enough to the main spine
    /// to provide intersection with any section all along the path.
    /// If <KeepContact> equals BRepFill_ContactOnBorder: The auxiliary spine
    /// becomes a boundary of the swept surface and the width of section varies
    /// along the path.
    /// Give section to sweep.
    /// Possibilities are :
    /// - Give one or several section
    /// - Give one profile and an homotetic law.
    /// - Automatic compute of correspondence between spine, and section
    /// on the sweeped shape
    /// - correspondence between spine, and section on the sweeped shape
    /// defined by a vertex of the spine
    /// </summary>
    void SetMode(Macad::Occt::TopoDS_Wire^ AuxiliarySpine, bool CurvilinearEquivalence);
    /// <summary>
    /// Adds the section Profile to this framework. First and last
    /// sections may be punctual, so the shape Profile may be
    /// both wire and vertex. Correspondent point on spine is
    /// computed automatically.
    /// If WithContact is true, the section is translated to be in
    /// contact with the spine.
    /// If WithCorrection is true, the section is rotated to be
    /// orthogonal to the spine?s tangent in the correspondent
    /// point. This option has no sense if the section is punctual
    /// (Profile is of type TopoDS_Vertex).
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact, bool WithCorrection);
    /// <summary>
    /// Adds the section Profile to this framework. First and last
    /// sections may be punctual, so the shape Profile may be
    /// both wire and vertex. Correspondent point on spine is
    /// computed automatically.
    /// If WithContact is true, the section is translated to be in
    /// contact with the spine.
    /// If WithCorrection is true, the section is rotated to be
    /// orthogonal to the spine?s tangent in the correspondent
    /// point. This option has no sense if the section is punctual
    /// (Profile is of type TopoDS_Vertex).
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact);
    /// <summary>
    /// Adds the section Profile to this framework. First and last
    /// sections may be punctual, so the shape Profile may be
    /// both wire and vertex. Correspondent point on spine is
    /// computed automatically.
    /// If WithContact is true, the section is translated to be in
    /// contact with the spine.
    /// If WithCorrection is true, the section is rotated to be
    /// orthogonal to the spine?s tangent in the correspondent
    /// point. This option has no sense if the section is punctual
    /// (Profile is of type TopoDS_Vertex).
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile);
    /// <summary>
    /// Adds the section Profile to this framework.
    /// Correspondent point on the spine is given by Location.
    /// Warning:
    /// To be effective, it is not recommended to combine methods Add and SetLaw.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact, bool WithCorrection);
    /// <summary>
    /// Adds the section Profile to this framework.
    /// Correspondent point on the spine is given by Location.
    /// Warning:
    /// To be effective, it is not recommended to combine methods Add and SetLaw.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact);
    /// <summary>
    /// Adds the section Profile to this framework.
    /// Correspondent point on the spine is given by Location.
    /// Warning:
    /// To be effective, it is not recommended to combine methods Add and SetLaw.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location);
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, bool WithContact, bool WithCorrection, ) */
    /// <summary>
    /// Removes the section Profile from this framework.
    /// </summary>
    void Delete(Macad::Occt::TopoDS_Shape^ Profile);
    /// <summary>
    /// Returns true if this tool object is ready to build the
    /// shape, i.e. has a definition for the wire section Profile.
    /// </summary>
    bool IsReady();
    /// <summary>
    /// Get a status, when Simulate or Build failed.       It can be
    /// BRepBuilderAPI_PipeDone,
    /// BRepBuilderAPI_PipeNotDone,
    /// BRepBuilderAPI_PlaneNotIntersectGuide,
    /// BRepBuilderAPI_ImpossibleContact.
    /// </summary>
    Macad::Occt::BRepBuilderAPI_PipeError GetStatus();
    /// <summary>
    /// Sets the following tolerance values
    /// - 3D tolerance Tol3d
    /// - boundary tolerance BoundTol
    /// - angular tolerance TolAngular.
    /// </summary>
    void SetTolerance(double Tol3d, double BoundTol, double TolAngular);
    /// <summary>
    /// Sets the following tolerance values
    /// - 3D tolerance Tol3d
    /// - boundary tolerance BoundTol
    /// - angular tolerance TolAngular.
    /// </summary>
    void SetTolerance(double Tol3d, double BoundTol);
    /// <summary>
    /// Sets the following tolerance values
    /// - 3D tolerance Tol3d
    /// - boundary tolerance BoundTol
    /// - angular tolerance TolAngular.
    /// </summary>
    void SetTolerance(double Tol3d);
    /// <summary>
    /// Sets the following tolerance values
    /// - 3D tolerance Tol3d
    /// - boundary tolerance BoundTol
    /// - angular tolerance TolAngular.
    /// </summary>
    void SetTolerance();
    /// <summary>
    /// Define the maximum V degree of resulting surface
    /// </summary>
    void SetMaxDegree(int NewMaxDegree);
    /// <summary>
    /// Define the maximum number of spans in V-direction
    /// on resulting surface
    /// </summary>
    void SetMaxSegments(int NewMaxSegments);
    /// <summary>
    /// Set the flag that indicates attempt to approximate
    /// a C1-continuous surface if a swept surface proved
    /// to be C0.
    /// </summary>
    void SetForceApproxC1(bool ForceApproxC1);
    /// <summary>
    /// Sets the transition mode to manage discontinuities on
    /// the swept shape caused by fractures on the spine. The
    /// transition mode can be BRepBuilderAPI_Transformed
    /// (default value), BRepBuilderAPI_RightCorner,
    /// BRepBuilderAPI_RoundCorner:
    /// -              RepBuilderAPI_Transformed:
    /// discontinuities are treated by
    /// modification of the sweeping mode. The
    /// pipe is "transformed" at the fractures of
    /// the spine. This mode assumes building a
    /// self-intersected shell.
    /// -              BRepBuilderAPI_RightCorner:
    /// discontinuities are treated like right
    /// corner. Two pieces of the pipe
    /// corresponding to two adjacent
    /// segments of the spine are extended
    /// and intersected at a fracture of the spine.
    /// -              BRepBuilderAPI_RoundCorner:
    /// discontinuities are treated like round
    /// corner. The corner is treated as rotation
    /// of the profile around an axis which
    /// passes through the point of the spine's
    /// fracture. This axis is based on cross
    /// product of directions tangent to the
    /// adjacent segments of the spine at their common point.
    /// Warnings
    /// The mode BRepBuilderAPI_RightCorner provides a
    /// valid result if intersection of two pieces of the pipe
    /// (corresponding to two adjacent segments of the spine)
    /// in the neighborhood of the spine?s fracture is
    /// connected and planar. This condition can be violated if
    /// the spine is non-linear in some neighborhood of the
    /// fracture or if the profile was set with a scaling law.
    /// The last mode, BRepBuilderAPI_RoundCorner, will
    /// assuredly provide a good result only if a profile was set
    /// with option WithCorrection = True, i.e. it is strictly
    /// orthogonal to the spine.
    /// </summary>
    void SetTransitionMode(Macad::Occt::BRepBuilderAPI_TransitionMode Mode);
    /// <summary>
    /// Sets the transition mode to manage discontinuities on
    /// the swept shape caused by fractures on the spine. The
    /// transition mode can be BRepBuilderAPI_Transformed
    /// (default value), BRepBuilderAPI_RightCorner,
    /// BRepBuilderAPI_RoundCorner:
    /// -              RepBuilderAPI_Transformed:
    /// discontinuities are treated by
    /// modification of the sweeping mode. The
    /// pipe is "transformed" at the fractures of
    /// the spine. This mode assumes building a
    /// self-intersected shell.
    /// -              BRepBuilderAPI_RightCorner:
    /// discontinuities are treated like right
    /// corner. Two pieces of the pipe
    /// corresponding to two adjacent
    /// segments of the spine are extended
    /// and intersected at a fracture of the spine.
    /// -              BRepBuilderAPI_RoundCorner:
    /// discontinuities are treated like round
    /// corner. The corner is treated as rotation
    /// of the profile around an axis which
    /// passes through the point of the spine's
    /// fracture. This axis is based on cross
    /// product of directions tangent to the
    /// adjacent segments of the spine at their common point.
    /// Warnings
    /// The mode BRepBuilderAPI_RightCorner provides a
    /// valid result if intersection of two pieces of the pipe
    /// (corresponding to two adjacent segments of the spine)
    /// in the neighborhood of the spine?s fracture is
    /// connected and planar. This condition can be violated if
    /// the spine is non-linear in some neighborhood of the
    /// fracture or if the profile was set with a scaling law.
    /// The last mode, BRepBuilderAPI_RoundCorner, will
    /// assuredly provide a good result only if a profile was set
    /// with option WithCorrection = True, i.e. it is strictly
    /// orthogonal to the spine.
    /// </summary>
    void SetTransitionMode();
    /// <summary>
    /// Simulates the resulting shape by calculating its
    /// cross-sections. The spine is divided by this
    /// cross-sections into (NumberOfSection - 1) equal
    /// parts, the number of cross-sections is
    /// NumberOfSection. The cross-sections are wires and
    /// they are returned in the list Result.
    /// This gives a rapid preview of the resulting shape,
    /// which will be obtained using the settings you have provided.
    /// Raises  NotDone if  <me> it is not Ready
    /// </summary>
    void Simulate(int NumberOfSection, Macad::Occt::TopTools_ListOfShape^ Result);
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    void Build();
    /// <summary>
    /// Transforms the sweeping Shell in Solid.
    /// If a propfile is not closed returns False
    /// </summary>
    bool MakeSolid();
    /// <summary>
    /// Returns the  TopoDS  Shape of the bottom of the sweep.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ FirstShape();
    /// <summary>
    /// Returns the TopoDS Shape of the top of the sweep.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ LastShape();
    /// <summary>
    /// Returns a list of new shapes generated from the shape
    /// S by the shell-generating algorithm.
    /// This function is redefined from BRepOffsetAPI_MakeShape::Generated.
    /// S can be an edge or a vertex of a given Profile (see methods Add).
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    double ErrorOnSurface();
    /// <summary>
    /// Returns the list of original profiles
    /// </summary>
    void Profiles(Macad::Occt::TopTools_ListOfShape^ theProfiles);
    /// <summary>
    /// Returns the spine
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Spine();
}; // class BRepOffsetAPI_MakePipeShell

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeThickSolid
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build hollowed solids.
/// A hollowed solid is built from an initial solid and a set of
/// faces on this solid, which are to be removed. The
/// remaining faces of the solid become the walls of the
/// hollowed solid, their thickness defined at the time of construction.
/// the solid is built from an initial
/// solid  <S> and a  set of  faces {Fi} from  <S>,
/// builds a   solid  composed  by two shells closed  by
/// the {Fi}. First shell <SS>   is composed by all
/// the faces of <S> expected {Fi}.  Second shell is
/// the offset shell of <SS>.
/// A MakeThickSolid object provides a framework for:
/// - defining the cross-section of a hollowed solid,
/// - implementing the construction algorithm, and
/// - consulting the result.
/// </summary>
public ref class BRepOffsetAPI_MakeThickSolid sealed
    : public Macad::Occt::BRepOffsetAPI_MakeOffsetShape
{

#ifdef Include_BRepOffsetAPI_MakeThickSolid_h
public:
    Include_BRepOffsetAPI_MakeThickSolid_h
#endif

public:
    BRepOffsetAPI_MakeThickSolid(::BRepOffsetAPI_MakeThickSolid* nativeInstance)
        : Macad::Occt::BRepOffsetAPI_MakeOffsetShape( nativeInstance )
    {}

    BRepOffsetAPI_MakeThickSolid(::BRepOffsetAPI_MakeThickSolid& nativeInstance)
        : Macad::Occt::BRepOffsetAPI_MakeOffsetShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_MakeThickSolid* NativeInstance
    {
        ::BRepOffsetAPI_MakeThickSolid* get()
        {
            return static_cast<::BRepOffsetAPI_MakeThickSolid*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor does nothing.
    /// </summary>
    BRepOffsetAPI_MakeThickSolid();
    /// <summary>
    /// Constructs solid using simple algorithm.
    /// According to its nature it is not possible to set list of the closing faces.
    /// This algorithm does not support faces removing. It is caused by fact that
    /// intersections are not computed during offset creation.
    /// Non-closed shell or face is expected as input.
    /// </summary>
    void MakeThickSolidBySimple(Macad::Occt::TopoDS_Shape^ theS, double theOffsetValue);
    /// <summary>
    /// Constructs a hollowed solid from
    /// the solid S by removing the set of faces ClosingFaces from S, where:
    /// Offset defines the thickness of the walls. Its sign indicates
    /// which side of the surface of the solid the hollowed shape is built on;
    /// - Tol defines the tolerance criterion for coincidence in generated shapes;
    /// - Mode defines the construction type of parallels applied to free
    /// edges of shape S. Currently, only one construction type is
    /// implemented, namely the one where the free edges do not generate
    /// parallels; this corresponds to the default value BRepOffset_Skin;
    /// Intersection specifies how the algorithm must work in order to
    /// limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// -     if Intersection is true, the intersection is calculated by
    /// taking account of all parallels generated; this computation
    /// method is more general as it avoids self-intersections
    /// generated in the offset shape from features of small dimensions
    /// on shape S, however this method has not been completely
    /// implemented and therefore is not recommended for use;
    /// -     SelfInter tells the algorithm whether a computation to
    /// eliminate self-intersections needs to be applied to the
    /// resulting shape. However, as this functionality is not yet
    /// implemented, you should use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection,
    /// then the parallels to the two adjacent faces are
    /// enlarged and intersected, so that there are no free
    /// edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// Since the algorithm of MakeThickSolid is based on
    /// MakeOffsetShape algorithm, the warnings are the same as for
    /// MakeOffsetShape.
    /// </summary>
    void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Constructs a hollowed solid from
    /// the solid S by removing the set of faces ClosingFaces from S, where:
    /// Offset defines the thickness of the walls. Its sign indicates
    /// which side of the surface of the solid the hollowed shape is built on;
    /// - Tol defines the tolerance criterion for coincidence in generated shapes;
    /// - Mode defines the construction type of parallels applied to free
    /// edges of shape S. Currently, only one construction type is
    /// implemented, namely the one where the free edges do not generate
    /// parallels; this corresponds to the default value BRepOffset_Skin;
    /// Intersection specifies how the algorithm must work in order to
    /// limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// -     if Intersection is true, the intersection is calculated by
    /// taking account of all parallels generated; this computation
    /// method is more general as it avoids self-intersections
    /// generated in the offset shape from features of small dimensions
    /// on shape S, however this method has not been completely
    /// implemented and therefore is not recommended for use;
    /// -     SelfInter tells the algorithm whether a computation to
    /// eliminate self-intersections needs to be applied to the
    /// resulting shape. However, as this functionality is not yet
    /// implemented, you should use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection,
    /// then the parallels to the two adjacent faces are
    /// enlarged and intersected, so that there are no free
    /// edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// Since the algorithm of MakeThickSolid is based on
    /// MakeOffsetShape algorithm, the warnings are the same as for
    /// MakeOffsetShape.
    /// </summary>
    void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool RemoveIntEdges);
    /// <summary>
    /// Constructs a hollowed solid from
    /// the solid S by removing the set of faces ClosingFaces from S, where:
    /// Offset defines the thickness of the walls. Its sign indicates
    /// which side of the surface of the solid the hollowed shape is built on;
    /// - Tol defines the tolerance criterion for coincidence in generated shapes;
    /// - Mode defines the construction type of parallels applied to free
    /// edges of shape S. Currently, only one construction type is
    /// implemented, namely the one where the free edges do not generate
    /// parallels; this corresponds to the default value BRepOffset_Skin;
    /// Intersection specifies how the algorithm must work in order to
    /// limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// -     if Intersection is true, the intersection is calculated by
    /// taking account of all parallels generated; this computation
    /// method is more general as it avoids self-intersections
    /// generated in the offset shape from features of small dimensions
    /// on shape S, however this method has not been completely
    /// implemented and therefore is not recommended for use;
    /// -     SelfInter tells the algorithm whether a computation to
    /// eliminate self-intersections needs to be applied to the
    /// resulting shape. However, as this functionality is not yet
    /// implemented, you should use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection,
    /// then the parallels to the two adjacent faces are
    /// enlarged and intersected, so that there are no free
    /// edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// Since the algorithm of MakeThickSolid is based on
    /// MakeOffsetShape algorithm, the warnings are the same as for
    /// MakeOffsetShape.
    /// </summary>
    void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Constructs a hollowed solid from
    /// the solid S by removing the set of faces ClosingFaces from S, where:
    /// Offset defines the thickness of the walls. Its sign indicates
    /// which side of the surface of the solid the hollowed shape is built on;
    /// - Tol defines the tolerance criterion for coincidence in generated shapes;
    /// - Mode defines the construction type of parallels applied to free
    /// edges of shape S. Currently, only one construction type is
    /// implemented, namely the one where the free edges do not generate
    /// parallels; this corresponds to the default value BRepOffset_Skin;
    /// Intersection specifies how the algorithm must work in order to
    /// limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// -     if Intersection is true, the intersection is calculated by
    /// taking account of all parallels generated; this computation
    /// method is more general as it avoids self-intersections
    /// generated in the offset shape from features of small dimensions
    /// on shape S, however this method has not been completely
    /// implemented and therefore is not recommended for use;
    /// -     SelfInter tells the algorithm whether a computation to
    /// eliminate self-intersections needs to be applied to the
    /// resulting shape. However, as this functionality is not yet
    /// implemented, you should use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection,
    /// then the parallels to the two adjacent faces are
    /// enlarged and intersected, so that there are no free
    /// edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// Since the algorithm of MakeThickSolid is based on
    /// MakeOffsetShape algorithm, the warnings are the same as for
    /// MakeOffsetShape.
    /// </summary>
    void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
    /// <summary>
    /// Constructs a hollowed solid from
    /// the solid S by removing the set of faces ClosingFaces from S, where:
    /// Offset defines the thickness of the walls. Its sign indicates
    /// which side of the surface of the solid the hollowed shape is built on;
    /// - Tol defines the tolerance criterion for coincidence in generated shapes;
    /// - Mode defines the construction type of parallels applied to free
    /// edges of shape S. Currently, only one construction type is
    /// implemented, namely the one where the free edges do not generate
    /// parallels; this corresponds to the default value BRepOffset_Skin;
    /// Intersection specifies how the algorithm must work in order to
    /// limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// -     if Intersection is true, the intersection is calculated by
    /// taking account of all parallels generated; this computation
    /// method is more general as it avoids self-intersections
    /// generated in the offset shape from features of small dimensions
    /// on shape S, however this method has not been completely
    /// implemented and therefore is not recommended for use;
    /// -     SelfInter tells the algorithm whether a computation to
    /// eliminate self-intersections needs to be applied to the
    /// resulting shape. However, as this functionality is not yet
    /// implemented, you should use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection,
    /// then the parallels to the two adjacent faces are
    /// enlarged and intersected, so that there are no free
    /// edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// Since the algorithm of MakeThickSolid is based on
    /// MakeOffsetShape algorithm, the warnings are the same as for
    /// MakeOffsetShape.
    /// </summary>
    void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
    /// <summary>
    /// Constructs a hollowed solid from
    /// the solid S by removing the set of faces ClosingFaces from S, where:
    /// Offset defines the thickness of the walls. Its sign indicates
    /// which side of the surface of the solid the hollowed shape is built on;
    /// - Tol defines the tolerance criterion for coincidence in generated shapes;
    /// - Mode defines the construction type of parallels applied to free
    /// edges of shape S. Currently, only one construction type is
    /// implemented, namely the one where the free edges do not generate
    /// parallels; this corresponds to the default value BRepOffset_Skin;
    /// Intersection specifies how the algorithm must work in order to
    /// limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// -     if Intersection is true, the intersection is calculated by
    /// taking account of all parallels generated; this computation
    /// method is more general as it avoids self-intersections
    /// generated in the offset shape from features of small dimensions
    /// on shape S, however this method has not been completely
    /// implemented and therefore is not recommended for use;
    /// -     SelfInter tells the algorithm whether a computation to
    /// eliminate self-intersections needs to be applied to the
    /// resulting shape. However, as this functionality is not yet
    /// implemented, you should use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection,
    /// then the parallels to the two adjacent faces are
    /// enlarged and intersected, so that there are no free
    /// edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// Since the algorithm of MakeThickSolid is based on
    /// MakeOffsetShape algorithm, the warnings are the same as for
    /// MakeOffsetShape.
    /// </summary>
    void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
    /// <summary>
    /// Constructs a hollowed solid from
    /// the solid S by removing the set of faces ClosingFaces from S, where:
    /// Offset defines the thickness of the walls. Its sign indicates
    /// which side of the surface of the solid the hollowed shape is built on;
    /// - Tol defines the tolerance criterion for coincidence in generated shapes;
    /// - Mode defines the construction type of parallels applied to free
    /// edges of shape S. Currently, only one construction type is
    /// implemented, namely the one where the free edges do not generate
    /// parallels; this corresponds to the default value BRepOffset_Skin;
    /// Intersection specifies how the algorithm must work in order to
    /// limit the parallels to two adjacent shapes:
    /// - if Intersection is false (default value), the intersection
    /// is calculated with the parallels to the two adjacent shapes,
    /// -     if Intersection is true, the intersection is calculated by
    /// taking account of all parallels generated; this computation
    /// method is more general as it avoids self-intersections
    /// generated in the offset shape from features of small dimensions
    /// on shape S, however this method has not been completely
    /// implemented and therefore is not recommended for use;
    /// -     SelfInter tells the algorithm whether a computation to
    /// eliminate self-intersections needs to be applied to the
    /// resulting shape. However, as this functionality is not yet
    /// implemented, you should use the default value (false);
    /// - Join defines how to fill the holes that may appear between
    /// parallels to the two adjacent faces. It may take values
    /// GeomAbs_Arc or GeomAbs_Intersection:
    /// - if Join is equal to GeomAbs_Arc, then pipes are generated
    /// between two free edges of two adjacent parallels,
    /// and spheres are generated on "images" of vertices;
    /// it is the default value,
    /// - if Join is equal to GeomAbs_Intersection,
    /// then the parallels to the two adjacent faces are
    /// enlarged and intersected, so that there are no free
    /// edges on parallels to faces.
    /// RemoveIntEdges flag defines whether to remove the INTERNAL edges
    /// from the result or not.
    /// Warnings
    /// Since the algorithm of MakeThickSolid is based on
    /// MakeOffsetShape algorithm, the warnings are the same as for
    /// MakeOffsetShape.
    /// </summary>
    void MakeThickSolidByJoin(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol);
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    void Build();
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffsetAPI_MakeThickSolid

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MiddlePath
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build a middle path of a
/// pipe-like shape
/// </summary>
public ref class BRepOffsetAPI_MiddlePath sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_MiddlePath_h
public:
    Include_BRepOffsetAPI_MiddlePath_h
#endif

public:
    BRepOffsetAPI_MiddlePath(::BRepOffsetAPI_MiddlePath* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepOffsetAPI_MiddlePath(::BRepOffsetAPI_MiddlePath& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_MiddlePath* NativeInstance
    {
        ::BRepOffsetAPI_MiddlePath* get()
        {
            return static_cast<::BRepOffsetAPI_MiddlePath*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// General constructor.
    /// StartShape and EndShape may be
    /// a wire or a face
    /// </summary>
    BRepOffsetAPI_MiddlePath(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopoDS_Shape^ StartShape, Macad::Occt::TopoDS_Shape^ EndShape);
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    void Build();
}; // class BRepOffsetAPI_MiddlePath

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_NormalProjection
//---------------------------------------------------------------------
/// <summary>
/// A framework to define projection onto a shape
/// according to the normal from each point to be projected.
/// The target shape is a face, and the source shape is an edge or a wire.
/// </summary>
public ref class BRepOffsetAPI_NormalProjection sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_NormalProjection_h
public:
    Include_BRepOffsetAPI_NormalProjection_h
#endif

public:
    BRepOffsetAPI_NormalProjection(::BRepOffsetAPI_NormalProjection* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepOffsetAPI_NormalProjection(::BRepOffsetAPI_NormalProjection& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_NormalProjection* NativeInstance
    {
        ::BRepOffsetAPI_NormalProjection* get()
        {
            return static_cast<::BRepOffsetAPI_NormalProjection*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty framework to define projection on
    /// a shape according to the normal from each point to be
    /// projected to the shape.
    /// </summary>
    BRepOffsetAPI_NormalProjection();
    /// <summary>
    /// Constructs a framework to define projection onto the
    /// basis shape S according to the normal from each point
    /// to be projected from the shape added to this framework by Add.
    /// Default parameters of the algorithm: Tol3D = 1.e-04, Tol2D =sqr(tol3d)
    /// , InternalContinuity = GeomAbs_C2, MaxDegree = 14, MaxSeg = 16.
    /// </summary>
    BRepOffsetAPI_NormalProjection(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Initializes the empty constructor framework with the shape S.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Adds the shape ToProj to the framework for calculation
    /// of the projection by Compute3d.
    /// ToProj is an edge or a wire and will be projected onto the basis shape.
    /// Exceptions
    /// Standard_ConstructionError if ToProj is not added.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ ToProj);
    /// <summary>
    /// Sets the parameters  used  for computation
    /// Tol3 is the required  tolerance between the  3d projected
    /// curve  and     its    2d    representation
    /// InternalContinuity  is the order of constraints
    /// used for  approximation
    /// MaxDeg and MaxSeg are the maximum degree and the maximum
    /// number of segment for BSpline resulting of an approximation.
    /// </summary>
    void SetParams(double Tol3D, double Tol2D, Macad::Occt::GeomAbs_Shape InternalContinuity, int MaxDegree, int MaxSeg);
    /// <summary>
    /// Sets the maximum distance between target shape and
    /// shape to project. If this condition is not satisfied then corresponding
    /// part of solution is discarded.
    /// if MaxDist < 0 then this method does not affect the algorithm
    /// </summary>
    void SetMaxDistance(double MaxDist);
    /// <summary>
    /// Manage  limitation  of  projected  edges.
    /// </summary>
    void SetLimit(bool FaceBoundaries);
    /// <summary>
    /// Manage  limitation  of  projected  edges.
    /// </summary>
    void SetLimit();
    /// <summary>
    /// Returns true if a 3D curve is computed. If not, false is
    /// returned and an initial 3D curve is kept to build the resulting edges.
    /// </summary>
    void Compute3d(bool With3d);
    /// <summary>
    /// Returns true if a 3D curve is computed. If not, false is
    /// returned and an initial 3D curve is kept to build the resulting edges.
    /// </summary>
    void Compute3d();
    /// <summary>
    /// Builds the result of the projection as a compound of
    /// wires. Tries to build oriented wires.
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the result of the projection as a compound of
    /// wires. Tries to build oriented wires.
    /// </summary>
    void Build();
    /// <summary>
    /// Returns true if the object was correctly built by the shape
    /// construction algorithm.
    /// If at the construction time of the shape, the algorithm
    /// cannot be completed, or the original data is corrupted,
    /// IsDone returns false and therefore protects the use of
    /// functions to access the result of the construction
    /// (typically the Shape function).
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Performs the projection.
    /// The construction of the result is performed by Build.
    /// Exceptions
    /// StdFail_NotDone if the projection was not performed.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Projection();
    /// <summary>
    /// Returns the initial face corresponding to the projected edge E.
    /// Exceptions
    /// StdFail_NotDone if no face was found.
    /// Standard_NoSuchObject if a face corresponding to
    /// E has already been found.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Couple(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the  list   of shapes generated   from the
    /// shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the initial edge corresponding to the edge E
    /// resulting from the computation of the projection.
    /// Exceptions
    /// StdFail_NotDone if no edge was found.
    /// Standard_NoSuchObject if an edge corresponding to
    /// E has already been found.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Ancestor(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// build the result as a list of wire if possible in --
    /// a first returns a wire only if there is only a wire.
    /// </summary>
    bool BuildWire(Macad::Occt::TopTools_ListOfShape^ Liste);
}; // class BRepOffsetAPI_NormalProjection

//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_ThruSections
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build a loft. This is a shell or a
/// solid passing through a set of sections in a given
/// sequence. Usually sections are wires, but the first and
/// the last sections may be vertices (punctual sections).
/// </summary>
public ref class BRepOffsetAPI_ThruSections sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepOffsetAPI_ThruSections_h
public:
    Include_BRepOffsetAPI_ThruSections_h
#endif

public:
    BRepOffsetAPI_ThruSections(::BRepOffsetAPI_ThruSections* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepOffsetAPI_ThruSections(::BRepOffsetAPI_ThruSections& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepOffsetAPI_ThruSections* NativeInstance
    {
        ::BRepOffsetAPI_ThruSections* get()
        {
            return static_cast<::BRepOffsetAPI_ThruSections*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an algorithm for building a shell or a solid
    /// passing through a set of sections, where:
    /// -          isSolid is set to true if the construction algorithm is
    /// required to build a solid or to false if it is required to build
    /// a shell (the default value),
    /// -          ruled is set to true if the faces generated between
    /// the edges of two consecutive wires are ruled surfaces or to
    /// false (the default value) if they are smoothed out by approximation,
    /// -          pres3d defines the precision criterion used by the
    /// approximation algorithm; the default value is 1.0e-6.
    /// Use AddWire and AddVertex to define the
    /// successive sections of the shell or solid to be built.
    /// </summary>
    BRepOffsetAPI_ThruSections(bool isSolid, bool ruled, double pres3d);
    /// <summary>
    /// Initializes an algorithm for building a shell or a solid
    /// passing through a set of sections, where:
    /// -          isSolid is set to true if the construction algorithm is
    /// required to build a solid or to false if it is required to build
    /// a shell (the default value),
    /// -          ruled is set to true if the faces generated between
    /// the edges of two consecutive wires are ruled surfaces or to
    /// false (the default value) if they are smoothed out by approximation,
    /// -          pres3d defines the precision criterion used by the
    /// approximation algorithm; the default value is 1.0e-6.
    /// Use AddWire and AddVertex to define the
    /// successive sections of the shell or solid to be built.
    /// </summary>
    BRepOffsetAPI_ThruSections(bool isSolid, bool ruled);
    /// <summary>
    /// Initializes an algorithm for building a shell or a solid
    /// passing through a set of sections, where:
    /// -          isSolid is set to true if the construction algorithm is
    /// required to build a solid or to false if it is required to build
    /// a shell (the default value),
    /// -          ruled is set to true if the faces generated between
    /// the edges of two consecutive wires are ruled surfaces or to
    /// false (the default value) if they are smoothed out by approximation,
    /// -          pres3d defines the precision criterion used by the
    /// approximation algorithm; the default value is 1.0e-6.
    /// Use AddWire and AddVertex to define the
    /// successive sections of the shell or solid to be built.
    /// </summary>
    BRepOffsetAPI_ThruSections(bool isSolid);
    /// <summary>
    /// Initializes an algorithm for building a shell or a solid
    /// passing through a set of sections, where:
    /// -          isSolid is set to true if the construction algorithm is
    /// required to build a solid or to false if it is required to build
    /// a shell (the default value),
    /// -          ruled is set to true if the faces generated between
    /// the edges of two consecutive wires are ruled surfaces or to
    /// false (the default value) if they are smoothed out by approximation,
    /// -          pres3d defines the precision criterion used by the
    /// approximation algorithm; the default value is 1.0e-6.
    /// Use AddWire and AddVertex to define the
    /// successive sections of the shell or solid to be built.
    /// </summary>
    BRepOffsetAPI_ThruSections();
    /// <summary>
    /// Initializes this algorithm for building a shell or a solid
    /// passing through a set of sections, where:
    /// - isSolid is set to true if this construction algorithm is
    /// required to build a solid or to false if it is required to
    /// build a shell. false is the default value;
    /// - ruled is set to true if the faces generated between the
    /// edges of two consecutive wires are ruled surfaces or
    /// to false (the default value) if they are smoothed out by approximation,
    /// - pres3d defines the precision criterion used by the
    /// approximation algorithm; the default value is 1.0e-6.
    /// Use AddWire and AddVertex to define the successive
    /// sections of the shell or solid to be built.
    /// </summary>
    void Init(bool isSolid, bool ruled, double pres3d);
    /// <summary>
    /// Initializes this algorithm for building a shell or a solid
    /// passing through a set of sections, where:
    /// - isSolid is set to true if this construction algorithm is
    /// required to build a solid or to false if it is required to
    /// build a shell. false is the default value;
    /// - ruled is set to true if the faces generated between the
    /// edges of two consecutive wires are ruled surfaces or
    /// to false (the default value) if they are smoothed out by approximation,
    /// - pres3d defines the precision criterion used by the
    /// approximation algorithm; the default value is 1.0e-6.
    /// Use AddWire and AddVertex to define the successive
    /// sections of the shell or solid to be built.
    /// </summary>
    void Init(bool isSolid, bool ruled);
    /// <summary>
    /// Initializes this algorithm for building a shell or a solid
    /// passing through a set of sections, where:
    /// - isSolid is set to true if this construction algorithm is
    /// required to build a solid or to false if it is required to
    /// build a shell. false is the default value;
    /// - ruled is set to true if the faces generated between the
    /// edges of two consecutive wires are ruled surfaces or
    /// to false (the default value) if they are smoothed out by approximation,
    /// - pres3d defines the precision criterion used by the
    /// approximation algorithm; the default value is 1.0e-6.
    /// Use AddWire and AddVertex to define the successive
    /// sections of the shell or solid to be built.
    /// </summary>
    void Init(bool isSolid);
    /// <summary>
    /// Initializes this algorithm for building a shell or a solid
    /// passing through a set of sections, where:
    /// - isSolid is set to true if this construction algorithm is
    /// required to build a solid or to false if it is required to
    /// build a shell. false is the default value;
    /// - ruled is set to true if the faces generated between the
    /// edges of two consecutive wires are ruled surfaces or
    /// to false (the default value) if they are smoothed out by approximation,
    /// - pres3d defines the precision criterion used by the
    /// approximation algorithm; the default value is 1.0e-6.
    /// Use AddWire and AddVertex to define the successive
    /// sections of the shell or solid to be built.
    /// </summary>
    void Init();
    /// <summary>
    /// Adds the wire wire to the set of
    /// sections through which the shell or solid is built.
    /// Use the Build function to construct the shape.
    /// </summary>
    void AddWire(Macad::Occt::TopoDS_Wire^ wire);
    /// <summary>
    /// Adds the vertex Vertex (punctual section) to the set of sections
    /// through which the shell or solid is built. A vertex may be added to the
    /// set of sections only as first or last section. At least one wire
    /// must be added to the set of sections by the method AddWire.
    /// Use the Build function to construct the shape.
    /// </summary>
    void AddVertex(Macad::Occt::TopoDS_Vertex^ aVertex);
    /// <summary>
    /// Sets/unsets the option to
    /// compute origin and orientation on wires to avoid twisted results
    /// and update wires to have same number of edges.
    /// </summary>
    void CheckCompatibility(bool check);
    /// <summary>
    /// Sets/unsets the option to
    /// compute origin and orientation on wires to avoid twisted results
    /// and update wires to have same number of edges.
    /// </summary>
    void CheckCompatibility();
    /// <summary>
    /// Define the approximation algorithm
    /// </summary>
    void SetSmoothing(bool UseSmoothing);
    /* Method skipped due to unknown mapping: void SetParType(Approx_ParametrizationType ParType, ) */
    /// <summary>
    /// Define the Continuity used in the approximation
    /// </summary>
    void SetContinuity(Macad::Occt::GeomAbs_Shape C);
    /// <summary>
    /// define the Weights  associed to the criterium used in
    /// the  optimization.
    /// 
    /// if Wi <= 0
    /// </summary>
    void SetCriteriumWeight(double W1, double W2, double W3);
    /// <summary>
    /// Define the maximal U degree of result surface
    /// </summary>
    void SetMaxDegree(int MaxDeg);
    /* Method skipped due to unknown mapping: Approx_ParametrizationType ParType() */
    /// <summary>
    /// returns the Continuity used in the approximation
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// returns the maximal U degree of result surface
    /// </summary>
    int MaxDegree();
    /// <summary>
    /// Define the approximation algorithm
    /// </summary>
    bool UseSmoothing();
    /// <summary>
    /// returns the Weights associed  to the criterium used in
    /// the  optimization.
    /// </summary>
    void CriteriumWeight(double% W1, double% W2, double% W3);
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    void Build();
    /// <summary>
    /// Returns the TopoDS Shape of the bottom of the loft if solid
    /// </summary>
    Macad::Occt::TopoDS_Shape^ FirstShape();
    /// <summary>
    /// Returns the TopoDS Shape of the top of the loft if solid
    /// </summary>
    Macad::Occt::TopoDS_Shape^ LastShape();
    /// <summary>
    /// if Ruled
    /// Returns the Face generated by each edge
    /// except the last wire
    /// if smoothed
    /// Returns the Face generated by each edge of the first wire
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GeneratedFace(Macad::Occt::TopoDS_Shape^ Edge);
    /// <summary>
    /// Sets the mutable input state.
    /// If true then the input profile can be modified inside
    /// the thrusection operation. Default value is true.
    /// </summary>
    void SetMutableInput(bool theIsMutableInput);
    /// <summary>
    /// Returns a list of new shapes generated from the shape
    /// S by the shell-generating algorithm.
    /// This function is redefined from BRepBuilderAPI_MakeShape::Generated.
    /// S can be an edge or a vertex of a given Profile (see methods AddWire and AddVertex).
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list of original wires
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Wires();
    /// <summary>
    /// Returns the current mutable input state
    /// </summary>
    bool IsMutableInput();
    /* Method skipped due to unknown mapping: BRepFill_ThruSectionErrorStatus GetStatus() */
}; // class BRepOffsetAPI_ThruSections

}; // namespace Occt
}; // namespace Macad
