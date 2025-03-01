// Generated wrapper code for package BRepOffset

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepOffset_Error
//---------------------------------------------------------------------
public enum class BRepOffset_Error
{
    NoError = 0,
    UnknownError = 1,
    BadNormalsOnGeometry = 2,
    C0Geometry = 3,
    NullOffset = 4,
    NotConnectedShell = 5,
    CannotTrimEdges = 6,
    CannotFuseVertices = 7,
    CannotExtentEdge = 8,
    UserBreak = 9,
    MixedConnectivity = 10
}; // enum  class BRepOffset_Error

//---------------------------------------------------------------------
//  Enum  BRepOffset_Mode
//---------------------------------------------------------------------
/// <summary>
/// Lists the offset modes. These are the following:
/// - BRepOffset_Skin which describes the offset along
/// the surface of a solid, used to obtain a manifold topological space,
/// - BRepOffset_Pipe which describes the offset of a
/// curve, used to obtain a pre-surface,
/// - BRepOffset_RectoVerso which describes the offset
/// of a given surface shell along both sides of the surface.
/// </summary>
public enum class BRepOffset_Mode
{
    Skin = 0,
    Pipe = 1,
    RectoVerso = 2
}; // enum  class BRepOffset_Mode

//---------------------------------------------------------------------
//  Class  BRepOffset_MakeOffset
//---------------------------------------------------------------------
public ref class BRepOffset_MakeOffset sealed
    : public Macad::Occt::BaseClass<::BRepOffset_MakeOffset>
{

#ifdef Include_BRepOffset_MakeOffset_h
public:
    Include_BRepOffset_MakeOffset_h
#endif

public:
    BRepOffset_MakeOffset(::BRepOffset_MakeOffset* nativeInstance)
        : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>( nativeInstance, true )
    {}

    BRepOffset_MakeOffset(::BRepOffset_MakeOffset& nativeInstance)
        : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>( &nativeInstance, false )
    {}

    property ::BRepOffset_MakeOffset* NativeInstance
    {
        ::BRepOffset_MakeOffset* get()
        {
            return static_cast<::BRepOffset_MakeOffset*>(_NativeInstance);
        }
    }

public:
    BRepOffset_MakeOffset();
    BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges, Macad::Occt::Message_ProgressRange^ theRange);
    BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges);
    BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening);
    BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
    BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
    BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
    BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
    BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol);
    void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges);
    void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening);
    void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join);
    void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter);
    void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection);
    void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode);
    void Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol);
    void Clear();
    /// <summary>
    /// Changes the flag allowing the linearization
    /// </summary>
    void AllowLinearization(bool theIsAllowed);
    /// <summary>
    /// Add Closing Faces,  <F>  has to be  in  the initial
    /// shape S.
    /// </summary>
    void AddFace(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// set the offset <Off> on the Face <F>
    /// </summary>
    void SetOffsetOnFace(Macad::Occt::TopoDS_Face^ F, double Off);
    void MakeOffsetShape(Macad::Occt::Message_ProgressRange^ theRange);
    void MakeOffsetShape();
    void MakeThickSolid(Macad::Occt::Message_ProgressRange^ theRange);
    void MakeThickSolid();
    bool IsDone();
    Macad::Occt::TopoDS_Shape^ Shape();
    Macad::Occt::TopoDS_Shape^ InitShape();
    /// <summary>
    /// returns information about offset state.
    /// </summary>
    Macad::Occt::BRepOffset_Error Error();
    /* Method skipped due to unknown mapping: BRepAlgo_Image OffsetFacesFromShapes() */
    /// <summary>
    /// Returns myJoin.
    /// </summary>
    Macad::Occt::GeomAbs_JoinType GetJoinType();
    /* Method skipped due to unknown mapping: BRepAlgo_Image OffsetEdgesFromShapes() */
    /// <summary>
    /// Returns the list of closing faces stores by AddFace
    /// </summary>
    Macad::Occt::TopTools_IndexedMapOfShape^ ClosingFaces();
    /// <summary>
    /// Makes pre analysis of possibility offset perform. Use method Error() to get more information.
    /// Finds first error. List of checks:
    /// 1) Check for existence object with non-null offset.
    /// 2) Check for connectivity in offset shell.
    /// 3) Check continuity of input surfaces.
    /// 4) Check for normals existence on grid.
    /// </summary>
    /// <returns>
    /// True if possible make computations and false otherwise.
    /// </returns>
    bool CheckInputData(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Return bad shape, which obtained in CheckInputData.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GetBadShape();
    /// <summary>
    /// </summary>
    /// @name History methods
    /// Returns the  list of shapes generated from the shape <S>.
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Returns the list of shapes modified from the shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Returns true if the shape S has been deleted.
    /// </summary>
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
}; // class BRepOffset_MakeOffset

}; // namespace Occt
}; // namespace Macad
