// Generated wrapper code for package BRepExtrema

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepExtrema_SupportType
//---------------------------------------------------------------------
public enum class BRepExtrema_SupportType
{
    IsVertex = 0,
    IsOnEdge = 1,
    IsInFace = 2
}; // enum  class BRepExtrema_SupportType

//---------------------------------------------------------------------
//  Class  BRepExtrema_SeqOfSolution
//---------------------------------------------------------------------
public ref class BRepExtrema_SeqOfSolution sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution>
    , public IIndexEnumerable<Macad::Occt::BRepExtrema_SolutionElem^>
{

#ifdef Include_BRepExtrema_SeqOfSolution_h
public:
    Include_BRepExtrema_SeqOfSolution_h
#endif

public:
    BRepExtrema_SeqOfSolution(::BRepExtrema_SeqOfSolution* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution>( nativeInstance, true )
    {}

    BRepExtrema_SeqOfSolution(::BRepExtrema_SeqOfSolution& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution>( &nativeInstance, false )
    {}

    property ::BRepExtrema_SeqOfSolution* NativeInstance
    {
        ::BRepExtrema_SeqOfSolution* get()
        {
            return static_cast<::BRepExtrema_SeqOfSolution*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution::Iterator>
    {

#ifdef Include_BRepExtrema_SeqOfSolution_Iterator_h
    public:
        Include_BRepExtrema_SeqOfSolution_Iterator_h
#endif

    public:
        Iterator(::BRepExtrema_SeqOfSolution::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepExtrema_SeqOfSolution::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution::Iterator>( &nativeInstance, false )
        {}

        property ::BRepExtrema_SeqOfSolution::Iterator* NativeInstance
        {
            ::BRepExtrema_SeqOfSolution::Iterator* get()
            {
                return static_cast<::BRepExtrema_SeqOfSolution::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::BRepExtrema_SolutionElem^ Value();
        Macad::Occt::BRepExtrema_SolutionElem^ ChangeValue();
        bool IsEqual(Macad::Occt::BRepExtrema_SeqOfSolution::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    BRepExtrema_SeqOfSolution();
    BRepExtrema_SeqOfSolution(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::BRepExtrema_SeqOfSolution^ Assign(Macad::Occt::BRepExtrema_SeqOfSolution^ theOther);
    void Remove(Macad::Occt::BRepExtrema_SeqOfSolution::Iterator^ thePosition);
    void Append(Macad::Occt::BRepExtrema_SolutionElem^ theItem);
    void Prepend(Macad::Occt::BRepExtrema_SolutionElem^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem);
    void InsertAfter(Macad::Occt::BRepExtrema_SeqOfSolution::Iterator^ thePosition, Macad::Occt::BRepExtrema_SolutionElem^ theItem);
    void Split(int theIndex, Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq);
    Macad::Occt::BRepExtrema_SolutionElem^ First();
    Macad::Occt::BRepExtrema_SolutionElem^ ChangeFirst();
    Macad::Occt::BRepExtrema_SolutionElem^ Last();
    Macad::Occt::BRepExtrema_SolutionElem^ ChangeLast();
    virtual Macad::Occt::BRepExtrema_SolutionElem^ Value(int theIndex);
    Macad::Occt::BRepExtrema_SolutionElem^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::BRepExtrema_SolutionElem^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepExtrema_SeqOfSolution

//---------------------------------------------------------------------
//  Class  BRepExtrema_MapOfIntegerPackedMapOfInteger
//---------------------------------------------------------------------
/// <summary>
/// Set of overlapped sub-shapes.
/// </summary>
public ref class BRepExtrema_MapOfIntegerPackedMapOfInteger sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>
{

#ifdef Include_BRepExtrema_MapOfIntegerPackedMapOfInteger_h
public:
    Include_BRepExtrema_MapOfIntegerPackedMapOfInteger_h
#endif

public:
    BRepExtrema_MapOfIntegerPackedMapOfInteger(::BRepExtrema_MapOfIntegerPackedMapOfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>( nativeInstance, true )
    {}

    BRepExtrema_MapOfIntegerPackedMapOfInteger(::BRepExtrema_MapOfIntegerPackedMapOfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>( &nativeInstance, false )
    {}

    property ::BRepExtrema_MapOfIntegerPackedMapOfInteger* NativeInstance
    {
        ::BRepExtrema_MapOfIntegerPackedMapOfInteger* get()
        {
            return static_cast<::BRepExtrema_MapOfIntegerPackedMapOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator>
    {

#ifdef Include_BRepExtrema_MapOfIntegerPackedMapOfInteger_Iterator_h
    public:
        Include_BRepExtrema_MapOfIntegerPackedMapOfInteger_Iterator_h
#endif

    public:
        Iterator(::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator* NativeInstance
        {
            ::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator* get()
            {
                return static_cast<::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColStd_PackedMapOfInteger^ Value();
        Macad::Occt::TColStd_PackedMapOfInteger^ ChangeValue();
        int Key();
    }; // class Iterator

    BRepExtrema_MapOfIntegerPackedMapOfInteger();
    BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets);
    void Exchange(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther);
    Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Assign(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, Macad::Occt::TColStd_PackedMapOfInteger^ theItem);
    Macad::Occt::TColStd_PackedMapOfInteger^ Bound(int theKey, Macad::Occt::TColStd_PackedMapOfInteger^ theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    Macad::Occt::TColStd_PackedMapOfInteger^ Seek(int theKey);
    Macad::Occt::TColStd_PackedMapOfInteger^ Find(int theKey);
    Macad::Occt::TColStd_PackedMapOfInteger^ ChangeSeek(int theKey);
    Macad::Occt::TColStd_PackedMapOfInteger^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepExtrema_MapOfIntegerPackedMapOfInteger

//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeList
//---------------------------------------------------------------------
/// <summary>
/// List of shapes and their IDs for collision detection.
/// </summary>
public ref class BRepExtrema_ShapeList sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ShapeList>
    , public IIndexEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_BRepExtrema_ShapeList_h
public:
    Include_BRepExtrema_ShapeList_h
#endif

public:
    BRepExtrema_ShapeList(::BRepExtrema_ShapeList* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ShapeList>( nativeInstance, true )
    {}

    BRepExtrema_ShapeList(::BRepExtrema_ShapeList& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ShapeList>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ShapeList* NativeInstance
    {
        ::BRepExtrema_ShapeList* get()
        {
            return static_cast<::BRepExtrema_ShapeList*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepExtrema_ShapeList::Iterator>
    {

#ifdef Include_BRepExtrema_ShapeList_Iterator_h
    public:
        Include_BRepExtrema_ShapeList_Iterator_h
#endif

    public:
        Iterator(::BRepExtrema_ShapeList::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepExtrema_ShapeList::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepExtrema_ShapeList::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepExtrema_ShapeList::Iterator>( &nativeInstance, false )
        {}

        property ::BRepExtrema_ShapeList::Iterator* NativeInstance
        {
            ::BRepExtrema_ShapeList::Iterator* get()
            {
                return static_cast<::BRepExtrema_ShapeList::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    BRepExtrema_ShapeList(int theIncrement);
    BRepExtrema_ShapeList();
    BRepExtrema_ShapeList(int theIncrement, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /* Method skipped due to unknown mapping: void BRepExtrema_ShapeList(int theIncrement, allocator_type theAllocator, ) */
    int Length();
    int Size();
    int Lower();
    int Upper();
    bool IsEmpty();
    Macad::Occt::BRepExtrema_ShapeList^ Assign(Macad::Occt::BRepExtrema_ShapeList^ theOther, bool theOwnAllocator);
    Macad::Occt::BRepExtrema_ShapeList^ Assign(Macad::Occt::BRepExtrema_ShapeList^ theOther);
    Macad::Occt::TopoDS_Shape^ Append(Macad::Occt::TopoDS_Shape^ theValue);
    void EraseLast();
    Macad::Occt::TopoDS_Shape^ Appended();
    virtual Macad::Occt::TopoDS_Shape^ Value(int theIndex);
    Macad::Occt::TopoDS_Shape^ First();
    Macad::Occt::TopoDS_Shape^ ChangeFirst();
    Macad::Occt::TopoDS_Shape^ Last();
    Macad::Occt::TopoDS_Shape^ ChangeLast();
    Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
    Macad::Occt::TopoDS_Shape^ SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theValue);
    void Clear(bool theReleaseMemory);
    void Clear();
    void SetIncrement(int theIncrement);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepExtrema_ShapeList

//---------------------------------------------------------------------
//  Class  BRepExtrema_ElementFilter
//---------------------------------------------------------------------
/// <summary>
/// Filtering tool used to detect if two given mesh elements
/// should be tested for overlapping/intersection or not.
/// </summary>
public ref class BRepExtrema_ElementFilter sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ElementFilter>
{

#ifdef Include_BRepExtrema_ElementFilter_h
public:
    Include_BRepExtrema_ElementFilter_h
#endif

public:
    BRepExtrema_ElementFilter(::BRepExtrema_ElementFilter* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ElementFilter>( nativeInstance, true )
    {}

    BRepExtrema_ElementFilter(::BRepExtrema_ElementFilter& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ElementFilter>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ElementFilter* NativeInstance
    {
        ::BRepExtrema_ElementFilter* get()
        {
            return static_cast<::BRepExtrema_ElementFilter*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  FilterResult
    //---------------------------------------------------------------------
    /// <summary>
    /// Result of filtering function.
    /// </summary>
    enum class FilterResult
    {
        NoCheck = 0,
        Overlap = 1,
        DoCheck = 2
    }; // enum  class FilterResult

    BRepExtrema_ElementFilter();
    /// <summary>
    /// Checks if two mesh elements should be tested for overlapping/intersection
    /// (used for detection correct/incorrect cases of shared edges and vertices).
    /// </summary>
    Macad::Occt::BRepExtrema_ElementFilter::FilterResult PreCheckElements(int parameter1, int parameter2);
}; // class BRepExtrema_ElementFilter

//---------------------------------------------------------------------
//  Class  BRepExtrema_SolutionElem
//---------------------------------------------------------------------
/// <summary>
/// This class is used to store information relative to the minimum distance between two shapes.
/// </summary>
public ref class BRepExtrema_SolutionElem sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_SolutionElem>
{

#ifdef Include_BRepExtrema_SolutionElem_h
public:
    Include_BRepExtrema_SolutionElem_h
#endif

public:
    BRepExtrema_SolutionElem(::BRepExtrema_SolutionElem* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_SolutionElem>( nativeInstance, true )
    {}

    BRepExtrema_SolutionElem(::BRepExtrema_SolutionElem& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_SolutionElem>( &nativeInstance, false )
    {}

    property ::BRepExtrema_SolutionElem* NativeInstance
    {
        ::BRepExtrema_SolutionElem* get()
        {
            return static_cast<::BRepExtrema_SolutionElem*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BRepExtrema_SolutionElem();
    /// <summary>
    /// This constructor is used when the solution of a distance is a Vertex.
    /// The different initialized fields are:
    /// </summary>
    /// <param name="theDist">
    ///    the distance
    /// </param>
    /// <param name="thePoint">
    ///   the solution point
    /// </param>
    /// <param name="theSolType">
    /// the type of solution
    /// </param>
    /// <param name="theVertex">
    ///  and the Vertex
    /// </param>
    BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Vertex^ theVertex);
    /// <summary>
    /// This constructor is used when the  solution of distance is on an Edge.
    /// The different initialized fields are:
    /// </summary>
    /// <param name="theDist">
    ///    the distance
    /// </param>
    /// <param name="thePoint">
    ///   the solution point
    /// </param>
    /// <param name="theSolType">
    /// the type of solution
    /// </param>
    /// <param name="theEdge">
    ///    the Edge
    /// </param>
    /// <param name="theParam">
    ///   the parameter to locate the solution
    /// </param>
    BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Edge^ theEdge, double theParam);
    /// <summary>
    /// This constructor is used when the  solution of distance is in a Face.
    /// The different initialized fields are:
    /// </summary>
    /// <param name="theDist">
    ///    the distance
    /// </param>
    /// <param name="thePoint">
    ///   the solution point
    /// </param>
    /// <param name="theSolType">
    /// the type of solution
    /// </param>
    /// <param name="theFace">
    ///    the Face
    /// </param>
    /// <param name="theU">
    ///       U parameter to locate the solution
    /// </param>
    /// <param name="theV">
    ///       V parameter to locate the solution
    /// </param>
    BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Face^ theFace, double theU, double theV);
    /// <summary>
    /// Returns the value of the minimum distance.
    /// </summary>
    double Dist();
    /// <summary>
    /// Returns the solution point.
    /// </summary>
    Macad::Occt::Pnt Point();
    /// <summary>
    /// Returns the Support type:
    /// IsVertex => The solution is a vertex.
    /// IsOnEdge => The solution belongs to an Edge.
    /// IsInFace => The solution is inside a Face.
    /// </summary>
    Macad::Occt::BRepExtrema_SupportType SupportKind();
    /// <summary>
    /// Returns the vertex if the solution is a Vertex.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex();
    /// <summary>
    /// Returns the vertex if the solution is an Edge.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge();
    /// <summary>
    /// Returns the vertex if the solution is an Face.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
    /// <summary>
    /// Returns the parameter value if the solution is on Edge.
    /// </summary>
    void EdgeParameter(double% theParam);
    /// <summary>
    /// Returns the parameters U and V if the solution is in a Face.
    /// </summary>
    void FaceParameter(double% theU, double% theV);
}; // class BRepExtrema_SolutionElem

//---------------------------------------------------------------------
//  Class  BRepExtrema_DistanceSS
//---------------------------------------------------------------------
/// <summary>
/// This class allows to compute minimum distance between two brep shapes
/// (face edge vertex) and is used in DistShapeShape class.
/// </summary>
public ref class BRepExtrema_DistanceSS sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_DistanceSS>
{

#ifdef Include_BRepExtrema_DistanceSS_h
public:
    Include_BRepExtrema_DistanceSS_h
#endif

public:
    BRepExtrema_DistanceSS(::BRepExtrema_DistanceSS* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_DistanceSS>( nativeInstance, true )
    {}

    BRepExtrema_DistanceSS(::BRepExtrema_DistanceSS& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_DistanceSS>( &nativeInstance, false )
    {}

    property ::BRepExtrema_DistanceSS* NativeInstance
    {
        ::BRepExtrema_DistanceSS* get()
        {
            return static_cast<::BRepExtrema_DistanceSS*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name Constructor from two shapes
    /// Computes the distance between two Shapes (face edge vertex).
    /// <param name="theS1">
    /// - First shape
    /// </param>
    /// <param name="theS2">
    /// - Second shape
    /// </param>
    /// <param name="theBox1">
    /// - Bounding box of first shape
    /// </param>
    /// <param name="theBox2">
    /// - Bounding box of second shape
    /// </param>
    /// <param name="theDstRef">
    /// - Initial distance between the shapes to start with
    /// </param>
    /// <param name="theDeflection">
    /// - Maximum deviation of extreme distances from the minimum
    /// one (default is Precision::Confusion()).
    /// </param>
    /// <param name="theExtFlag">
    /// - Specifies which extrema solutions to look for
    /// (default is MINMAX, applied only to point-face extrema)
    /// </param>
    /// <param name="theExtAlgo">
    /// - Specifies which extrema algorithm is to be used
    /// (default is Grad algo, applied only to point-face extrema)
    /// </param>
    BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, double theDstRef, double theDeflection, Macad::Occt::Extrema_ExtFlag theExtFlag, Macad::Occt::Extrema_ExtAlgo theExtAlgo);
    /// <summary>
    /// </summary>
    /// @name Constructor from two shapes
    /// Computes the distance between two Shapes (face edge vertex).
    /// <param name="theS1">
    /// - First shape
    /// </param>
    /// <param name="theS2">
    /// - Second shape
    /// </param>
    /// <param name="theBox1">
    /// - Bounding box of first shape
    /// </param>
    /// <param name="theBox2">
    /// - Bounding box of second shape
    /// </param>
    /// <param name="theDstRef">
    /// - Initial distance between the shapes to start with
    /// </param>
    /// <param name="theDeflection">
    /// - Maximum deviation of extreme distances from the minimum
    /// one (default is Precision::Confusion()).
    /// </param>
    /// <param name="theExtFlag">
    /// - Specifies which extrema solutions to look for
    /// (default is MINMAX, applied only to point-face extrema)
    /// </param>
    /// <param name="theExtAlgo">
    /// - Specifies which extrema algorithm is to be used
    /// (default is Grad algo, applied only to point-face extrema)
    /// </param>
    BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, double theDstRef, double theDeflection, Macad::Occt::Extrema_ExtFlag theExtFlag);
    /// <summary>
    /// </summary>
    /// @name Constructor from two shapes
    /// Computes the distance between two Shapes (face edge vertex).
    /// <param name="theS1">
    /// - First shape
    /// </param>
    /// <param name="theS2">
    /// - Second shape
    /// </param>
    /// <param name="theBox1">
    /// - Bounding box of first shape
    /// </param>
    /// <param name="theBox2">
    /// - Bounding box of second shape
    /// </param>
    /// <param name="theDstRef">
    /// - Initial distance between the shapes to start with
    /// </param>
    /// <param name="theDeflection">
    /// - Maximum deviation of extreme distances from the minimum
    /// one (default is Precision::Confusion()).
    /// </param>
    /// <param name="theExtFlag">
    /// - Specifies which extrema solutions to look for
    /// (default is MINMAX, applied only to point-face extrema)
    /// </param>
    /// <param name="theExtAlgo">
    /// - Specifies which extrema algorithm is to be used
    /// (default is Grad algo, applied only to point-face extrema)
    /// </param>
    BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, double theDstRef, double theDeflection);
    /// <summary>
    /// </summary>
    /// @name Constructor from two shapes
    /// Computes the distance between two Shapes (face edge vertex).
    /// <param name="theS1">
    /// - First shape
    /// </param>
    /// <param name="theS2">
    /// - Second shape
    /// </param>
    /// <param name="theBox1">
    /// - Bounding box of first shape
    /// </param>
    /// <param name="theBox2">
    /// - Bounding box of second shape
    /// </param>
    /// <param name="theDstRef">
    /// - Initial distance between the shapes to start with
    /// </param>
    /// <param name="theDeflection">
    /// - Maximum deviation of extreme distances from the minimum
    /// one (default is Precision::Confusion()).
    /// </param>
    /// <param name="theExtFlag">
    /// - Specifies which extrema solutions to look for
    /// (default is MINMAX, applied only to point-face extrema)
    /// </param>
    /// <param name="theExtAlgo">
    /// - Specifies which extrema algorithm is to be used
    /// (default is Grad algo, applied only to point-face extrema)
    /// </param>
    BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, double theDstRef);
    /// <summary>
    /// </summary>
    /// @name Results
    /// Returns true if the distance has been computed, false otherwise.
    bool IsDone();
    /// <summary>
    /// Returns the distance value.
    /// </summary>
    double DistValue();
    /// <summary>
    /// Returns the list of solutions on the first shape.
    /// </summary>
    Macad::Occt::BRepExtrema_SeqOfSolution^ Seq1Value();
    /// <summary>
    /// Returns the list of solutions on the second shape.
    /// </summary>
    Macad::Occt::BRepExtrema_SeqOfSolution^ Seq2Value();
}; // class BRepExtrema_DistanceSS

//---------------------------------------------------------------------
//  Class  BRepExtrema_DistShapeShape
//---------------------------------------------------------------------
/// <summary>
/// This class  provides tools to compute minimum distance
/// between two Shapes (Compound,CompSolid, Solid, Shell, Face, Wire, Edge, Vertex).
/// </summary>
public ref class BRepExtrema_DistShapeShape sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>
{

#ifdef Include_BRepExtrema_DistShapeShape_h
public:
    Include_BRepExtrema_DistShapeShape_h
#endif

public:
    BRepExtrema_DistShapeShape(::BRepExtrema_DistShapeShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>( nativeInstance, true )
    {}

    BRepExtrema_DistShapeShape(::BRepExtrema_DistShapeShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>( &nativeInstance, false )
    {}

    property ::BRepExtrema_DistShapeShape* NativeInstance
    {
        ::BRepExtrema_DistShapeShape* get()
        {
            return static_cast<::BRepExtrema_DistShapeShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// create empty tool
    /// </summary>
    BRepExtrema_DistShapeShape();
    /// <summary>
    /// create tool and computation of the minimum distance (value and pair of points)
    /// using default deflection in single thread mode. <br>
    /// Default deflection value is Precision::Confusion(). <br>
    /// </summary>
    /// <param name="Shape1">
    /// - the first shape for distance computation
    /// </param>
    /// <param name="Shape2">
    /// - the second shape for distance computation
    /// </param>
    /// <param name="F">
    /// and @param A are not used in computation and are obsolete.
    /// </param>
    /// <param name="theRange">
    /// - the progress indicator of algorithm
    /// </param>
    BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// create tool and computation of the minimum distance (value and pair of points)
    /// using default deflection in single thread mode. <br>
    /// Default deflection value is Precision::Confusion(). <br>
    /// </summary>
    /// <param name="Shape1">
    /// - the first shape for distance computation
    /// </param>
    /// <param name="Shape2">
    /// - the second shape for distance computation
    /// </param>
    /// <param name="F">
    /// and @param A are not used in computation and are obsolete.
    /// </param>
    /// <param name="theRange">
    /// - the progress indicator of algorithm
    /// </param>
    BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A);
    /// <summary>
    /// create tool and computation of the minimum distance (value and pair of points)
    /// using default deflection in single thread mode. <br>
    /// Default deflection value is Precision::Confusion(). <br>
    /// </summary>
    /// <param name="Shape1">
    /// - the first shape for distance computation
    /// </param>
    /// <param name="Shape2">
    /// - the second shape for distance computation
    /// </param>
    /// <param name="F">
    /// and @param A are not used in computation and are obsolete.
    /// </param>
    /// <param name="theRange">
    /// - the progress indicator of algorithm
    /// </param>
    BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, Macad::Occt::Extrema_ExtFlag F);
    /// <summary>
    /// create tool and computation of the minimum distance (value and pair of points)
    /// using default deflection in single thread mode. <br>
    /// Default deflection value is Precision::Confusion(). <br>
    /// </summary>
    /// <param name="Shape1">
    /// - the first shape for distance computation
    /// </param>
    /// <param name="Shape2">
    /// - the second shape for distance computation
    /// </param>
    /// <param name="F">
    /// and @param A are not used in computation and are obsolete.
    /// </param>
    /// <param name="theRange">
    /// - the progress indicator of algorithm
    /// </param>
    BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2);
    /// <summary>
    /// create tool and computation of the minimum distance
    /// (value and pair of points) in single thread mode. <br>
    /// Default deflection value is Precision::Confusion(). <br>
    /// </summary>
    /// <param name="Shape1">
    /// - the first shape for distance computation
    /// </param>
    /// <param name="Shape2">
    /// - the second shape for distance computation
    /// </param>
    /// <param name="theDeflection">
    /// - the presition of distance computation
    /// </param>
    /// <param name="F">
    /// and @param A are not used in computation and are obsolete.
    /// </param>
    /// <param name="theRange">
    /// - the progress indicator of algorithm
    /// </param>
    BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// create tool and computation of the minimum distance
    /// (value and pair of points) in single thread mode. <br>
    /// Default deflection value is Precision::Confusion(). <br>
    /// </summary>
    /// <param name="Shape1">
    /// - the first shape for distance computation
    /// </param>
    /// <param name="Shape2">
    /// - the second shape for distance computation
    /// </param>
    /// <param name="theDeflection">
    /// - the presition of distance computation
    /// </param>
    /// <param name="F">
    /// and @param A are not used in computation and are obsolete.
    /// </param>
    /// <param name="theRange">
    /// - the progress indicator of algorithm
    /// </param>
    BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A);
    /// <summary>
    /// create tool and computation of the minimum distance
    /// (value and pair of points) in single thread mode. <br>
    /// Default deflection value is Precision::Confusion(). <br>
    /// </summary>
    /// <param name="Shape1">
    /// - the first shape for distance computation
    /// </param>
    /// <param name="Shape2">
    /// - the second shape for distance computation
    /// </param>
    /// <param name="theDeflection">
    /// - the presition of distance computation
    /// </param>
    /// <param name="F">
    /// and @param A are not used in computation and are obsolete.
    /// </param>
    /// <param name="theRange">
    /// - the progress indicator of algorithm
    /// </param>
    BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection, Macad::Occt::Extrema_ExtFlag F);
    /// <summary>
    /// create tool and computation of the minimum distance
    /// (value and pair of points) in single thread mode. <br>
    /// Default deflection value is Precision::Confusion(). <br>
    /// </summary>
    /// <param name="Shape1">
    /// - the first shape for distance computation
    /// </param>
    /// <param name="Shape2">
    /// - the second shape for distance computation
    /// </param>
    /// <param name="theDeflection">
    /// - the presition of distance computation
    /// </param>
    /// <param name="F">
    /// and @param A are not used in computation and are obsolete.
    /// </param>
    /// <param name="theRange">
    /// - the progress indicator of algorithm
    /// </param>
    BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection);
    /// <summary>
    /// Sets deflection to computation of the minimum distance <br>
    /// </summary>
    void SetDeflection(double theDeflection);
    /// <summary>
    /// load first shape into extrema <br>
    /// </summary>
    void LoadS1(Macad::Occt::TopoDS_Shape^ Shape1);
    /// <summary>
    /// load second shape into extrema <br>
    /// </summary>
    void LoadS2(Macad::Occt::TopoDS_Shape^ Shape1);
    /// <summary>
    /// computation of  the minimum  distance  (value  and <br>
    /// couple  of points). Parameter theDeflection is used <br>
    /// to specify a maximum deviation of extreme distances <br>
    /// from the minimum one. <br>
    /// Returns IsDone status. <br>
    /// theRange - the progress indicator of algorithm
    /// </summary>
    bool Perform(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// computation of  the minimum  distance  (value  and <br>
    /// couple  of points). Parameter theDeflection is used <br>
    /// to specify a maximum deviation of extreme distances <br>
    /// from the minimum one. <br>
    /// Returns IsDone status. <br>
    /// theRange - the progress indicator of algorithm
    /// </summary>
    bool Perform();
    /// <summary>
    /// True if the minimum distance is found. <br>
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of solutions satisfying the minimum distance. <br>
    /// </summary>
    int NbSolution();
    /// <summary>
    /// Returns the value of the minimum distance. <br>
    /// </summary>
    double Value();
    /// <summary>
    /// True if one of the shapes is a solid and the other shape <br>
    /// is completely or partially inside the solid. <br>
    /// </summary>
    bool InnerSolution();
    /// <summary>
    /// Returns the Point corresponding to the <N>th solution on the first Shape <br>
    /// </summary>
    Macad::Occt::Pnt PointOnShape1(int N);
    /// <summary>
    /// Returns the Point corresponding to the <N>th solution on the second Shape <br>
    /// </summary>
    Macad::Occt::Pnt PointOnShape2(int N);
    /// <summary>
    /// gives the type of the support where the Nth solution on the first shape is situated: <br>
    /// IsVertex => the Nth solution on the first shape is a Vertex <br>
    /// IsOnEdge => the Nth soluion on the first shape is on a Edge <br>
    /// IsInFace => the Nth solution on the first shape is inside a face <br>
    /// the corresponding support is obtained by the method SupportOnShape1 <br>
    /// </summary>
    Macad::Occt::BRepExtrema_SupportType SupportTypeShape1(int N);
    /// <summary>
    /// gives the type of the support where the Nth solution on the second shape is situated: <br>
    /// IsVertex => the Nth solution on the second shape is a Vertex <br>
    /// IsOnEdge => the Nth soluion on the secondt shape is on a Edge <br>
    /// IsInFace => the Nth solution on the second shape is inside a face <br>
    /// the corresponding support is obtained by the method SupportOnShape2 <br>
    /// </summary>
    Macad::Occt::BRepExtrema_SupportType SupportTypeShape2(int N);
    /// <summary>
    /// gives the support where the Nth solution on the first shape is situated. <br>
    /// This support can be a Vertex, an Edge or a Face. <br>
    /// </summary>
    Macad::Occt::TopoDS_Shape^ SupportOnShape1(int N);
    /// <summary>
    /// gives the support where the Nth solution on the second shape is situated. <br>
    /// This support can be a Vertex, an Edge or a Face. <br>
    /// </summary>
    Macad::Occt::TopoDS_Shape^ SupportOnShape2(int N);
    /// <summary>
    /// gives the corresponding parameter t if the Nth solution <br>
    /// is situated on an Edge of the first shape <br>
    /// </summary>
    void ParOnEdgeS1(int N, double% t);
    /// <summary>
    /// gives the corresponding parameter t if the Nth solution <br>
    /// is situated on an Edge of the first shape <br>
    /// </summary>
    void ParOnEdgeS2(int N, double% t);
    /// <summary>
    /// gives the corresponding parameters (U,V) if the Nth solution <br>
    /// is situated on an face of the first shape <br>
    /// </summary>
    void ParOnFaceS1(int N, double% u, double% v);
    /// <summary>
    /// gives the corresponding parameters (U,V) if the Nth solution <br>
    /// is situated on an Face of the second shape <br>
    /// </summary>
    void ParOnFaceS2(int N, double% u, double% v);
    /// <summary>
    /// Prints on the stream o information on the current state of the object. <br>
    /// </summary>
    void Dump(System::IO::TextWriter^ o);
    /// <summary>
    /// Sets unused parameter
    /// Obsolete
    /// </summary>
    void SetFlag(Macad::Occt::Extrema_ExtFlag F);
    /// <summary>
    /// Sets unused parameter
    /// Obsolete
    /// </summary>
    void SetAlgo(Macad::Occt::Extrema_ExtAlgo A);
    /// <summary>
    /// If isMultiThread == Standard_True then computation will be performed in parallel.
    /// </summary>
    void SetMultiThread(bool theIsMultiThread);
    /// <summary>
    /// Returns Standard_True then computation will be performed in parallel
    /// Default value is Standard_False
    /// </summary>
    bool IsMultiThread();
}; // class BRepExtrema_DistShapeShape

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCC
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtCC sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ExtCC>
{

#ifdef Include_BRepExtrema_ExtCC_h
public:
    Include_BRepExtrema_ExtCC_h
#endif

public:
    BRepExtrema_ExtCC(::BRepExtrema_ExtCC* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtCC>( nativeInstance, true )
    {}

    BRepExtrema_ExtCC(::BRepExtrema_ExtCC& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtCC>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ExtCC* NativeInstance
    {
        ::BRepExtrema_ExtCC* get()
        {
            return static_cast<::BRepExtrema_ExtCC*>(_NativeInstance);
        }
    }

public:
    BRepExtrema_ExtCC();
    /// <summary>
    /// It calculates all the distances. <br>
    /// </summary>
    BRepExtrema_ExtCC(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
    void Initialize(Macad::Occt::TopoDS_Edge^ E2);
    /// <summary>
    /// An exception is raised if the fields have not been initialized. <br>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Edge^ E1);
    /// <summary>
    /// True if the distances are found. <br>
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances. <br>
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if E1 and E2 are parallel. <br>
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance. <br>
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the parameter on the first edge of the <N>th extremum distance. <br>
    /// </summary>
    double ParameterOnE1(int N);
    /// <summary>
    /// Returns the Point of the <N>th extremum distance on the edge E1. <br>
    /// </summary>
    Macad::Occt::Pnt PointOnE1(int N);
    /// <summary>
    /// Returns the parameter on the second edge of the <N>th extremum distance. <br>
    /// </summary>
    double ParameterOnE2(int N);
    /// <summary>
    /// Returns the Point of the <N>th extremum distance on the edge E2. <br>
    /// </summary>
    Macad::Occt::Pnt PointOnE2(int N);
    /// <summary>
    /// if the edges is a trimmed curve, <br>
    /// dist11 is a square distance between the point on E1 <br>
    /// of parameter FirstParameter and the point of <br>
    /// parameter FirstParameter on E2. <br>
    /// </summary>
    void TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, Macad::Occt::Pnt% P11, Macad::Occt::Pnt% P12, Macad::Occt::Pnt% P21, Macad::Occt::Pnt% P22);
}; // class BRepExtrema_ExtCC

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCF
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtCF sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ExtCF>
{

#ifdef Include_BRepExtrema_ExtCF_h
public:
    Include_BRepExtrema_ExtCF_h
#endif

public:
    BRepExtrema_ExtCF(::BRepExtrema_ExtCF* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtCF>( nativeInstance, true )
    {}

    BRepExtrema_ExtCF(::BRepExtrema_ExtCF& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtCF>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ExtCF* NativeInstance
    {
        ::BRepExtrema_ExtCF* get()
        {
            return static_cast<::BRepExtrema_ExtCF*>(_NativeInstance);
        }
    }

public:
    BRepExtrema_ExtCF();
    /// <summary>
    /// It calculates all the distances. <br>
    /// </summary>
    BRepExtrema_ExtCF(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    void Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// An exception is raised if the fields have not been initialized. <br>
    /// Be careful: this method uses the Face only for classify not for the fields. <br>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// True if the distances are found. <br>
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances. <br>
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance. <br>
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns True if the curve is on a parallel surface. <br>
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the parameters on the Edge of the <N>th extremum distance. <br>
    /// </summary>
    double ParameterOnEdge(int N);
    /// <summary>
    /// Returns the parameters on the Face of the <N>th extremum distance. <br>
    /// </summary>
    void ParameterOnFace(int N, double% U, double% V);
    /// <summary>
    /// Returns the Point of the <N>th extremum distance. <br>
    /// </summary>
    Macad::Occt::Pnt PointOnEdge(int N);
    /// <summary>
    /// Returns the Point of the <N>th extremum distance. <br>
    /// </summary>
    Macad::Occt::Pnt PointOnFace(int N);
}; // class BRepExtrema_ExtCF

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtFF
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtFF sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ExtFF>
{

#ifdef Include_BRepExtrema_ExtFF_h
public:
    Include_BRepExtrema_ExtFF_h
#endif

public:
    BRepExtrema_ExtFF(::BRepExtrema_ExtFF* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtFF>( nativeInstance, true )
    {}

    BRepExtrema_ExtFF(::BRepExtrema_ExtFF& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtFF>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ExtFF* NativeInstance
    {
        ::BRepExtrema_ExtFF* get()
        {
            return static_cast<::BRepExtrema_ExtFF*>(_NativeInstance);
        }
    }

public:
    BRepExtrema_ExtFF();
    /// <summary>
    /// It calculates all the distances. <br>
    /// </summary>
    BRepExtrema_ExtFF(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
    void Initialize(Macad::Occt::TopoDS_Face^ F2);
    /// <summary>
    /// An exception is raised if the fields have not been initialized. <br>
    /// Be careful: this method uses the Face F2 only for classify, not for the fields. <br>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
    /// <summary>
    /// True if the distances are found. <br>
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns True if the surfaces are parallel. <br>
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances. <br>
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance. <br>
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the parameters on the Face F1 of the <N>th extremum distance. <br>
    /// </summary>
    void ParameterOnFace1(int N, double% U, double% V);
    /// <summary>
    /// Returns the parameters on the Face F2 of the <N>th extremum distance. <br>
    /// </summary>
    void ParameterOnFace2(int N, double% U, double% V);
    /// <summary>
    /// Returns the Point of the <N>th extremum distance. <br>
    /// </summary>
    Macad::Occt::Pnt PointOnFace1(int N);
    /// <summary>
    /// Returns the Point of the <N>th extremum distance. <br>
    /// </summary>
    Macad::Occt::Pnt PointOnFace2(int N);
}; // class BRepExtrema_ExtFF

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPC
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtPC sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ExtPC>
{

#ifdef Include_BRepExtrema_ExtPC_h
public:
    Include_BRepExtrema_ExtPC_h
#endif

public:
    BRepExtrema_ExtPC(::BRepExtrema_ExtPC* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtPC>( nativeInstance, true )
    {}

    BRepExtrema_ExtPC(::BRepExtrema_ExtPC& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtPC>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ExtPC* NativeInstance
    {
        ::BRepExtrema_ExtPC* get()
        {
            return static_cast<::BRepExtrema_ExtPC*>(_NativeInstance);
        }
    }

public:
    BRepExtrema_ExtPC();
    /// <summary>
    /// It calculates all the distances. <br>
    /// </summary>
    BRepExtrema_ExtPC(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E);
    void Initialize(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// An exception is raised if the fields have not been initialized. <br>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// True if the distances are found. <br>
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances. <br>
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if the <N>th extremum distance is a minimum. <br>
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the value of the <N>th extremum square distance. <br>
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the parameter on the edge of the <N>th extremum distance. <br>
    /// </summary>
    double Parameter(int N);
    /// <summary>
    /// Returns the Point of the <N>th extremum distance. <br>
    /// </summary>
    Macad::Occt::Pnt Point(int N);
    /// <summary>
    /// if the curve is a trimmed curve, <br>
    /// dist1 is a square distance between <P> and the point <br>
    /// of parameter FirstParameter <pnt1> and <br>
    /// dist2 is a square distance between <P> and the point <br>
    /// of parameter LastParameter <pnt2>. <br>
    /// </summary>
    void TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% pnt1, Macad::Occt::Pnt% pnt2);
}; // class BRepExtrema_ExtPC

//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPF
//---------------------------------------------------------------------
public ref class BRepExtrema_ExtPF sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ExtPF>
{

#ifdef Include_BRepExtrema_ExtPF_h
public:
    Include_BRepExtrema_ExtPF_h
#endif

public:
    BRepExtrema_ExtPF(::BRepExtrema_ExtPF* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtPF>( nativeInstance, true )
    {}

    BRepExtrema_ExtPF(::BRepExtrema_ExtPF& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ExtPF>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ExtPF* NativeInstance
    {
        ::BRepExtrema_ExtPF* get()
        {
            return static_cast<::BRepExtrema_ExtPF*>(_NativeInstance);
        }
    }

public:
    BRepExtrema_ExtPF();
    /// <summary>
    /// It calculates all the distances. <br>
    /// </summary>
    BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace, Macad::Occt::Extrema_ExtFlag TheFlag, Macad::Occt::Extrema_ExtAlgo TheAlgo);
    /// <summary>
    /// It calculates all the distances. <br>
    /// </summary>
    BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace, Macad::Occt::Extrema_ExtFlag TheFlag);
    /// <summary>
    /// It calculates all the distances. <br>
    /// </summary>
    BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace);
    void Initialize(Macad::Occt::TopoDS_Face^ TheFace, Macad::Occt::Extrema_ExtFlag TheFlag, Macad::Occt::Extrema_ExtAlgo TheAlgo);
    void Initialize(Macad::Occt::TopoDS_Face^ TheFace, Macad::Occt::Extrema_ExtFlag TheFlag);
    void Initialize(Macad::Occt::TopoDS_Face^ TheFace);
    /// <summary>
    /// An exception is raised if the fields have not been initialized. <br>
    /// Be careful: this method uses the Face only for classify not for the fields. <br>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace);
    /// <summary>
    /// True if the distances are found. <br>
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances. <br>
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance. <br>
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the parameters on the Face of the <N>th extremum distance. <br>
    /// </summary>
    void Parameter(int N, double% U, double% V);
    /// <summary>
    /// Returns the Point of the <N>th extremum distance. <br>
    /// </summary>
    Macad::Occt::Pnt Point(int N);
    void SetFlag(Macad::Occt::Extrema_ExtFlag F);
    void SetAlgo(Macad::Occt::Extrema_ExtAlgo A);
}; // class BRepExtrema_ExtPF

//---------------------------------------------------------------------
//  Class  BRepExtrema_Poly
//---------------------------------------------------------------------
public ref class BRepExtrema_Poly sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_Poly>
{

#ifdef Include_BRepExtrema_Poly_h
public:
    Include_BRepExtrema_Poly_h
#endif

public:
    BRepExtrema_Poly(::BRepExtrema_Poly* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_Poly>( nativeInstance, true )
    {}

    BRepExtrema_Poly(::BRepExtrema_Poly& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_Poly>( &nativeInstance, false )
    {}

    property ::BRepExtrema_Poly* NativeInstance
    {
        ::BRepExtrema_Poly* get()
        {
            return static_cast<::BRepExtrema_Poly*>(_NativeInstance);
        }
    }

public:
    BRepExtrema_Poly();
    /// <summary>
    /// returns Standard_True if OK.
    /// </summary>
    static bool Distance(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2, double% dist);
}; // class BRepExtrema_Poly

//---------------------------------------------------------------------
//  Class  BRepExtrema_VertexInspector
//---------------------------------------------------------------------
/// <summary>
/// Class BRepExtrema_VertexInspector
/// derived from NCollection_CellFilter_InspectorXYZ
/// This class define the Inspector interface for CellFilter algorithm,
/// working with gp_XYZ points in 3d space.
/// Used in search of coincidence points with a certain tolerance.
/// </summary>
public ref class BRepExtrema_VertexInspector sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_VertexInspector>
{

#ifdef Include_BRepExtrema_VertexInspector_h
public:
    Include_BRepExtrema_VertexInspector_h
#endif

public:
    BRepExtrema_VertexInspector(::BRepExtrema_VertexInspector* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_VertexInspector>( nativeInstance, true )
    {}

    BRepExtrema_VertexInspector(::BRepExtrema_VertexInspector& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_VertexInspector>( &nativeInstance, false )
    {}

    property ::BRepExtrema_VertexInspector* NativeInstance
    {
        ::BRepExtrema_VertexInspector* get()
        {
            return static_cast<::BRepExtrema_VertexInspector*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor; remembers the tolerance
    /// </summary>
    BRepExtrema_VertexInspector();
    /// <summary>
    /// Keep the points used for comparison
    /// </summary>
    void Add(Macad::Occt::XYZ thePnt);
    /// <summary>
    /// Set tolerance for comparison of point coordinates
    /// </summary>
    void SetTol(double theTol);
    /// <summary>
    /// Set current point to search for coincidence
    /// </summary>
    void SetCurrent(Macad::Occt::XYZ theCurPnt);
    bool IsNeedAdd();
    /// <summary>
    /// Implementation of inspection method
    /// </summary>
    Macad::Occt::NCollection_CellFilter_Action Inspect(int theTarget);
}; // class BRepExtrema_VertexInspector

//---------------------------------------------------------------------
//  Class  BRepExtrema_ProximityValueTool
//---------------------------------------------------------------------
/// <summary>
/// Tool class for computation of the proximity value from one BVH
/// primitive set to another, solving max(min) problem.
/// Handles only edge/edge or face/face cases.
/// This tool is not intended to be used independently, and is integrated
/// in other classes, implementing algorithms based on shape tessellation
/// (BRepExtrema_ShapeProximity and BRepExtrema_SelfIntersection).
/// 
/// Please note that algorithm results are approximate and depend greatly
/// on the quality of input tessellation(s).
/// </summary>
public ref class BRepExtrema_ProximityValueTool sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ProximityValueTool>
{

#ifdef Include_BRepExtrema_ProximityValueTool_h
public:
    Include_BRepExtrema_ProximityValueTool_h
#endif

public:
    BRepExtrema_ProximityValueTool(::BRepExtrema_ProximityValueTool* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ProximityValueTool>( nativeInstance, true )
    {}

    BRepExtrema_ProximityValueTool(::BRepExtrema_ProximityValueTool& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ProximityValueTool>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ProximityValueTool* NativeInstance
    {
        ::BRepExtrema_ProximityValueTool* get()
        {
            return static_cast<::BRepExtrema_ProximityValueTool*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new uninitialized proximity tool.
    /// </summary>
    BRepExtrema_ProximityValueTool();
    /* Method skipped due to unknown mapping: void BRepExtrema_ProximityValueTool(BRepExtrema_TriangleSet theSet1, BRepExtrema_TriangleSet theSet2, BRepExtrema_ShapeList theShapeList1, BRepExtrema_ShapeList theShapeList2, ) */
    /* Method skipped due to unknown mapping: void LoadTriangleSets(BRepExtrema_TriangleSet theSet1, BRepExtrema_TriangleSet theSet2, ) */
    /// <summary>
    /// Loads the given list of subshapes into the proximity tool.
    /// </summary>
    void LoadShapeLists(Macad::Occt::BRepExtrema_ShapeList^ theShapeList1, Macad::Occt::BRepExtrema_ShapeList^ theShapeList2);
    /// <summary>
    /// Sets number of sample points used for proximity calculation for each shape.
    /// If number is less or equal zero, all triangulation nodes are used.
    /// </summary>
    void SetNbSamplePoints(int theSamples1, int theSamples2);
    /// <summary>
    /// Sets number of sample points used for proximity calculation for each shape.
    /// If number is less or equal zero, all triangulation nodes are used.
    /// </summary>
    void SetNbSamplePoints(int theSamples1);
    /// <summary>
    /// Sets number of sample points used for proximity calculation for each shape.
    /// If number is less or equal zero, all triangulation nodes are used.
    /// </summary>
    void SetNbSamplePoints();
    /// <summary>
    /// Performs the computation of the proximity value.
    /// </summary>
    void Perform(double% theTolerance);
    /// <summary>
    /// Is proximity test completed?
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Marks test results as outdated.
    /// </summary>
    void MarkDirty();
    /// <summary>
    /// Returns the computed distance.
    /// </summary>
    double Distance();
    /// <summary>
    /// Returns points on triangles sets, which provide the proximity distance.
    /// </summary>
    void ProximityPoints(Macad::Occt::Pnt% thePoint1, Macad::Occt::Pnt% thePoint2);
    /* Method skipped due to unknown mapping: void ProximityPointsStatus(ProxPnt_Status thePointStatus1, ProxPnt_Status thePointStatus2, ) */
}; // class BRepExtrema_ProximityValueTool

//---------------------------------------------------------------------
//  Class  BRepExtrema_SelfIntersection
//---------------------------------------------------------------------
/// <summary>
/// Tool class for detection of self-sections in the given shape.
/// This class is based on BRepExtrema_OverlapTool and thus uses
/// shape tessellation to detect incorrect mesh fragments (pairs
/// of overlapped triangles belonging to different faces). Thus,
/// a result depends critically on the quality of mesh generator
/// (e.g., BREP mesh is not always a good choice, because it can
/// contain gaps between adjacent face triangulations, which may
/// not share vertices on common edge; thus false overlap can be
/// detected). As a result, this tool can be used for relatively
/// fast approximated test which provides sub-set of potentially
/// overlapped faces.
/// </summary>
public ref class BRepExtrema_SelfIntersection sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_SelfIntersection>
{

#ifdef Include_BRepExtrema_SelfIntersection_h
public:
    Include_BRepExtrema_SelfIntersection_h
#endif

public:
    BRepExtrema_SelfIntersection(::BRepExtrema_SelfIntersection* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_SelfIntersection>( nativeInstance, true )
    {}

    BRepExtrema_SelfIntersection(::BRepExtrema_SelfIntersection& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_SelfIntersection>( &nativeInstance, false )
    {}

    property ::BRepExtrema_SelfIntersection* NativeInstance
    {
        ::BRepExtrema_SelfIntersection* get()
        {
            return static_cast<::BRepExtrema_SelfIntersection*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates uninitialized self-intersection tool.
    /// </summary>
    BRepExtrema_SelfIntersection(double theTolerance);
    /// <summary>
    /// Creates uninitialized self-intersection tool.
    /// </summary>
    BRepExtrema_SelfIntersection();
    /// <summary>
    /// Creates self-intersection tool for the given shape.
    /// </summary>
    BRepExtrema_SelfIntersection(Macad::Occt::TopoDS_Shape^ theShape, double theTolerance);
    /// <summary>
    /// Creates self-intersection tool for the given shape.
    /// </summary>
    BRepExtrema_SelfIntersection(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Returns tolerance value used for self-intersection test.
    /// </summary>
    double Tolerance();
    /// <summary>
    /// Sets tolerance value used for self-intersection test.
    /// </summary>
    void SetTolerance(double theTolerance);
    /// <summary>
    /// Loads shape for detection of self-intersections.
    /// </summary>
    bool LoadShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Performs detection of self-intersections.
    /// </summary>
    void Perform();
    /// <summary>
    /// True if the detection is completed.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns set of IDs of overlapped sub-shapes (started from 0).
    /// </summary>
    Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ OverlapElements();
    /// <summary>
    /// Returns sub-shape from the shape for the given index (started from 0).
    /// </summary>
    Macad::Occt::TopoDS_Face^ GetSubShape(int theID);
    /* Method skipped due to unknown mapping: BRepExtrema_TriangleSet ElementSet() */
}; // class BRepExtrema_SelfIntersection

//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeProximity
//---------------------------------------------------------------------
/// <summary>
/// </summary>
/// @brief Tool class for shape proximity detection.
/// 
/// First approach:
/// For two given shapes and given tolerance (offset from the mesh) the algorithm allows
/// to determine whether or not they are overlapped. The algorithm input consists of any
/// shapes which can be decomposed into individual faces (used as basic shape elements).
/// 
/// The algorithm can be run in two modes. If tolerance is set to zero, the algorithm
/// will detect only intersecting faces (containing triangles with common points). If
/// tolerance is set to positive value, the algorithm will also detect faces located
/// on distance less than the given tolerance from each other.
/// 
/// Second approach:
/// Compute the proximity value between two shapes (handles only edge/edge or face/face cases)
/// if the tolerance is not defined (Precision::Infinite()).
/// In this case the proximity value is a minimal thickness of a layer containing both shapes.
/// 
/// For the both approaches the high performance is achieved through the use of existing
/// triangulation of faces. So, poly triangulation (with the desired deflection) should already
/// be built. Note that solution is approximate (and corresponds to the deflection used for
/// triangulation).
public ref class BRepExtrema_ShapeProximity sealed
    : public Macad::Occt::BaseClass<::BRepExtrema_ShapeProximity>
{

#ifdef Include_BRepExtrema_ShapeProximity_h
public:
    Include_BRepExtrema_ShapeProximity_h
#endif

public:
    BRepExtrema_ShapeProximity(::BRepExtrema_ShapeProximity* nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ShapeProximity>( nativeInstance, true )
    {}

    BRepExtrema_ShapeProximity(::BRepExtrema_ShapeProximity& nativeInstance)
        : Macad::Occt::BaseClass<::BRepExtrema_ShapeProximity>( &nativeInstance, false )
    {}

    property ::BRepExtrema_ShapeProximity* NativeInstance
    {
        ::BRepExtrema_ShapeProximity* get()
        {
            return static_cast<::BRepExtrema_ShapeProximity*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates empty proximity tool.
    /// </summary>
    BRepExtrema_ShapeProximity(double theTolerance);
    /// <summary>
    /// Creates empty proximity tool.
    /// </summary>
    BRepExtrema_ShapeProximity();
    /// <summary>
    /// Creates proximity tool for the given two shapes.
    /// </summary>
    BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2, double theTolerance);
    /// <summary>
    /// Creates proximity tool for the given two shapes.
    /// </summary>
    BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2);
    /// <summary>
    /// Returns tolerance value for overlap test (distance between shapes).
    /// </summary>
    double Tolerance();
    /// <summary>
    /// Sets tolerance value for overlap test (distance between shapes).
    /// </summary>
    void SetTolerance(double theTolerance);
    /// <summary>
    /// Returns proximity value calculated for the whole input shapes.
    /// </summary>
    double Proximity();
    /// <summary>
    /// Loads 1st shape into proximity tool.
    /// </summary>
    bool LoadShape1(Macad::Occt::TopoDS_Shape^ theShape1);
    /// <summary>
    /// Loads 2nd shape into proximity tool.
    /// </summary>
    bool LoadShape2(Macad::Occt::TopoDS_Shape^ theShape2);
    /// <summary>
    /// Set number of sample points on the 1st shape used to compute the proximity value.
    /// In case of 0, all triangulation nodes will be used.
    /// </summary>
    void SetNbSamples1(int theNbSamples);
    /// <summary>
    /// Set number of sample points on the 2nd shape used to compute the proximity value.
    /// In case of 0, all triangulation nodes will be used.
    /// </summary>
    void SetNbSamples2(int theNbSamples);
    /// <summary>
    /// Performs search of overlapped faces.
    /// </summary>
    void Perform();
    /// <summary>
    /// True if the search is completed.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns set of IDs of overlapped faces of 1st shape (started from 0).
    /// </summary>
    Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ OverlapSubShapes1();
    /// <summary>
    /// Returns set of IDs of overlapped faces of 2nd shape (started from 0).
    /// </summary>
    Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ OverlapSubShapes2();
    /// <summary>
    /// Returns sub-shape from 1st shape with the given index (started from 0).
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetSubShape1(int theID);
    /// <summary>
    /// Returns sub-shape from 1st shape with the given index (started from 0).
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetSubShape2(int theID);
    /* Method skipped due to unknown mapping: BRepExtrema_TriangleSet ElementSet1() */
    /* Method skipped due to unknown mapping: BRepExtrema_TriangleSet ElementSet2() */
    /// <summary>
    /// Returns the point on the 1st shape, which could be used as a reference point
    /// for the value of the proximity.
    /// </summary>
    Macad::Occt::Pnt ProximityPoint1();
    /// <summary>
    /// Returns the point on the 2nd shape, which could be used as a reference point
    /// for the value of the proximity.
    /// </summary>
    Macad::Occt::Pnt ProximityPoint2();
    /* Method skipped due to unknown mapping: ProxPnt_Status ProxPntStatus1() */
    /* Method skipped due to unknown mapping: ProxPnt_Status ProxPntStatus2() */
}; // class BRepExtrema_ShapeProximity

//---------------------------------------------------------------------
//  Class  BRepExtrema_UnCompatibleShape
//---------------------------------------------------------------------
public ref class BRepExtrema_UnCompatibleShape sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_BRepExtrema_UnCompatibleShape_h
public:
    Include_BRepExtrema_UnCompatibleShape_h
#endif

public:
    BRepExtrema_UnCompatibleShape(::BRepExtrema_UnCompatibleShape* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    BRepExtrema_UnCompatibleShape(::BRepExtrema_UnCompatibleShape& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::BRepExtrema_UnCompatibleShape* NativeInstance
    {
        ::BRepExtrema_UnCompatibleShape* get()
        {
            return static_cast<::BRepExtrema_UnCompatibleShape*>(_NativeInstance);
        }
    }

public:
    BRepExtrema_UnCompatibleShape();
    BRepExtrema_UnCompatibleShape(System::String^ theMessage);
    BRepExtrema_UnCompatibleShape(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::BRepExtrema_UnCompatibleShape^ NewInstance(System::String^ theMessage);
    static Macad::Occt::BRepExtrema_UnCompatibleShape^ NewInstance();
    static Macad::Occt::BRepExtrema_UnCompatibleShape^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::BRepExtrema_UnCompatibleShape^ CreateDowncasted(::BRepExtrema_UnCompatibleShape* instance);
}; // class BRepExtrema_UnCompatibleShape

}; // namespace Occt
}; // namespace Macad
