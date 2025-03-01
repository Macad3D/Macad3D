// Generated wrapper code for package ShapeAnalysis

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeAnalysis_BoxBndTree
//---------------------------------------------------------------------
public ref class ShapeAnalysis_BoxBndTree sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_BoxBndTree>
{

#ifdef Include_ShapeAnalysis_BoxBndTree_h
public:
    Include_ShapeAnalysis_BoxBndTree_h
#endif

public:
    ShapeAnalysis_BoxBndTree(::ShapeAnalysis_BoxBndTree* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_BoxBndTree>( nativeInstance, true )
    {}

    ShapeAnalysis_BoxBndTree(::ShapeAnalysis_BoxBndTree& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_BoxBndTree>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_BoxBndTree* NativeInstance
    {
        ::ShapeAnalysis_BoxBndTree* get()
        {
            return static_cast<::ShapeAnalysis_BoxBndTree*>(_NativeInstance);
        }
    }

public:
    ShapeAnalysis_BoxBndTree();
    ShapeAnalysis_BoxBndTree(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    bool Add(int theObj, Macad::Occt::Bnd_Box^ theBnd);
    /* Method skipped due to unknown mapping: int Select(Selector theSelector, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ aNewAlloc);
    void Clear();
    bool IsEmpty();
    /* Method skipped due to unknown mapping: TreeNode Root() */
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
}; // class ShapeAnalysis_BoxBndTree

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_DataMapOfShapeListOfReal
//---------------------------------------------------------------------
public ref class ShapeAnalysis_DataMapOfShapeListOfReal sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>
{

#ifdef Include_ShapeAnalysis_DataMapOfShapeListOfReal_h
public:
    Include_ShapeAnalysis_DataMapOfShapeListOfReal_h
#endif

public:
    ShapeAnalysis_DataMapOfShapeListOfReal(::ShapeAnalysis_DataMapOfShapeListOfReal* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>( nativeInstance, true )
    {}

    ShapeAnalysis_DataMapOfShapeListOfReal(::ShapeAnalysis_DataMapOfShapeListOfReal& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_DataMapOfShapeListOfReal* NativeInstance
    {
        ::ShapeAnalysis_DataMapOfShapeListOfReal* get()
        {
            return static_cast<::ShapeAnalysis_DataMapOfShapeListOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator>
    {

#ifdef Include_ShapeAnalysis_DataMapOfShapeListOfReal_Iterator_h
    public:
        Include_ShapeAnalysis_DataMapOfShapeListOfReal_Iterator_h
#endif

    public:
        Iterator(::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator* NativeInstance
        {
            ::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator* get()
            {
                return static_cast<::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColStd_ListOfReal^ Value();
        Macad::Occt::TColStd_ListOfReal^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    ShapeAnalysis_DataMapOfShapeListOfReal();
    ShapeAnalysis_DataMapOfShapeListOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    ShapeAnalysis_DataMapOfShapeListOfReal(int theNbBuckets);
    void Exchange(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther);
    Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ Assign(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfReal^ theItem);
    Macad::Occt::TColStd_ListOfReal^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfReal^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_ListOfReal^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_ListOfReal^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_ListOfReal^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_ListOfReal^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class ShapeAnalysis_DataMapOfShapeListOfReal

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_SequenceOfFreeBounds
//---------------------------------------------------------------------
public ref class ShapeAnalysis_SequenceOfFreeBounds sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>
    , public IIndexEnumerable<Macad::Occt::ShapeAnalysis_FreeBoundData^>
{

#ifdef Include_ShapeAnalysis_SequenceOfFreeBounds_h
public:
    Include_ShapeAnalysis_SequenceOfFreeBounds_h
#endif

public:
    ShapeAnalysis_SequenceOfFreeBounds(::ShapeAnalysis_SequenceOfFreeBounds* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>( nativeInstance, true )
    {}

    ShapeAnalysis_SequenceOfFreeBounds(::ShapeAnalysis_SequenceOfFreeBounds& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_SequenceOfFreeBounds* NativeInstance
    {
        ::ShapeAnalysis_SequenceOfFreeBounds* get()
        {
            return static_cast<::ShapeAnalysis_SequenceOfFreeBounds*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds::Iterator>
    {

#ifdef Include_ShapeAnalysis_SequenceOfFreeBounds_Iterator_h
    public:
        Include_ShapeAnalysis_SequenceOfFreeBounds_Iterator_h
#endif

    public:
        Iterator(::ShapeAnalysis_SequenceOfFreeBounds::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds::Iterator>( nativeInstance, true )
        {}

        Iterator(::ShapeAnalysis_SequenceOfFreeBounds::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds::Iterator>( &nativeInstance, false )
        {}

        property ::ShapeAnalysis_SequenceOfFreeBounds::Iterator* NativeInstance
        {
            ::ShapeAnalysis_SequenceOfFreeBounds::Iterator* get()
            {
                return static_cast<::ShapeAnalysis_SequenceOfFreeBounds::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::ShapeAnalysis_FreeBoundData^ Value();
        Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeValue();
        bool IsEqual(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    ShapeAnalysis_SequenceOfFreeBounds();
    ShapeAnalysis_SequenceOfFreeBounds(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Assign(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther);
    void Remove(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator^ thePosition);
    void Append(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    void Prepend(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    void InsertAfter(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator^ thePosition, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    void Split(int theIndex, Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq);
    Macad::Occt::ShapeAnalysis_FreeBoundData^ First();
    Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeFirst();
    Macad::Occt::ShapeAnalysis_FreeBoundData^ Last();
    Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeLast();
    virtual Macad::Occt::ShapeAnalysis_FreeBoundData^ Value(int theIndex);
    Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::ShapeAnalysis_FreeBoundData^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class ShapeAnalysis_SequenceOfFreeBounds

//---------------------------------------------------------------------
//  Class  ShapeAnalysis
//---------------------------------------------------------------------
/// <summary>
/// This package is intended to analyze geometrical objects
/// and topological shapes. Analysis domain includes both
/// exploring geometrical and topological properties of
/// shapes and checking their conformance to Open CASCADE requirements.
/// The directions of analysis provided by tools of this package are:
/// computing quantities of subshapes,
/// computing parameters of points on curve and surface,
/// computing surface singularities,
/// checking edge and wire consistency,
/// checking edges order in the wire,
/// checking face bounds orientation,
/// checking small faces,
/// analyzing shape tolerances,
/// analyzing of free bounds of the shape.
/// </summary>
public ref class ShapeAnalysis sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis>
{

#ifdef Include_ShapeAnalysis_h
public:
    Include_ShapeAnalysis_h
#endif

public:
    ShapeAnalysis(::ShapeAnalysis* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis>( nativeInstance, true )
    {}

    ShapeAnalysis(::ShapeAnalysis& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis* NativeInstance
    {
        ::ShapeAnalysis* get()
        {
            return static_cast<::ShapeAnalysis*>(_NativeInstance);
        }
    }

public:
    ShapeAnalysis();
    /// <summary>
    /// Returns positively oriented wire in the face.
    /// If there is no such wire - returns the last wire of the face.
    /// </summary>
    static Macad::Occt::TopoDS_Wire^ OuterWire(Macad::Occt::TopoDS_Face^ theFace);
    /* Method skipped due to unknown mapping: double TotCross2D(ShapeExtend_WireData sewd, TopoDS_Face aFace, ) */
    /// <summary>
    /// Returns a total area of 3d wire
    /// </summary>
    static double ContourArea(Macad::Occt::TopoDS_Wire^ theWire);
    /// <summary>
    /// Returns True if <F> has outer bound.
    /// </summary>
    static bool IsOuterBound(Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Returns a shift required to move point
    /// <Val> to the range [ToVal-Period/2,ToVal+Period/2].
    /// This shift will be the divisible by Period.
    /// Intended for adjusting parameters on periodic surfaces.
    /// </summary>
    static double AdjustByPeriod(double Val, double ToVal, double Period);
    /// <summary>
    /// Returns a shift required to move point
    /// <Val> to the range [ValMin,ValMax].
    /// This shift will be the divisible by Period
    /// with Period = ValMax - ValMin.
    /// Intended for adjusting parameters on periodic surfaces.
    /// </summary>
    static double AdjustToPeriod(double Val, double ValMin, double ValMax);
    /// <summary>
    /// Finds the start and end vertices of the shape
    /// Shape can be of the following type:
    /// vertex: V1 and V2 are the same and equal to <shape>,
    /// edge  : V1 is start and V2 is end vertex (see ShapeAnalysis_Edge
    /// methods FirstVertex and LastVertex),
    /// wire  : V1 is start vertex of the first edge, V2 is end vertex
    /// of the last edge (also see ShapeAnalysis_Edge).
    /// If wire contains no edges V1 and V2 are nullified
    /// If none of the above V1 and V2 are nullified
    /// </summary>
    static void FindBounds(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2);
    /// <summary>
    /// Computes exact UV bounds of all wires on the face
    /// </summary>
    static void GetFaceUVBounds(Macad::Occt::TopoDS_Face^ F, double% Umin, double% Umax, double% Vmin, double% Vmax);
}; // class ShapeAnalysis

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_CanonicalRecognition
//---------------------------------------------------------------------
/// <summary>
/// This class provides operators for analysis surfaces and curves of shapes
/// in order to find out more simple geometry entities, which could replace
/// existing complex (for example, BSpline) geometry objects with given tolerance.
/// </summary>
public ref class ShapeAnalysis_CanonicalRecognition sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_CanonicalRecognition>
{

#ifdef Include_ShapeAnalysis_CanonicalRecognition_h
public:
    Include_ShapeAnalysis_CanonicalRecognition_h
#endif

public:
    ShapeAnalysis_CanonicalRecognition(::ShapeAnalysis_CanonicalRecognition* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_CanonicalRecognition>( nativeInstance, true )
    {}

    ShapeAnalysis_CanonicalRecognition(::ShapeAnalysis_CanonicalRecognition& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_CanonicalRecognition>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_CanonicalRecognition* NativeInstance
    {
        ::ShapeAnalysis_CanonicalRecognition* get()
        {
            return static_cast<::ShapeAnalysis_CanonicalRecognition*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_CanonicalRecognition();
    /// <summary>
    /// constructor with shape initialisation
    /// </summary>
    ShapeAnalysis_CanonicalRecognition(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Sets shape
    /// </summary>
    void SetShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Returns input shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetShape();
    /// <summary>
    /// Returns deviation between input geometry entity and analytical entity
    /// </summary>
    double GetGap();
    /// <summary>
    /// Returns status of operation.
    /// Current meaning of possible values of status:
    /// -1 - algorithm is not initalazed by shape
    /// 0 - no errors
    /// 1 - error during any operation (usually - because of wrong input data)
    /// Any operation (calling any methods like IsPlane(...), ...) can be performed
    /// when current staue is equal 0.
    /// If after any operation status != 0, it is necessary to set it 0 by method ClearStatus()
    /// before calling other operation.
    /// </summary>
    int GetStatus();
    /// <summary>
    /// Returns status to be equal 0.
    /// </summary>
    void ClearStatus();
    /// <summary>
    /// Returns true if the underlined surface can be represent by plane with tolerance theTol
    /// and sets in thePln the result plane.
    /// </summary>
    bool IsPlane(double theTol, Macad::Occt::Pln% thePln);
    /// <summary>
    /// Returns true if the underlined surface can be represent by cylindrical one with tolerance
    /// theTol and sets in theCyl the result cylinrical surface.
    /// </summary>
    bool IsCylinder(double theTol, Macad::Occt::gp_Cylinder^ theCyl);
    /// <summary>
    /// Returns true if the underlined surface can be represent by conical one with tolerance theTol
    /// and sets in theCone the result conical surface.
    /// </summary>
    bool IsCone(double theTol, Macad::Occt::gp_Cone^ theCone);
    /// <summary>
    /// Returns true if the underlined surface can be represent by spherical one with tolerance theTol
    /// and sets in theSphere the result spherical surface.
    /// </summary>
    bool IsSphere(double theTol, Macad::Occt::gp_Sphere^ theSphere);
    /// <summary>
    /// Returns true if the underlined curve can be represent by line with tolerance theTol
    /// and sets in theLin the result line.
    /// </summary>
    bool IsLine(double theTol, Macad::Occt::gp_Lin^ theLin);
    /// <summary>
    /// Returns true if the underlined curve can be represent by circle with tolerance theTol
    /// and sets in theCirc the result circle.
    /// </summary>
    bool IsCircle(double theTol, Macad::Occt::gp_Circ^ theCirc);
    /// <summary>
    /// Returns true if the underlined curve can be represent by ellipse with tolerance theTol
    /// and sets in theCirc the result ellipse.
    /// </summary>
    bool IsEllipse(double theTol, Macad::Occt::gp_Elips^ theElips);
}; // class ShapeAnalysis_CanonicalRecognition

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_CheckSmallFace
//---------------------------------------------------------------------
/// <summary>
/// Analysis of the face size
/// </summary>
public ref class ShapeAnalysis_CheckSmallFace sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_CheckSmallFace>
{

#ifdef Include_ShapeAnalysis_CheckSmallFace_h
public:
    Include_ShapeAnalysis_CheckSmallFace_h
#endif

public:
    ShapeAnalysis_CheckSmallFace(::ShapeAnalysis_CheckSmallFace* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_CheckSmallFace>( nativeInstance, true )
    {}

    ShapeAnalysis_CheckSmallFace(::ShapeAnalysis_CheckSmallFace& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_CheckSmallFace>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_CheckSmallFace* NativeInstance
    {
        ::ShapeAnalysis_CheckSmallFace* get()
        {
            return static_cast<::ShapeAnalysis_CheckSmallFace*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty tool
    /// Checks a Shape i.e. each of its faces, records checks as
    /// diagnostics in the <infos>
    /// 
    /// If <infos> has not been set before, no check is done
    /// 
    /// For faces which are in a Shell, topological data are recorded
    /// to allow recovering connectivities after fixing or removing
    /// the small faces or parts of faces
    /// Enchains various checks on a face
    /// inshell : to compute more information, relevant to topology
    /// </summary>
    ShapeAnalysis_CheckSmallFace();
    /// <summary>
    /// Checks if a Face is as a Spot
    /// Returns 0 if not, 1 if yes, 2 if yes and all vertices are the
    /// same
    /// By default, considers the tolerance zone of its vertices
    /// A given value <tol> may be given to check a spot of this size
    /// If a Face is a Spot, its location is returned in <spot>, and
    /// <spotol> returns an equivalent tolerance, which is computed as
    /// half of max dimension of min-max box of the face
    /// </summary>
    int IsSpotFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% spot, double% spotol, double tol);
    /// <summary>
    /// Checks if a Face is as a Spot
    /// Returns 0 if not, 1 if yes, 2 if yes and all vertices are the
    /// same
    /// By default, considers the tolerance zone of its vertices
    /// A given value <tol> may be given to check a spot of this size
    /// If a Face is a Spot, its location is returned in <spot>, and
    /// <spotol> returns an equivalent tolerance, which is computed as
    /// half of max dimension of min-max box of the face
    /// </summary>
    int IsSpotFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% spot, double% spotol);
    /// <summary>
    /// Acts as IsSpotFace, but records in <infos> a diagnostic
    /// "SpotFace" with the Pnt as value (data "Location")
    /// </summary>
    bool CheckSpotFace(Macad::Occt::TopoDS_Face^ F, double tol);
    /// <summary>
    /// Acts as IsSpotFace, but records in <infos> a diagnostic
    /// "SpotFace" with the Pnt as value (data "Location")
    /// </summary>
    bool CheckSpotFace(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Checks if a Face lies on a Surface which is a strip
    /// So the Face is a strip. But a Face may be a strip elsewhere ..
    /// 
    /// A given value <tol> may be given to check max width
    /// By default, considers the tolerance zone of its edges
    /// Returns 0 if not a strip support, 1 strip in U, 2 strip in V
    /// </summary>
    bool IsStripSupport(Macad::Occt::TopoDS_Face^ F, double tol);
    /// <summary>
    /// Checks if a Face lies on a Surface which is a strip
    /// So the Face is a strip. But a Face may be a strip elsewhere ..
    /// 
    /// A given value <tol> may be given to check max width
    /// By default, considers the tolerance zone of its edges
    /// Returns 0 if not a strip support, 1 strip in U, 2 strip in V
    /// </summary>
    bool IsStripSupport(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Checks if two edges define a strip, i.e. distance maxi below
    /// tolerance, given or some of those of E1 and E2
    /// </summary>
    bool CheckStripEdges(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol, double% dmax);
    /// <summary>
    /// Searches for two and only two edges up tolerance
    /// Returns True if OK, false if not 2 edges
    /// If True, returns the two edges and their maximum distance
    /// </summary>
    bool FindStripEdges(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol, double% dmax);
    /// <summary>
    /// Checks if a Face is a single strip, i.e. brings two great
    /// edges which are confused on their whole length, possible other
    /// edges are small or null length
    /// 
    /// Returns 0 if not a strip support, 1 strip in U, 2 strip in V
    /// Records diagnostic in info if it is a single strip
    /// </summary>
    bool CheckSingleStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol);
    /// <summary>
    /// Checks if a Face is a single strip, i.e. brings two great
    /// edges which are confused on their whole length, possible other
    /// edges are small or null length
    /// 
    /// Returns 0 if not a strip support, 1 strip in U, 2 strip in V
    /// Records diagnostic in info if it is a single strip
    /// </summary>
    bool CheckSingleStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
    /// <summary>
    /// Checks if a Face is as a Strip
    /// Returns 0 if not or non determined, 1 if in U, 2 if in V
    /// By default, considers the tolerance zone of its edges
    /// A given value <tol> may be given to check a strip of max this width
    /// 
    /// If a Face is determined as a Strip, it is delinited by two
    /// lists of edges. These lists are recorded in diagnostic
    /// Diagnostic "StripFace" brings data "Direction" (U or V),
    /// "List1" , "List2" (if they could be computed)
    /// </summary>
    bool CheckStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol);
    /// <summary>
    /// Checks if a Face is as a Strip
    /// Returns 0 if not or non determined, 1 if in U, 2 if in V
    /// By default, considers the tolerance zone of its edges
    /// A given value <tol> may be given to check a strip of max this width
    /// 
    /// If a Face is determined as a Strip, it is delinited by two
    /// lists of edges. These lists are recorded in diagnostic
    /// Diagnostic "StripFace" brings data "Direction" (U or V),
    /// "List1" , "List2" (if they could be computed)
    /// </summary>
    bool CheckStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
    /// <summary>
    /// Checks if a Face brings vertices which split it, either
    /// confused with non adjacent vertices, or confused with their
    /// projection on non adjacent edges
    /// Returns the count of found splitting vertices
    /// Each vertex then brings a diagnostic "SplittingVertex",
    /// with data : "Face" for the face, "Edge" for the split edge
    /// </summary>
    int CheckSplittingVertices(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapEdges, Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ MapParam, Macad::Occt::TopoDS_Compound^ theAllVert);
    /// <summary>
    /// Checks if a Face has a pin, which can be edited
    /// No singularity : no pin, returns 0
    /// If there is a pin, checked topics, with returned value :
    /// - 0 : nothing to do more
    /// - 1 : "smooth", i.e. not a really sharp pin
    /// -> diagnostic "SmoothPin"
    /// - 2 : stretched pin, i.e. is possible to relimit the face by
    /// another vertex, so that this vertex still gives a pin
    /// -> diagnostic "StretchedPin" with location of vertex (Pnt)
    /// </summary>
    bool CheckPin(Macad::Occt::TopoDS_Face^ F, int% whatrow, int% sence);
    /// <summary>
    /// Checks if a Face is twisted (apart from checking Pin, i.e. it
    /// does not give information on pin, only "it is twisted")
    /// </summary>
    bool CheckTwisted(Macad::Occt::TopoDS_Face^ F, double% paramu, double% paramv);
    bool CheckPinFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ mapEdges, double toler);
    bool CheckPinFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ mapEdges);
    bool CheckPinEdges(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge, double coef1, double coef2, double toler);
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Sets a fixed Tolerance to check small face
    /// By default, local tolerance zone is considered
    /// Sets a fixed MaxTolerance to check small face
    /// Sets a fixed Tolerance to check small face
    /// By default, local tolerance zone is considered
    /// Unset fixed tolerance, comes back to local tolerance zones
    /// Unset fixed tolerance, comes back to local tolerance zones
    /// </summary>
    void SetTolerance(double tol);
    /// <summary>
    /// Returns the tolerance to check small faces, negative value if
    /// local tolerances zones are to be considered
    /// </summary>
    double Tolerance();
    /* Method skipped due to unknown mapping: bool StatusSpot(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusStrip(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusPin(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusTwisted(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusSplitVert(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusPinFace(ShapeExtend_Status status, ) */
    /* Method skipped due to unknown mapping: bool StatusPinEdges(ShapeExtend_Status status, ) */
}; // class ShapeAnalysis_CheckSmallFace

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Curve
//---------------------------------------------------------------------
/// <summary>
/// Analyzing tool for 2d or 3d curve.
/// Computes parameters of projected point onto a curve.
/// </summary>
public ref class ShapeAnalysis_Curve sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_Curve>
{

#ifdef Include_ShapeAnalysis_Curve_h
public:
    Include_ShapeAnalysis_Curve_h
#endif

public:
    ShapeAnalysis_Curve(::ShapeAnalysis_Curve* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_Curve>( nativeInstance, true )
    {}

    ShapeAnalysis_Curve(::ShapeAnalysis_Curve& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_Curve>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_Curve* NativeInstance
    {
        ::ShapeAnalysis_Curve* get()
        {
            return static_cast<::ShapeAnalysis_Curve*>(_NativeInstance);
        }
    }

public:
    ShapeAnalysis_Curve();
    /// <summary>
    /// Projects a Point on a Curve.
    /// Computes the projected point and its parameter on the curve.
    /// <preci> is used as 3d precision (hence, 0 will produce
    /// reject unless exact confusion).
    /// The number of iterations is limited.
    /// If AdjustToEnds is True, point will be adjusted to the end
    /// of the curve if distance is less than <preci>
    /// 
    /// Returned value is the distance between the given point and
    /// computed one.
    /// </summary>
    double Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, bool AdjustToEnds);
    /// <summary>
    /// Projects a Point on a Curve.
    /// Computes the projected point and its parameter on the curve.
    /// <preci> is used as 3d precision (hence, 0 will produce
    /// reject unless exact confusion).
    /// The number of iterations is limited.
    /// If AdjustToEnds is True, point will be adjusted to the end
    /// of the curve if distance is less than <preci>
    /// 
    /// Returned value is the distance between the given point and
    /// computed one.
    /// </summary>
    double Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param);
    /// <summary>
    /// Projects a Point on a Curve.
    /// Computes the projected point and its parameter on the curve.
    /// <preci> is used as 3d precision (hence, 0 will produce
    /// reject unless exact confusion).
    /// The number of iterations is limited.
    /// 
    /// Returned value is the distance between the given point and
    /// computed one.
    /// </summary>
    double Project(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, bool AdjustToEnds);
    /// <summary>
    /// Projects a Point on a Curve.
    /// Computes the projected point and its parameter on the curve.
    /// <preci> is used as 3d precision (hence, 0 will produce
    /// reject unless exact confusion).
    /// The number of iterations is limited.
    /// 
    /// Returned value is the distance between the given point and
    /// computed one.
    /// </summary>
    double Project(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param);
    /// <summary>
    /// Projects a Point on a Curve, but parameters are limited
    /// between <cf> and <cl>.
    /// The range [cf, cl] is extended with help of Adaptor3d on the
    /// basis of 3d precision <preci>.
    /// If AdjustToEnds is True, point will be adjusted to the end
    /// of the curve if distance is less than <preci>
    /// </summary>
    double Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl, bool AdjustToEnds);
    /// <summary>
    /// Projects a Point on a Curve, but parameters are limited
    /// between <cf> and <cl>.
    /// The range [cf, cl] is extended with help of Adaptor3d on the
    /// basis of 3d precision <preci>.
    /// If AdjustToEnds is True, point will be adjusted to the end
    /// of the curve if distance is less than <preci>
    /// </summary>
    double Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl);
    double ProjectAct(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param);
    /// <summary>
    /// Projects a Point on a Curve using Newton method.
    /// <paramPrev> is taken as the first approximation of solution.
    /// If Newton algorithm fails the method Project() is used.
    /// If AdjustToEnds is True, point will be adjusted to the end
    /// of the curve if distance is less than <preci>
    /// </summary>
    double NextProject(double paramPrev, Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl, bool AdjustToEnds);
    /// <summary>
    /// Projects a Point on a Curve using Newton method.
    /// <paramPrev> is taken as the first approximation of solution.
    /// If Newton algorithm fails the method Project() is used.
    /// If AdjustToEnds is True, point will be adjusted to the end
    /// of the curve if distance is less than <preci>
    /// </summary>
    double NextProject(double paramPrev, Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl);
    /// <summary>
    /// Projects a Point on a Curve using Newton method.
    /// <paramPrev> is taken as the first approximation of solution.
    /// If Newton algorithm fails the method Project() is used.
    /// </summary>
    double NextProject(double paramPrev, Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param);
    /// <summary>
    /// Validate parameters First and Last for the given curve
    /// in order to make them valid for creation of edge.
    /// This includes:
    /// - limiting range [First,Last] by range of curve
    /// - adjusting range [First,Last] for periodic (or closed)
    /// curve if Last < First
    /// Returns True if parameters are OK or are successfully
    /// corrected, or False if parameters cannot be corrected.
    /// In the latter case, parameters are reset to range of curve.
    /// </summary>
    bool ValidateRange(Macad::Occt::Geom_Curve^ Crv, double% First, double% Last, double prec);
    /// <summary>
    /// Computes a boundary box on segment of curve C2d from First
    /// to Last. This is done by taking NPoints points from the
    /// curve and, if Exact is True, by searching for exact
    /// extrema. All these points are added to Box.
    /// </summary>
    void FillBndBox(Macad::Occt::Geom2d_Curve^ C2d, double First, double Last, int NPoints, bool Exact, Macad::Occt::Bnd_Box2d^ Box);
    /// <summary>
    /// Defines which pcurve (C1 or C2) should be chosen for FORWARD
    /// seam edge.
    /// </summary>
    int SelectForwardSeam(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2);
    /// <summary>
    /// Checks if points are planar with given preci. If Normal has not zero
    /// modulus, checks with given normal
    /// </summary>
    static bool IsPlanar(Macad::Occt::TColgp_Array1OfPnt^ pnts, Macad::Occt::XYZ% Normal, double preci);
    /// <summary>
    /// Checks if points are planar with given preci. If Normal has not zero
    /// modulus, checks with given normal
    /// </summary>
    static bool IsPlanar(Macad::Occt::TColgp_Array1OfPnt^ pnts, Macad::Occt::XYZ% Normal);
    /// <summary>
    /// Checks if curve is planar with given preci. If Normal has not zero
    /// modulus, checks with given normal
    /// </summary>
    static bool IsPlanar(Macad::Occt::Geom_Curve^ curve, Macad::Occt::XYZ% Normal, double preci);
    /// <summary>
    /// Checks if curve is planar with given preci. If Normal has not zero
    /// modulus, checks with given normal
    /// </summary>
    static bool IsPlanar(Macad::Occt::Geom_Curve^ curve, Macad::Occt::XYZ% Normal);
    /// <summary>
    /// Returns sample points which will serve as linearisation
    /// of the2d curve in range (first, last)
    /// The distribution of sample points is consystent with
    /// what is used by BRepTopAdaptor_FClass2d
    /// </summary>
    static bool GetSamplePoints(Macad::Occt::Geom2d_Curve^ curve, double first, double last, Macad::Occt::TColgp_SequenceOfPnt2d^ seq);
    /// <summary>
    /// Returns sample points which will serve as linearisation
    /// of the curve in range (first, last)
    /// </summary>
    static bool GetSamplePoints(Macad::Occt::Geom_Curve^ curve, double first, double last, Macad::Occt::TColgp_SequenceOfPnt^ seq);
    /// <summary>
    /// Tells if the Curve is closed with given precision.
    /// If <preci> < 0 then Precision::Confusion is used.
    /// </summary>
    static bool IsClosed(Macad::Occt::Geom_Curve^ curve, double preci);
    /// <summary>
    /// Tells if the Curve is closed with given precision.
    /// If <preci> < 0 then Precision::Confusion is used.
    /// </summary>
    static bool IsClosed(Macad::Occt::Geom_Curve^ curve);
    /// <summary>
    /// This method was implemented as fix for changes in trimmed curve
    /// behaviour. For the moment trimmed curve returns false anyway.
    /// So it is necessary to adapt all Data exchange tools for this behaviour.
    /// Current implementation takes into account that curve may be offset.
    /// </summary>
    static bool IsPeriodic(Macad::Occt::Geom_Curve^ curve);
    /// <summary>
    /// The same as for Curve3d.
    /// </summary>
    static bool IsPeriodic(Macad::Occt::Geom2d_Curve^ curve);
}; // class ShapeAnalysis_Curve

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Edge
//---------------------------------------------------------------------
/// <summary>
/// Tool for analyzing the edge.
/// Queries geometrical representations of the edge (3d curve, pcurve
/// on the given face or surface) and topological sub-shapes (bounding
/// vertices).
/// Provides methods for analyzing geometry and topology consistency
/// (3d and pcurve(s) consistency, their adjacency to the vertices).
/// </summary>
public ref class ShapeAnalysis_Edge sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_Edge>
{

#ifdef Include_ShapeAnalysis_Edge_h
public:
    Include_ShapeAnalysis_Edge_h
#endif

public:
    ShapeAnalysis_Edge(::ShapeAnalysis_Edge* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_Edge>( nativeInstance, true )
    {}

    ShapeAnalysis_Edge(::ShapeAnalysis_Edge& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_Edge>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_Edge* NativeInstance
    {
        ::ShapeAnalysis_Edge* get()
        {
            return static_cast<::ShapeAnalysis_Edge*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor; initialises Status to OK
    /// </summary>
    ShapeAnalysis_Edge();
    /// <summary>
    /// Tells if the edge has a 3d curve
    /// </summary>
    bool HasCurve3d(Macad::Occt::TopoDS_Edge^ edge);
    /// <summary>
    /// Returns the 3d curve and bounding parameters for the edge
    /// Returns False if no 3d curve.
    /// If <orient> is True (default), takes orientation into account:
    /// if the edge is reversed, cf and cl are toggled
    /// </summary>
    bool Curve3d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ C3d, double% cf, double% cl, bool orient);
    /// <summary>
    /// Returns the 3d curve and bounding parameters for the edge
    /// Returns False if no 3d curve.
    /// If <orient> is True (default), takes orientation into account:
    /// if the edge is reversed, cf and cl are toggled
    /// </summary>
    bool Curve3d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ C3d, double% cf, double% cl);
    /// <summary>
    /// Gives True if the edge has a 3d curve, this curve is closed,
    /// and the edge has the same vertex at start and end
    /// </summary>
    bool IsClosed3d(Macad::Occt::TopoDS_Edge^ edge);
    /// <summary>
    /// Tells if the Edge has a pcurve on the face.
    /// </summary>
    bool HasPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Tells if the edge has a pcurve on the surface (with location).
    /// </summary>
    bool HasPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
    bool PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl, bool orient);
    bool PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl);
    /// <summary>
    /// Returns the pcurve and bounding parameters for the edge
    /// lying on the surface.
    /// Returns False if the edge has no pcurve on this surface.
    /// If <orient> is True (default), takes orientation into account:
    /// if the edge is reversed, cf and cl are toggled
    /// </summary>
    bool PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl, bool orient);
    /// <summary>
    /// Returns the pcurve and bounding parameters for the edge
    /// lying on the surface.
    /// Returns False if the edge has no pcurve on this surface.
    /// If <orient> is True (default), takes orientation into account:
    /// if the edge is reversed, cf and cl are toggled
    /// </summary>
    bool PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl);
    bool BoundUV(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Pnt2d% first, Macad::Occt::Pnt2d% last);
    /// <summary>
    /// Returns the ends of pcurve
    /// Calls method PCurve with <orient> equal to True
    /// </summary>
    bool BoundUV(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Pnt2d% first, Macad::Occt::Pnt2d% last);
    bool IsSeam(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Returns True if the edge has two pcurves on one surface
    /// </summary>
    bool IsSeam(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
    /// <summary>
    /// Returns start vertex of the edge (taking edge orientation
    /// into account).
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ FirstVertex(Macad::Occt::TopoDS_Edge^ edge);
    /// <summary>
    /// Returns end vertex of the edge (taking edge orientation
    /// into account).
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ LastVertex(Macad::Occt::TopoDS_Edge^ edge);
    bool GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang, double dparam);
    bool GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang);
    /// <summary>
    /// Returns tangent of the edge pcurve at its start (if atEnd is
    /// False) or end (if True), regarding the orientation of edge.
    /// If edge is REVERSED, tangent is reversed before return.
    /// Returns True if pcurve is available and tangent is computed
    /// and is not null, else False.
    /// </summary>
    bool GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang, double dparam);
    /// <summary>
    /// Returns tangent of the edge pcurve at its start (if atEnd is
    /// False) or end (if True), regarding the orientation of edge.
    /// If edge is REVERSED, tangent is reversed before return.
    /// Returns True if pcurve is available and tangent is computed
    /// and is not null, else False.
    /// </summary>
    bool GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang);
    /// <summary>
    /// Checks the start and/or end vertex of the edge for matching
    /// with 3d curve with the given precision.
    /// <vtx> = 1 : start vertex only
    /// <vtx> = 2 : end vertex only
    /// <vtx> = 0 : both (default)
    /// If preci < 0 the vertices are considered with their own
    /// tolerances, else with the given <preci>.
    /// </summary>
    bool CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge, double preci, int vtx);
    /// <summary>
    /// Checks the start and/or end vertex of the edge for matching
    /// with 3d curve with the given precision.
    /// <vtx> = 1 : start vertex only
    /// <vtx> = 2 : end vertex only
    /// <vtx> = 0 : both (default)
    /// If preci < 0 the vertices are considered with their own
    /// tolerances, else with the given <preci>.
    /// </summary>
    bool CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge, double preci);
    /// <summary>
    /// Checks the start and/or end vertex of the edge for matching
    /// with 3d curve with the given precision.
    /// <vtx> = 1 : start vertex only
    /// <vtx> = 2 : end vertex only
    /// <vtx> = 0 : both (default)
    /// If preci < 0 the vertices are considered with their own
    /// tolerances, else with the given <preci>.
    /// </summary>
    bool CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge);
    bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double preci, int vtx);
    bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double preci);
    bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Checks the start and/or end vertex of the edge for matching
    /// with pcurve with the given precision.
    /// <vtx> = 1 : start vertex
    /// <vtx> = 2 : end vertex
    /// <vtx> = 0 : both
    /// If preci < 0 the vertices are considered with their own
    /// tolerances, else with the given <preci>.
    /// </summary>
    bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, double preci, int vtx);
    /// <summary>
    /// Checks the start and/or end vertex of the edge for matching
    /// with pcurve with the given precision.
    /// <vtx> = 1 : start vertex
    /// <vtx> = 2 : end vertex
    /// <vtx> = 0 : both
    /// If preci < 0 the vertices are considered with their own
    /// tolerances, else with the given <preci>.
    /// </summary>
    bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, double preci);
    /// <summary>
    /// Checks the start and/or end vertex of the edge for matching
    /// with pcurve with the given precision.
    /// <vtx> = 1 : start vertex
    /// <vtx> = 2 : end vertex
    /// <vtx> = 0 : both
    /// If preci < 0 the vertices are considered with their own
    /// tolerances, else with the given <preci>.
    /// </summary>
    bool CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
    bool CheckVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double% toler1, double% toler2);
    /// <summary>
    /// Checks if it is necessary to increase tolerances of the edge
    /// vertices to comprise the ends of 3d curve and pcurve on
    /// the given face (first method) or all pcurves stored in an edge
    /// (second one)
    /// toler1 returns necessary tolerance for first vertex,
    /// toler2 returns necessary tolerance for last vertex.
    /// </summary>
    bool CheckVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, double% toler1, double% toler2);
    bool CheckCurve3dWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Checks mutual orientation of 3d curve and pcurve on the
    /// analysis of curves bounding points
    /// </summary>
    bool CheckCurve3dWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
    /* Method skipped due to unknown mapping: bool Status(ShapeExtend_Status status, ) */
    /// <summary>
    /// Checks the edge to be SameParameter.
    /// Calculates the maximal deviation between 3d curve and each
    /// pcurve of the edge on <NbControl> equidistant points (the same
    /// algorithm as in BRepCheck; default value is 23 as in BRepCheck).
    /// This deviation is returned in <maxdev> parameter.
    /// If deviation is greater than tolerance of the edge (i.e.
    /// incorrect flag) returns False, else returns True.
    /// </summary>
    bool CheckSameParameter(Macad::Occt::TopoDS_Edge^ edge, double% maxdev, int NbControl);
    /// <summary>
    /// Checks the edge to be SameParameter.
    /// Calculates the maximal deviation between 3d curve and each
    /// pcurve of the edge on <NbControl> equidistant points (the same
    /// algorithm as in BRepCheck; default value is 23 as in BRepCheck).
    /// This deviation is returned in <maxdev> parameter.
    /// If deviation is greater than tolerance of the edge (i.e.
    /// incorrect flag) returns False, else returns True.
    /// </summary>
    bool CheckSameParameter(Macad::Occt::TopoDS_Edge^ edge, double% maxdev);
    /// <summary>
    /// Checks the edge to be SameParameter.
    /// Calculates the maximal deviation between 3d curve and each
    /// pcurve of the edge on <NbControl> equidistant points (the same
    /// algorithm as in BRepCheck; default value is 23 as in BRepCheck).
    /// This deviation is returned in <maxdev> parameter.
    /// If deviation is greater than tolerance of the edge (i.e.
    /// incorrect flag) returns False, else returns True.
    /// </summary>
    bool CheckSameParameter(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, double% theMaxdev, int theNbControl);
    /// <summary>
    /// Checks the edge to be SameParameter.
    /// Calculates the maximal deviation between 3d curve and each
    /// pcurve of the edge on <NbControl> equidistant points (the same
    /// algorithm as in BRepCheck; default value is 23 as in BRepCheck).
    /// This deviation is returned in <maxdev> parameter.
    /// If deviation is greater than tolerance of the edge (i.e.
    /// incorrect flag) returns False, else returns True.
    /// </summary>
    bool CheckSameParameter(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, double% theMaxdev);
    /// <summary>
    /// Checks possibility for pcurve thePC to have range [theFirst, theLast] (edge range)
    /// having respect to real first, last parameters of thePC
    /// </summary>
    bool CheckPCurveRange(double theFirst, double theLast, Macad::Occt::Geom2d_Curve^ thePC);
    /// <summary>
    /// Checks the first edge is overlapped with second edge.
    /// If distance between two edges is less then theTolOverlap
    /// edges are overlapped.
    /// theDomainDis - length of part of edges on which edges are overlapped.
    /// </summary>
    bool CheckOverlapping(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double% theTolOverlap, double theDomainDist);
    /// <summary>
    /// Checks the first edge is overlapped with second edge.
    /// If distance between two edges is less then theTolOverlap
    /// edges are overlapped.
    /// theDomainDis - length of part of edges on which edges are overlapped.
    /// </summary>
    bool CheckOverlapping(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double% theTolOverlap);
}; // class ShapeAnalysis_Edge

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBoundData
//---------------------------------------------------------------------
/// <summary>
/// This class is intended to represent free bound and to store
/// its properties.
/// 
/// This class is used by ShapeAnalysis_FreeBoundsProperties
/// class when storing each free bound and its properties.
/// 
/// The properties stored in this class are the following:
/// - area of the contour,
/// - perimeter of the contour,
/// - ratio of average length to average width of the contour,
/// - average width of contour,
/// - notches (narrow 'V'-like sub-contours) on the contour and
/// their maximum width.
/// 
/// This class provides methods for setting and getting fields
/// only.
/// </summary>
public ref class ShapeAnalysis_FreeBoundData sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_FreeBoundData_h
public:
    Include_ShapeAnalysis_FreeBoundData_h
#endif

public:
    ShapeAnalysis_FreeBoundData(::ShapeAnalysis_FreeBoundData* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeAnalysis_FreeBoundData(::ShapeAnalysis_FreeBoundData& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeAnalysis_FreeBoundData* NativeInstance
    {
        ::ShapeAnalysis_FreeBoundData* get()
        {
            return static_cast<::ShapeAnalysis_FreeBoundData*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_FreeBoundData();
    /// <summary>
    /// Creates object with contour given in the form of TopoDS_Wire
    /// </summary>
    ShapeAnalysis_FreeBoundData(Macad::Occt::TopoDS_Wire^ freebound);
    /// <summary>
    /// Clears all properties of the contour.
    /// Contour bound itself is not cleared.
    /// </summary>
    void Clear();
    /// <summary>
    /// Sets contour
    /// </summary>
    void SetFreeBound(Macad::Occt::TopoDS_Wire^ freebound);
    /// <summary>
    /// Sets area of the contour
    /// </summary>
    void SetArea(double area);
    /// <summary>
    /// Sets perimeter of the contour
    /// </summary>
    void SetPerimeter(double perimeter);
    /// <summary>
    /// Sets ratio of average length to average width of the contour
    /// </summary>
    void SetRatio(double ratio);
    /// <summary>
    /// Sets average width of the contour
    /// </summary>
    void SetWidth(double width);
    /// <summary>
    /// Adds notch on the contour with its maximum width
    /// </summary>
    void AddNotch(Macad::Occt::TopoDS_Wire^ notch, double width);
    /// <summary>
    /// Returns contour
    /// </summary>
    Macad::Occt::TopoDS_Wire^ FreeBound();
    /// <summary>
    /// Returns area of the contour
    /// </summary>
    double Area();
    /// <summary>
    /// Returns perimeter of the contour
    /// </summary>
    double Perimeter();
    /// <summary>
    /// Returns ratio of average length to average width of the contour
    /// </summary>
    double Ratio();
    /// <summary>
    /// Returns average width of the contour
    /// </summary>
    double Width();
    /// <summary>
    /// Returns number of notches on the contour
    /// </summary>
    int NbNotches();
    /// <summary>
    /// Returns sequence of notches on the contour
    /// </summary>
    Macad::Occt::TopTools_HSequenceOfShape^ Notches();
    /// <summary>
    /// Returns notch on the contour
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Notch(int index);
    /// <summary>
    /// Returns maximum width of notch specified by its rank number
    /// on the contour
    /// </summary>
    double NotchWidth(int index);
    /// <summary>
    /// Returns maximum width of notch specified as TopoDS_Wire
    /// on the contour
    /// </summary>
    double NotchWidth(Macad::Occt::TopoDS_Wire^ notch);
    static Macad::Occt::ShapeAnalysis_FreeBoundData^ CreateDowncasted(::ShapeAnalysis_FreeBoundData* instance);
}; // class ShapeAnalysis_FreeBoundData

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBounds
//---------------------------------------------------------------------
/// <summary>
/// This class is intended to output free bounds of the shape.
/// 
/// Free bounds are the wires consisting of edges referenced by the faces of the shape
/// only once; these are the edges composing the outer boundary of the face or shell
/// (as opposed to internal edges between the faces in the shell or seam edges on closed faces).
/// 
/// This class works on two distinct types of shapes when analyzing
/// their free bounds:
/// 1. compound of faces.
/// Analyzer of sewing algorithm (BRepAlgo_Sewing) is used for
/// for forecasting free bounds that would be obtained after
/// performing sewing
/// 2. compound of shells.
/// Actual free bounds (edges shared by the only face in the shell)
/// are output in this case. ShapeAnalysis_Shell is used for that.
/// 
/// When connecting edges into the wires algorithm tries to build
/// wires of maximum length. Two options are provided for a user
/// to extract closed sub-contours out of closed and/or open contours.
/// 
/// Free bounds are returned as two compounds, one for closed and one
/// for open wires.
/// 
/// This class also provides some static methods for advanced use:
/// connecting edges/wires to wires, extracting closed sub-wires out
/// of wires, dispatching wires into compounds for closed and open
/// wires.
/// NOTE. Ends of the edge or wire mean hereafter their end vertices.
/// </summary>
public ref class ShapeAnalysis_FreeBounds sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>
{

#ifdef Include_ShapeAnalysis_FreeBounds_h
public:
    Include_ShapeAnalysis_FreeBounds_h
#endif

public:
    ShapeAnalysis_FreeBounds(::ShapeAnalysis_FreeBounds* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>( nativeInstance, true )
    {}

    ShapeAnalysis_FreeBounds(::ShapeAnalysis_FreeBounds& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_FreeBounds* NativeInstance
    {
        ::ShapeAnalysis_FreeBounds* get()
        {
            return static_cast<::ShapeAnalysis_FreeBounds*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_FreeBounds();
    /// <summary>
    /// Builds forecasting free bounds of the <shape>.
    /// <shape> should be a compound of faces.
    /// This constructor is to be used for forecasting free edges
    /// with help of sewing analyzer BRepAlgo_Sewing which is called
    /// with tolerance <toler>.
    /// Free edges are connected into wires only when their ends are
    /// at distance less than <toler>.
    /// If <splitclosed> is True extracts closed sub-wires out of
    /// built closed wires.
    /// If <splitopen> is True extracts closed sub-wires out of
    /// built open wires.
    /// </summary>
    ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler, bool splitclosed, bool splitopen);
    /// <summary>
    /// Builds forecasting free bounds of the <shape>.
    /// <shape> should be a compound of faces.
    /// This constructor is to be used for forecasting free edges
    /// with help of sewing analyzer BRepAlgo_Sewing which is called
    /// with tolerance <toler>.
    /// Free edges are connected into wires only when their ends are
    /// at distance less than <toler>.
    /// If <splitclosed> is True extracts closed sub-wires out of
    /// built closed wires.
    /// If <splitopen> is True extracts closed sub-wires out of
    /// built open wires.
    /// </summary>
    ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler, bool splitclosed);
    /// <summary>
    /// Builds forecasting free bounds of the <shape>.
    /// <shape> should be a compound of faces.
    /// This constructor is to be used for forecasting free edges
    /// with help of sewing analyzer BRepAlgo_Sewing which is called
    /// with tolerance <toler>.
    /// Free edges are connected into wires only when their ends are
    /// at distance less than <toler>.
    /// If <splitclosed> is True extracts closed sub-wires out of
    /// built closed wires.
    /// If <splitopen> is True extracts closed sub-wires out of
    /// built open wires.
    /// </summary>
    ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler);
    /// <summary>
    /// Builds actual free bounds of the <shape>.
    /// <shape> should be a compound of shells.
    /// This constructor is to be used for getting free edges (ones
    /// referenced by the only face) with help of analyzer
    /// ShapeAnalysis_Shell.
    /// Free edges are connected into wires only when they share the
    /// same vertex.
    /// If <splitclosed> is True extracts closed sub-wires out of
    /// built closed wires.
    /// If <splitopen> is True extracts closed sub-wires out of
    /// built open wires.
    /// </summary>
    ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen, bool checkinternaledges);
    /// <summary>
    /// Builds actual free bounds of the <shape>.
    /// <shape> should be a compound of shells.
    /// This constructor is to be used for getting free edges (ones
    /// referenced by the only face) with help of analyzer
    /// ShapeAnalysis_Shell.
    /// Free edges are connected into wires only when they share the
    /// same vertex.
    /// If <splitclosed> is True extracts closed sub-wires out of
    /// built closed wires.
    /// If <splitopen> is True extracts closed sub-wires out of
    /// built open wires.
    /// </summary>
    ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen);
    /// <summary>
    /// Builds actual free bounds of the <shape>.
    /// <shape> should be a compound of shells.
    /// This constructor is to be used for getting free edges (ones
    /// referenced by the only face) with help of analyzer
    /// ShapeAnalysis_Shell.
    /// Free edges are connected into wires only when they share the
    /// same vertex.
    /// If <splitclosed> is True extracts closed sub-wires out of
    /// built closed wires.
    /// If <splitopen> is True extracts closed sub-wires out of
    /// built open wires.
    /// </summary>
    ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed);
    /// <summary>
    /// Builds actual free bounds of the <shape>.
    /// <shape> should be a compound of shells.
    /// This constructor is to be used for getting free edges (ones
    /// referenced by the only face) with help of analyzer
    /// ShapeAnalysis_Shell.
    /// Free edges are connected into wires only when they share the
    /// same vertex.
    /// If <splitclosed> is True extracts closed sub-wires out of
    /// built closed wires.
    /// If <splitopen> is True extracts closed sub-wires out of
    /// built open wires.
    /// </summary>
    ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Returns compound of closed wires out of free edges.
    /// </summary>
    Macad::Occt::TopoDS_Compound^ GetClosedWires();
    /// <summary>
    /// Returns compound of open wires out of free edges.
    /// </summary>
    Macad::Occt::TopoDS_Compound^ GetOpenWires();
    /// <summary>
    /// Builds sequence of <wires> out of sequence of not sorted
    /// <edges>.
    /// Tries to build wires of maximum length. Building a wire is
    /// stopped when no edges can be connected to it at its head or
    /// at its tail.
    /// 
    /// Orientation of the edge can change when connecting.
    /// If <shared> is True connection is performed only when
    /// adjacent edges share the same vertex.
    /// If <shared> is False connection is performed only when
    /// ends of adjacent edges are at distance less than <toler>.
    /// </summary>
    static void ConnectEdgesToWires(Macad::Occt::TopTools_HSequenceOfShape^ edges, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ wires);
    static void ConnectWiresToWires(Macad::Occt::TopTools_HSequenceOfShape^ iwires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ owires);
    /// <summary>
    /// Builds sequence of <owires> out of sequence of not sorted
    /// <iwires>.
    /// Tries to build wires of maximum length. Building a wire is
    /// stopped when no wires can be connected to it at its head or
    /// at its tail.
    /// 
    /// Orientation of the wire can change when connecting.
    /// If <shared> is True connection is performed only when
    /// adjacent wires share the same vertex.
    /// If <shared> is False connection is performed only when
    /// ends of adjacent wires are at distance less than <toler>.
    /// Map <vertices> stores the correspondence between original
    /// end vertices of the wires and new connecting vertices.
    /// </summary>
    static void ConnectWiresToWires(Macad::Occt::TopTools_HSequenceOfShape^ iwires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ owires, Macad::Occt::TopTools_DataMapOfShapeShape^ vertices);
    /// <summary>
    /// Extracts closed sub-wires out of <wires> and adds them
    /// to <closed>, open wires remained after extraction are put
    /// into <open>.
    /// If <shared> is True extraction is performed only when
    /// edges share the same vertex.
    /// If <shared> is False connection is performed only when
    /// ends of the edges are at distance less than <toler>.
    /// </summary>
    static void SplitWires(Macad::Occt::TopTools_HSequenceOfShape^ wires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ closed, Macad::Occt::TopTools_HSequenceOfShape^ open);
    /// <summary>
    /// Dispatches sequence of <wires> into two compounds
    /// <closed> for closed wires and <open> for open wires.
    /// If a compound is not empty wires are added into it.
    /// </summary>
    static void DispatchWires(Macad::Occt::TopTools_HSequenceOfShape^ wires, Macad::Occt::TopoDS_Compound^ closed, Macad::Occt::TopoDS_Compound^ open);
}; // class ShapeAnalysis_FreeBounds

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_HSequenceOfFreeBounds
//---------------------------------------------------------------------
public ref class ShapeAnalysis_HSequenceOfFreeBounds sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::ShapeAnalysis_FreeBoundData^>
{

#ifdef Include_ShapeAnalysis_HSequenceOfFreeBounds_h
public:
    Include_ShapeAnalysis_HSequenceOfFreeBounds_h
#endif

public:
    ShapeAnalysis_HSequenceOfFreeBounds(::ShapeAnalysis_HSequenceOfFreeBounds* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeAnalysis_HSequenceOfFreeBounds(::ShapeAnalysis_HSequenceOfFreeBounds& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeAnalysis_HSequenceOfFreeBounds* NativeInstance
    {
        ::ShapeAnalysis_HSequenceOfFreeBounds* get()
        {
            return static_cast<::ShapeAnalysis_HSequenceOfFreeBounds*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::ShapeAnalysis_HSequenceOfFreeBounds::Iterator>
    {

#ifdef Include_ShapeAnalysis_HSequenceOfFreeBounds_Iterator_h
    public:
        Include_ShapeAnalysis_HSequenceOfFreeBounds_Iterator_h
#endif

    public:
        Iterator(::ShapeAnalysis_HSequenceOfFreeBounds::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::ShapeAnalysis_HSequenceOfFreeBounds::Iterator>( nativeInstance, true )
        {}

        Iterator(::ShapeAnalysis_HSequenceOfFreeBounds::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::ShapeAnalysis_HSequenceOfFreeBounds::Iterator>( &nativeInstance, false )
        {}

        property ::ShapeAnalysis_HSequenceOfFreeBounds::Iterator* NativeInstance
        {
            ::ShapeAnalysis_HSequenceOfFreeBounds::Iterator* get()
            {
                return static_cast<::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::ShapeAnalysis_FreeBoundData^ Value();
        Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeValue();
        bool IsEqual(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    ShapeAnalysis_HSequenceOfFreeBounds();
    ShapeAnalysis_HSequenceOfFreeBounds(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther);
    Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Sequence();
    void Append(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    void Append(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSequence);
    Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ ChangeSequence();
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
    Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ Assign(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ theOther);
    void Remove(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator^ thePosition);
    void Prepend(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    void InsertAfter(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator^ thePosition, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    void Split(int theIndex, Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ theSeq);
    Macad::Occt::ShapeAnalysis_FreeBoundData^ First();
    Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeFirst();
    Macad::Occt::ShapeAnalysis_FreeBoundData^ Last();
    Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeLast();
    virtual Macad::Occt::ShapeAnalysis_FreeBoundData^ Value(int theIndex);
    Macad::Occt::ShapeAnalysis_FreeBoundData^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem);
    static Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ CreateDowncasted(::ShapeAnalysis_HSequenceOfFreeBounds* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::ShapeAnalysis_FreeBoundData^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class ShapeAnalysis_HSequenceOfFreeBounds

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBoundsProperties
//---------------------------------------------------------------------
/// <summary>
/// This class is intended to calculate shape free bounds
/// properties.
/// This class provides the following functionalities:
/// - calculates area of the contour,
/// - calculates perimeter of the contour,
/// - calculates ratio of average length to average width of the
/// contour,
/// - estimates average width of contour,
/// - finds the notches (narrow 'V'-like sub-contour) on the
/// contour.
/// 
/// For getting free bounds this class uses
/// ShapeAnalysis_FreeBounds class.
/// 
/// For description of parameters used for initializing this
/// class refer to CDL of ShapeAnalysis_FreeBounds.
/// 
/// Properties of each contour are stored in the data structure
/// ShapeAnalysis_FreeBoundData.
/// </summary>
public ref class ShapeAnalysis_FreeBoundsProperties sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>
{

#ifdef Include_ShapeAnalysis_FreeBoundsProperties_h
public:
    Include_ShapeAnalysis_FreeBoundsProperties_h
#endif

public:
    ShapeAnalysis_FreeBoundsProperties(::ShapeAnalysis_FreeBoundsProperties* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>( nativeInstance, true )
    {}

    ShapeAnalysis_FreeBoundsProperties(::ShapeAnalysis_FreeBoundsProperties& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_FreeBoundsProperties* NativeInstance
    {
        ::ShapeAnalysis_FreeBoundsProperties* get()
        {
            return static_cast<::ShapeAnalysis_FreeBoundsProperties*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_FreeBoundsProperties();
    /// <summary>
    /// Creates the object and calls corresponding Init.
    /// <shape> should be a compound of faces.
    /// </summary>
    ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed, bool splitopen);
    /// <summary>
    /// Creates the object and calls corresponding Init.
    /// <shape> should be a compound of faces.
    /// </summary>
    ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed);
    /// <summary>
    /// Creates the object and calls corresponding Init.
    /// <shape> should be a compound of faces.
    /// </summary>
    ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance);
    /// <summary>
    /// Creates the object and calls corresponding Init.
    /// <shape> should be a compound of shells.
    /// </summary>
    ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen);
    /// <summary>
    /// Creates the object and calls corresponding Init.
    /// <shape> should be a compound of shells.
    /// </summary>
    ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed);
    /// <summary>
    /// Creates the object and calls corresponding Init.
    /// <shape> should be a compound of shells.
    /// </summary>
    ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Initializes the object with given parameters.
    /// <shape> should be a compound of faces.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed, bool splitopen);
    /// <summary>
    /// Initializes the object with given parameters.
    /// <shape> should be a compound of faces.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed);
    /// <summary>
    /// Initializes the object with given parameters.
    /// <shape> should be a compound of faces.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance);
    /// <summary>
    /// Initializes the object with given parameters.
    /// <shape> should be a compound of shells.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen);
    /// <summary>
    /// Initializes the object with given parameters.
    /// <shape> should be a compound of shells.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed);
    /// <summary>
    /// Initializes the object with given parameters.
    /// <shape> should be a compound of shells.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Builds and analyzes free bounds of the shape.
    /// First calls ShapeAnalysis_FreeBounds for building free
    /// bounds.
    /// Then on each free bound computes its properties:
    /// - area of the contour,
    /// - perimeter of the contour,
    /// - ratio of average length to average width of the contour,
    /// - average width of contour,
    /// - notches on the contour and for each notch
    /// - maximum width of the notch.
    /// </summary>
    bool Perform();
    /// <summary>
    /// Returns True if shape is loaded
    /// </summary>
    bool IsLoaded();
    /// <summary>
    /// Returns shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Returns tolerance
    /// </summary>
    double Tolerance();
    /// <summary>
    /// Returns number of free bounds
    /// </summary>
    int NbFreeBounds();
    /// <summary>
    /// Returns number of closed free bounds
    /// </summary>
    int NbClosedFreeBounds();
    /// <summary>
    /// Returns number of open free bounds
    /// </summary>
    int NbOpenFreeBounds();
    /// <summary>
    /// Returns all closed free bounds
    /// </summary>
    Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ ClosedFreeBounds();
    /// <summary>
    /// Returns all open free bounds
    /// </summary>
    Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ OpenFreeBounds();
    /// <summary>
    /// Returns properties of closed free bound specified by its rank
    /// number
    /// </summary>
    Macad::Occt::ShapeAnalysis_FreeBoundData^ ClosedFreeBound(int index);
    /// <summary>
    /// Returns properties of open free bound specified by its rank
    /// number
    /// </summary>
    Macad::Occt::ShapeAnalysis_FreeBoundData^ OpenFreeBound(int index);
    bool DispatchBounds();
    bool CheckContours(double prec);
    bool CheckContours();
    bool CheckNotches(double prec);
    bool CheckNotches();
    bool CheckNotches(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData, double prec);
    bool CheckNotches(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData);
    bool CheckNotches(Macad::Occt::TopoDS_Wire^ freebound, int num, Macad::Occt::TopoDS_Wire^ notch, double% distMax, double prec);
    bool CheckNotches(Macad::Occt::TopoDS_Wire^ freebound, int num, Macad::Occt::TopoDS_Wire^ notch, double% distMax);
    bool FillProperties(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData, double prec);
    bool FillProperties(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData);
}; // class ShapeAnalysis_FreeBoundsProperties

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Geom
//---------------------------------------------------------------------
/// <summary>
/// Analyzing tool aimed to work on primitive geometrical objects
/// </summary>
public ref class ShapeAnalysis_Geom sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_Geom>
{

#ifdef Include_ShapeAnalysis_Geom_h
public:
    Include_ShapeAnalysis_Geom_h
#endif

public:
    ShapeAnalysis_Geom(::ShapeAnalysis_Geom* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_Geom>( nativeInstance, true )
    {}

    ShapeAnalysis_Geom(::ShapeAnalysis_Geom& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_Geom>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_Geom* NativeInstance
    {
        ::ShapeAnalysis_Geom* get()
        {
            return static_cast<::ShapeAnalysis_Geom*>(_NativeInstance);
        }
    }

public:
    ShapeAnalysis_Geom();
    /// <summary>
    /// Builds a plane out of a set of points in array
    /// Returns in <dmax> the maximal distance between the produced
    /// plane and given points
    /// </summary>
    static bool NearestPlane(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::Pln% aPln, double% Dmax);
    /// <summary>
    /// Builds transformation object out of matrix.
    /// Matrix must be 3 x 4.
    /// Unit is used as multiplier.
    /// </summary>
    static bool PositionTrsf(Macad::Occt::TColStd_HArray2OfReal^ coefs, Macad::Occt::Trsf% trsf, double unit, double prec);
}; // class ShapeAnalysis_Geom

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_ShapeContents
//---------------------------------------------------------------------
/// <summary>
/// Dumps shape contents
/// </summary>
public ref class ShapeAnalysis_ShapeContents sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_ShapeContents>
{

#ifdef Include_ShapeAnalysis_ShapeContents_h
public:
    Include_ShapeAnalysis_ShapeContents_h
#endif

public:
    ShapeAnalysis_ShapeContents(::ShapeAnalysis_ShapeContents* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_ShapeContents>( nativeInstance, true )
    {}

    ShapeAnalysis_ShapeContents(::ShapeAnalysis_ShapeContents& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_ShapeContents>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_ShapeContents* NativeInstance
    {
        ::ShapeAnalysis_ShapeContents* get()
        {
            return static_cast<::ShapeAnalysis_ShapeContents*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns (modifiable) the flag which defines whether to store faces
    /// with edges if its 3D curves has more than 8192 poles.
    /// </summary>
    property bool ModifyBigSplineMode {
        bool get() {
            return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyBigSplineMode();
        }
        void set(bool value) {
            ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyBigSplineMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether to store faces on indirect surfaces.
    /// </summary>
    property bool ModifyIndirectMode {
        bool get() {
            return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyIndirectMode();
        }
        void set(bool value) {
            ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyIndirectMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether to store faces on offset surfaces.
    /// </summary>
    property bool ModifyOffsetSurfaceMode {
        bool get() {
            return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyOffsetSurfaceMode();
        }
        void set(bool value) {
            ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyOffsetSurfaceMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether to store faces
    /// with edges if its 3D curves are trimmed curves
    /// </summary>
    property bool ModifyTrimmed3dMode {
        bool get() {
            return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyTrimmed3dMode();
        }
        void set(bool value) {
            ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyTrimmed3dMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether to store faces
    /// with edges if its 3D curves and pcurves are offset curves
    /// </summary>
    property bool ModifyOffsetCurveMode {
        bool get() {
            return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyOffsetCurveMode();
        }
        void set(bool value) {
            ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyOffsetCurveMode() = value;
        }
    }

    /// <summary>
    /// Returns (modifiable) the flag which defines whether to store faces
    /// with edges if its  pcurves are trimmed curves
    /// </summary>
    property bool ModifyTrimmed2dMode {
        bool get() {
            return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyTrimmed2dMode();
        }
        void set(bool value) {
            ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyTrimmed2dMode() = value;
        }
    }

    property bool ModifyOffestSurfaceMode {
        bool get() {
            return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyOffestSurfaceMode();
        }
        void set(bool value) {
            ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyOffestSurfaceMode() = value;
        }
    }

    /// <summary>
    /// Initialize fields and call ClearFlags()
    /// </summary>
    ShapeAnalysis_ShapeContents();
    /// <summary>
    /// Clears all accumulated statistics
    /// </summary>
    void Clear();
    /// <summary>
    /// Clears all flags
    /// </summary>
    void ClearFlags();
    /// <summary>
    /// Counts quantities of sun-shapes in shape and
    /// stores sub-shapes according to flags
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ shape);
    int NbSolids();
    int NbShells();
    int NbFaces();
    int NbWires();
    int NbEdges();
    int NbVertices();
    int NbSolidsWithVoids();
    int NbBigSplines();
    int NbC0Surfaces();
    int NbC0Curves();
    int NbOffsetSurf();
    int NbIndirectSurf();
    int NbOffsetCurves();
    int NbTrimmedCurve2d();
    int NbTrimmedCurve3d();
    int NbBSplibeSurf();
    int NbBezierSurf();
    int NbTrimSurf();
    int NbWireWitnSeam();
    int NbWireWithSevSeams();
    int NbFaceWithSevWires();
    int NbNoPCurve();
    int NbFreeFaces();
    int NbFreeWires();
    int NbFreeEdges();
    int NbSharedSolids();
    int NbSharedShells();
    int NbSharedFaces();
    int NbSharedWires();
    int NbSharedFreeWires();
    int NbSharedFreeEdges();
    int NbSharedEdges();
    int NbSharedVertices();
    Macad::Occt::TopTools_HSequenceOfShape^ BigSplineSec();
    Macad::Occt::TopTools_HSequenceOfShape^ IndirectSec();
    Macad::Occt::TopTools_HSequenceOfShape^ OffsetSurfaceSec();
    Macad::Occt::TopTools_HSequenceOfShape^ Trimmed3dSec();
    Macad::Occt::TopTools_HSequenceOfShape^ OffsetCurveSec();
    Macad::Occt::TopTools_HSequenceOfShape^ Trimmed2dSec();
}; // class ShapeAnalysis_ShapeContents

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_ShapeTolerance
//---------------------------------------------------------------------
/// <summary>
/// Tool for computing shape tolerances (minimal, maximal, average),
/// finding shape with tolerance matching given criteria,
/// setting or limitating tolerances.
/// </summary>
public ref class ShapeAnalysis_ShapeTolerance sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_ShapeTolerance>
{

#ifdef Include_ShapeAnalysis_ShapeTolerance_h
public:
    Include_ShapeAnalysis_ShapeTolerance_h
#endif

public:
    ShapeAnalysis_ShapeTolerance(::ShapeAnalysis_ShapeTolerance* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_ShapeTolerance>( nativeInstance, true )
    {}

    ShapeAnalysis_ShapeTolerance(::ShapeAnalysis_ShapeTolerance& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_ShapeTolerance>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_ShapeTolerance* NativeInstance
    {
        ::ShapeAnalysis_ShapeTolerance* get()
        {
            return static_cast<::ShapeAnalysis_ShapeTolerance*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_ShapeTolerance();
    /// <summary>
    /// Determines a tolerance from the ones stored in a shape
    /// Remark : calls InitTolerance and AddTolerance,
    /// hence, can be used to start a series for cumulating tolerance
    /// <mode> = 0 : returns the average value between sub-shapes,
    /// <mode> > 0 : returns the maximal found,
    /// <mode> < 0 : returns the minimal found.
    /// <type> defines what kinds of sub-shapes to consider:
    /// SHAPE (default) : all : VERTEX, EDGE, FACE,
    /// VERTEX : only vertices,
    /// EDGE   : only edges,
    /// FACE   : only faces,
    /// SHELL  : combined SHELL + FACE, for each face (and containing
    /// shell), also checks EDGE and VERTEX
    /// </summary>
    double Tolerance(Macad::Occt::TopoDS_Shape^ shape, int mode, Macad::Occt::TopAbs_ShapeEnum type);
    /// <summary>
    /// Determines a tolerance from the ones stored in a shape
    /// Remark : calls InitTolerance and AddTolerance,
    /// hence, can be used to start a series for cumulating tolerance
    /// <mode> = 0 : returns the average value between sub-shapes,
    /// <mode> > 0 : returns the maximal found,
    /// <mode> < 0 : returns the minimal found.
    /// <type> defines what kinds of sub-shapes to consider:
    /// SHAPE (default) : all : VERTEX, EDGE, FACE,
    /// VERTEX : only vertices,
    /// EDGE   : only edges,
    /// FACE   : only faces,
    /// SHELL  : combined SHELL + FACE, for each face (and containing
    /// shell), also checks EDGE and VERTEX
    /// </summary>
    double Tolerance(Macad::Occt::TopoDS_Shape^ shape, int mode);
    /// <summary>
    /// Determines which shapes have a tolerance over the given value
    /// <type> is interpreted as in the method Tolerance
    /// </summary>
    Macad::Occt::TopTools_HSequenceOfShape^ OverTolerance(Macad::Occt::TopoDS_Shape^ shape, double value, Macad::Occt::TopAbs_ShapeEnum type);
    /// <summary>
    /// Determines which shapes have a tolerance over the given value
    /// <type> is interpreted as in the method Tolerance
    /// </summary>
    Macad::Occt::TopTools_HSequenceOfShape^ OverTolerance(Macad::Occt::TopoDS_Shape^ shape, double value);
    /// <summary>
    /// Determines which shapes have a tolerance within a given interval
    /// <type> is interpreted as in the method Tolerance
    /// </summary>
    Macad::Occt::TopTools_HSequenceOfShape^ InTolerance(Macad::Occt::TopoDS_Shape^ shape, double valmin, double valmax, Macad::Occt::TopAbs_ShapeEnum type);
    /// <summary>
    /// Determines which shapes have a tolerance within a given interval
    /// <type> is interpreted as in the method Tolerance
    /// </summary>
    Macad::Occt::TopTools_HSequenceOfShape^ InTolerance(Macad::Occt::TopoDS_Shape^ shape, double valmin, double valmax);
    /// <summary>
    /// Initializes computation of cumulated tolerance
    /// </summary>
    void InitTolerance();
    /// <summary>
    /// Adds data on new Shape to compute Cumulated Tolerance
    /// (prepares three computations : maximal, average, minimal)
    /// </summary>
    void AddTolerance(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum type);
    /// <summary>
    /// Adds data on new Shape to compute Cumulated Tolerance
    /// (prepares three computations : maximal, average, minimal)
    /// </summary>
    void AddTolerance(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Returns the computed tolerance according to the <mode>
    /// <mode> = 0 : average
    /// <mode> > 0 : maximal
    /// <mode> < 0 : minimal
    /// </summary>
    double GlobalTolerance(int mode);
}; // class ShapeAnalysis_ShapeTolerance

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Shell
//---------------------------------------------------------------------
/// <summary>
/// This class provides operators to analyze edges orientation
/// in the shell.
/// </summary>
public ref class ShapeAnalysis_Shell sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_Shell>
{

#ifdef Include_ShapeAnalysis_Shell_h
public:
    Include_ShapeAnalysis_Shell_h
#endif

public:
    ShapeAnalysis_Shell(::ShapeAnalysis_Shell* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_Shell>( nativeInstance, true )
    {}

    ShapeAnalysis_Shell(::ShapeAnalysis_Shell& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_Shell>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_Shell* NativeInstance
    {
        ::ShapeAnalysis_Shell* get()
        {
            return static_cast<::ShapeAnalysis_Shell*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_Shell();
    /// <summary>
    /// Clears data about loaded shells and performed checks
    /// </summary>
    void Clear();
    /// <summary>
    /// Adds shells contained in the <shape> to the list of loaded shells
    /// </summary>
    void LoadShells(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Checks if shells fulfill orientation condition, i.e. if each
    /// edge is, either present once (free edge) or twice (connected
    /// edge) but with different orientations (FORWARD/REVERSED)
    /// Edges which do not fulfill these conditions are bad
    /// 
    /// If <alsofree> is True free edges are considered.
    /// Free edges can be queried but are not bad
    /// </summary>
    bool CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape, bool alsofree, bool checkinternaledges);
    /// <summary>
    /// Checks if shells fulfill orientation condition, i.e. if each
    /// edge is, either present once (free edge) or twice (connected
    /// edge) but with different orientations (FORWARD/REVERSED)
    /// Edges which do not fulfill these conditions are bad
    /// 
    /// If <alsofree> is True free edges are considered.
    /// Free edges can be queried but are not bad
    /// </summary>
    bool CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape, bool alsofree);
    /// <summary>
    /// Checks if shells fulfill orientation condition, i.e. if each
    /// edge is, either present once (free edge) or twice (connected
    /// edge) but with different orientations (FORWARD/REVERSED)
    /// Edges which do not fulfill these conditions are bad
    /// 
    /// If <alsofree> is True free edges are considered.
    /// Free edges can be queried but are not bad
    /// </summary>
    bool CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Tells if a shape is loaded (only shells are checked)
    /// </summary>
    bool IsLoaded(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Returns the actual number of loaded shapes (i.e. shells)
    /// </summary>
    int NbLoaded();
    /// <summary>
    /// Returns a loaded shape specified by its rank number.
    /// Returns null shape if <num> is out of range
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Loaded(int num);
    /// <summary>
    /// Tells if at least one edge is recorded as bad
    /// </summary>
    bool HasBadEdges();
    /// <summary>
    /// Returns the list of bad edges as a Compound
    /// It is empty (not null) if no edge are recorded as bad
    /// </summary>
    Macad::Occt::TopoDS_Compound^ BadEdges();
    /// <summary>
    /// Tells if at least one edge is recorded as free (not connected)
    /// </summary>
    bool HasFreeEdges();
    /// <summary>
    /// Returns the list of free (not connected) edges as a Compound
    /// It is empty (not null) if no edge are recorded as free
    /// </summary>
    Macad::Occt::TopoDS_Compound^ FreeEdges();
    /// <summary>
    /// Tells if at least one edge is connected (shared twice or more)
    /// </summary>
    bool HasConnectedEdges();
}; // class ShapeAnalysis_Shell

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Surface
//---------------------------------------------------------------------
/// <summary>
/// Complements standard tool Geom_Surface by providing additional
/// functionality for detection surface singularities, checking
/// spatial surface closure and computing projections of 3D points
/// onto a surface.
/// 
/// * The singularities
/// Each singularity stores the precision with which corresponding
/// surface iso-line is considered as degenerated.
/// The number of singularities is determined by specifying precision
/// and always not greater than 4.
/// 
/// * The spatial closure
/// The check for spatial closure is performed with given precision
/// (default value is Precision::Confusion).
/// If Geom_Surface says that the surface is closed, this class
/// also says this. Otherwise additional analysis is performed.
/// 
/// * The parameters of 3D point on the surface
/// The projection of the point is performed with given precision.
/// This class tries to find a solution taking into account possible
/// singularities.
/// Additional method for searching the solution from already built
/// one is also provided.
/// 
/// This tool is optimised: computes most information only once
/// </summary>
public ref class ShapeAnalysis_Surface sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_Surface_h
public:
    Include_ShapeAnalysis_Surface_h
#endif

public:
    ShapeAnalysis_Surface(::ShapeAnalysis_Surface* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeAnalysis_Surface(::ShapeAnalysis_Surface& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeAnalysis_Surface* NativeInstance
    {
        ::ShapeAnalysis_Surface* get()
        {
            return static_cast<::ShapeAnalysis_Surface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an analyzer object on the basis of existing surface
    /// </summary>
    ShapeAnalysis_Surface(Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Loads existing surface
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Reads all the data from another Surface, without recomputing
    /// </summary>
    void Init(Macad::Occt::ShapeAnalysis_Surface^ other);
    void SetDomain(double U1, double U2, double V1, double V2);
    /// <summary>
    /// Returns a surface being analyzed
    /// </summary>
    Macad::Occt::Geom_Surface^ Surface();
    /// <summary>
    /// Returns the Adaptor.
    /// Creates it if not yet done.
    /// </summary>
    Macad::Occt::GeomAdaptor_Surface^ Adaptor3d();
    /// <summary>
    /// Returns the Adaptor (may be Null if method Adaptor() was not called)
    /// </summary>
    Macad::Occt::GeomAdaptor_Surface^ TrueAdaptor3d();
    /// <summary>
    /// Returns 3D distance found by one of the following methods.
    /// IsDegenerated, DegeneratedValues, ProjectDegenerated
    /// (distance between 3D point and found or last (if not found)
    /// singularity),
    /// IsUClosed, IsVClosed (minimum value of precision to consider
    /// the surface to be closed),
    /// ValueOfUV (distance between 3D point and found solution).
    /// </summary>
    double Gap();
    /// <summary>
    /// Returns a 3D point specified by parameters in surface
    /// parametrical space
    /// </summary>
    Macad::Occt::Pnt Value(double u, double v);
    /// <summary>
    /// Returns a 3d point specified by a point in surface
    /// parametrical space
    /// </summary>
    Macad::Occt::Pnt Value(Macad::Occt::Pnt2d p2d);
    /// <summary>
    /// Returns True if the surface has singularities for the given
    /// precision (i.e. if there are surface singularities with sizes
    /// not greater than precision).
    /// </summary>
    bool HasSingularities(double preci);
    /// <summary>
    /// Returns the number of singularities for the given precision
    /// (i.e. number of surface singularities with sizes not greater
    /// than precision).
    /// </summary>
    int NbSingularities(double preci);
    /// <summary>
    /// Returns the characteristics of the singularity specified by
    /// its rank number <num>.
    /// That means, that it is not necessary for <num> to be in the
    /// range [1, NbSingularities] but must be not greater than
    /// possible (see ComputeSingularities).
    /// The returned characteristics are:
    /// preci: the smallest precision with which the iso-line is
    /// considered as degenerated,
    /// P3d: 3D point of singularity (middle point of the surface
    /// iso-line),
    /// firstP2d and lastP2d: first and last 2D points of the
    /// iso-line in parametrical surface,
    /// firstpar and lastpar: first and last parameters of the
    /// iso-line in parametrical surface,
    /// uisodeg: if the degenerated iso-line is U-iso (True) or
    /// V-iso (False).
    /// Returns False if <num> is out of range, else returns True.
    /// </summary>
    bool Singularity(int num, double% preci, Macad::Occt::Pnt% P3d, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar, bool% uisodeg);
    /// <summary>
    /// Returns True if there is at least one surface boundary which
    /// is considered as degenerated with <preci> and distance
    /// between P3d and corresponding singular point is less than
    /// <preci>
    /// </summary>
    bool IsDegenerated(Macad::Occt::Pnt P3d, double preci);
    /// <summary>
    /// Returns True if there is at least one surface iso-line which
    /// is considered as degenerated with <preci> and distance
    /// between P3d and corresponding singular point is less than
    /// <preci> (like IsDegenerated).
    /// Returns characteristics of the first found boundary matching
    /// those criteria.
    /// </summary>
    bool DegeneratedValues(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar, bool forward);
    /// <summary>
    /// Returns True if there is at least one surface iso-line which
    /// is considered as degenerated with <preci> and distance
    /// between P3d and corresponding singular point is less than
    /// <preci> (like IsDegenerated).
    /// Returns characteristics of the first found boundary matching
    /// those criteria.
    /// </summary>
    bool DegeneratedValues(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar);
    /// <summary>
    /// Projects a point <P3d> on a singularity by computing
    /// one of the coordinates of preliminary computed <result>.
    /// 
    /// Finds the iso-line which is considered as degenerated with
    /// <preci> and
    /// a. distance between P3d and corresponding singular point is
    /// less than <preci> (like IsDegenerated) or
    /// b. difference between already computed <result>'s coordinate
    /// and iso-coordinate of the boundary is less than 2D
    /// resolution (computed from <preci> by Geom_Adaptor).
    /// Then sets not yet computed <result>'s coordinate taking it
    /// from <neighbour> and returns True.
    /// </summary>
    bool ProjectDegenerated(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d neighbour, Macad::Occt::Pnt2d% result);
    /// <summary>
    /// Checks points at the beginning (direct is True) or end
    /// (direct is False) of array <points> to lie in singularity of
    /// surface, and if yes, adjusts the indeterminate 2d coordinate
    /// of these points by nearest point which is not in singularity.
    /// Returns True if some points were adjusted.
    /// </summary>
    bool ProjectDegenerated(int nbrPnt, Macad::Occt::TColgp_SequenceOfPnt^ points, Macad::Occt::TColgp_SequenceOfPnt2d^ pnt2d, double preci, bool direct);
    /// <summary>
    /// Returns True if straight pcurve going from point p2d1 to p2d2
    /// is degenerate, i.e. lies in the singularity of the surface.
    /// NOTE: it uses another method of detecting singularity than
    /// used by ComputeSingularities() et al.!
    /// For that, maximums of distances between points p2d1, p2d2
    /// and 0.5*(p2d1+p2d2) and between corresponding 3d points are
    /// computed.
    /// The pcurve (p2d1, p2d2) is considered as degenerate if:
    /// - max distance in 3d is less than <tol>
    /// - max distance in 2d is at least <ratio> times greater than
    /// the Resolution computed from max distance in 3d
    /// (max3d < tol && max2d > ratio * Resolution(max3d))
    /// NOTE: <ratio> should be >1 (e.g. 10)
    /// </summary>
    bool IsDegenerated(Macad::Occt::Pnt2d p2d1, Macad::Occt::Pnt2d p2d2, double tol, double ratio);
    /// <summary>
    /// Returns the bounds of the surface
    /// (from Bounds from Surface, but buffered)
    /// </summary>
    void Bounds(double% ufirst, double% ulast, double% vfirst, double% vlast);
    /// <summary>
    /// Computes bound isos (protected against exceptions)
    /// </summary>
    void ComputeBoundIsos();
    /// <summary>
    /// Returns a U-Iso. Null if not possible or failed
    /// Remark : bound isos are buffered
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Returns a V-Iso. Null if not possible or failed
    /// Remark : bound isos are buffered
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Tells if the Surface is spatially closed in U with given
    /// precision. If <preci> < 0 then Precision::Confusion is used.
    /// If Geom_Surface says that the surface is U-closed, this method
    /// also says this. Otherwise additional analysis is performed,
    /// comparing given precision with the following distances:
    /// - periodic B-Splines are closed,
    /// - polynomial B-Spline with boundary multiplicities degree+1
    /// and Bezier - maximum distance between poles,
    /// - rational B-Spline or one with boundary multiplicities not
    /// degree+1 - maximum distance computed at knots and their
    /// middles,
    /// - surface of extrusion - distance between ends of basis
    /// curve,
    /// - other (RectangularTrimmed and Offset) - maximum distance
    /// computed at 100 equi-distanted points.
    /// </summary>
    bool IsUClosed(double preci);
    /// <summary>
    /// Tells if the Surface is spatially closed in U with given
    /// precision. If <preci> < 0 then Precision::Confusion is used.
    /// If Geom_Surface says that the surface is U-closed, this method
    /// also says this. Otherwise additional analysis is performed,
    /// comparing given precision with the following distances:
    /// - periodic B-Splines are closed,
    /// - polynomial B-Spline with boundary multiplicities degree+1
    /// and Bezier - maximum distance between poles,
    /// - rational B-Spline or one with boundary multiplicities not
    /// degree+1 - maximum distance computed at knots and their
    /// middles,
    /// - surface of extrusion - distance between ends of basis
    /// curve,
    /// - other (RectangularTrimmed and Offset) - maximum distance
    /// computed at 100 equi-distanted points.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Tells if the Surface is spatially closed in V with given
    /// precision. If <preci> < 0 then Precision::Confusion is used.
    /// If Geom_Surface says that the surface is V-closed, this method
    /// also says this. Otherwise additional analysis is performed,
    /// comparing given precision with the following distances:
    /// - periodic B-Splines are closed,
    /// - polynomial B-Spline with boundary multiplicities degree+1
    /// and Bezier - maximum distance between poles,
    /// - rational B-Spline or one with boundary multiplicities not
    /// degree+1 - maximum distance computed at knots and their
    /// middles,
    /// - surface of revolution - distance between ends of basis
    /// curve,
    /// - other (RectangularTrimmed and Offset) - maximum distance
    /// computed at 100 equi-distanted points.
    /// </summary>
    bool IsVClosed(double preci);
    /// <summary>
    /// Tells if the Surface is spatially closed in V with given
    /// precision. If <preci> < 0 then Precision::Confusion is used.
    /// If Geom_Surface says that the surface is V-closed, this method
    /// also says this. Otherwise additional analysis is performed,
    /// comparing given precision with the following distances:
    /// - periodic B-Splines are closed,
    /// - polynomial B-Spline with boundary multiplicities degree+1
    /// and Bezier - maximum distance between poles,
    /// - rational B-Spline or one with boundary multiplicities not
    /// degree+1 - maximum distance computed at knots and their
    /// middles,
    /// - surface of revolution - distance between ends of basis
    /// curve,
    /// - other (RectangularTrimmed and Offset) - maximum distance
    /// computed at 100 equi-distanted points.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Computes the parameters in the surface parametrical space of
    /// 3D point.
    /// The result is parameters of the point projected onto the
    /// surface.
    /// This method enhances functionality provided by the standard
    /// tool GeomAPI_ProjectPointOnSurface by treatment of cases when
    /// the projected point is near to the surface boundaries and
    /// when this standard tool fails.
    /// </summary>
    Macad::Occt::Pnt2d ValueOfUV(Macad::Occt::Pnt P3D, double preci);
    /// <summary>
    /// Projects a point P3D on the surface.
    /// Does the same thing as ValueOfUV but tries to optimize
    /// computations by taking into account previous point <p2dPrev>:
    /// makes a step by UV and tries Newton algorithm.
    /// If <maxpreci> >0. and distance between solution and
    /// P3D is greater than <maxpreci>, that solution is considered
    /// as bad, and ValueOfUV() is used.
    /// If not succeeded, calls ValueOfUV()
    /// </summary>
    Macad::Occt::Pnt2d NextValueOfUV(Macad::Occt::Pnt2d p2dPrev, Macad::Occt::Pnt P3D, double preci, double maxpreci);
    /// <summary>
    /// Projects a point P3D on the surface.
    /// Does the same thing as ValueOfUV but tries to optimize
    /// computations by taking into account previous point <p2dPrev>:
    /// makes a step by UV and tries Newton algorithm.
    /// If <maxpreci> >0. and distance between solution and
    /// P3D is greater than <maxpreci>, that solution is considered
    /// as bad, and ValueOfUV() is used.
    /// If not succeeded, calls ValueOfUV()
    /// </summary>
    Macad::Occt::Pnt2d NextValueOfUV(Macad::Occt::Pnt2d p2dPrev, Macad::Occt::Pnt P3D, double preci);
    /// <summary>
    /// Tries a refinement of an already computed couple (U,V) by
    /// using projecting 3D point on iso-lines:
    /// 1. boundaries of the surface,
    /// 2. iso-lines passing through (U,V)
    /// 3. iteratively received iso-lines passing through new U and
    /// new V (number of iterations is limited by 5 in each
    /// direction)
    /// Returns the best resulting distance between P3D and Value(U,V)
    /// in the case of success. Else, returns a very great value
    /// </summary>
    double UVFromIso(Macad::Occt::Pnt P3D, double preci, double% U, double% V);
    /// <summary>
    /// Returns minimum value to consider the surface as U-closed
    /// </summary>
    double UCloseVal();
    /// <summary>
    /// Returns minimum value to consider the surface as V-closed
    /// </summary>
    double VCloseVal();
    Macad::Occt::Bnd_Box^ GetBoxUF();
    Macad::Occt::Bnd_Box^ GetBoxUL();
    Macad::Occt::Bnd_Box^ GetBoxVF();
    Macad::Occt::Bnd_Box^ GetBoxVL();
    static Macad::Occt::ShapeAnalysis_Surface^ CreateDowncasted(::ShapeAnalysis_Surface* instance);
}; // class ShapeAnalysis_Surface

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_TransferParameters
//---------------------------------------------------------------------
/// <summary>
/// This tool is used for transferring parameters
/// from 3d curve of the edge to pcurve and vice versa.
/// 
/// Default behaviour is to trsnafer parameters with help
/// of linear transformation:
/// 
/// T2d = myShift + myScale * T3d
/// where
/// myScale = ( Last2d - First2d ) / ( Last3d - First3d )
/// myShift = First2d - First3d * myScale
/// [First3d, Last3d] and [First2d, Last2d] are ranges of
/// edge on curve and pcurve
/// 
/// This behaviour can be redefined in derived classes, for example,
/// using projection.
/// </summary>
public ref class ShapeAnalysis_TransferParameters
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_TransferParameters_h
public:
    Include_ShapeAnalysis_TransferParameters_h
#endif

protected:
    ShapeAnalysis_TransferParameters(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    ShapeAnalysis_TransferParameters(::ShapeAnalysis_TransferParameters* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeAnalysis_TransferParameters(::ShapeAnalysis_TransferParameters& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeAnalysis_TransferParameters* NativeInstance
    {
        ::ShapeAnalysis_TransferParameters* get()
        {
            return static_cast<::ShapeAnalysis_TransferParameters*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates empty tool with myShift = 0 and myScale = 1
    /// </summary>
    ShapeAnalysis_TransferParameters();
    /// <summary>
    /// Creates a tool and initializes it with edge and face
    /// </summary>
    ShapeAnalysis_TransferParameters(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Initialize a tool with edge and face
    /// </summary>
    void Init(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Sets maximal tolerance to use linear recomputation of
    /// parameters.
    /// </summary>
    void SetMaxTolerance(double maxtol);
    /// <summary>
    /// Transfers parameters given by sequence Params from 3d curve
    /// to pcurve (if To2d is True) or back (if To2d is False)
    /// </summary>
    Macad::Occt::TColStd_HSequenceOfReal^ Perform(Macad::Occt::TColStd_HSequenceOfReal^ Params, bool To2d);
    /// <summary>
    /// Transfers parameter given by sequence Params from 3d curve
    /// to pcurve (if To2d is True) or back (if To2d is False)
    /// </summary>
    double Perform(double Param, bool To2d);
    /// <summary>
    /// Recomputes range of curves from NewEdge.
    /// If Is2d equals True parameters are recomputed by curve2d else by curve3d.
    /// </summary>
    void TransferRange(Macad::Occt::TopoDS_Edge^ newEdge, double prevPar, double currPar, bool To2d);
    /// <summary>
    /// Returns True if 3d curve of edge and pcurve are SameRange
    /// (in default implementation, if myScale == 1 and myShift == 0)
    /// </summary>
    bool IsSameRange();
    static Macad::Occt::ShapeAnalysis_TransferParameters^ CreateDowncasted(::ShapeAnalysis_TransferParameters* instance);
}; // class ShapeAnalysis_TransferParameters

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_TransferParametersProj
//---------------------------------------------------------------------
/// <summary>
/// This tool is used for transferring parameters
/// from 3d curve of the edge to pcurve and vice versa.
/// This tool transfers parameters with help of
/// projection points from curve 3d on curve 2d and
/// vice versa
/// </summary>
public ref class ShapeAnalysis_TransferParametersProj sealed
    : public Macad::Occt::ShapeAnalysis_TransferParameters
{

#ifdef Include_ShapeAnalysis_TransferParametersProj_h
public:
    Include_ShapeAnalysis_TransferParametersProj_h
#endif

public:
    ShapeAnalysis_TransferParametersProj(::ShapeAnalysis_TransferParametersProj* nativeInstance)
        : Macad::Occt::ShapeAnalysis_TransferParameters( nativeInstance )
    {}

    ShapeAnalysis_TransferParametersProj(::ShapeAnalysis_TransferParametersProj& nativeInstance)
        : Macad::Occt::ShapeAnalysis_TransferParameters( nativeInstance )
    {}

    property ::ShapeAnalysis_TransferParametersProj* NativeInstance
    {
        ::ShapeAnalysis_TransferParametersProj* get()
        {
            return static_cast<::ShapeAnalysis_TransferParametersProj*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns modifiable flag forcing projection
    /// If it is False (default), projection is done only
    /// if edge is not SameParameter or if tolerance of edge
    /// is greater than MaxTolerance()
    /// </summary>
    property bool ForceProjection {
        bool get() {
            return ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->ForceProjection();
        }
        void set(bool value) {
            ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->ForceProjection() = value;
        }
    }

    /// <summary>
    /// Creates empty constructor.
    /// </summary>
    ShapeAnalysis_TransferParametersProj();
    ShapeAnalysis_TransferParametersProj(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    void Init(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Transfers parameters given by sequence Params from 3d curve
    /// to pcurve (if To2d is True) or back (if To2d is False)
    /// </summary>
    Macad::Occt::TColStd_HSequenceOfReal^ Perform(Macad::Occt::TColStd_HSequenceOfReal^ Papams, bool To2d);
    /// <summary>
    /// Transfers parameter given by  Param from 3d curve
    /// to pcurve (if To2d is True) or back (if To2d is False)
    /// </summary>
    double Perform(double Param, bool To2d);
    /// <summary>
    /// Recomputes range of curves from NewEdge.
    /// If Is2d equals True parameters are recomputed by curve2d else by curve3d.
    /// </summary>
    void TransferRange(Macad::Occt::TopoDS_Edge^ newEdge, double prevPar, double currPar, bool Is2d);
    /// <summary>
    /// Returns False;
    /// </summary>
    bool IsSameRange();
    /// <summary>
    /// Make a copy of non-manifold vertex theVert
    /// (i.e. create new  TVertex and replace PointRepresentations for this vertex
    /// from fromedge to toedge. Other representations were copied)
    /// </summary>
    static Macad::Occt::TopoDS_Vertex^ CopyNMVertex(Macad::Occt::TopoDS_Vertex^ theVert, Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge);
    /// <summary>
    /// Make a copy of non-manifold vertex theVert
    /// (i.e. create new  TVertex and replace PointRepresentations for this vertex
    /// from fromFace to toFace. Other representations were copied)
    /// </summary>
    static Macad::Occt::TopoDS_Vertex^ CopyNMVertex(Macad::Occt::TopoDS_Vertex^ theVert, Macad::Occt::TopoDS_Face^ toFace, Macad::Occt::TopoDS_Face^ fromFace);
    static Macad::Occt::ShapeAnalysis_TransferParametersProj^ CreateDowncasted(::ShapeAnalysis_TransferParametersProj* instance);
}; // class ShapeAnalysis_TransferParametersProj

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_WireOrder
//---------------------------------------------------------------------
/// <summary>
/// This class is intended to control and, if possible, redefine
/// the order of a list of edges which define a wire
/// Edges are not given directly, but as their bounds (start,end)
/// 
/// This allows to use this tool, either on existing wire, or on
/// data just taken from a file (coordinates are easy to get)
/// 
/// It can work, either in 2D, or in 3D, or miscible mode
/// The tolerance for each mode is fixed
/// 
/// Two phases : firstly add the couples (start, end)
/// secondly perform then get the result
/// </summary>
public ref class ShapeAnalysis_WireOrder sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_WireOrder>
{

#ifdef Include_ShapeAnalysis_WireOrder_h
public:
    Include_ShapeAnalysis_WireOrder_h
#endif

public:
    ShapeAnalysis_WireOrder(::ShapeAnalysis_WireOrder* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_WireOrder>( nativeInstance, true )
    {}

    ShapeAnalysis_WireOrder(::ShapeAnalysis_WireOrder& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_WireOrder>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_WireOrder* NativeInstance
    {
        ::ShapeAnalysis_WireOrder* get()
        {
            return static_cast<::ShapeAnalysis_WireOrder*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  ModeType
    //---------------------------------------------------------------------
    enum class ModeType
    {
        Mode2D = 0,
        Mode3D = 1,
        ModeBoth = 2
    }; // enum  class ModeType

    /// <summary>
    /// If this mode is True method perform does not sort edges of
    /// different loops. The resulting order is first loop, second
    /// one etc...
    /// </summary>
    property bool KeepLoopsMode {
        bool get() {
            return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->KeepLoopsMode();
        }
        void set(bool value) {
            ((::ShapeAnalysis_WireOrder*)_NativeInstance)->KeepLoopsMode() = value;
        }
    }

    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_WireOrder();
    /// <summary>
    /// Creates a WireOrder.
    /// Flag <theMode3D> defines 3D or 2d mode.
    /// Flag <theModeBoth> defines miscible mode and the flag <theMode3D> is ignored.
    /// Warning: Parameter <theTolerance> is not used in algorithm.
    /// </summary>
    ShapeAnalysis_WireOrder(bool theMode3D, double theTolerance, bool theModeBoth);
    /// <summary>
    /// Creates a WireOrder.
    /// Flag <theMode3D> defines 3D or 2d mode.
    /// Flag <theModeBoth> defines miscible mode and the flag <theMode3D> is ignored.
    /// Warning: Parameter <theTolerance> is not used in algorithm.
    /// </summary>
    ShapeAnalysis_WireOrder(bool theMode3D, double theTolerance);
    /// <summary>
    /// Sets new values.
    /// Clears the edge list if the mode (<theMode3D> or <theModeBoth> ) changes.
    /// Clears the connexion list.
    /// Warning: Parameter <theTolerance> is not used in algorithm.
    /// </summary>
    void SetMode(bool theMode3D, double theTolerance, bool theModeBoth);
    /// <summary>
    /// Sets new values.
    /// Clears the edge list if the mode (<theMode3D> or <theModeBoth> ) changes.
    /// Clears the connexion list.
    /// Warning: Parameter <theTolerance> is not used in algorithm.
    /// </summary>
    void SetMode(bool theMode3D, double theTolerance);
    /// <summary>
    /// Returns the working tolerance
    /// </summary>
    double Tolerance();
    /// <summary>
    /// Clears the list of edges, but not mode and tol
    /// </summary>
    void Clear();
    /// <summary>
    /// Adds a couple of points 3D (start, end)
    /// </summary>
    void Add(Macad::Occt::XYZ theStart3d, Macad::Occt::XYZ theEnd3d);
    /// <summary>
    /// Adds a couple of points 2D (start, end)
    /// </summary>
    void Add(Macad::Occt::XY theStart2d, Macad::Occt::XY theEnd2d);
    /// <summary>
    /// Adds a couple of points 3D and 2D (start, end)
    /// </summary>
    void Add(Macad::Occt::XYZ theStart3d, Macad::Occt::XYZ theEnd3d, Macad::Occt::XY theStart2d, Macad::Occt::XY theEnd2d);
    /// <summary>
    /// Returns the count of added couples of points (one per edges)
    /// </summary>
    int NbEdges();
    /// <summary>
    /// Computes the better order
    /// Optimised if the couples were already in order
    /// The criterium is : two couples in order if distance between
    /// end-prec and start-cur is less then starting tolerance <tol>
    /// Else, the smallest distance is reached
    /// Warning: Parameter <closed> not used
    /// </summary>
    void Perform(bool closed);
    /// <summary>
    /// Computes the better order
    /// Optimised if the couples were already in order
    /// The criterium is : two couples in order if distance between
    /// end-prec and start-cur is less then starting tolerance <tol>
    /// Else, the smallest distance is reached
    /// Warning: Parameter <closed> not used
    /// </summary>
    void Perform();
    /// <summary>
    /// Tells if Perform has been done
    /// Else, the following methods returns original values
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the status of the order (0 if not done) :
    /// 0 : all edges are direct and in sequence
    /// 1 : all edges are direct but some are not in sequence
    /// -1 : some edges are reversed, but no gap remain
    /// 3 : edges in sequence are just shifted in forward or reverse manner
    /// </summary>
    int Status();
    /// <summary>
    /// Returns the number of original edge which correspond to the
    /// newly ordered number <n>
    /// Warning : the returned value is NEGATIVE if edge should be reversed
    /// </summary>
    int Ordered(int theIdx);
    /// <summary>
    /// Returns the values of the couple <num>, as 3D values
    /// </summary>
    void XYZ(int theIdx, Macad::Occt::XYZ% theStart3D, Macad::Occt::XYZ% theEnd3D);
    /// <summary>
    /// Returns the values of the couple <num>, as 2D values
    /// </summary>
    void XY(int theIdx, Macad::Occt::XY% theStart2D, Macad::Occt::XY% theEnd2D);
    /// <summary>
    /// Returns the gap between a couple and its preceding
    /// <num> is considered ordered
    /// If <num> = 0 (D), returns the greatest gap found
    /// </summary>
    double Gap(int num);
    /// <summary>
    /// Returns the gap between a couple and its preceding
    /// <num> is considered ordered
    /// If <num> = 0 (D), returns the greatest gap found
    /// </summary>
    double Gap();
    /// <summary>
    /// Determines the chains inside which successive edges have a gap
    /// less than a given value. Queried by NbChains and Chain
    /// </summary>
    void SetChains(double gap);
    /// <summary>
    /// Returns the count of computed chains
    /// </summary>
    int NbChains();
    /// <summary>
    /// Returns, for the chain n0 num, starting and ending numbers of
    /// edges. In the list of ordered edges (see Ordered for originals)
    /// </summary>
    void Chain(int num, int% n1, int% n2);
    /// <summary>
    /// Determines the couples of edges for which end and start fit
    /// inside a given gap. Queried by NbCouples and Couple
    /// Warning: function isn't implemented
    /// </summary>
    void SetCouples(double gap);
    /// <summary>
    /// Returns the count of computed couples
    /// </summary>
    int NbCouples();
    /// <summary>
    /// Returns, for the couple n0 num, the two implied edges
    /// In the list of ordered edges
    /// </summary>
    void Couple(int num, int% n1, int% n2);
}; // class ShapeAnalysis_WireOrder

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Wire
//---------------------------------------------------------------------
/// <summary>
/// This class provides analysis of a wire to be compliant to
/// CAS.CADE requirements.
/// 
/// The functionalities provided are the following:
/// 1. consistency of 2d and 3d edge curve senses
/// 2. connection of adjacent edges regarding to:
/// a. their vertices
/// b. their pcurves
/// c. their 3d curves
/// 3. adjacency of the edge vertices to its pcurve and 3d curve
/// 4. if a wire is closed or not (considering its 3d and 2d
/// contour)
/// 5. if a wire is outer on its face (considering pcurves)
/// 
/// This class can be used in conjunction with class
/// ShapeFix_Wire, which will fix the problems detected by this class.
/// 
/// The methods of the given class match to ones of the class
/// ShapeFix_Wire, e.g., CheckSmall and FixSmall.
/// This class also includes some auxiliary methods
/// (e.g., CheckOuterBound, etc.),
/// which have no pair in ShapeFix_Wire.
/// 
/// Like methods of ShapeFix_Wire the ones of this class are
/// grouped into two levels:
/// - Public which are recommended for use (the most global
/// method is Perform),
/// - Advanced, for optional use only
/// 
/// For analyzing result of Public API checking methods use
/// corresponding Status... method.
/// The 'advanced' functions share the single status field which
/// contains the result of the last performed 'advanced' method.
/// It is queried by the method LastCheckStatus().
/// 
/// In order to prepare an analyzer, it is necessary to load a wire,
/// set face and precision.
/// </summary>
public ref class ShapeAnalysis_Wire sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeAnalysis_Wire_h
public:
    Include_ShapeAnalysis_Wire_h
#endif

public:
    ShapeAnalysis_Wire(::ShapeAnalysis_Wire* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ShapeAnalysis_Wire(::ShapeAnalysis_Wire& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ShapeAnalysis_Wire* NativeInstance
    {
        ::ShapeAnalysis_Wire* get()
        {
            return static_cast<::ShapeAnalysis_Wire*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_Wire();
    /// <summary>
    /// Creates object with standard TopoDS_Wire, face
    /// and precision
    /// </summary>
    ShapeAnalysis_Wire(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double precision);
    /* Method skipped due to unknown mapping: void ShapeAnalysis_Wire(ShapeExtend_WireData sbwd, TopoDS_Face face, double precision, ) */
    /// <summary>
    /// Initializes the object with standard TopoDS_Wire, face
    /// and precision
    /// </summary>
    void Init(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double precision);
    /* Method skipped due to unknown mapping: void Init(ShapeExtend_WireData sbwd, TopoDS_Face face, double precision, ) */
    /// <summary>
    /// Loads the object with standard TopoDS_Wire
    /// </summary>
    void Load(Macad::Occt::TopoDS_Wire^ wire);
    /* Method skipped due to unknown mapping: void Load(ShapeExtend_WireData sbwd, ) */
    /// <summary>
    /// Loads the face the wire lies on
    /// </summary>
    void SetFace(Macad::Occt::TopoDS_Face^ face);
    /// <summary>
    /// Loads the surface the wire lies on
    /// </summary>
    void SetSurface(Macad::Occt::Geom_Surface^ surface);
    /// <summary>
    /// Loads the surface the wire lies on
    /// </summary>
    void SetSurface(Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location);
    void SetPrecision(double precision);
    /// <summary>
    /// Unsets all the status and distance fields
    /// wire, face and precision are not cleared
    /// </summary>
    void ClearStatuses();
    /// <summary>
    /// Returns True if wire is loaded and has number of edges >0
    /// </summary>
    bool IsLoaded();
    /// <summary>
    /// Returns True if IsLoaded and underlying face is not null
    /// </summary>
    bool IsReady();
    /// <summary>
    /// Returns the value of precision
    /// </summary>
    double Precision();
    /* Method skipped due to unknown mapping: ShapeExtend_WireData WireData() */
    /// <summary>
    /// Returns the number of edges in the wire, or 0 if it is not loaded
    /// </summary>
    int NbEdges();
    /// <summary>
    /// Returns the working face
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
    /// <summary>
    /// Returns the working surface
    /// </summary>
    Macad::Occt::ShapeAnalysis_Surface^ Surface();
    /// <summary>
    /// Performs all the checks in the following order :
    /// CheckOrder, CheckSmall, CheckConnected, CheckEdgeCurves,
    /// CheckDegenerated, CheckSelfIntersection, CheckLacking,
    /// CheckClosed
    /// Returns: True if at least one method returned True;
    /// For deeper analysis use Status...(status) methods
    /// </summary>
    bool Perform();
    /// <summary>
    /// Calls CheckOrder and returns False if wire is already
    /// ordered (tail-to-head), True otherwise
    /// Flag <isClosed> defines if the wire is closed or not
    /// Flag <mode3d> defines which mode is used (3d or 2d)
    /// </summary>
    bool CheckOrder(bool isClosed, bool mode3d);
    /// <summary>
    /// Calls CheckOrder and returns False if wire is already
    /// ordered (tail-to-head), True otherwise
    /// Flag <isClosed> defines if the wire is closed or not
    /// Flag <mode3d> defines which mode is used (3d or 2d)
    /// </summary>
    bool CheckOrder(bool isClosed);
    /// <summary>
    /// Calls CheckOrder and returns False if wire is already
    /// ordered (tail-to-head), True otherwise
    /// Flag <isClosed> defines if the wire is closed or not
    /// Flag <mode3d> defines which mode is used (3d or 2d)
    /// </summary>
    bool CheckOrder();
    /// <summary>
    /// Calls to CheckConnected for each edge
    /// Returns: True if at least one pair of disconnected edges (not sharing the
    /// same vertex) was detected
    /// </summary>
    bool CheckConnected(double prec);
    /// <summary>
    /// Calls to CheckConnected for each edge
    /// Returns: True if at least one pair of disconnected edges (not sharing the
    /// same vertex) was detected
    /// </summary>
    bool CheckConnected();
    /// <summary>
    /// Calls to CheckSmall for each edge
    /// Returns: True if at least one small edge was detected
    /// </summary>
    bool CheckSmall(double precsmall);
    /// <summary>
    /// Calls to CheckSmall for each edge
    /// Returns: True if at least one small edge was detected
    /// </summary>
    bool CheckSmall();
    /// <summary>
    /// Checks edges geometry (consistency of 2d and 3d senses, adjasment
    /// of curves to the vertices, etc.).
    /// The order of the checks :
    /// Call ShapeAnalysis_Wire to check:
    /// ShapeAnalysis_Edge::CheckCurve3dWithPCurve  (1),
    /// ShapeAnalysis_Edge::CheckVertcesWithPCurve  (2),
    /// ShapeAnalysis_Edge::CheckVertcesWithCurve3d (3),
    /// CheckSeam                                   (4)
    /// Additional:
    /// CheckGap3d                                  (5),
    /// CheckGap2d                                  (6),
    /// ShapeAnalysis_Edge::CheckSameParameter      (7)
    /// Returns: True if at least one check returned True
    /// Remark:  The numbers in brackets show with what DONEi or FAILi
    /// the status can be queried
    /// </summary>
    bool CheckEdgeCurves();
    /// <summary>
    /// Calls to CheckDegenerated for each edge
    /// Returns: True if at least one incorrect degenerated edge was detected
    /// </summary>
    bool CheckDegenerated();
    /// <summary>
    /// Checks if wire is closed, performs CheckConnected,
    /// CheckDegenerated and CheckLacking for the first and the last edges
    /// Returns: True if at least one check returned True
    /// Status:
    /// FAIL1 or DONE1: see CheckConnected
    /// FAIL2 or DONE2: see CheckDegenerated
    /// </summary>
    bool CheckClosed(double prec);
    /// <summary>
    /// Checks if wire is closed, performs CheckConnected,
    /// CheckDegenerated and CheckLacking for the first and the last edges
    /// Returns: True if at least one check returned True
    /// Status:
    /// FAIL1 or DONE1: see CheckConnected
    /// FAIL2 or DONE2: see CheckDegenerated
    /// </summary>
    bool CheckClosed();
    /// <summary>
    /// Checks self-intersection of the wire (considering pcurves)
    /// Looks for self-intersecting edges and each pair of intersecting
    /// edges.
    /// Warning: It does not check each edge with any other one (only each two
    /// adjacent edges)
    /// The order of the checks :
    /// CheckSelfIntersectingEdge, CheckIntersectingEdges
    /// Returns: True if at least one check returned True
    /// Status:  FAIL1 or DONE1 - see CheckSelfIntersectingEdge
    /// FAIL2 or DONE2 - see CheckIntersectingEdges
    /// </summary>
    bool CheckSelfIntersection();
    /// <summary>
    /// Calls to CheckLacking for each edge
    /// Returns: True if at least one lacking edge was detected
    /// </summary>
    bool CheckLacking();
    bool CheckGaps3d();
    bool CheckGaps2d();
    bool CheckCurveGaps();
    /// <summary>
    /// Analyzes the order of the edges in the wire,
    /// uses class WireOrder for that purpose.
    /// Flag <isClosed> defines if the wire is closed or not
    /// Flag <theMode3D> defines 3D or 2d mode.
    /// Flag <theModeBoth> defines miscible mode and the flag <theMode3D> is ignored.
    /// Returns False if wire is already ordered (tail-to-head),
    /// True otherwise.
    /// Use returned WireOrder object for deeper analysis.
    /// Status:
    /// OK   : the same edges orientation, the same edges sequence
    /// DONE1: the same edges orientation, not the same edges sequence
    /// DONE2: as DONE1 and gaps more than myPrecision
    /// DONE3: not the same edges orientation (some need to be reversed)
    /// DONE4: as DONE3 and gaps more than myPrecision
    /// FAIL : algorithm failed (could not detect order)
    /// </summary>
    bool CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed, bool theMode3D, bool theModeBoth);
    /// <summary>
    /// Analyzes the order of the edges in the wire,
    /// uses class WireOrder for that purpose.
    /// Flag <isClosed> defines if the wire is closed or not
    /// Flag <theMode3D> defines 3D or 2d mode.
    /// Flag <theModeBoth> defines miscible mode and the flag <theMode3D> is ignored.
    /// Returns False if wire is already ordered (tail-to-head),
    /// True otherwise.
    /// Use returned WireOrder object for deeper analysis.
    /// Status:
    /// OK   : the same edges orientation, the same edges sequence
    /// DONE1: the same edges orientation, not the same edges sequence
    /// DONE2: as DONE1 and gaps more than myPrecision
    /// DONE3: not the same edges orientation (some need to be reversed)
    /// DONE4: as DONE3 and gaps more than myPrecision
    /// FAIL : algorithm failed (could not detect order)
    /// </summary>
    bool CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed, bool theMode3D);
    /// <summary>
    /// Analyzes the order of the edges in the wire,
    /// uses class WireOrder for that purpose.
    /// Flag <isClosed> defines if the wire is closed or not
    /// Flag <theMode3D> defines 3D or 2d mode.
    /// Flag <theModeBoth> defines miscible mode and the flag <theMode3D> is ignored.
    /// Returns False if wire is already ordered (tail-to-head),
    /// True otherwise.
    /// Use returned WireOrder object for deeper analysis.
    /// Status:
    /// OK   : the same edges orientation, the same edges sequence
    /// DONE1: the same edges orientation, not the same edges sequence
    /// DONE2: as DONE1 and gaps more than myPrecision
    /// DONE3: not the same edges orientation (some need to be reversed)
    /// DONE4: as DONE3 and gaps more than myPrecision
    /// FAIL : algorithm failed (could not detect order)
    /// </summary>
    bool CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed);
    /// <summary>
    /// Analyzes the order of the edges in the wire,
    /// uses class WireOrder for that purpose.
    /// Flag <isClosed> defines if the wire is closed or not
    /// Flag <theMode3D> defines 3D or 2d mode.
    /// Flag <theModeBoth> defines miscible mode and the flag <theMode3D> is ignored.
    /// Returns False if wire is already ordered (tail-to-head),
    /// True otherwise.
    /// Use returned WireOrder object for deeper analysis.
    /// Status:
    /// OK   : the same edges orientation, the same edges sequence
    /// DONE1: the same edges orientation, not the same edges sequence
    /// DONE2: as DONE1 and gaps more than myPrecision
    /// DONE3: not the same edges orientation (some need to be reversed)
    /// DONE4: as DONE3 and gaps more than myPrecision
    /// FAIL : algorithm failed (could not detect order)
    /// </summary>
    bool CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo);
    /// <summary>
    /// Checks connected edges (num-th and preceding).
    /// Tests with starting preci from <SBWD> or  with <prec> if
    /// it is greater.
    /// Considers Vertices.
    /// Returns: False if edges are connected by the common vertex, else True
    /// Status  :
    /// OK    : Vertices (end of num-1 th edge and start on num-th one)
    /// are already the same
    /// DONE1 : Absolutely confused (gp::Resolution)
    /// DONE2 : Confused at starting <preci> from <SBWD>
    /// DONE3 : Confused at <prec> but not <preci>
    /// FAIL1 : Not confused
    /// FAIL2 : Not confused but confused with <preci> if reverse num-th edge
    /// </summary>
    bool CheckConnected(int num, double prec);
    /// <summary>
    /// Checks connected edges (num-th and preceding).
    /// Tests with starting preci from <SBWD> or  with <prec> if
    /// it is greater.
    /// Considers Vertices.
    /// Returns: False if edges are connected by the common vertex, else True
    /// Status  :
    /// OK    : Vertices (end of num-1 th edge and start on num-th one)
    /// are already the same
    /// DONE1 : Absolutely confused (gp::Resolution)
    /// DONE2 : Confused at starting <preci> from <SBWD>
    /// DONE3 : Confused at <prec> but not <preci>
    /// FAIL1 : Not confused
    /// FAIL2 : Not confused but confused with <preci> if reverse num-th edge
    /// </summary>
    bool CheckConnected(int num);
    /// <summary>
    /// Checks if an edge has a length not greater than myPreci or
    /// precsmall (if it is smaller)
    /// Returns: False if its length is greater than precision
    /// Status:
    /// OK   : edge is not small or degenerated
    /// DONE1: edge is small, vertices are the same
    /// DONE2: edge is small, vertices are not the same
    /// FAIL : no 3d curve and pcurve
    /// </summary>
    bool CheckSmall(int num, double precsmall);
    /// <summary>
    /// Checks if an edge has a length not greater than myPreci or
    /// precsmall (if it is smaller)
    /// Returns: False if its length is greater than precision
    /// Status:
    /// OK   : edge is not small or degenerated
    /// DONE1: edge is small, vertices are the same
    /// DONE2: edge is small, vertices are not the same
    /// FAIL : no 3d curve and pcurve
    /// </summary>
    bool CheckSmall(int num);
    /// <summary>
    /// Checks if a seam pcurves are correct oriented
    /// Returns: False (status OK) if given edge is not a seam or if it is OK
    /// C1 - current pcurve for FORWARD edge,
    /// C2 - current pcurve for REVERSED edge (if returns True they
    /// should be swapped for the seam),
    /// cf, cl - first and last parameters on curves
    /// Status:
    /// OK   : Pcurves are correct or edge is not seam
    /// DONE : Seam pcurves should be swapped
    /// </summary>
    bool CheckSeam(int num, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double% cf, double% cl);
    /// <summary>
    /// Checks if a seam pcurves are correct oriented
    /// See previous functions for details
    /// </summary>
    bool CheckSeam(int num);
    /// <summary>
    /// Checks for degenerated edge between two adjacent ones.
    /// Fills parameters dgnr1 and dgnr2 with points in parametric
    /// space that correspond to the singularity (either gap that
    /// needs to be filled by degenerated edge or that already filled)
    /// Returns: False if no singularity or edge is already degenerated,
    /// otherwise True
    /// Status:
    /// OK   : No surface singularity, or edge is already degenerated
    /// DONE1: Degenerated edge should be inserted (gap in 2D)
    /// DONE2: Edge <num> should be made degenerated (recompute pcurve
    /// and set the flag)
    /// FAIL1: One of edges neighbouring to degenerated one has
    /// no pcurve
    /// FAIL2: Edge marked as degenerated and has no pcurve
    /// but singularity is not detected
    /// </summary>
    bool CheckDegenerated(int num, Macad::Occt::Pnt2d% dgnr1, Macad::Occt::Pnt2d% dgnr2);
    /// <summary>
    /// Checks for degenerated edge between two adjacent ones.
    /// Remark : Calls previous function
    /// Status : See the function above for details
    /// </summary>
    bool CheckDegenerated(int num);
    /// <summary>
    /// Checks gap between edges in 3D (3d curves).
    /// Checks the distance between ends of 3d curves of the num-th
    /// and preceding edge.
    /// The distance can be queried by MinDistance3d.
    /// 
    /// Returns: True if status is DONE
    /// Status:
    /// OK   : Gap is less than myPrecision
    /// DONE : Gap is greater than myPrecision
    /// FAIL : No 3d curve(s) on the edge(s)
    /// </summary>
    bool CheckGap3d(int num);
    /// <summary>
    /// Checks gap between edges in 3D (3d curves).
    /// Checks the distance between ends of 3d curves of the num-th
    /// and preceding edge.
    /// The distance can be queried by MinDistance3d.
    /// 
    /// Returns: True if status is DONE
    /// Status:
    /// OK   : Gap is less than myPrecision
    /// DONE : Gap is greater than myPrecision
    /// FAIL : No 3d curve(s) on the edge(s)
    /// </summary>
    bool CheckGap3d();
    /// <summary>
    /// Checks gap between edges in 2D (pcurves).
    /// Checks the distance between ends of pcurves of the num-th
    /// and preceding edge.
    /// The distance can be queried by MinDistance2d.
    /// 
    /// Returns: True if status is DONE
    /// Status:
    /// OK   : Gap is less than parametric precision out of myPrecision
    /// DONE : Gap is greater than parametric precision out of myPrecision
    /// FAIL : No pcurve(s) on the edge(s)
    /// </summary>
    bool CheckGap2d(int num);
    /// <summary>
    /// Checks gap between edges in 2D (pcurves).
    /// Checks the distance between ends of pcurves of the num-th
    /// and preceding edge.
    /// The distance can be queried by MinDistance2d.
    /// 
    /// Returns: True if status is DONE
    /// Status:
    /// OK   : Gap is less than parametric precision out of myPrecision
    /// DONE : Gap is greater than parametric precision out of myPrecision
    /// FAIL : No pcurve(s) on the edge(s)
    /// </summary>
    bool CheckGap2d();
    /// <summary>
    /// Checks gap between points on 3D curve and points on surface
    /// generated by pcurve of the num-th edge.
    /// The distance can be queried by MinDistance3d.
    /// 
    /// Returns: True if status is DONE
    /// Status:
    /// OK   : Gap is less than myPrecision
    /// DONE : Gap is greater than myPrecision
    /// FAIL : No 3d curve(s) on the edge(s)
    /// </summary>
    bool CheckCurveGap(int num);
    /// <summary>
    /// Checks gap between points on 3D curve and points on surface
    /// generated by pcurve of the num-th edge.
    /// The distance can be queried by MinDistance3d.
    /// 
    /// Returns: True if status is DONE
    /// Status:
    /// OK   : Gap is less than myPrecision
    /// DONE : Gap is greater than myPrecision
    /// FAIL : No 3d curve(s) on the edge(s)
    /// </summary>
    bool CheckCurveGap();
    /* Method skipped due to unknown mapping: bool CheckSelfIntersectingEdge(int num, IntRes2d_SequenceOfIntersectionPoint points2d, TColgp_SequenceOfPnt points3d, ) */
    bool CheckSelfIntersectingEdge(int num);
    /* Method skipped due to unknown mapping: bool CheckIntersectingEdges(int num, IntRes2d_SequenceOfIntersectionPoint points2d, TColgp_SequenceOfPnt points3d, TColStd_SequenceOfReal errors, ) */
    /// <summary>
    /// Checks two adjacent edges for intersecting.
    /// Remark : Calls the previous method
    /// Status : See the function above for details
    /// </summary>
    bool CheckIntersectingEdges(int num);
    /* Method skipped due to unknown mapping: bool CheckIntersectingEdges(int num1, int num2, IntRes2d_SequenceOfIntersectionPoint points2d, TColgp_SequenceOfPnt points3d, TColStd_SequenceOfReal errors, ) */
    /// <summary>
    /// Checks i-th and j-th edges for intersecting.
    /// Remark : Calls  previous method.
    /// Status : See the function above for details
    /// </summary>
    bool CheckIntersectingEdges(int num1, int num2);
    /// <summary>
    /// Checks if there is a gap in 2d between edges, not comprised by
    /// the tolerance of their common vertex.
    /// If <Tolerance> is greater than 0. and less than tolerance of
    /// the vertex, then this value is used for check.
    /// Returns: True if not closed gap was detected
    /// p2d1 and p2d2 are the endpoint of <num-1>th edge and start of
    /// the <num>th edge in 2d.
    /// Status:
    /// OK: No edge is lacking (3d and 2d connection)
    /// FAIL1: edges have no vertices (at least one of them)
    /// FAIL2: edges are neither connected by common vertex, nor have
    /// coincided vertices
    /// FAIL1: edges have no pcurves
    /// DONE1: the gap is detected which cannot be closed by the tolerance
    /// of the common vertex (or with value of <Tolerance>)
    /// DONE2: is set (together with DONE1) if gap is detected and the
    /// vector (p2d2 - p2d1) goes in direction opposite to the pcurves
    /// of the edges (if angle is more than 0.9*PI).
    /// </summary>
    bool CheckLacking(int num, double Tolerance, Macad::Occt::Pnt2d% p2d1, Macad::Occt::Pnt2d% p2d2);
    /// <summary>
    /// Checks if there is a gap in 2D between edges and not comprised by vertex tolerance
    /// The value of SBWD.thepreci is used.
    /// Returns: False if no edge should be inserted
    /// Status:
    /// OK    : No edge is lacking (3d and 2d connection)
    /// DONE1 : The vertex tolerance should be increased only (2d gap is
    /// small)
    /// DONE2 : Edge can be inserted (3d and 2d gaps are large enough)
    /// </summary>
    bool CheckLacking(int num, double Tolerance);
    /// <summary>
    /// Checks if there is a gap in 2D between edges and not comprised by vertex tolerance
    /// The value of SBWD.thepreci is used.
    /// Returns: False if no edge should be inserted
    /// Status:
    /// OK    : No edge is lacking (3d and 2d connection)
    /// DONE1 : The vertex tolerance should be increased only (2d gap is
    /// small)
    /// DONE2 : Edge can be inserted (3d and 2d gaps are large enough)
    /// </summary>
    bool CheckLacking(int num);
    /// <summary>
    /// Checks if wire defines an outer bound on the face
    /// Uses ShapeAnalysis::IsOuterBound for analysis
    /// If <APIMake> is True uses BRepAPI_MakeWire to build the
    /// wire, if False (to be used only when edges share common
    /// vertices) uses BRep_Builder to build the wire
    /// </summary>
    bool CheckOuterBound(bool APIMake);
    /// <summary>
    /// Checks if wire defines an outer bound on the face
    /// Uses ShapeAnalysis::IsOuterBound for analysis
    /// If <APIMake> is True uses BRepAPI_MakeWire to build the
    /// wire, if False (to be used only when edges share common
    /// vertices) uses BRep_Builder to build the wire
    /// </summary>
    bool CheckOuterBound();
    /// <summary>
    /// Detects a notch
    /// </summary>
    bool CheckNotchedEdges(int num, int% shortNum, double% param, double Tolerance);
    /// <summary>
    /// Detects a notch
    /// </summary>
    bool CheckNotchedEdges(int num, int% shortNum, double% param);
    /// <summary>
    /// Checks if wire has parametric area less than precision.
    /// </summary>
    bool CheckSmallArea(Macad::Occt::TopoDS_Wire^ theWire);
    /// <summary>
    /// Checks with what orientation <shape> (wire or edge) can be
    /// connected to the wire.
    /// Tests distances with starting <preci> from <SBWD> (close confusion),
    /// but if given <prec> is greater, tests with <prec> (coarse confusion).
    /// The smallest found distance can be returned by MinDistance3d
    /// 
    /// Returns: False if status is FAIL (see below)
    /// Status:
    /// DONE1 : If <shape> follows <SBWD>, direct sense (normal)
    /// DONE2 : If <shape> follows <SBWD>, but if reversed
    /// DONE3 : If <shape> precedes <SBWD>, direct sense
    /// DONE4 : If <shape> precedes <SBWD>, but if reversed
    /// FAIL1 : If <shape> is neither an edge nor a wire
    /// FAIL2 : If <shape> cannot be connected to <SBWD>
    /// 
    /// DONE5 : To the tail of <SBWD> the <shape> is closer with
    /// direct sense
    /// DONE6 : To the head of <SBWD> the <shape> is closer with
    /// direct sense
    /// 
    /// Remark:   Statuses DONE1 - DONE4, FAIL1 - FAIL2 are basic and
    /// describe the nearest connection of the <shape> to <SBWD>.
    /// Statuses DONE5 and DONE6 are advanced and are to be used when
    /// analyzing with what sense (direct or reversed) the <shape>
    /// should be connected to <SBWD>:
    /// For tail of <SBWD> if DONE4 is True <shape> should be direct,
    /// otherwise reversed.
    /// For head of <SBWD> if DONE5 is True <shape> should be direct,
    /// otherwise reversed.
    /// </summary>
    bool CheckShapeConnect(Macad::Occt::TopoDS_Shape^ shape, double prec);
    /// <summary>
    /// Checks with what orientation <shape> (wire or edge) can be
    /// connected to the wire.
    /// Tests distances with starting <preci> from <SBWD> (close confusion),
    /// but if given <prec> is greater, tests with <prec> (coarse confusion).
    /// The smallest found distance can be returned by MinDistance3d
    /// 
    /// Returns: False if status is FAIL (see below)
    /// Status:
    /// DONE1 : If <shape> follows <SBWD>, direct sense (normal)
    /// DONE2 : If <shape> follows <SBWD>, but if reversed
    /// DONE3 : If <shape> precedes <SBWD>, direct sense
    /// DONE4 : If <shape> precedes <SBWD>, but if reversed
    /// FAIL1 : If <shape> is neither an edge nor a wire
    /// FAIL2 : If <shape> cannot be connected to <SBWD>
    /// 
    /// DONE5 : To the tail of <SBWD> the <shape> is closer with
    /// direct sense
    /// DONE6 : To the head of <SBWD> the <shape> is closer with
    /// direct sense
    /// 
    /// Remark:   Statuses DONE1 - DONE4, FAIL1 - FAIL2 are basic and
    /// describe the nearest connection of the <shape> to <SBWD>.
    /// Statuses DONE5 and DONE6 are advanced and are to be used when
    /// analyzing with what sense (direct or reversed) the <shape>
    /// should be connected to <SBWD>:
    /// For tail of <SBWD> if DONE4 is True <shape> should be direct,
    /// otherwise reversed.
    /// For head of <SBWD> if DONE5 is True <shape> should be direct,
    /// otherwise reversed.
    /// </summary>
    bool CheckShapeConnect(Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// The same as previous CheckShapeConnect but is more advanced.
    /// It returns the distances between each end of <sbwd> and each
    /// end of <shape>. For example, <tailhead> stores distance
    /// between tail of <sbwd> and head of <shape>
    /// Remark:  First method CheckShapeConnect calls this one
    /// </summary>
    bool CheckShapeConnect(double% tailhead, double% tailtail, double% headtail, double% headhead, Macad::Occt::TopoDS_Shape^ shape, double prec);
    /// <summary>
    /// The same as previous CheckShapeConnect but is more advanced.
    /// It returns the distances between each end of <sbwd> and each
    /// end of <shape>. For example, <tailhead> stores distance
    /// between tail of <sbwd> and head of <shape>
    /// Remark:  First method CheckShapeConnect calls this one
    /// </summary>
    bool CheckShapeConnect(double% tailhead, double% tailtail, double% headtail, double% headhead, Macad::Occt::TopoDS_Shape^ shape);
    /// <summary>
    /// Checks existence of loop on wire and return vertices which are loop vertices
    /// (vertices belonging to a few pairs of edges)
    /// </summary>
    bool CheckLoop(Macad::Occt::TopTools_IndexedMapOfShape^ aMapLoopVertices, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ aMapVertexEdges, Macad::Occt::TopTools_MapOfShape^ aMapSmallEdges, Macad::Occt::TopTools_MapOfShape^ aMapSeemEdges);
    bool CheckTail(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double theMaxSine, double theMaxWidth, double theMaxTolerance, Macad::Occt::TopoDS_Edge^ theEdge11, Macad::Occt::TopoDS_Edge^ theEdge12, Macad::Occt::TopoDS_Edge^ theEdge21, Macad::Occt::TopoDS_Edge^ theEdge22);
    /* Method skipped due to unknown mapping: bool StatusOrder(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusConnected(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusEdgeCurves(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusDegenerated(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusClosed(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusSmall(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusSelfIntersection(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusLacking(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusGaps3d(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusGaps2d(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusCurveGaps(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool StatusLoop(ShapeExtend_Status Status, ) */
    /* Method skipped due to unknown mapping: bool LastCheckStatus(ShapeExtend_Status Status, ) */
    /// <summary>
    /// Returns the last lowest distance in 3D computed by
    /// CheckOrientation, CheckConnected, CheckContinuity3d,
    /// CheckVertex, CheckNewVertex
    /// </summary>
    double MinDistance3d();
    /// <summary>
    /// Returns the last lowest distance in 2D-UV computed by
    /// CheckContinuity2d
    /// </summary>
    double MinDistance2d();
    /// <summary>
    /// Returns the last maximal distance in 3D computed by
    /// CheckOrientation, CheckConnected, CheckContinuity3d,
    /// CheckVertex, CheckNewVertex, CheckSameParameter
    /// </summary>
    double MaxDistance3d();
    /// <summary>
    /// Returns the last maximal distance in 2D-UV computed by
    /// CheckContinuity2d
    /// </summary>
    double MaxDistance2d();
    static Macad::Occt::ShapeAnalysis_Wire^ CreateDowncasted(::ShapeAnalysis_Wire* instance);
}; // class ShapeAnalysis_Wire

//---------------------------------------------------------------------
//  Class  ShapeAnalysis_WireVertex
//---------------------------------------------------------------------
/// <summary>
/// Analyzes and records status of vertices in a Wire
/// 
/// The Wire has formerly been loaded in a ShapeExtend_WireData
/// For each Vertex, a status and some data can be attached
/// (case found, position and parameters)
/// Then, these information can be used to fix problems
/// </summary>
public ref class ShapeAnalysis_WireVertex sealed
    : public Macad::Occt::BaseClass<::ShapeAnalysis_WireVertex>
{

#ifdef Include_ShapeAnalysis_WireVertex_h
public:
    Include_ShapeAnalysis_WireVertex_h
#endif

public:
    ShapeAnalysis_WireVertex(::ShapeAnalysis_WireVertex* nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_WireVertex>( nativeInstance, true )
    {}

    ShapeAnalysis_WireVertex(::ShapeAnalysis_WireVertex& nativeInstance)
        : Macad::Occt::BaseClass<::ShapeAnalysis_WireVertex>( &nativeInstance, false )
    {}

    property ::ShapeAnalysis_WireVertex* NativeInstance
    {
        ::ShapeAnalysis_WireVertex* get()
        {
            return static_cast<::ShapeAnalysis_WireVertex*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    ShapeAnalysis_WireVertex();
    void Init(Macad::Occt::TopoDS_Wire^ wire, double preci);
    /* Method skipped due to unknown mapping: void Init(ShapeExtend_WireData swbd, double preci, ) */
    void Load(Macad::Occt::TopoDS_Wire^ wire);
    /* Method skipped due to unknown mapping: void Load(ShapeExtend_WireData sbwd, ) */
    /// <summary>
    /// Sets the precision for work
    /// Analysing: for each Vertex, comparison between the end of the
    /// preceding edge and the start of the following edge
    /// Each Vertex rank corresponds to the End Vertex of the Edge of
    /// same rank, in the ShapeExtend_WireData. I.E. for Vertex <num>,
    /// Edge <num> is the preceding one, <num+1> is the following one
    /// </summary>
    void SetPrecision(double preci);
    void Analyze();
    /// <summary>
    /// Records status "Same Vertex" (logically) on Vertex <num>
    /// </summary>
    void SetSameVertex(int num);
    /// <summary>
    /// Records status "Same Coords" (at the Vertices Tolerances)
    /// </summary>
    void SetSameCoords(int num);
    /// <summary>
    /// Records status "Close Coords" (at the Precision of <me>)
    /// </summary>
    void SetClose(int num);
    /// <summary>
    /// <num> is the End of preceding Edge, and its projection on the
    /// following one lies on it at the Precision of <me>
    /// <ufol> gives the parameter on the following edge
    /// </summary>
    void SetEnd(int num, Macad::Occt::XYZ pos, double ufol);
    /// <summary>
    /// <num> is the Start of following Edge, its projection on the
    /// preceding one lies on it at the Precision of <me>
    /// <upre> gives the parameter on the preceding edge
    /// </summary>
    void SetStart(int num, Macad::Occt::XYZ pos, double upre);
    /// <summary>
    /// <num> is the Intersection of both Edges
    /// <upre> is the parameter on preceding edge, <ufol> on
    /// following edge
    /// </summary>
    void SetInters(int num, Macad::Occt::XYZ pos, double upre, double ufol);
    /// <summary>
    /// <num> cannot be said as same vertex
    /// </summary>
    void SetDisjoined(int num);
    /// <summary>
    /// Returns True if analysis was performed, else returns False
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns precision value used in analysis
    /// </summary>
    double Precision();
    /// <summary>
    /// Returns the number of edges in analyzed wire (i.e. the
    /// length of all arrays)
    /// </summary>
    int NbEdges();
    /* Method skipped due to unknown mapping: ShapeExtend_WireData WireData() */
    /// <summary>
    /// Returns the recorded status for a vertex
    /// More detail by method Data
    /// </summary>
    int Status(int num);
    Macad::Occt::XYZ Position(int num);
    double UPrevious(int num);
    double UFollowing(int num);
    /// <summary>
    /// Returns the recorded status for a vertex
    /// With its recorded position and parameters on both edges
    /// These values are relevant regarding the status:
    /// Status  Meaning    Position  Preceding   Following
    /// 0       Same       no        no          no
    /// 1       SameCoord  no        no          no
    /// 2       Close      no        no          no
    /// 3       End        yes       no          yes
    /// 4       Start      yes       yes         no
    /// 5       Inters     yes       yes         yes
    /// -1      Disjoined  no        no          no
    /// </summary>
    int Data(int num, Macad::Occt::XYZ% pos, double% upre, double% ufol);
    /// <summary>
    /// For a given status, returns the rank of the vertex which
    /// follows <num> and has the same status. 0 if no more
    /// Acts as an iterator, starts on the first one
    /// </summary>
    int NextStatus(int stat, int num);
    /// <summary>
    /// For a given status, returns the rank of the vertex which
    /// follows <num> and has the same status. 0 if no more
    /// Acts as an iterator, starts on the first one
    /// </summary>
    int NextStatus(int stat);
    /// <summary>
    /// For a given criter, returns the rank of the vertex which
    /// follows <num> and has the same status. 0 if no more
    /// Acts as an iterator, starts on the first one
    /// Criters are:
    /// 0: same vertex (status 0)
    /// 1: a solution exists (status >= 0)
    /// 2: same coords (i.e. same params) (status 0 1 2)
    /// 3: same coods but not same vertex (status 1 2)
    /// 4: redefined coords (status 3 4 5)
    /// -1: no solution (status -1)
    /// </summary>
    int NextCriter(int crit, int num);
    /// <summary>
    /// For a given criter, returns the rank of the vertex which
    /// follows <num> and has the same status. 0 if no more
    /// Acts as an iterator, starts on the first one
    /// Criters are:
    /// 0: same vertex (status 0)
    /// 1: a solution exists (status >= 0)
    /// 2: same coords (i.e. same params) (status 0 1 2)
    /// 3: same coods but not same vertex (status 1 2)
    /// 4: redefined coords (status 3 4 5)
    /// -1: no solution (status -1)
    /// </summary>
    int NextCriter(int crit);
}; // class ShapeAnalysis_WireVertex

}; // namespace Occt
}; // namespace Macad
