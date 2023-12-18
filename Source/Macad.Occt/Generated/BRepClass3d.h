// Generated wrapper code for package BRepClass3d

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepClass3d_BndBoxTree
//---------------------------------------------------------------------
public ref class BRepClass3d_BndBoxTree sealed
    : public Macad::Occt::BaseClass<::BRepClass3d_BndBoxTree>
{

#ifdef Include_BRepClass3d_BndBoxTree_h
public:
    Include_BRepClass3d_BndBoxTree_h
#endif

public:
    BRepClass3d_BndBoxTree(::BRepClass3d_BndBoxTree* nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_BndBoxTree>( nativeInstance, true )
    {}

    BRepClass3d_BndBoxTree(::BRepClass3d_BndBoxTree& nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_BndBoxTree>( &nativeInstance, false )
    {}

    property ::BRepClass3d_BndBoxTree* NativeInstance
    {
        ::BRepClass3d_BndBoxTree* get()
        {
            return static_cast<::BRepClass3d_BndBoxTree*>(_NativeInstance);
        }
    }

public:
    BRepClass3d_BndBoxTree();
    BRepClass3d_BndBoxTree(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    bool Add(int theObj, Macad::Occt::Bnd_Box^ theBnd);
    /* Method skipped due to unknown mapping: int Select(Selector theSelector, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ aNewAlloc);
    void Clear();
    bool IsEmpty();
    /* Method skipped due to unknown mapping: TreeNode Root() */
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
}; // class BRepClass3d_BndBoxTree

//---------------------------------------------------------------------
//  Class  BRepClass3d_MapOfInter
//---------------------------------------------------------------------
public ref class BRepClass3d_MapOfInter sealed
    : public Macad::Occt::BaseClass<::BRepClass3d_MapOfInter>
{

#ifdef Include_BRepClass3d_MapOfInter_h
public:
    Include_BRepClass3d_MapOfInter_h
#endif

public:
    BRepClass3d_MapOfInter(::BRepClass3d_MapOfInter* nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_MapOfInter>( nativeInstance, true )
    {}

    BRepClass3d_MapOfInter(::BRepClass3d_MapOfInter& nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_MapOfInter>( &nativeInstance, false )
    {}

    property ::BRepClass3d_MapOfInter* NativeInstance
    {
        ::BRepClass3d_MapOfInter* get()
        {
            return static_cast<::BRepClass3d_MapOfInter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepClass3d_MapOfInter::Iterator>
    {

#ifdef Include_BRepClass3d_MapOfInter_Iterator_h
    public:
        Include_BRepClass3d_MapOfInter_Iterator_h
#endif

    public:
        Iterator(::BRepClass3d_MapOfInter::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepClass3d_MapOfInter::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepClass3d_MapOfInter::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepClass3d_MapOfInter::Iterator>( &nativeInstance, false )
        {}

        property ::BRepClass3d_MapOfInter::Iterator* NativeInstance
        {
            ::BRepClass3d_MapOfInter::Iterator* get()
            {
                return static_cast<::BRepClass3d_MapOfInter::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        System::IntPtr Value();
        System::IntPtr ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    BRepClass3d_MapOfInter();
    BRepClass3d_MapOfInter(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepClass3d_MapOfInter(int theNbBuckets);
    void Exchange(Macad::Occt::BRepClass3d_MapOfInter^ theOther);
    Macad::Occt::BRepClass3d_MapOfInter^ Assign(Macad::Occt::BRepClass3d_MapOfInter^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, System::IntPtr theItem);
    System::IntPtr Bound(Macad::Occt::TopoDS_Shape^ theKey, System::IntPtr theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    System::IntPtr Seek(Macad::Occt::TopoDS_Shape^ theKey);
    System::IntPtr Find(Macad::Occt::TopoDS_Shape^ theKey);
    System::IntPtr ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    System::IntPtr ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepClass3d_MapOfInter

//---------------------------------------------------------------------
//  Class  BRepClass3d
//---------------------------------------------------------------------
public ref class BRepClass3d sealed
    : public Macad::Occt::BaseClass<::BRepClass3d>
{

#ifdef Include_BRepClass3d_h
public:
    Include_BRepClass3d_h
#endif

public:
    BRepClass3d(::BRepClass3d* nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d>( nativeInstance, true )
    {}

    BRepClass3d(::BRepClass3d& nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d>( &nativeInstance, false )
    {}

    property ::BRepClass3d* NativeInstance
    {
        ::BRepClass3d* get()
        {
            return static_cast<::BRepClass3d*>(_NativeInstance);
        }
    }

public:
    BRepClass3d();
    /// <summary>
    /// Returns the outer most shell of <S>. Returns a Null
    /// shell if <S> has no outer shell.
    /// If <S> has only one shell, then it will return, without checking orientation.
    /// </summary>
    static Macad::Occt::TopoDS_Shell^ OuterShell(Macad::Occt::TopoDS_Solid^ S);
}; // class BRepClass3d

//---------------------------------------------------------------------
//  Class  BRepClass3d_Intersector3d
//---------------------------------------------------------------------
public ref class BRepClass3d_Intersector3d sealed
    : public Macad::Occt::BaseClass<::BRepClass3d_Intersector3d>
{

#ifdef Include_BRepClass3d_Intersector3d_h
public:
    Include_BRepClass3d_Intersector3d_h
#endif

public:
    BRepClass3d_Intersector3d(::BRepClass3d_Intersector3d* nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_Intersector3d>( nativeInstance, true )
    {}

    BRepClass3d_Intersector3d(::BRepClass3d_Intersector3d& nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_Intersector3d>( &nativeInstance, false )
    {}

    property ::BRepClass3d_Intersector3d* NativeInstance
    {
        ::BRepClass3d_Intersector3d* get()
        {
            return static_cast<::BRepClass3d_Intersector3d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    BRepClass3d_Intersector3d();
    /// <summary>
    /// Perform the intersection between the
    /// segment L(0) ... L(Prm) and the Shape <Sh>.
    /// 
    /// Only the point with the smallest parameter on the
    /// line is returned.
    /// 
    /// The Tolerance <Tol> is used to determine if the
    /// first point of the segment is near the face. In
    /// that case, the parameter of the intersection point
    /// on the line can be a negative value (greater than -Tol).
    /// </summary>
    void Perform(Macad::Occt::gp_Lin^ L, double Prm, double Tol, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// True is returned when the intersection have been computed.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// True is returned if a point has been found.
    /// </summary>
    bool HasAPoint();
    /// <summary>
    /// Returns the U parameter of the intersection point
    /// on the surface.
    /// </summary>
    double UParameter();
    /// <summary>
    /// Returns the V parameter of the intersection point
    /// on the surface.
    /// </summary>
    double VParameter();
    /// <summary>
    /// Returns the parameter of the intersection point
    /// on the line.
    /// </summary>
    double WParameter();
    /// <summary>
    /// Returns the geometric point of the intersection
    /// between the line and the surface.
    /// </summary>
    Macad::Occt::Pnt Pnt();
    /* Method skipped due to unknown mapping: IntCurveSurface_TransitionOnCurve Transition() */
    /// <summary>
    /// Returns the state of the point on the face.
    /// The values can be either TopAbs_IN
    /// ( the point is in the face)
    /// or TopAbs_ON
    /// ( the point is on a boundary of the face).
    /// </summary>
    Macad::Occt::TopAbs_State State();
    /// <summary>
    /// Returns the significant face used to determine
    /// the intersection.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
}; // class BRepClass3d_Intersector3d

//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidExplorer
//---------------------------------------------------------------------
/// <summary>
/// Provide an exploration of a BRep Shape for the classification.
/// Provide access to the special UB tree to obtain fast search.
/// </summary>
public ref class BRepClass3d_SolidExplorer sealed
    : public Macad::Occt::BaseClass<::BRepClass3d_SolidExplorer>
{

#ifdef Include_BRepClass3d_SolidExplorer_h
public:
    Include_BRepClass3d_SolidExplorer_h
#endif

public:
    BRepClass3d_SolidExplorer(::BRepClass3d_SolidExplorer* nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_SolidExplorer>( nativeInstance, true )
    {}

    BRepClass3d_SolidExplorer(::BRepClass3d_SolidExplorer& nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_SolidExplorer>( &nativeInstance, false )
    {}

    property ::BRepClass3d_SolidExplorer* NativeInstance
    {
        ::BRepClass3d_SolidExplorer* get()
        {
            return static_cast<::BRepClass3d_SolidExplorer*>(_NativeInstance);
        }
    }

public:
    BRepClass3d_SolidExplorer();
    BRepClass3d_SolidExplorer(Macad::Occt::TopoDS_Shape^ S);
    void InitShape(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Should return True if P outside of bounding vol. of the shape
    /// </summary>
    bool Reject(Macad::Occt::Pnt P);
    /// <summary>
    /// compute a point P in the face  F. Param is a Real in
    /// ]0,1[ and   is  used to  initialise  the algorithm. For
    /// different values , different points are returned.
    /// </summary>
    static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% Param);
    static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param);
    static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, Macad::Occt::Vec% theVecD1U, Macad::Occt::Vec% theVecD1V);
    static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v);
    static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P);
    static bool FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, double% u, double% v);
    bool PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index);
    bool PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index, Macad::Occt::BRepAdaptor_Surface^ surf, double u1, double v1, double u2, double v2);
    /// <summary>
    /// <Index> gives point index  to  search from and returns
    /// point index of succeseful search
    /// </summary>
    bool PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index, Macad::Occt::BRepAdaptor_Surface^ surf, double u1, double v1, double u2, double v2, Macad::Occt::Vec% theVecD1U, Macad::Occt::Vec% theVecD1V);
    /// <summary>
    /// Starts an exploration of the shells.
    /// </summary>
    void InitShell();
    /// <summary>
    /// Returns True if there is a current shell.
    /// </summary>
    bool MoreShell();
    /// <summary>
    /// Sets the explorer to the next shell.
    /// </summary>
    void NextShell();
    /// <summary>
    /// Returns the current shell.
    /// </summary>
    Macad::Occt::TopoDS_Shell^ CurrentShell();
    /// <summary>
    /// Returns True if the Shell is rejected.
    /// </summary>
    bool RejectShell(Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// Starts an exploration of the faces of the current shell.
    /// </summary>
    void InitFace();
    /// <summary>
    /// Returns True if current face in current shell.
    /// </summary>
    bool MoreFace();
    /// <summary>
    /// Sets the explorer to the next Face of the current shell.
    /// </summary>
    void NextFace();
    /// <summary>
    /// Returns the current face.
    /// </summary>
    Macad::Occt::TopoDS_Face^ CurrentFace();
    /// <summary>
    /// returns True if the face is rejected.
    /// </summary>
    bool RejectFace(Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// Returns  in <L>, <Par>  a segment having at least
    /// one  intersection  with  the  shape  boundary  to
    /// compute  intersections.
    /// </summary>
    int Segment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double% Par);
    /// <summary>
    /// Returns  in <L>, <Par>  a segment having at least
    /// one  intersection  with  the  shape  boundary  to
    /// compute  intersections.
    /// 
    /// The First Call to this method returns a line which
    /// point to a point of the first face of the shape.
    /// The Second Call provide a line to the second face
    /// and so on.
    /// </summary>
    int OtherSegment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double% Par);
    /// <summary>
    /// Returns the index of face for which
    /// last segment is calculated.
    /// </summary>
    int GetFaceSegmentIndex();
    void DumpSegment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double Par, Macad::Occt::TopAbs_State S);
    Macad::Occt::Bnd_Box^ Box();
    Macad::Occt::TopoDS_Shape^ GetShape();
    Macad::Occt::IntCurvesFace_Intersector^ Intersector(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Return UB-tree instance which is used for edge / vertex checks.
    /// </summary>
    Macad::Occt::BRepClass3d_BndBoxTree^ GetTree();
    /// <summary>
    /// Return edge/vertices map for current shape.
    /// </summary>
    Macad::Occt::TopTools_IndexedMapOfShape^ GetMapEV();
    void Destroy();
}; // class BRepClass3d_SolidExplorer

//---------------------------------------------------------------------
//  Class  BRepClass3d_SClassifier
//---------------------------------------------------------------------
/// <summary>
/// Provides an algorithm to classify a point in a solid.
/// </summary>
public ref class BRepClass3d_SClassifier
    : public Macad::Occt::BaseClass<::BRepClass3d_SClassifier>
{

#ifdef Include_BRepClass3d_SClassifier_h
public:
    Include_BRepClass3d_SClassifier_h
#endif

protected:
    BRepClass3d_SClassifier(InitMode init)
        : Macad::Occt::BaseClass<::BRepClass3d_SClassifier>( init )
    {}

public:
    BRepClass3d_SClassifier(::BRepClass3d_SClassifier* nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_SClassifier>( nativeInstance, true )
    {}

    BRepClass3d_SClassifier(::BRepClass3d_SClassifier& nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_SClassifier>( &nativeInstance, false )
    {}

    property ::BRepClass3d_SClassifier* NativeInstance
    {
        ::BRepClass3d_SClassifier* get()
        {
            return static_cast<::BRepClass3d_SClassifier*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    BRepClass3d_SClassifier();
    /// <summary>
    /// Constructor to classify the point P with the
    /// tolerance Tol on the solid S.
    /// </summary>
    BRepClass3d_SClassifier(Macad::Occt::BRepClass3d_SolidExplorer^ S, Macad::Occt::Pnt P, double Tol);
    /// <summary>
    /// Classify the point P with the
    /// tolerance Tol on the solid S.
    /// </summary>
    void Perform(Macad::Occt::BRepClass3d_SolidExplorer^ S, Macad::Occt::Pnt P, double Tol);
    /// <summary>
    /// Classify an infinite point with the
    /// tolerance Tol on the solid S.
    /// </summary>
    void PerformInfinitePoint(Macad::Occt::BRepClass3d_SolidExplorer^ S, double Tol);
    /// <summary>
    /// Returns True if the classification has been
    /// computed by rejection.
    /// The State is then OUT.
    /// </summary>
    bool Rejected();
    /// <summary>
    /// Returns the result of the classification.
    /// </summary>
    Macad::Occt::TopAbs_State State();
    /// <summary>
    /// Returns True when the point is a point of a face.
    /// </summary>
    bool IsOnAFace();
    /// <summary>
    /// Returns the face used to determine the
    /// classification. When the state is ON, this is the
    /// face containing the point.
    /// 
    /// When Rejected() returns True, Face() has no signification.
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face();
}; // class BRepClass3d_SClassifier

//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidClassifier
//---------------------------------------------------------------------
/// <summary>
/// Provides an algorithm to classify a point in a solid.
/// </summary>
public ref class BRepClass3d_SolidClassifier sealed
    : public Macad::Occt::BRepClass3d_SClassifier
{

#ifdef Include_BRepClass3d_SolidClassifier_h
public:
    Include_BRepClass3d_SolidClassifier_h
#endif

public:
    BRepClass3d_SolidClassifier(::BRepClass3d_SolidClassifier* nativeInstance)
        : Macad::Occt::BRepClass3d_SClassifier( nativeInstance )
    {}

    BRepClass3d_SolidClassifier(::BRepClass3d_SolidClassifier& nativeInstance)
        : Macad::Occt::BRepClass3d_SClassifier( nativeInstance )
    {}

    property ::BRepClass3d_SolidClassifier* NativeInstance
    {
        ::BRepClass3d_SolidClassifier* get()
        {
            return static_cast<::BRepClass3d_SolidClassifier*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// empty constructor
    /// </summary>
    BRepClass3d_SolidClassifier();
    /// <summary>
    /// Constructor from a Shape.
    /// </summary>
    BRepClass3d_SolidClassifier(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Constructor to classify the point P with the
    /// tolerance Tol on the solid S.
    /// </summary>
    BRepClass3d_SolidClassifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Pnt P, double Tol);
    void Load(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Classify the point P with the
    /// tolerance Tol on the solid S.
    /// </summary>
    void Perform(Macad::Occt::Pnt P, double Tol);
    /// <summary>
    /// Classify an infinite point with the
    /// tolerance Tol on the solid S.
    /// Useful for compute the orientation of a solid.
    /// </summary>
    void PerformInfinitePoint(double Tol);
    void Destroy();
}; // class BRepClass3d_SolidClassifier

//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidPassiveClassifier
//---------------------------------------------------------------------
public ref class BRepClass3d_SolidPassiveClassifier sealed
    : public Macad::Occt::BaseClass<::BRepClass3d_SolidPassiveClassifier>
{

#ifdef Include_BRepClass3d_SolidPassiveClassifier_h
public:
    Include_BRepClass3d_SolidPassiveClassifier_h
#endif

public:
    BRepClass3d_SolidPassiveClassifier(::BRepClass3d_SolidPassiveClassifier* nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_SolidPassiveClassifier>( nativeInstance, true )
    {}

    BRepClass3d_SolidPassiveClassifier(::BRepClass3d_SolidPassiveClassifier& nativeInstance)
        : Macad::Occt::BaseClass<::BRepClass3d_SolidPassiveClassifier>( &nativeInstance, false )
    {}

    property ::BRepClass3d_SolidPassiveClassifier* NativeInstance
    {
        ::BRepClass3d_SolidPassiveClassifier* get()
        {
            return static_cast<::BRepClass3d_SolidPassiveClassifier*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an undefined classifier.
    /// </summary>
    BRepClass3d_SolidPassiveClassifier();
    /// <summary>
    /// Starts  a  classification process.   The  point to
    /// classify is the origin of  the  line <L>.  <P>  is
    /// the original length of the segment on <L>  used to
    /// compute  intersections.   <Tol> is the   tolerance
    /// attached to the intersections.
    /// </summary>
    void Reset(Macad::Occt::gp_Lin^ L, double P, double Tol);
    /// <summary>
    /// Updates  the classification process with  the face
    /// <F> from the boundary.
    /// </summary>
    void Compare(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopAbs_Orientation Or);
    /// <summary>
    /// Returns the current value of the parameter.
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns True if an intersection is computed.
    /// </summary>
    bool HasIntersection();
    /// <summary>
    /// Returns the intersecting algorithm.
    /// </summary>
    Macad::Occt::BRepClass3d_Intersector3d^ Intersector();
    /// <summary>
    /// Returns the current state of the point.
    /// </summary>
    Macad::Occt::TopAbs_State State();
}; // class BRepClass3d_SolidPassiveClassifier

}; // namespace Occt
}; // namespace Macad
