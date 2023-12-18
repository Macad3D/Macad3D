// Generated wrapper code for package TopExp

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TopExp
//---------------------------------------------------------------------
/// <summary>
/// This package   provides  basic tools  to   explore the
/// topological data structures.
/// 
/// * Explorer : A tool to find all sub-shapes of  a given
/// type. e.g. all faces of a solid.
/// 
/// * Package methods to map sub-shapes of a shape.
/// 
/// Level : Public
/// All methods of all  classes will be public.
/// </summary>
public ref class TopExp sealed
    : public Macad::Occt::BaseClass<::TopExp>
{

#ifdef Include_TopExp_h
public:
    Include_TopExp_h
#endif

public:
    TopExp(::TopExp* nativeInstance)
        : Macad::Occt::BaseClass<::TopExp>( nativeInstance, true )
    {}

    TopExp(::TopExp& nativeInstance)
        : Macad::Occt::BaseClass<::TopExp>( &nativeInstance, false )
    {}

    property ::TopExp* NativeInstance
    {
        ::TopExp* get()
        {
            return static_cast<::TopExp*>(_NativeInstance);
        }
    }

public:
    TopExp();
    /// <summary>
    /// Tool to explore a topological data structure.
    /// Stores in the map <M> all  the sub-shapes of <S>
    /// of type <T>.
    /// 
    /// Warning: The map is not cleared at first.
    /// </summary>
    static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopTools_IndexedMapOfShape^ M);
    /// <summary>
    /// Stores in the map <M> all  the sub-shapes of <S>.
    /// - If cumOri is true, the function composes all
    /// sub-shapes with the orientation of S.
    /// - If cumLoc is true, the function multiplies all
    /// sub-shapes by the location of S, i.e. it applies to
    /// each sub-shape the transformation that is associated with S.
    /// </summary>
    static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M, bool cumOri, bool cumLoc);
    /// <summary>
    /// Stores in the map <M> all  the sub-shapes of <S>.
    /// - If cumOri is true, the function composes all
    /// sub-shapes with the orientation of S.
    /// - If cumLoc is true, the function multiplies all
    /// sub-shapes by the location of S, i.e. it applies to
    /// each sub-shape the transformation that is associated with S.
    /// </summary>
    static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M, bool cumOri);
    /// <summary>
    /// Stores in the map <M> all  the sub-shapes of <S>.
    /// - If cumOri is true, the function composes all
    /// sub-shapes with the orientation of S.
    /// - If cumLoc is true, the function multiplies all
    /// sub-shapes by the location of S, i.e. it applies to
    /// each sub-shape the transformation that is associated with S.
    /// </summary>
    static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M);
    /// <summary>
    /// Stores in the map <M> all  the sub-shapes of <S>.
    /// - If cumOri is true, the function composes all
    /// sub-shapes with the orientation of S.
    /// - If cumLoc is true, the function multiplies all
    /// sub-shapes by the location of S, i.e. it applies to
    /// each sub-shape the transformation that is associated with S.
    /// </summary>
    static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ M, bool cumOri, bool cumLoc);
    /// <summary>
    /// Stores in the map <M> all  the sub-shapes of <S>.
    /// - If cumOri is true, the function composes all
    /// sub-shapes with the orientation of S.
    /// - If cumLoc is true, the function multiplies all
    /// sub-shapes by the location of S, i.e. it applies to
    /// each sub-shape the transformation that is associated with S.
    /// </summary>
    static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ M, bool cumOri);
    /// <summary>
    /// Stores in the map <M> all  the sub-shapes of <S>.
    /// - If cumOri is true, the function composes all
    /// sub-shapes with the orientation of S.
    /// - If cumLoc is true, the function multiplies all
    /// sub-shapes by the location of S, i.e. it applies to
    /// each sub-shape the transformation that is associated with S.
    /// </summary>
    static void MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ M);
    /// <summary>
    /// Stores in the map <M> all the subshape of <S> of
    /// type <TS>  for each one append  to  the list all
    /// the ancestors of type <TA>.  For example map all
    /// the edges and bind the list of faces.
    /// Warning: The map is not cleared at first.
    /// </summary>
    static void MapShapesAndAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M);
    /// <summary>
    /// Stores in the map <M> all the subshape of <S> of
    /// type <TS> for each one append to the list all
    /// unique ancestors of type <TA>.  For example map all
    /// the edges and bind the list of faces.
    /// useOrientation = True : taking account the ancestor orientation
    /// Warning: The map is not cleared at first.
    /// </summary>
    static void MapShapesAndUniqueAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M, bool useOrientation);
    /// <summary>
    /// Stores in the map <M> all the subshape of <S> of
    /// type <TS> for each one append to the list all
    /// unique ancestors of type <TA>.  For example map all
    /// the edges and bind the list of faces.
    /// useOrientation = True : taking account the ancestor orientation
    /// Warning: The map is not cleared at first.
    /// </summary>
    static void MapShapesAndUniqueAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M);
    /// <summary>
    /// Returns the Vertex of orientation FORWARD in E. If
    /// there is none returns a Null Shape.
    /// CumOri = True : taking account the edge orientation
    /// </summary>
    static Macad::Occt::TopoDS_Vertex^ FirstVertex(Macad::Occt::TopoDS_Edge^ E, bool CumOri);
    /// <summary>
    /// Returns the Vertex of orientation FORWARD in E. If
    /// there is none returns a Null Shape.
    /// CumOri = True : taking account the edge orientation
    /// </summary>
    static Macad::Occt::TopoDS_Vertex^ FirstVertex(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the Vertex of orientation REVERSED in E. If
    /// there is none returns a Null Shape.
    /// CumOri = True : taking account the edge orientation
    /// </summary>
    static Macad::Occt::TopoDS_Vertex^ LastVertex(Macad::Occt::TopoDS_Edge^ E, bool CumOri);
    /// <summary>
    /// Returns the Vertex of orientation REVERSED in E. If
    /// there is none returns a Null Shape.
    /// CumOri = True : taking account the edge orientation
    /// </summary>
    static Macad::Occt::TopoDS_Vertex^ LastVertex(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns in Vfirst, Vlast the  FORWARD and REVERSED
    /// vertices of the edge <E>. May be null shapes.
    /// CumOri = True : taking account the edge orientation
    /// </summary>
    static void Vertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast, bool CumOri);
    /// <summary>
    /// Returns in Vfirst, Vlast the  FORWARD and REVERSED
    /// vertices of the edge <E>. May be null shapes.
    /// CumOri = True : taking account the edge orientation
    /// </summary>
    static void Vertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast);
    /// <summary>
    /// Returns  in  Vfirst,  Vlast   the first   and last
    /// vertices of the open wire <W>. May be null shapes.
    /// if   <W>  is closed Vfirst and Vlast  are a same
    /// vertex on <W>.
    /// if <W> is no manifold. VFirst and VLast are null
    /// shapes.
    /// </summary>
    static void Vertices(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast);
    /// <summary>
    /// Finds   the  vertex <V> common   to  the two edges
    /// <E1,E2>, returns True if this vertex exists.
    /// 
    /// Warning: <V> has sense only if the value <True> is returned
    /// </summary>
    static bool CommonVertex(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Vertex^ V);
}; // class TopExp

//---------------------------------------------------------------------
//  Class  TopExp_Explorer
//---------------------------------------------------------------------
/// <summary>
/// An Explorer is a Tool to visit  a Topological Data
/// Structure form the TopoDS package.
/// 
/// An Explorer is built with :
/// 
/// * The Shape to explore.
/// 
/// * The type of Shapes to find : e.g VERTEX, EDGE.
/// This type cannot be SHAPE.
/// 
/// * The type of Shapes to avoid. e.g  SHELL, EDGE.
/// By default   this type is  SHAPE which  means no
/// restriction on the exploration.
/// 
/// The Explorer  visits  all the  structure   to find
/// shapes of the   requested  type  which   are   not
/// contained in the type to avoid.
/// 
/// Example to find all the Faces in the Shape S :
/// 
/// TopExp_Explorer Ex;
/// for (Ex.Init(S,TopAbs_FACE); Ex.More(); Ex.Next()) {
/// ProcessFace(Ex.Current());
/// }
/// 
/// // an other way
/// TopExp_Explorer Ex(S,TopAbs_FACE);
/// while (Ex.More()) {
/// ProcessFace(Ex.Current());
/// Ex.Next();
/// }
/// 
/// To find all the vertices which are not in an edge :
/// 
/// for (Ex.Init(S,TopAbs_VERTEX,TopAbs_EDGE); ...)
/// 
/// To  find all the faces  in   a SHELL, then all the
/// faces not in a SHELL :
/// 
/// TopExp_Explorer Ex1, Ex2;
/// 
/// for (Ex1.Init(S,TopAbs_SHELL),...) {
/// // visit all shells
/// for (Ex2.Init(Ex1.Current(),TopAbs_FACE),...) {
/// // visit all the faces of the current shell
/// }
/// }
/// 
/// for (Ex1.Init(S,TopAbs_FACE,TopAbs_SHELL),...) {
/// // visit all faces not in a shell
/// }
/// 
/// If   the type  to avoid  is   the same  or is less
/// complex than the type to find it has no effect.
/// 
/// For example searching edges  not in a vertex  does
/// not make a difference.
/// </summary>
public ref class TopExp_Explorer sealed
    : public Macad::Occt::BaseClass<::TopExp_Explorer>
{

#ifdef Include_TopExp_Explorer_h
public:
    Include_TopExp_Explorer_h
#endif

public:
    TopExp_Explorer(::TopExp_Explorer* nativeInstance)
        : Macad::Occt::BaseClass<::TopExp_Explorer>( nativeInstance, true )
    {}

    TopExp_Explorer(::TopExp_Explorer& nativeInstance)
        : Macad::Occt::BaseClass<::TopExp_Explorer>( &nativeInstance, false )
    {}

    property ::TopExp_Explorer* NativeInstance
    {
        ::TopExp_Explorer* get()
        {
            return static_cast<::TopExp_Explorer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty explorer, becomes useful after Init.
    /// </summary>
    TopExp_Explorer();
    /// <summary>
    /// Creates an Explorer on the Shape <S>.
    /// 
    /// <ToFind> is the type of shapes to search.
    /// TopAbs_VERTEX, TopAbs_EDGE, ...
    /// 
    /// <ToAvoid>   is the type   of shape to  skip in the
    /// exploration.   If   <ToAvoid>  is  equal  or  less
    /// complex than <ToFind> or if  <ToAVoid> is SHAPE it
    /// has no effect on the exploration.
    /// </summary>
    TopExp_Explorer(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind, Macad::Occt::TopAbs_ShapeEnum ToAvoid);
    /// <summary>
    /// Creates an Explorer on the Shape <S>.
    /// 
    /// <ToFind> is the type of shapes to search.
    /// TopAbs_VERTEX, TopAbs_EDGE, ...
    /// 
    /// <ToAvoid>   is the type   of shape to  skip in the
    /// exploration.   If   <ToAvoid>  is  equal  or  less
    /// complex than <ToFind> or if  <ToAVoid> is SHAPE it
    /// has no effect on the exploration.
    /// </summary>
    TopExp_Explorer(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind);
    /// <summary>
    /// Resets this explorer on the shape S. It is initialized to
    /// search the shape S, for shapes of type ToFind, that
    /// are not part of a shape ToAvoid.
    /// If the shape ToAvoid is equal to TopAbs_SHAPE, or
    /// if it is the same as, or less complex than, the shape
    /// ToFind it has no effect on the search.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind, Macad::Occt::TopAbs_ShapeEnum ToAvoid);
    /// <summary>
    /// Resets this explorer on the shape S. It is initialized to
    /// search the shape S, for shapes of type ToFind, that
    /// are not part of a shape ToAvoid.
    /// If the shape ToAvoid is equal to TopAbs_SHAPE, or
    /// if it is the same as, or less complex than, the shape
    /// ToFind it has no effect on the search.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind);
    /// <summary>
    /// Returns True if there are more shapes in the exploration.
    /// </summary>
    bool More();
    /// <summary>
    /// Moves to the next Shape in the exploration.
    /// Exceptions
    /// Standard_NoMoreObject if there are no more shapes to explore.
    /// </summary>
    void Next();
    /// <summary>
    /// Returns the current shape in the exploration.
    /// Exceptions
    /// Standard_NoSuchObject if this explorer has no more shapes to explore.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Value();
    /// <summary>
    /// Returns the current shape in the exploration.
    /// Exceptions
    /// Standard_NoSuchObject if this explorer has no more shapes to explore.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Current();
    /// <summary>
    /// Reinitialize the exploration with the original arguments.
    /// </summary>
    void ReInit();
    /// <summary>
    /// Return explored shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ExploredShape();
    /// <summary>
    /// Returns the current depth of the exploration. 0 is
    /// the shape to explore itself.
    /// </summary>
    int Depth();
    /// <summary>
    /// Clears the content of the explorer. It will return
    /// False on More().
    /// </summary>
    void Clear();
}; // class TopExp_Explorer

}; // namespace Occt
}; // namespace Macad
