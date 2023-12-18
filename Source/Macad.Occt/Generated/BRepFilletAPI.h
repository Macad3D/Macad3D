// Generated wrapper code for package BRepFilletAPI

#pragma once

#include "BRepBuilderAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepFilletAPI_LocalOperation
//---------------------------------------------------------------------
/// <summary>
/// Construction of fillets on the edges of a Shell.
/// </summary>
public ref class BRepFilletAPI_LocalOperation
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFilletAPI_LocalOperation_h
public:
    Include_BRepFilletAPI_LocalOperation_h
#endif

protected:
    BRepFilletAPI_LocalOperation(InitMode init)
        : Macad::Occt::BRepBuilderAPI_MakeShape( init )
    {}

public:
    BRepFilletAPI_LocalOperation(::BRepFilletAPI_LocalOperation* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepFilletAPI_LocalOperation(::BRepFilletAPI_LocalOperation& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepFilletAPI_LocalOperation* NativeInstance
    {
        ::BRepFilletAPI_LocalOperation* get()
        {
            return static_cast<::BRepFilletAPI_LocalOperation*>(_NativeInstance);
        }
    }

public:
    BRepFilletAPI_LocalOperation();
    /// <summary>
    /// Adds a  contour in  the  builder  (builds a
    /// contour  of tangent edges).
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Reset the contour of index IC, there is nomore
    /// information in the contour.
    /// </summary>
    void ResetContour(int IC);
    /// <summary>
    /// Number of contours.
    /// </summary>
    int NbContours();
    /// <summary>
    /// Returns the index of  the  contour containing the edge
    /// E, returns 0 if E doesn't belong to any contour.
    /// </summary>
    int Contour(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Number of Edges in the contour I.
    /// </summary>
    int NbEdges(int I);
    /// <summary>
    /// Returns the Edge J in the contour I.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge(int I, int J);
    /// <summary>
    /// remove the contour containing the Edge E.
    /// </summary>
    void Remove(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// returns the length the contour of index IC.
    /// </summary>
    double Length(int IC);
    /// <summary>
    /// Returns the first Vertex of the contour of index IC.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ FirstVertex(int IC);
    /// <summary>
    /// Returns the last Vertex of the contour of index IC.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ LastVertex(int IC);
    /// <summary>
    /// returns the abscissa of the vertex V on
    /// the contour of index IC.
    /// </summary>
    double Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// returns the relative abscissa([0.,1.]) of the
    /// vertex V on the contour of index IC.
    /// </summary>
    double RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// returns true if the contour of index IC is closed
    /// an tangent.
    /// </summary>
    bool ClosedAndTangent(int IC);
    /// <summary>
    /// returns true if the contour of index IC is closed
    /// </summary>
    bool Closed(int IC);
    /// <summary>
    /// Reset all the fields updated   by Build operation  and
    /// leave the  algorithm in  the  same state  than  before
    /// build    call.  It   allows   contours    and   radius
    /// modifications  to build the result another time.
    /// </summary>
    void Reset();
    void Simulate(int IC);
    int NbSurf(int IC);
    /* Method skipped due to unknown mapping: ChFiDS_SecHArray1 Sect(int IC, int IS, ) */
}; // class BRepFilletAPI_LocalOperation

//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeChamfer
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build chamfers on edges of a shell or solid.
/// Chamfered Edge of a Shell or Solid
/// A MakeChamfer object provides a framework for:
/// -   initializing the construction algorithm with a given shape,
/// -   acquiring the data characterizing the chamfers,
/// -   building the chamfers and constructing the resulting shape, and
/// -   consulting the result.
/// </summary>
public ref class BRepFilletAPI_MakeChamfer sealed
    : public Macad::Occt::BRepFilletAPI_LocalOperation
{

#ifdef Include_BRepFilletAPI_MakeChamfer_h
public:
    Include_BRepFilletAPI_MakeChamfer_h
#endif

public:
    BRepFilletAPI_MakeChamfer(::BRepFilletAPI_MakeChamfer* nativeInstance)
        : Macad::Occt::BRepFilletAPI_LocalOperation( nativeInstance )
    {}

    BRepFilletAPI_MakeChamfer(::BRepFilletAPI_MakeChamfer& nativeInstance)
        : Macad::Occt::BRepFilletAPI_LocalOperation( nativeInstance )
    {}

    property ::BRepFilletAPI_MakeChamfer* NativeInstance
    {
        ::BRepFilletAPI_MakeChamfer* get()
        {
            return static_cast<::BRepFilletAPI_MakeChamfer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an algorithm for computing chamfers on the shape S.
    /// The edges on which chamfers are built are defined using the Add function.
    /// </summary>
    BRepFilletAPI_MakeChamfer(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Adds edge E to the table of edges used by this
    /// algorithm to build chamfers, where the parameters
    /// of the chamfer must be set after the
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Adds edge E to the table of edges used by this
    /// algorithm to build chamfers, where
    /// the parameters of the chamfer are given by
    /// the distance Dis (symmetric chamfer).
    /// The Add function results in a contour being built by
    /// propagation from the edge E (i.e. the contour contains at
    /// least this edge). This contour is composed of edges of
    /// the shape which are tangential to one another and
    /// which delimit two series of tangential faces, with one
    /// series of faces being located on either side of the contour.
    /// Warning
    /// Nothing is done if edge E or the face F does not belong to the initial shape.
    /// </summary>
    void Add(double Dis, Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Sets the distances Dis1 and Dis2 which give the
    /// parameters of the chamfer along the contour of index
    /// IC generated using the Add function in the internal
    /// data structure of this algorithm. The face F identifies
    /// the side where Dis1 is measured.
    /// Warning
    /// Nothing is done if either the edge E or the face F
    /// does not belong to the initial shape.
    /// </summary>
    void SetDist(double Dis, int IC, Macad::Occt::TopoDS_Face^ F);
    void GetDist(int IC, double% Dis);
    /// <summary>
    /// Adds edge E to the table of edges used by this
    /// algorithm to build chamfers, where
    /// the parameters of the chamfer are given by the two
    /// distances Dis1 and Dis2; the face F identifies the side
    /// where Dis1 is measured.
    /// The Add function results in a contour being built by
    /// propagation from the edge E (i.e. the contour contains at
    /// least this edge). This contour is composed of edges of
    /// the shape which are tangential to one another and
    /// which delimit two series of tangential faces, with one
    /// series of faces being located on either side of the contour.
    /// Warning
    /// Nothing is done if edge E or the face F does not belong to the initial shape.
    /// </summary>
    void Add(double Dis1, double Dis2, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Sets the distances Dis1 and Dis2 which give the
    /// parameters of the chamfer along the contour of index
    /// IC generated using the Add function in the internal
    /// data structure of this algorithm. The face F identifies
    /// the side where Dis1 is measured.
    /// Warning
    /// Nothing is done if either the edge E or the face F
    /// does not belong to the initial shape.
    /// </summary>
    void SetDists(double Dis1, double Dis2, int IC, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns the distances Dis1 and Dis2 which give the
    /// parameters of the chamfer along the contour of index IC
    /// in the internal data structure of this algorithm.
    /// Warning
    /// -1. is returned if IC is outside the bounds of the table of contours.
    /// </summary>
    void Dists(int IC, double% Dis1, double% Dis2);
    /// <summary>
    /// Adds a  fillet contour in  the  builder  (builds a
    /// contour  of tangent edges to <E> and sets the
    /// distance <Dis1> and angle <Angle> ( parameters of the chamfer ) ).
    /// </summary>
    void AddDA(double Dis, double Angle, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// set the distance <Dis> and <Angle> of the fillet
    /// contour of index <IC> in the DS with <Dis> on <F>.
    /// if the face <F> is not one of common faces
    /// of an edge of the contour <IC>
    /// </summary>
    void SetDistAngle(double Dis, double Angle, int IC, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// gives the distances <Dis> and <Angle> of the fillet
    /// contour of index <IC> in the DS
    /// </summary>
    void GetDistAngle(int IC, double% Dis, double% Angle);
    /* Method skipped due to unknown mapping: void SetMode(ChFiDS_ChamfMode theMode, ) */
    /// <summary>
    /// return True if chamfer symmetric false else.
    /// </summary>
    bool IsSymetric(int IC);
    /// <summary>
    /// return True if chamfer is made with two distances false else.
    /// </summary>
    bool IsTwoDistances(int IC);
    /// <summary>
    /// return True if chamfer is made with distance and angle false else.
    /// </summary>
    bool IsDistanceAngle(int IC);
    /// <summary>
    /// Erases the chamfer parameters on the contour of
    /// index IC in the internal data structure of this algorithm.
    /// Use the SetDists function to reset this data.
    /// Warning
    /// Nothing is done if IC is outside the bounds of the table of contours.
    /// </summary>
    void ResetContour(int IC);
    /// <summary>
    /// Returns the number of contours generated using the
    /// Add function in the internal data structure of this algorithm.
    /// </summary>
    int NbContours();
    /// <summary>
    /// Returns the index of the contour in the internal data
    /// structure of this algorithm, which contains the edge E of the shape.
    /// This function returns 0 if the edge E does not belong to any contour.
    /// Warning
    /// This index can change if a contour is removed from the
    /// internal data structure of this algorithm using the function Remove.
    /// </summary>
    int Contour(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the number of edges in the contour of index I in
    /// the internal data structure of this algorithm.
    /// Warning
    /// Returns 0 if I is outside the bounds of the table of contours.
    /// </summary>
    int NbEdges(int I);
    /// <summary>
    /// Returns the edge of index J in the contour of index I in
    /// the internal data structure of this algorithm.
    /// Warning
    /// Returns a null shape if:
    /// -   I is outside the bounds of the table of contours, or
    /// -   J is outside the bounds of the table of edges of the contour of index I.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge(int I, int J);
    /// <summary>
    /// Removes the contour in the internal data structure of
    /// this algorithm which contains the edge E of the shape.
    /// Warning
    /// Nothing is done if the edge E does not belong to the
    /// contour in the internal data structure of this algorithm.
    /// </summary>
    void Remove(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the length of the contour of index IC in the
    /// internal data structure of this algorithm.
    /// Warning
    /// Returns -1. if IC is outside the bounds of the table of contours.
    /// </summary>
    double Length(int IC);
    /// <summary>
    /// Returns the first vertex of the contour of index IC
    /// in the internal data structure of this algorithm.
    /// Warning
    /// Returns a null shape if IC is outside the bounds of the table of contours.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ FirstVertex(int IC);
    /// <summary>
    /// Returns the last vertex of the contour of index IC
    /// in the internal data structure of this algorithm.
    /// Warning
    /// Returns a null shape if IC is outside the bounds of the table of contours.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ LastVertex(int IC);
    /// <summary>
    /// Returns the curvilinear abscissa of the vertex V on the
    /// contour of index IC in the internal data structure of this algorithm.
    /// Warning
    /// Returns -1. if:
    /// -   IC is outside the bounds of the table of contours, or
    /// -   V is not on the contour of index IC.
    /// </summary>
    double Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Returns the relative curvilinear abscissa (i.e. between 0
    /// and 1) of the vertex V on the contour of index IC in the
    /// internal data structure of this algorithm.
    /// Warning
    /// Returns -1. if:
    /// -   IC is outside the bounds of the table of contours, or
    /// -   V is not on the contour of index IC.
    /// </summary>
    double RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// eturns true if the contour of index IC in the internal
    /// data structure of this algorithm is closed and tangential at the point of closure.
    /// Warning
    /// Returns false if IC is outside the bounds of the table of contours.
    /// </summary>
    bool ClosedAndTangent(int IC);
    /// <summary>
    /// Returns true if the contour of index IC in the internal
    /// data structure of this algorithm is closed.
    /// Warning
    /// Returns false if IC is outside the bounds of the table of contours.
    /// </summary>
    bool Closed(int IC);
    /// <summary>
    /// Builds the chamfers on all the contours in the internal
    /// data structure of this algorithm and constructs the resulting shape.
    /// Use the function IsDone to verify that the chamfered
    /// shape is built. Use the function Shape to retrieve the chamfered shape.
    /// Warning
    /// The construction of chamfers implements highly complex
    /// construction algorithms. Consequently, there may be
    /// instances where the algorithm fails, for example if the
    /// data defining the parameters of the chamfer is not
    /// compatible with the geometry of the initial shape. There
    /// is no initial analysis of errors and these only become
    /// evident at the construction stage.
    /// Additionally, in the current software release, the following
    /// cases are not handled:
    /// -   the end point of the contour is the point of
    /// intersection of 4 or more edges of the shape, or
    /// -   the intersection of the chamfer with a face which
    /// limits the contour is not fully contained in this face.
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the chamfers on all the contours in the internal
    /// data structure of this algorithm and constructs the resulting shape.
    /// Use the function IsDone to verify that the chamfered
    /// shape is built. Use the function Shape to retrieve the chamfered shape.
    /// Warning
    /// The construction of chamfers implements highly complex
    /// construction algorithms. Consequently, there may be
    /// instances where the algorithm fails, for example if the
    /// data defining the parameters of the chamfer is not
    /// compatible with the geometry of the initial shape. There
    /// is no initial analysis of errors and these only become
    /// evident at the construction stage.
    /// Additionally, in the current software release, the following
    /// cases are not handled:
    /// -   the end point of the contour is the point of
    /// intersection of 4 or more edges of the shape, or
    /// -   the intersection of the chamfer with a face which
    /// limits the contour is not fully contained in this face.
    /// </summary>
    void Build();
    /// <summary>
    /// Reinitializes this algorithm, thus canceling the effects of the Build function.
    /// This function allows modifications to be made to the
    /// contours and chamfer parameters in order to rebuild the shape.
    /// </summary>
    void Reset();
    /* Method skipped due to unknown mapping: TopOpeBRepBuild_HBuilder Builder() */
    /// <summary>
    /// Returns the  list   of shapes generated   from the
    /// shape <EorV>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ EorV);
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <F>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ F);
    void Simulate(int IC);
    int NbSurf(int IC);
    /* Method skipped due to unknown mapping: ChFiDS_SecHArray1 Sect(int IC, int IS, ) */
}; // class BRepFilletAPI_MakeChamfer

//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeFillet
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build fillets on the broken edges of a shell or solid.
/// A MakeFillet object provides a framework for:
/// -   initializing the construction algorithm with a given shape,
/// -   acquiring the data characterizing the fillets,
/// -   building the fillets and constructing the resulting shape, and
/// -   consulting the result.
/// </summary>
public ref class BRepFilletAPI_MakeFillet sealed
    : public Macad::Occt::BRepFilletAPI_LocalOperation
{

#ifdef Include_BRepFilletAPI_MakeFillet_h
public:
    Include_BRepFilletAPI_MakeFillet_h
#endif

public:
    BRepFilletAPI_MakeFillet(::BRepFilletAPI_MakeFillet* nativeInstance)
        : Macad::Occt::BRepFilletAPI_LocalOperation( nativeInstance )
    {}

    BRepFilletAPI_MakeFillet(::BRepFilletAPI_MakeFillet& nativeInstance)
        : Macad::Occt::BRepFilletAPI_LocalOperation( nativeInstance )
    {}

    property ::BRepFilletAPI_MakeFillet* NativeInstance
    {
        ::BRepFilletAPI_MakeFillet* get()
        {
            return static_cast<::BRepFilletAPI_MakeFillet*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes   the computation    of   the  fillets.
    /// <FShape> sets   the type   of fillet  surface. The
    /// default value is ChFi3d_Rational (classical  nurbs
    /// representation of  circles).   ChFi3d_QuasiAngular
    /// corresponds to  a  nurbs representation of circles
    /// which   parameterisation matches  the  circle one.
    /// ChFi3d_Polynomial  corresponds to  a    polynomial
    /// representation of circles.
    /// </summary>
    BRepFilletAPI_MakeFillet(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ChFi3d_FilletShape FShape);
    /// <summary>
    /// Initializes   the computation    of   the  fillets.
    /// <FShape> sets   the type   of fillet  surface. The
    /// default value is ChFi3d_Rational (classical  nurbs
    /// representation of  circles).   ChFi3d_QuasiAngular
    /// corresponds to  a  nurbs representation of circles
    /// which   parameterisation matches  the  circle one.
    /// ChFi3d_Polynomial  corresponds to  a    polynomial
    /// representation of circles.
    /// </summary>
    BRepFilletAPI_MakeFillet(Macad::Occt::TopoDS_Shape^ S);
    void SetParams(double Tang, double Tesp, double T2d, double TApp3d, double TolApp2d, double Fleche);
    /// <summary>
    /// Changes     the      parameters     of  continiuity
    /// InternalContinuity to produce fillet'surfaces with
    /// an continuity   Ci (i=0,1 or    2).
    /// By defaultInternalContinuity = GeomAbs_C1.
    /// AngularTolerance  is the G1 tolerance between fillet
    /// and support'faces.
    /// </summary>
    void SetContinuity(Macad::Occt::GeomAbs_Shape InternalContinuity, double AngularTolerance);
    /// <summary>
    /// Adds a  fillet contour in  the  builder  (builds a
    /// contour  of tangent edges).
    /// The Radius must be set after.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Adds a  fillet description in  the  builder
    /// - builds a contour  of tangent edges,
    /// - sets the radius.
    /// </summary>
    void Add(double Radius, Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Adds a  fillet description in  the  builder
    /// - builds a contour  of tangent edges,
    /// - sets a linear radius evolution law between
    /// the first and last vertex of the spine.
    /// </summary>
    void Add(double R1, double R2, Macad::Occt::TopoDS_Edge^ E);
    /* Method skipped due to unknown mapping: void Add(Law_Function L, TopoDS_Edge E, ) */
    /// <summary>
    /// Adds a  fillet description in  the  builder
    /// - builds a contour  of tangent edges,
    /// - sets the radius evolution law interpolating the values
    /// given in the array UandR :
    /// 
    /// p2d.X() = relative parameter on the spine [0,1]
    /// p2d.Y() = value of the radius.
    /// </summary>
    void Add(Macad::Occt::TColgp_Array1OfPnt2d^ UandR, Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Sets the parameters of the fillet
    /// along the contour of index IC generated using the Add function
    /// in the internal data structure of
    /// this algorithm, where Radius is the radius of the fillet.
    /// </summary>
    void SetRadius(double Radius, int IC, int IinC);
    /// <summary>
    /// Sets the parameters of the fillet
    /// along the contour of index IC generated using the Add function
    /// in the internal data structure of this algorithm, where the radius of the
    /// fillet evolves according to a linear evolution law defined
    /// from R1 to R2, between the first and last vertices of the contour of index IC.
    /// </summary>
    void SetRadius(double R1, double R2, int IC, int IinC);
    /* Method skipped due to unknown mapping: void SetRadius(Law_Function L, int IC, int IinC, ) */
    /// <summary>
    /// Sets the parameters of the fillet
    /// along the contour of index IC generated using the Add function
    /// in the internal data structure of this algorithm,
    /// where the radius of the fillet evolves according to the evolution law
    /// which interpolates the set of parameter and radius pairs given
    /// in the array UandR as follows:
    /// -   the X coordinate of a point in UandR defines a
    /// relative parameter on the contour (i.e. a parameter between 0 and 1),
    /// -          the Y coordinate of a point in UandR gives the
    /// corresponding value of the radius, and the radius evolves
    /// between the first and last vertices of the contour of index IC.
    /// </summary>
    void SetRadius(Macad::Occt::TColgp_Array1OfPnt2d^ UandR, int IC, int IinC);
    /// <summary>
    /// Erases the radius information on the contour of index
    /// IC in the internal data structure of this algorithm.
    /// Use the SetRadius function to reset this data.
    /// Warning
    /// Nothing is done if IC is outside the bounds of the table of contours.
    /// </summary>
    void ResetContour(int IC);
    /// <summary>
    /// Returns true if the radius of the fillet along the contour of index IC
    /// in the internal data structure of this algorithm is constant,
    /// Warning
    /// False is returned if IC is outside the bounds of the table
    /// of contours or if E does not belong to the contour of index IC.
    /// </summary>
    bool IsConstant(int IC);
    /// <summary>
    /// Returns the radius of the fillet along the contour of index IC in the
    /// internal data structure of this algorithm
    /// Warning
    /// -   Use this function only if the radius is constant.
    /// -   -1. is returned if IC is outside the bounds of the
    /// table of contours or if E does not belong to the contour of index IC.
    /// </summary>
    double Radius(int IC);
    /// <summary>
    /// Returns true if the radius of the fillet along the edge E of the
    /// contour of index IC in the internal data structure of
    /// this algorithm is constant.
    /// Warning
    /// False is returned if IC is outside the bounds of the table
    /// of contours or if E does not belong to the contour of index IC.
    /// </summary>
    bool IsConstant(int IC, Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the radius of the fillet along the edge E of the contour of index
    /// IC in the internal data structure of this algorithm.
    /// Warning
    /// -   Use this function only if the radius is constant.
    /// -   -1 is returned if IC is outside the bounds of the
    /// table of contours or if E does not belong to the contour of index IC.
    /// </summary>
    double Radius(int IC, Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Assigns Radius as the radius of the fillet on the edge E
    /// </summary>
    void SetRadius(double Radius, int IC, Macad::Occt::TopoDS_Edge^ E);
    void SetRadius(double Radius, int IC, Macad::Occt::TopoDS_Vertex^ V);
    bool GetBounds(int IC, Macad::Occt::TopoDS_Edge^ E, double% F, double% L);
    /* Method skipped due to unknown mapping: Law_Function GetLaw(int IC, TopoDS_Edge E, ) */
    /* Method skipped due to unknown mapping: void SetLaw(int IC, TopoDS_Edge E, Law_Function L, ) */
    /// <summary>
    /// Assigns FShape as the type of fillet shape built by this algorithm.
    /// </summary>
    void SetFilletShape(Macad::Occt::ChFi3d_FilletShape FShape);
    /// <summary>
    /// Returns the type of fillet shape built by this algorithm.
    /// </summary>
    Macad::Occt::ChFi3d_FilletShape GetFilletShape();
    /// <summary>
    /// Returns the number of contours generated using the
    /// Add function in the internal data structure of this algorithm.
    /// </summary>
    int NbContours();
    /// <summary>
    /// Returns the index of the contour in the internal data
    /// structure of this algorithm which contains the edge E of the shape.
    /// This function returns 0 if the edge E does not belong to any contour.
    /// Warning
    /// This index can change if a contour is removed from the
    /// internal data structure of this algorithm using the function Remove.
    /// </summary>
    int Contour(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the number of edges in the contour of index I in
    /// the internal data structure of this algorithm.
    /// Warning
    /// Returns 0 if I is outside the bounds of the table of contours.
    /// </summary>
    int NbEdges(int I);
    /// <summary>
    /// Returns the edge of index J in the contour of index I in
    /// the internal data structure of this algorithm.
    /// Warning
    /// Returns a null shape if:
    /// -   I is outside the bounds of the table of contours, or
    /// -   J is outside the bounds of the table of edges of the index I contour.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge(int I, int J);
    /// <summary>
    /// Removes the contour in the internal data structure of
    /// this algorithm which contains the edge E of the shape.
    /// Warning
    /// Nothing is done if the edge E does not belong to the
    /// contour in the internal data structure of this algorithm.
    /// </summary>
    void Remove(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the length of the contour of index IC in the
    /// internal data structure of this algorithm.
    /// Warning
    /// Returns -1. if IC is outside the bounds of the table of contours.
    /// </summary>
    double Length(int IC);
    /// <summary>
    /// Returns the first vertex of the contour of index IC
    /// in the internal data structure of this algorithm.
    /// Warning
    /// Returns a null shape if IC is outside the bounds of the table of contours.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ FirstVertex(int IC);
    /// <summary>
    /// Returns the  last vertex of the contour of index IC
    /// in the internal data structure of this algorithm.
    /// Warning
    /// Returns a null shape if IC is outside the bounds of the table of contours.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ LastVertex(int IC);
    /// <summary>
    /// Returns the curvilinear abscissa of the vertex V on the
    /// contour of index IC in the internal data structure of this algorithm.
    /// Warning
    /// Returns -1. if:
    /// -   IC is outside the bounds of the table of contours, or
    /// -   V is not on the contour of index IC.
    /// </summary>
    double Abscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Returns the relative curvilinear abscissa (i.e. between 0
    /// and 1) of the vertex V on the contour of index IC in the
    /// internal data structure of this algorithm.
    /// Warning
    /// Returns -1. if:
    /// -   IC is outside the bounds of the table of contours, or
    /// -   V is not on the contour of index IC.
    /// </summary>
    double RelativeAbscissa(int IC, Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Returns true if the contour of index IC in the internal
    /// data structure of this algorithm is closed and tangential
    /// at the point of closure.
    /// Warning
    /// Returns false if IC is outside the bounds of the table of contours.
    /// </summary>
    bool ClosedAndTangent(int IC);
    /// <summary>
    /// Returns true if the contour of index IC in the internal
    /// data structure of this algorithm is closed.
    /// Warning
    /// Returns false if IC is outside the bounds of the table of contours.
    /// </summary>
    bool Closed(int IC);
    /// <summary>
    /// Builds the fillets on all the contours in the internal data
    /// structure of this algorithm and constructs the resulting shape.
    /// Use the function IsDone to verify that the filleted shape
    /// is built. Use the function Shape to retrieve the filleted shape.
    /// Warning
    /// The construction of fillets implements highly complex
    /// construction algorithms. Consequently, there may be
    /// instances where the algorithm fails, for example if the
    /// data defining the radius of the fillet is not compatible
    /// with the geometry of the initial shape. There is no initial
    /// analysis of errors and they only become evident at the
    /// construction stage.
    /// Additionally, in the current software release, the
    /// following cases are not handled:
    /// -   the end point of the contour is the point of
    /// intersection of 4 or more edges of the shape, or
    /// -   the intersection of the fillet with a face which limits
    /// the contour is not fully contained in this face.
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the fillets on all the contours in the internal data
    /// structure of this algorithm and constructs the resulting shape.
    /// Use the function IsDone to verify that the filleted shape
    /// is built. Use the function Shape to retrieve the filleted shape.
    /// Warning
    /// The construction of fillets implements highly complex
    /// construction algorithms. Consequently, there may be
    /// instances where the algorithm fails, for example if the
    /// data defining the radius of the fillet is not compatible
    /// with the geometry of the initial shape. There is no initial
    /// analysis of errors and they only become evident at the
    /// construction stage.
    /// Additionally, in the current software release, the
    /// following cases are not handled:
    /// -   the end point of the contour is the point of
    /// intersection of 4 or more edges of the shape, or
    /// -   the intersection of the fillet with a face which limits
    /// the contour is not fully contained in this face.
    /// </summary>
    void Build();
    /// <summary>
    /// Reinitializes this algorithm, thus canceling the effects of the Build function.
    /// This function allows modifications to be made to the
    /// contours and fillet parameters in order to rebuild the shape.
    /// </summary>
    void Reset();
    /* Method skipped due to unknown mapping: TopOpeBRepBuild_HBuilder Builder() */
    /// <summary>
    /// Returns the  list   of shapes generated   from the
    /// shape <EorV>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ EorV);
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <F>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ F);
    /// <summary>
    /// returns the number of surfaces
    /// after the shape creation.
    /// </summary>
    int NbSurfaces();
    /// <summary>
    /// Return the faces created for surface <I>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ NewFaces(int I);
    void Simulate(int IC);
    int NbSurf(int IC);
    /* Method skipped due to unknown mapping: ChFiDS_SecHArray1 Sect(int IC, int IS, ) */
    /// <summary>
    /// Returns the number of contours where the computation
    /// of the fillet failed
    /// </summary>
    int NbFaultyContours();
    /// <summary>
    /// for each I in [1.. NbFaultyContours] returns the index IC of
    /// the contour where the computation of the fillet failed.
    /// the method NbEdges(IC) gives the number of edges in the contour IC
    /// the method Edge(IC,ie) gives the edge number ie of the contour IC
    /// </summary>
    int FaultyContour(int I);
    /// <summary>
    /// returns the number of surfaces which have been
    /// computed on the contour IC
    /// </summary>
    int NbComputedSurfaces(int IC);
    /// <summary>
    /// returns the surface number IS concerning the contour IC
    /// </summary>
    Macad::Occt::Geom_Surface^ ComputedSurface(int IC, int IS);
    /// <summary>
    /// returns the number of vertices where the computation failed
    /// </summary>
    int NbFaultyVertices();
    /// <summary>
    /// returns the vertex where the computation failed
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ FaultyVertex(int IV);
    /// <summary>
    /// returns true if a part of the result has been computed
    /// if the filling in a corner failed a shape with a hole is returned
    /// </summary>
    bool HasResult();
    /// <summary>
    /// if (HasResult()) returns the partial result
    /// </summary>
    Macad::Occt::TopoDS_Shape^ BadShape();
    /* Method skipped due to unknown mapping: ChFiDS_ErrorStatus StripeStatus(int IC, ) */
}; // class BRepFilletAPI_MakeFillet

//---------------------------------------------------------------------
//  Class  BRepFilletAPI_MakeFillet2d
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build fillets and chamfers on the
/// vertices of a planar face.
/// Fillets and Chamfers on the Vertices of a Planar Face
/// A MakeFillet2d object provides a framework for:
/// - initializing the construction algorithm with a given face,
/// - acquiring the data characterizing the fillets and chamfers,
/// -   building the fillets and chamfers, and constructing the
/// resulting shape, and
/// -   consulting the result.
/// Warning
/// Only segments of straight lines and arcs of circles are
/// treated. BSplines are not processed.
/// </summary>
public ref class BRepFilletAPI_MakeFillet2d sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFilletAPI_MakeFillet2d_h
public:
    Include_BRepFilletAPI_MakeFillet2d_h
#endif

public:
    BRepFilletAPI_MakeFillet2d(::BRepFilletAPI_MakeFillet2d* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepFilletAPI_MakeFillet2d(::BRepFilletAPI_MakeFillet2d& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepFilletAPI_MakeFillet2d* NativeInstance
    {
        ::BRepFilletAPI_MakeFillet2d* get()
        {
            return static_cast<::BRepFilletAPI_MakeFillet2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an empty algorithm for computing fillets and
    /// chamfers. The face on which the fillets and
    /// chamfers are built is defined using the Init function.
    /// The vertices on which fillets or chamfers are built are
    /// defined using the AddFillet or AddChamfer function.
    /// Warning
    /// The status of the initialization, as given by the Status
    /// function, can be one of the following:
    /// -   ChFi2d_Ready if the initialization is correct,
    /// -   ChFi2d_NotPlanar if F is not planar,
    /// -   ChFi2d_NoFace if F is a null face.
    /// </summary>
    BRepFilletAPI_MakeFillet2d();
    /// <summary>
    /// Initializes an algorithm for computing fillets and chamfers on the face F.
    /// The vertices on which fillets or chamfers are built are
    /// defined using the AddFillet or AddChamfer function.
    /// Warning
    /// The status of the initialization, as given by the Status
    /// function, can be one of the following:
    /// -   ChFi2d_Ready if the initialization is correct,
    /// -   ChFi2d_NotPlanar if F is not planar,
    /// -   ChFi2d_NoFace if F is a null face.
    /// </summary>
    BRepFilletAPI_MakeFillet2d(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Initializes this algorithm for constructing fillets or
    /// chamfers with the face F.
    /// Warning
    /// The status of the initialization, as given by the Status
    /// function, can be one of the following:
    /// -   ChFi2d_Ready if the initialization is correct,
    /// -   ChFi2d_NotPlanar if F is not planar,
    /// -   ChFi2d_NoFace if F is a null face.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// This initialize method allow to init the builder
    /// from a face RefFace and another face ModFace which derive from RefFace.
    /// This  is useful to modify a fillet or a chamfer already created on ModFace.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ RefFace, Macad::Occt::TopoDS_Face^ ModFace);
    /// <summary>
    /// Adds a fillet of radius Radius between the two edges
    /// adjacent to the vertex V on the face modified by this
    /// algorithm. The two edges do not need to be rectilinear.
    /// This function returns the fillet and builds the resulting face.
    /// Warning
    /// The status of the construction, as given by the Status
    /// function, can be one of the following:
    /// - ChFi2d_IsDone if the fillet is built,
    /// - ChFi2d_ConnexionError if V does not belong to the initial face,
    /// -   ChFi2d_ComputationError if Radius is too large
    /// to build a fillet between the two adjacent edges,
    /// -   ChFi2d_NotAuthorized
    /// -   if one of the two edges connected to V is a fillet or chamfer, or
    /// -   if a curve other than a straight line or an arc of a
    /// circle is used as E, E1 or E2.
    /// Do not use the returned fillet if the status of the construction is not ChFi2d_IsDone.
    /// Exceptions
    /// Standard_NegativeValue if Radius is less than or equal to zero.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ AddFillet(Macad::Occt::TopoDS_Vertex^ V, double Radius);
    /// <summary>
    /// Assigns the radius Radius to the fillet Fillet already
    /// built on the face modified by this algorithm.
    /// This function returns the new fillet and modifies the existing face.
    /// Warning
    /// The status of the construction, as given by the Status
    /// function, can be one of the following:
    /// -   ChFi2d_IsDone if the new fillet is built,
    /// -   ChFi2d_ConnexionError if Fillet does not
    /// belong to the existing face,
    /// -   ChFi2d_ComputationError if Radius is too
    /// large to build a fillet between the two adjacent edges.
    /// Do not use the returned fillet if the status of the
    /// construction is not ChFi2d_IsDone.
    /// Exceptions
    /// Standard_NegativeValue if Radius is less than or equal to zero.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ ModifyFillet(Macad::Occt::TopoDS_Edge^ Fillet, double Radius);
    /// <summary>
    /// Removes the fillet Fillet already built on the face
    /// modified by this algorithm.
    /// This function returns the vertex connecting the two
    /// adjacent edges of Fillet and modifies the existing face.
    /// Warning
    /// -   The returned vertex is only valid if the Status
    /// function returns ChFi2d_IsDone.
    /// -   A null vertex is returned if the edge Fillet does not
    /// belong to the initial face.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ RemoveFillet(Macad::Occt::TopoDS_Edge^ Fillet);
    /// <summary>
    /// Adds a chamfer on the face modified by this algorithm
    /// between the two adjacent edges E1 and E2, where
    /// the extremities of the chamfer are on E1 and E2 at
    /// distances D1 and D2 respectively
    /// In cases where the edges are not rectilinear, distances
    /// are measured using the curvilinear abscissa of the
    /// edges and the angle is measured with respect to the
    /// tangent at the corresponding point.
    /// The angle Ang is given in radians.
    /// This function returns the chamfer and builds the resulting face.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ AddChamfer(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double D1, double D2);
    /// <summary>
    /// Adds a chamfer on the face modified by this algorithm
    /// between the two edges connected by the vertex V,
    /// where E is one of the two edges. The chamfer makes
    /// an angle Ang with E and one of its extremities is on
    /// E at distance D from V.
    /// In cases where the edges are not rectilinear, distances
    /// are measured using the curvilinear abscissa of the
    /// edges and the angle is measured with respect to the
    /// tangent at the corresponding point.
    /// The angle Ang is given in radians.
    /// This function returns the chamfer and builds the resulting face.
    /// Warning
    /// The status of the construction, as given by the Status function, can
    /// be one of the following:
    /// -          ChFi2d_IsDone if the chamfer is built,
    /// -  ChFi2d_ParametersError if D1, D2, D or Ang is less than or equal to zero,
    /// -          ChFi2d_ConnexionError if:
    /// - the edge E, E1 or E2 does not belong to the initial face, or
    /// -  the edges E1 and E2 are not adjacent, or
    /// -  the vertex V is not one of the limit points of the edge E,
    /// -          ChFi2d_ComputationError if the parameters of the chamfer
    /// are too large to build a chamfer between the two adjacent edges,
    /// -          ChFi2d_NotAuthorized if:
    /// - the edge E1, E2 or one of the two edges connected to V is a fillet or chamfer, or
    /// - a curve other than a straight line or an arc of a circle is used as E, E1 or E2.
    /// Do not use the returned chamfer if
    /// the status of the construction is not ChFi2d_IsDone.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ AddChamfer(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ V, double D, double Ang);
    /// <summary>
    /// Modifies the chamfer Chamfer on the face modified
    /// by this algorithm, where:
    /// E1 and E2 are the two adjacent edges on which
    /// Chamfer is already built; the extremities of the new
    /// chamfer are on E1 and E2 at distances D1 and D2 respectively.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ ModifyChamfer(Macad::Occt::TopoDS_Edge^ Chamfer, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double D1, double D2);
    /// <summary>
    /// Modifies the chamfer Chamfer on the face modified
    /// by this algorithm, where:
    /// E is one of the two adjacent edges on which
    /// Chamfer is already built; the new chamfer makes
    /// an angle Ang with E and one of its extremities is
    /// on E at distance D from the vertex on which the chamfer is built.
    /// In cases where the edges are not rectilinear, the
    /// distances are measured using the curvilinear abscissa
    /// of the edges and the angle is measured with respect
    /// to the tangent at the corresponding point.
    /// The angle Ang is given in radians.
    /// This function returns the new chamfer and modifies the existing face.
    /// Warning
    /// The status of the construction, as given by the Status
    /// function, can be one of the following:
    /// -   ChFi2d_IsDone if the chamfer is built,
    /// -   ChFi2d_ParametersError if D1, D2, D or Ang is less than or equal to zero,
    /// -   ChFi2d_ConnexionError if:
    /// -   the edge E, E1, E2 or Chamfer does not belong
    /// to the existing face, or
    /// -   the edges E1 and E2 are not adjacent,
    /// -   ChFi2d_ComputationError if the parameters of
    /// the chamfer are too large to build a chamfer
    /// between the two adjacent edges,
    /// -   ChFi2d_NotAuthorized if E1 or E2 is a fillet or chamfer.
    /// Do not use the returned chamfer if the status of the
    /// construction is not ChFi2d_IsDone.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ ModifyChamfer(Macad::Occt::TopoDS_Edge^ Chamfer, Macad::Occt::TopoDS_Edge^ E, double D, double Ang);
    /// <summary>
    /// Removes the chamfer Chamfer already built on the face
    /// modified by this algorithm.
    /// This function returns the vertex connecting the two
    /// adjacent edges of Chamfer and modifies the existing face.
    /// Warning
    /// -   The returned vertex is only valid if the Status
    /// function returns ChFi2d_IsDone.
    /// -   A null vertex is returned if the edge Chamfer does
    /// not belong to the initial face.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ RemoveChamfer(Macad::Occt::TopoDS_Edge^ Chamfer);
    /// <summary>
    /// Returns true if the edge E on the face modified by this
    /// algorithm is chamfered or filleted.
    /// Warning
    /// Returns false if E does not belong to the face modified by this algorithm.
    /// </summary>
    bool IsModified(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the table of fillets on the face modified by this algorithm.
    /// </summary>
    Macad::Occt::TopTools_SequenceOfShape^ FilletEdges();
    /// <summary>
    /// Returns the number of fillets on the face modified by this algorithm.
    /// </summary>
    int NbFillet();
    /// <summary>
    /// Returns the table of chamfers on the face modified by this algorithm.
    /// </summary>
    Macad::Occt::TopTools_SequenceOfShape^ ChamferEdges();
    /// <summary>
    /// Returns the number of chamfers on the face modified by this algorithm.
    /// </summary>
    int NbChamfer();
    /// <summary>
    /// Returns the list  of shapes modified from the shape
    /// <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// returns the number of new curves
    /// after the shape creation.
    /// </summary>
    int NbCurves();
    /// <summary>
    /// Return the Edges created for curve I.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ NewEdges(int I);
    bool HasDescendant(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the chamfered or filleted edge built from the
    /// edge E on the face modified by this algorithm. If E has
    /// not been modified, this function returns E.
    /// Exceptions
    /// Standard_NoSuchObject if the edge E does not
    /// belong to the initial face.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ DescendantEdge(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the basis edge on the face modified by this
    /// algorithm from which the chamfered or filleted edge E is
    /// built. If E has not been modified, this function returns E.
    /// Warning
    /// E is returned if it does not belong to the initial face.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ BasisEdge(Macad::Occt::TopoDS_Edge^ E);
    /* Method skipped due to unknown mapping: ChFi2d_ConstructionError Status() */
    /// <summary>
    /// Update the result and set the Done flag
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Update the result and set the Done flag
    /// </summary>
    void Build();
}; // class BRepFilletAPI_MakeFillet2d

}; // namespace Occt
}; // namespace Macad
