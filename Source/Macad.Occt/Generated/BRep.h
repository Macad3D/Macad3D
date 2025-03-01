// Generated wrapper code for package BRep

#pragma once

#include "NCollection.h"
#include "TopoDS.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRep_ListOfPointRepresentation
//---------------------------------------------------------------------
public ref class BRep_ListOfPointRepresentation sealed
    : public Macad::Occt::NCollection_BaseList
{

#ifdef Include_BRep_ListOfPointRepresentation_h
public:
    Include_BRep_ListOfPointRepresentation_h
#endif

public:
    BRep_ListOfPointRepresentation(::BRep_ListOfPointRepresentation* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    BRep_ListOfPointRepresentation(::BRep_ListOfPointRepresentation& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::BRep_ListOfPointRepresentation* NativeInstance
    {
        ::BRep_ListOfPointRepresentation* get()
        {
            return static_cast<::BRep_ListOfPointRepresentation*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRep_ListOfPointRepresentation::Iterator>
    {

#ifdef Include_BRep_ListOfPointRepresentation_Iterator_h
    public:
        Include_BRep_ListOfPointRepresentation_Iterator_h
#endif

    public:
        Iterator(::BRep_ListOfPointRepresentation::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRep_ListOfPointRepresentation::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRep_ListOfPointRepresentation::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRep_ListOfPointRepresentation::Iterator>( &nativeInstance, false )
        {}

        property ::BRep_ListOfPointRepresentation::Iterator* NativeInstance
        {
            ::BRep_ListOfPointRepresentation::Iterator* get()
            {
                return static_cast<::BRep_ListOfPointRepresentation::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::BRep_PointRepresentation^ Value();
        Macad::Occt::BRep_PointRepresentation^ ChangeValue();
    }; // class Iterator

    BRep_ListOfPointRepresentation();
    BRep_ListOfPointRepresentation(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::BRep_ListOfPointRepresentation^ Assign(Macad::Occt::BRep_ListOfPointRepresentation^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::BRep_PointRepresentation^ First();
    Macad::Occt::BRep_PointRepresentation^ Last();
    Macad::Occt::BRep_PointRepresentation^ Append(Macad::Occt::BRep_PointRepresentation^ theItem);
    Macad::Occt::BRep_PointRepresentation^ Prepend(Macad::Occt::BRep_PointRepresentation^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::BRep_ListOfPointRepresentation::Iterator^ theIter);
    Macad::Occt::BRep_PointRepresentation^ InsertBefore(Macad::Occt::BRep_PointRepresentation^ theItem, Macad::Occt::BRep_ListOfPointRepresentation::Iterator^ theIter);
    Macad::Occt::BRep_PointRepresentation^ InsertAfter(Macad::Occt::BRep_PointRepresentation^ theItem, Macad::Occt::BRep_ListOfPointRepresentation::Iterator^ theIter);
    void Reverse();
}; // class BRep_ListOfPointRepresentation

//---------------------------------------------------------------------
//  Class  BRep_ListOfCurveRepresentation
//---------------------------------------------------------------------
public ref class BRep_ListOfCurveRepresentation sealed
    : public Macad::Occt::NCollection_BaseList
{

#ifdef Include_BRep_ListOfCurveRepresentation_h
public:
    Include_BRep_ListOfCurveRepresentation_h
#endif

public:
    BRep_ListOfCurveRepresentation(::BRep_ListOfCurveRepresentation* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    BRep_ListOfCurveRepresentation(::BRep_ListOfCurveRepresentation& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::BRep_ListOfCurveRepresentation* NativeInstance
    {
        ::BRep_ListOfCurveRepresentation* get()
        {
            return static_cast<::BRep_ListOfCurveRepresentation*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRep_ListOfCurveRepresentation::Iterator>
    {

#ifdef Include_BRep_ListOfCurveRepresentation_Iterator_h
    public:
        Include_BRep_ListOfCurveRepresentation_Iterator_h
#endif

    public:
        Iterator(::BRep_ListOfCurveRepresentation::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRep_ListOfCurveRepresentation::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRep_ListOfCurveRepresentation::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRep_ListOfCurveRepresentation::Iterator>( &nativeInstance, false )
        {}

        property ::BRep_ListOfCurveRepresentation::Iterator* NativeInstance
        {
            ::BRep_ListOfCurveRepresentation::Iterator* get()
            {
                return static_cast<::BRep_ListOfCurveRepresentation::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::BRep_CurveRepresentation^ Value();
        Macad::Occt::BRep_CurveRepresentation^ ChangeValue();
    }; // class Iterator

    BRep_ListOfCurveRepresentation();
    BRep_ListOfCurveRepresentation(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::BRep_ListOfCurveRepresentation^ Assign(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::BRep_CurveRepresentation^ First();
    Macad::Occt::BRep_CurveRepresentation^ Last();
    Macad::Occt::BRep_CurveRepresentation^ Append(Macad::Occt::BRep_CurveRepresentation^ theItem);
    Macad::Occt::BRep_CurveRepresentation^ Prepend(Macad::Occt::BRep_CurveRepresentation^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::BRep_ListOfCurveRepresentation::Iterator^ theIter);
    Macad::Occt::BRep_CurveRepresentation^ InsertBefore(Macad::Occt::BRep_CurveRepresentation^ theItem, Macad::Occt::BRep_ListOfCurveRepresentation::Iterator^ theIter);
    Macad::Occt::BRep_CurveRepresentation^ InsertAfter(Macad::Occt::BRep_CurveRepresentation^ theItem, Macad::Occt::BRep_ListOfCurveRepresentation::Iterator^ theIter);
    void Reverse();
}; // class BRep_ListOfCurveRepresentation

//---------------------------------------------------------------------
//  Class  BRep_Builder
//---------------------------------------------------------------------
/// <summary>
/// A framework providing advanced tolerance control.
/// It is used to build Shapes.
/// If tolerance control is required, you are advised to:
/// 1. build a default precision for topology, using the
/// classes provided in the BRepAPI package
/// 2. update the tolerance of the resulting shape.
/// Note that only vertices, edges and faces have
/// meaningful tolerance control. The tolerance value
/// must always comply with the condition that face
/// tolerances are more restrictive than edge tolerances
/// which are more restrictive than vertex tolerances. In
/// other words: Tol(Vertex) >= Tol(Edge) >= Tol(Face).
/// Other rules in setting tolerance include:
/// - you can open up tolerance but should never restrict it
/// - an edge cannot be included within the fusion of the
/// tolerance spheres of two vertices
/// </summary>
public ref class BRep_Builder sealed
    : public Macad::Occt::TopoDS_Builder
{

#ifdef Include_BRep_Builder_h
public:
    Include_BRep_Builder_h
#endif

public:
    BRep_Builder(::BRep_Builder* nativeInstance)
        : Macad::Occt::TopoDS_Builder( nativeInstance )
    {}

    BRep_Builder(::BRep_Builder& nativeInstance)
        : Macad::Occt::TopoDS_Builder( nativeInstance )
    {}

    property ::BRep_Builder* NativeInstance
    {
        ::BRep_Builder* get()
        {
            return static_cast<::BRep_Builder*>(_NativeInstance);
        }
    }

public:
    BRep_Builder();
    /// <summary>
    /// Makes an undefined Face.
    /// </summary>
    void MakeFace(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Makes a Face with a surface.
    /// </summary>
    void MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, double Tol);
    /// <summary>
    /// Makes a Face with a surface and a location.
    /// </summary>
    void MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
    /* Method skipped due to unknown mapping: void MakeFace(TopoDS_Face theFace, Poly_Triangulation theTriangulation, ) */
    /* Method skipped due to unknown mapping: void MakeFace(TopoDS_Face theFace, Poly_ListOfTriangulation theTriangulations, Poly_Triangulation theActiveTriangulation, ) */
    /* Method skipped due to unknown mapping: void MakeFace(TopoDS_Face theFace, Poly_ListOfTriangulation theTriangulations, Poly_Triangulation theActiveTriangulation, ) */
    /// <summary>
    /// Updates the face F using the tolerance value Tol,
    /// surface S and location Location.
    /// </summary>
    void UpdateFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
    /* Method skipped due to unknown mapping: void UpdateFace(TopoDS_Face theFace, Poly_Triangulation theTriangulation, bool theToReset, ) */
    /* Method skipped due to unknown mapping: void UpdateFace(TopoDS_Face theFace, Poly_Triangulation theTriangulation, bool theToReset, ) */
    /// <summary>
    /// Updates the face Tolerance.
    /// </summary>
    void UpdateFace(Macad::Occt::TopoDS_Face^ F, double Tol);
    /// <summary>
    /// Sets the  NaturalRestriction flag of  the face.
    /// </summary>
    void NaturalRestriction(Macad::Occt::TopoDS_Face^ F, bool N);
    /// <summary>
    /// Makes an undefined Edge (no geometry).
    /// </summary>
    void MakeEdge(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Makes an Edge with a curve.
    /// </summary>
    void MakeEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, double Tol);
    /// <summary>
    /// Makes an Edge with a curve and a location.
    /// </summary>
    void MakeEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double Tol);
    /* Method skipped due to unknown mapping: void MakeEdge(TopoDS_Edge E, Poly_Polygon3D P, ) */
    /* Method skipped due to unknown mapping: void MakeEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N, Poly_Triangulation T, ) */
    /* Method skipped due to unknown mapping: void MakeEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N, Poly_Triangulation T, TopLoc_Location L, ) */
    /// <summary>
    /// Sets a 3D curve for the edge.
    /// If <C> is a null handle, remove any existing 3d curve.
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, double Tol);
    /// <summary>
    /// Sets a 3D curve for the edge.
    /// If <C> is a null handle, remove any existing 3d curve.
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double Tol);
    /// <summary>
    /// Sets a pcurve for the edge on the face.
    /// If <C> is a null handle, remove any existing pcurve.
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Face^ F, double Tol);
    /// <summary>
    /// Sets pcurves for the edge on the  closed face.  If
    /// <C1> or <C2> is a null handle, remove any existing
    /// pcurve.
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::TopoDS_Face^ F, double Tol);
    /// <summary>
    /// Sets a pcurve for the edge on the face.
    /// If <C> is a null handle, remove any existing pcurve.
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
    /// <summary>
    /// Sets a pcurve for the edge on the face.
    /// If <C> is a null handle, remove any existing pcurve.
    /// Sets UV bounds for curve repsentation
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol, Macad::Occt::Pnt2d Pf, Macad::Occt::Pnt2d Pl);
    /// <summary>
    /// Sets pcurves for the edge on the closed surface.
    /// <C1> or <C2> is a null handle, remove any existing
    /// pcurve.
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
    /// <summary>
    /// Sets pcurves for the edge on the closed surface.
    /// <C1> or <C2> is a null handle, remove any existing
    /// pcurve.
    /// Sets UV bounds for curve repsentation
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol, Macad::Occt::Pnt2d Pf, Macad::Occt::Pnt2d Pl);
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon3D P, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon3D P, TopLoc_Location L, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N, Poly_Triangulation T, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N, Poly_Triangulation T, TopLoc_Location L, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N1, Poly_PolygonOnTriangulation N2, Poly_Triangulation T, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_PolygonOnTriangulation N1, Poly_PolygonOnTriangulation N2, Poly_Triangulation T, TopLoc_Location L, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon2D P, TopoDS_Face S, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon2D P, Geom_Surface S, TopLoc_Location T, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon2D P1, Poly_Polygon2D P2, TopoDS_Face S, ) */
    /* Method skipped due to unknown mapping: void UpdateEdge(TopoDS_Edge E, Poly_Polygon2D P1, Poly_Polygon2D P2, Geom_Surface S, TopLoc_Location L, ) */
    /// <summary>
    /// Updates the edge tolerance.
    /// </summary>
    void UpdateEdge(Macad::Occt::TopoDS_Edge^ E, double Tol);
    /// <summary>
    /// Sets the geometric continuity on the edge.
    /// </summary>
    void Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::GeomAbs_Shape C);
    /// <summary>
    /// Sets the geometric continuity on the edge.
    /// </summary>
    void Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2, Macad::Occt::GeomAbs_Shape C);
    /// <summary>
    /// Sets the same parameter flag for the edge <E>.
    /// </summary>
    void SameParameter(Macad::Occt::TopoDS_Edge^ E, bool S);
    /// <summary>
    /// Sets the same range flag for the edge <E>.
    /// </summary>
    void SameRange(Macad::Occt::TopoDS_Edge^ E, bool S);
    /// <summary>
    /// Sets the degenerated flag for the edge <E>.
    /// </summary>
    void Degenerated(Macad::Occt::TopoDS_Edge^ E, bool D);
    /// <summary>
    /// Sets the range of the 3d curve if Only3d=TRUE,
    /// otherwise sets the range to all the representations
    /// </summary>
    void Range(Macad::Occt::TopoDS_Edge^ E, double First, double Last, bool Only3d);
    /// <summary>
    /// Sets the range of the 3d curve if Only3d=TRUE,
    /// otherwise sets the range to all the representations
    /// </summary>
    void Range(Macad::Occt::TopoDS_Edge^ E, double First, double Last);
    /// <summary>
    /// Sets the range  of the edge  on the pcurve on  the
    /// surface.
    /// </summary>
    void Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double First, double Last);
    /// <summary>
    /// Sets the range of the edge on the pcurve on the face.
    /// </summary>
    void Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double First, double Last);
    /// <summary>
    /// Add  to <Eout>  the  geometric representations  of
    /// <Ein>.
    /// </summary>
    void Transfert(Macad::Occt::TopoDS_Edge^ Ein, Macad::Occt::TopoDS_Edge^ Eout);
    /// <summary>
    /// Makes an udefined vertex without geometry.
    /// </summary>
    void MakeVertex(Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Makes a vertex from a 3D point.
    /// </summary>
    void MakeVertex(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt P, double Tol);
    /// <summary>
    /// Sets a 3D point on the vertex.
    /// </summary>
    void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt P, double Tol);
    /// <summary>
    /// Sets  the parameter  for the   vertex on the  edge
    /// curves.
    /// </summary>
    void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, double Tol);
    /// <summary>
    /// Sets  the parameter  for the  vertex  on the  edge
    /// pcurve  on the face.
    /// </summary>
    void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double Tol);
    /// <summary>
    /// Sets  the parameter  for the  vertex  on the  edge
    /// pcurve  on the surface.
    /// </summary>
    void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol);
    /// <summary>
    /// Sets the parameters for the vertex on the face.
    /// </summary>
    void UpdateVertex(Macad::Occt::TopoDS_Vertex^ Ve, double U, double V, Macad::Occt::TopoDS_Face^ F, double Tol);
    /// <summary>
    /// Updates the vertex tolerance.
    /// </summary>
    void UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double Tol);
    /// <summary>
    /// Transfert the parameters  of   Vin on  Ein as  the
    /// parameter of Vout on Eout.
    /// </summary>
    void Transfert(Macad::Occt::TopoDS_Edge^ Ein, Macad::Occt::TopoDS_Edge^ Eout, Macad::Occt::TopoDS_Vertex^ Vin, Macad::Occt::TopoDS_Vertex^ Vout);
}; // class BRep_Builder

//---------------------------------------------------------------------
//  Class  BRep_TFace
//---------------------------------------------------------------------
/// <summary>
/// The Tface from BRep  is  based  on the TFace  from
/// TopoDS. The TFace contains :
/// 
/// * A surface, a tolerance and a Location.
/// 
/// * A NaturalRestriction flag,   when this  flag  is
/// True the  boundary of the  face is known to be the
/// parametric space (Umin, UMax, VMin, VMax).
/// 
/// * An optional list of triangulations. If there are any
/// triangulations the surface can be absent.
/// 
/// The  Location is  used   for the Surface.
/// 
/// The triangulation  is in the same reference system
/// than the TFace.     A point on mySurface must   be
/// transformed with myLocation,  but  not a point  on
/// the triangulation.
/// 
/// The Surface may  be shared by different TFaces but
/// not the  Triangulation, because the  Triangulation
/// may be modified by  the edges.
/// </summary>
public ref class BRep_TFace sealed
    : public Macad::Occt::TopoDS_TFace
{

#ifdef Include_BRep_TFace_h
public:
    Include_BRep_TFace_h
#endif

public:
    BRep_TFace(::BRep_TFace* nativeInstance)
        : Macad::Occt::TopoDS_TFace( nativeInstance )
    {}

    BRep_TFace(::BRep_TFace& nativeInstance)
        : Macad::Occt::TopoDS_TFace( nativeInstance )
    {}

    property ::BRep_TFace* NativeInstance
    {
        ::BRep_TFace* get()
        {
            return static_cast<::BRep_TFace*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty TFace.
    /// </summary>
    BRep_TFace();
    /// <summary>
    /// Returns face surface.
    /// </summary>
    Macad::Occt::Geom_Surface^ Surface();
    /// <summary>
    /// Sets surface for this face.
    /// </summary>
    void Surface(Macad::Occt::Geom_Surface^ theSurface);
    /// <summary>
    /// Returns the face location.
    /// </summary>
    Macad::Occt::TopLoc_Location^ Location();
    /// <summary>
    /// Sets the location for this face.
    /// </summary>
    void Location(Macad::Occt::TopLoc_Location^ theLocation);
    /// <summary>
    /// Returns the face tolerance.
    /// </summary>
    double Tolerance();
    /// <summary>
    /// Sets the tolerance for this face.
    /// </summary>
    void Tolerance(double theTolerance);
    /// <summary>
    /// Returns TRUE if the boundary of this face is known to be the parametric space (Umin, UMax,
    /// VMin, VMax).
    /// </summary>
    bool NaturalRestriction();
    /// <summary>
    /// Sets the flag that is TRUE if the boundary of this face is known to be the parametric space.
    /// </summary>
    void NaturalRestriction(bool theRestriction);
    /* Method skipped due to unknown mapping: Poly_Triangulation Triangulation(unsigned int thePurpose, ) */
    /* Method skipped due to unknown mapping: Poly_Triangulation Triangulation(unsigned int thePurpose, ) */
    /* Method skipped due to unknown mapping: void Triangulation(Poly_Triangulation theTriangulation, bool theToReset, ) */
    /* Method skipped due to unknown mapping: void Triangulation(Poly_Triangulation theTriangulation, bool theToReset, ) */
    /// <summary>
    /// Returns a copy  of the  TShape  with no sub-shapes.
    /// The new Face has no triangulation.
    /// </summary>
    Macad::Occt::TopoDS_TShape^ EmptyCopy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /* Method skipped due to unknown mapping: Poly_ListOfTriangulation Triangulations() */
    /* Method skipped due to unknown mapping: void Triangulations(Poly_ListOfTriangulation theTriangulations, Poly_Triangulation theActiveTriangulation, ) */
    /// <summary>
    /// Returns number of available face triangulations.
    /// </summary>
    int NbTriangulations();
    /* Method skipped due to unknown mapping: Poly_Triangulation ActiveTriangulation() */
    static Macad::Occt::BRep_TFace^ CreateDowncasted(::BRep_TFace* instance);
}; // class BRep_TFace

//---------------------------------------------------------------------
//  Class  BRep_PointRepresentation
//---------------------------------------------------------------------
/// <summary>
/// Root  class     for   the points  representations.
/// Contains a location and a parameter.
/// </summary>
public ref class BRep_PointRepresentation
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRep_PointRepresentation_h
public:
    Include_BRep_PointRepresentation_h
#endif

protected:
    BRep_PointRepresentation(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    BRep_PointRepresentation(::BRep_PointRepresentation* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRep_PointRepresentation(::BRep_PointRepresentation& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRep_PointRepresentation* NativeInstance
    {
        ::BRep_PointRepresentation* get()
        {
            return static_cast<::BRep_PointRepresentation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A point on a 3d curve.
    /// </summary>
    bool IsPointOnCurve();
    /// <summary>
    /// A point on a 2d curve on a surface.
    /// </summary>
    bool IsPointOnCurveOnSurface();
    /// <summary>
    /// A point on a surface.
    /// </summary>
    bool IsPointOnSurface();
    /// <summary>
    /// A point on the curve <C>.
    /// </summary>
    bool IsPointOnCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// A point on the 2d curve <PC> on the surface <S>.
    /// </summary>
    bool IsPointOnCurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// A point on the surface <S>.
    /// </summary>
    bool IsPointOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    Macad::Occt::TopLoc_Location^ Location();
    void Location(Macad::Occt::TopLoc_Location^ L);
    double Parameter();
    void Parameter(double P);
    double Parameter2();
    void Parameter2(double P);
    Macad::Occt::Geom_Curve^ Curve();
    void Curve(Macad::Occt::Geom_Curve^ C);
    Macad::Occt::Geom2d_Curve^ PCurve();
    void PCurve(Macad::Occt::Geom2d_Curve^ C);
    Macad::Occt::Geom_Surface^ Surface();
    void Surface(Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_PointRepresentation^ CreateDowncasted(::BRep_PointRepresentation* instance);
}; // class BRep_PointRepresentation

//---------------------------------------------------------------------
//  Class  BRep_TVertex
//---------------------------------------------------------------------
/// <summary>
/// The TVertex from  BRep inherits  from  the TVertex
/// from TopoDS. It contains the geometric data.
/// 
/// The  TVertex contains a 3d point, location and a tolerance.
/// </summary>
public ref class BRep_TVertex sealed
    : public Macad::Occt::TopoDS_TVertex
{

#ifdef Include_BRep_TVertex_h
public:
    Include_BRep_TVertex_h
#endif

public:
    BRep_TVertex(::BRep_TVertex* nativeInstance)
        : Macad::Occt::TopoDS_TVertex( nativeInstance )
    {}

    BRep_TVertex(::BRep_TVertex& nativeInstance)
        : Macad::Occt::TopoDS_TVertex( nativeInstance )
    {}

    property ::BRep_TVertex* NativeInstance
    {
        ::BRep_TVertex* get()
        {
            return static_cast<::BRep_TVertex*>(_NativeInstance);
        }
    }

public:
    BRep_TVertex();
    double Tolerance();
    void Tolerance(double T);
    /// <summary>
    /// Sets the tolerance  to the   max  of <T>  and  the
    /// current  tolerance.
    /// </summary>
    void UpdateTolerance(double T);
    Macad::Occt::Pnt Pnt();
    void Pnt(Macad::Occt::Pnt P);
    Macad::Occt::BRep_ListOfPointRepresentation^ Points();
    Macad::Occt::BRep_ListOfPointRepresentation^ ChangePoints();
    /// <summary>
    /// Returns a copy  of the  TShape  with no sub-shapes.
    /// </summary>
    Macad::Occt::TopoDS_TShape^ EmptyCopy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_TVertex^ CreateDowncasted(::BRep_TVertex* instance);
}; // class BRep_TVertex

//---------------------------------------------------------------------
//  Class  BRep_Tool
//---------------------------------------------------------------------
/// <summary>
/// Provides class methods  to  access to the geometry
/// of BRep shapes.
/// </summary>
public ref class BRep_Tool sealed
    : public Macad::Occt::BaseClass<::BRep_Tool>
{

#ifdef Include_BRep_Tool_h
public:
    Include_BRep_Tool_h
#endif

public:
    BRep_Tool(::BRep_Tool* nativeInstance)
        : Macad::Occt::BaseClass<::BRep_Tool>( nativeInstance, true )
    {}

    BRep_Tool(::BRep_Tool& nativeInstance)
        : Macad::Occt::BaseClass<::BRep_Tool>( &nativeInstance, false )
    {}

    property ::BRep_Tool* NativeInstance
    {
        ::BRep_Tool* get()
        {
            return static_cast<::BRep_Tool*>(_NativeInstance);
        }
    }

public:
    BRep_Tool();
    /// <summary>
    /// If S is Shell, returns True if it has no free boundaries (edges).
    /// If S is Wire, returns True if it has no free ends (vertices).
    /// (Internal and External sub-shepes are ignored in these checks)
    /// If S is Edge, returns True if its vertices are the same.
    /// For other shape types returns S.Closed().
    /// </summary>
    static bool IsClosed(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the geometric surface of the face. Returns
    /// in <L> the location for the surface.
    /// </summary>
    static Macad::Occt::Geom_Surface^ Surface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Returns the geometric  surface of the face. It can
    /// be a copy if there is a Location.
    /// </summary>
    static Macad::Occt::Geom_Surface^ Surface(Macad::Occt::TopoDS_Face^ F);
    /* Method skipped due to unknown mapping: Poly_Triangulation Triangulation(TopoDS_Face theFace, TopLoc_Location theLocation, unsigned int theMeshPurpose, ) */
    /* Method skipped due to unknown mapping: Poly_Triangulation Triangulation(TopoDS_Face theFace, TopLoc_Location theLocation, unsigned int theMeshPurpose, ) */
    /* Method skipped due to unknown mapping: Poly_ListOfTriangulation Triangulations(TopoDS_Face theFace, TopLoc_Location theLocation, ) */
    /// <summary>
    /// Returns the tolerance of the face.
    /// </summary>
    static double Tolerance(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns the  NaturalRestriction  flag of the  face.
    /// </summary>
    static bool NaturalRestriction(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns True if <F> has a surface, false otherwise.
    /// </summary>
    static bool IsGeometric(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns True if <E> is a 3d curve or a curve on
    /// surface.
    /// </summary>
    static bool IsGeometric(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the 3D curve  of the edge.  May be  a Null
    /// handle. Returns in <L> the location for the curve.
    /// In <First> and <Last> the parameter range.
    /// </summary>
    static Macad::Occt::Geom_Curve^ Curve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
    /// <summary>
    /// Returns the 3D curve  of the edge. May be a Null handle.
    /// In <First> and <Last> the parameter range.
    /// It can be a copy if there is a Location.
    /// </summary>
    static Macad::Occt::Geom_Curve^ Curve(Macad::Occt::TopoDS_Edge^ E, double% First, double% Last);
    /* Method skipped due to unknown mapping: Poly_Polygon3D Polygon3D(TopoDS_Edge E, TopLoc_Location L, ) */
    /// <summary>
    /// Returns the curve  associated to the  edge in  the
    /// parametric  space of  the  face.  Returns   a NULL
    /// handle  if this curve  does not exist.  Returns in
    /// <First> and <Last> the parameter range.
    /// If the surface is a plane the curve can be not stored but created a new
    /// each time. The flag pointed by <theIsStored> serves to indicate storage status.
    /// It is valued if the pointer is non-null.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last, bool% theIsStored);
    /// <summary>
    /// Returns the curve  associated to the  edge in  the
    /// parametric  space of  the  face.  Returns   a NULL
    /// handle  if this curve  does not exist.  Returns in
    /// <First> and <Last> the parameter range.
    /// If the surface is a plane the curve can be not stored but created a new
    /// each time. The flag pointed by <theIsStored> serves to indicate storage status.
    /// It is valued if the pointer is non-null.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last);
    /// <summary>
    /// Returns the  curve associated to   the edge in the
    /// parametric  space of the   surface. Returns a NULL
    /// handle  if this curve does  not exist.  Returns in
    /// <First> and <Last> the parameter range.
    /// If the surface is a plane the curve can be not stored but created a new
    /// each time. The flag pointed by <theIsStored> serves to indicate storage status.
    /// It is valued if the pointer is non-null.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last, bool% theIsStored);
    /// <summary>
    /// Returns the  curve associated to   the edge in the
    /// parametric  space of the   surface. Returns a NULL
    /// handle  if this curve does  not exist.  Returns in
    /// <First> and <Last> the parameter range.
    /// If the surface is a plane the curve can be not stored but created a new
    /// each time. The flag pointed by <theIsStored> serves to indicate storage status.
    /// It is valued if the pointer is non-null.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
    /// <summary>
    /// For the planar surface builds the 2d curve for the edge
    /// by projection of the edge on plane.
    /// Returns a NULL handle if the surface is not planar or
    /// the projection failed.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ CurveOnPlane(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
    /// <summary>
    /// Returns in <C>, <S>, <L> a 2d curve, a surface and
    /// a location for the edge <E>. <C> and <S>  are null
    /// if the  edge has no curve on  surface.  Returns in
    /// <First> and <Last> the parameter range.
    /// </summary>
    static void CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
    /// <summary>
    /// Returns in <C>, <S>, <L> the 2d curve, the surface
    /// and the location for the edge <E> of rank <Index>.
    /// <C> and <S> are null if the index is out of range.
    /// Returns in <First> and <Last> the parameter range.
    /// </summary>
    static void CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last, int Index);
    /* Method skipped due to unknown mapping: Poly_Polygon2D PolygonOnSurface(TopoDS_Edge E, TopoDS_Face F, ) */
    /* Method skipped due to unknown mapping: Poly_Polygon2D PolygonOnSurface(TopoDS_Edge E, Geom_Surface S, TopLoc_Location L, ) */
    /* Method skipped due to unknown mapping: void PolygonOnSurface(TopoDS_Edge E, Poly_Polygon2D C, Geom_Surface S, TopLoc_Location L, ) */
    /* Method skipped due to unknown mapping: void PolygonOnSurface(TopoDS_Edge E, Poly_Polygon2D C, Geom_Surface S, TopLoc_Location L, int Index, ) */
    /* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation(TopoDS_Edge E, Poly_Triangulation T, TopLoc_Location L, ) */
    /* Method skipped due to unknown mapping: void PolygonOnTriangulation(TopoDS_Edge E, Poly_PolygonOnTriangulation P, Poly_Triangulation T, TopLoc_Location L, ) */
    /* Method skipped due to unknown mapping: void PolygonOnTriangulation(TopoDS_Edge E, Poly_PolygonOnTriangulation P, Poly_Triangulation T, TopLoc_Location L, int Index, ) */
    /// <summary>
    /// Returns  True  if  <E>  has  two  PCurves  in  the
    /// parametric space of <F>. i.e.  <F>  is on a closed
    /// surface and <E> is on the closing curve.
    /// </summary>
    static bool IsClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns  True  if  <E>  has  two  PCurves  in  the
    /// parametric space  of <S>.  i.e.   <S>  is a closed
    /// surface and <E> is on the closing curve.
    /// </summary>
    static bool IsClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    /* Method skipped due to unknown mapping: bool IsClosed(TopoDS_Edge E, Poly_Triangulation T, TopLoc_Location L, ) */
    /// <summary>
    /// Returns the tolerance for <E>.
    /// </summary>
    static double Tolerance(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the SameParameter flag for the edge.
    /// </summary>
    static bool SameParameter(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the SameRange flag for the edge.
    /// </summary>
    static bool SameRange(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns True  if the edge is degenerated.
    /// </summary>
    static bool Degenerated(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Gets the range of the 3d curve.
    /// </summary>
    static void Range(Macad::Occt::TopoDS_Edge^ E, double% First, double% Last);
    /// <summary>
    /// Gets the range  of the edge  on the pcurve on  the
    /// surface.
    /// </summary>
    static void Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last);
    /// <summary>
    /// Gets the range of the edge on the pcurve on the face.
    /// </summary>
    static void Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last);
    /// <summary>
    /// Gets the UV locations of the extremities of the edge.
    /// </summary>
    static void UVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::Pnt2d% PFirst, Macad::Occt::Pnt2d% PLast);
    /// <summary>
    /// Gets the UV locations of the extremities of the edge.
    /// </summary>
    static void UVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt2d% PFirst, Macad::Occt::Pnt2d% PLast);
    /// <summary>
    /// Sets the UV locations of the extremities of the edge.
    /// </summary>
    static void SetUVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::Pnt2d PFirst, Macad::Occt::Pnt2d PLast);
    /// <summary>
    /// Sets the UV locations of the extremities of the edge.
    /// </summary>
    static void SetUVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt2d PFirst, Macad::Occt::Pnt2d PLast);
    /// <summary>
    /// Returns True if the edge is on the surfaces of the
    /// two faces.
    /// </summary>
    static bool HasContinuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
    /// <summary>
    /// Returns the continuity.
    /// </summary>
    static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
    /// <summary>
    /// Returns True if the edge is on the surfaces.
    /// </summary>
    static bool HasContinuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
    /// <summary>
    /// Returns the continuity.
    /// </summary>
    static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
    /// <summary>
    /// Returns True if the edge has regularity on some
    /// two surfaces
    /// </summary>
    static bool HasContinuity(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the max continuity of edge between some surfaces or GeomAbs_C0 if there no such
    /// surfaces.
    /// </summary>
    static Macad::Occt::GeomAbs_Shape MaxContinuity(Macad::Occt::TopoDS_Edge^ theEdge);
    /// <summary>
    /// Returns the 3d point.
    /// </summary>
    static Macad::Occt::Pnt Pnt(Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Returns the tolerance.
    /// </summary>
    static double Tolerance(Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Finds the parameter of <theV> on <theE>.
    /// </summary>
    /// <param name="in]">
    /// theV  input vertex
    /// </param>
    /// <param name="in]">
    /// theE  input edge
    /// </param>
    /// <param name="out]">
    /// theParam   calculated parameter on the curve
    /// </param>
    /// <returns>
    /// TRUE if done
    /// </returns>
    static bool Parameter(Macad::Occt::TopoDS_Vertex^ theV, Macad::Occt::TopoDS_Edge^ theE, double% theParam);
    /// <summary>
    /// Returns the parameter of <V> on <E>.
    /// Throws Standard_NoSuchObject if no parameter on edge
    /// </summary>
    static double Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the  parameters  of   the  vertex   on the
    /// pcurve of the edge on the face.
    /// </summary>
    static double Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns the  parameters  of   the  vertex   on the
    /// pcurve of the edge on the surface.
    /// </summary>
    static double Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Returns the parameters of the vertex on the face.
    /// </summary>
    static Macad::Occt::Pnt2d Parameters(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Face^ F);
    static double MaxTolerance(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theSubShape);
}; // class BRep_Tool

//---------------------------------------------------------------------
//  Class  BRep_CurveRepresentation
//---------------------------------------------------------------------
/// <summary>
/// Root class for the curve representations. Contains
/// a location.
/// </summary>
public ref class BRep_CurveRepresentation
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRep_CurveRepresentation_h
public:
    Include_BRep_CurveRepresentation_h
#endif

protected:
    BRep_CurveRepresentation(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    BRep_CurveRepresentation(::BRep_CurveRepresentation* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRep_CurveRepresentation(::BRep_CurveRepresentation& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRep_CurveRepresentation* NativeInstance
    {
        ::BRep_CurveRepresentation* get()
        {
            return static_cast<::BRep_CurveRepresentation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A 3D curve representation.
    /// </summary>
    bool IsCurve3D();
    /// <summary>
    /// A curve in the parametric space of a surface.
    /// </summary>
    bool IsCurveOnSurface();
    /// <summary>
    /// A continuity between two surfaces.
    /// </summary>
    bool IsRegularity();
    /// <summary>
    /// A curve with two parametric   curves  on the  same
    /// surface.
    /// </summary>
    bool IsCurveOnClosedSurface();
    /// <summary>
    /// Is it a curve in the parametric space  of <S> with
    /// location <L>.
    /// </summary>
    bool IsCurveOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Is it  a  regularity between  <S1> and   <S2> with
    /// location <L1> and <L2>.
    /// </summary>
    bool IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
    /// <summary>
    /// A 3D polygon representation.
    /// </summary>
    bool IsPolygon3D();
    /// <summary>
    /// A representation by an array of nodes on a
    /// triangulation.
    /// </summary>
    bool IsPolygonOnTriangulation();
    /* Method skipped due to unknown mapping: bool IsPolygonOnTriangulation(Poly_Triangulation T, TopLoc_Location L, ) */
    /// <summary>
    /// A representation by two arrays of nodes on a
    /// triangulation.
    /// </summary>
    bool IsPolygonOnClosedTriangulation();
    /// <summary>
    /// A polygon in the parametric space of a surface.
    /// </summary>
    bool IsPolygonOnSurface();
    /// <summary>
    /// Is it a polygon in the parametric space  of <S> with
    /// location <L>.
    /// </summary>
    bool IsPolygonOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Two   2D polygon  representations  in the  parametric
    /// space of a surface.
    /// </summary>
    bool IsPolygonOnClosedSurface();
    Macad::Occt::TopLoc_Location^ Location();
    void Location(Macad::Occt::TopLoc_Location^ L);
    Macad::Occt::Geom_Curve^ Curve3D();
    void Curve3D(Macad::Occt::Geom_Curve^ C);
    Macad::Occt::Geom_Surface^ Surface();
    Macad::Occt::Geom2d_Curve^ PCurve();
    void PCurve(Macad::Occt::Geom2d_Curve^ C);
    Macad::Occt::Geom2d_Curve^ PCurve2();
    void PCurve2(Macad::Occt::Geom2d_Curve^ C);
    /* Method skipped due to unknown mapping: Poly_Polygon3D Polygon3D() */
    /* Method skipped due to unknown mapping: void Polygon3D(Poly_Polygon3D P, ) */
    /* Method skipped due to unknown mapping: Poly_Polygon2D Polygon() */
    /* Method skipped due to unknown mapping: void Polygon(Poly_Polygon2D P, ) */
    /* Method skipped due to unknown mapping: Poly_Polygon2D Polygon2() */
    /* Method skipped due to unknown mapping: void Polygon2(Poly_Polygon2D P, ) */
    /* Method skipped due to unknown mapping: Poly_Triangulation Triangulation() */
    /* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation() */
    /* Method skipped due to unknown mapping: void PolygonOnTriangulation(Poly_PolygonOnTriangulation P, ) */
    /* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation2() */
    /* Method skipped due to unknown mapping: void PolygonOnTriangulation2(Poly_PolygonOnTriangulation P2, ) */
    Macad::Occt::Geom_Surface^ Surface2();
    Macad::Occt::TopLoc_Location^ Location2();
    Macad::Occt::GeomAbs_Shape Continuity();
    void Continuity(Macad::Occt::GeomAbs_Shape C);
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_CurveRepresentation^ CreateDowncasted(::BRep_CurveRepresentation* instance);
}; // class BRep_CurveRepresentation

//---------------------------------------------------------------------
//  Class  BRep_GCurve
//---------------------------------------------------------------------
/// <summary>
/// Root   class    for    the    geometric     curves
/// representation. Contains a range.
/// Contains a first and a last parameter.
/// </summary>
public ref class BRep_GCurve
    : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_GCurve_h
public:
    Include_BRep_GCurve_h
#endif

protected:
    BRep_GCurve(InitMode init)
        : Macad::Occt::BRep_CurveRepresentation( init )
    {}

public:
    BRep_GCurve(::BRep_GCurve* nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    BRep_GCurve(::BRep_GCurve& nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    property ::BRep_GCurve* NativeInstance
    {
        ::BRep_GCurve* get()
        {
            return static_cast<::BRep_GCurve*>(_NativeInstance);
        }
    }

public:
    void SetRange(double First, double Last);
    void Range(double% First, double% Last);
    double First();
    double Last();
    void First(double F);
    void Last(double L);
    /// <summary>
    /// Computes the point at parameter U.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Recomputes any derived data after a modification.
    /// This is called when the range is modified.
    /// </summary>
    void Update();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_GCurve^ CreateDowncasted(::BRep_GCurve* instance);
}; // class BRep_GCurve

//---------------------------------------------------------------------
//  Class  BRep_Curve3D
//---------------------------------------------------------------------
/// <summary>
/// Representation of a curve by a 3D curve.
/// </summary>
public ref class BRep_Curve3D sealed
    : public Macad::Occt::BRep_GCurve
{

#ifdef Include_BRep_Curve3D_h
public:
    Include_BRep_Curve3D_h
#endif

public:
    BRep_Curve3D(::BRep_Curve3D* nativeInstance)
        : Macad::Occt::BRep_GCurve( nativeInstance )
    {}

    BRep_Curve3D(::BRep_Curve3D& nativeInstance)
        : Macad::Occt::BRep_GCurve( nativeInstance )
    {}

    property ::BRep_Curve3D* NativeInstance
    {
        ::BRep_Curve3D* get()
        {
            return static_cast<::BRep_Curve3D*>(_NativeInstance);
        }
    }

public:
    BRep_Curve3D(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Computes the point at parameter U.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsCurve3D();
    Macad::Occt::Geom_Curve^ Curve3D();
    void Curve3D(Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_Curve3D^ CreateDowncasted(::BRep_Curve3D* instance);
}; // class BRep_Curve3D

//---------------------------------------------------------------------
//  Class  BRep_CurveOn2Surfaces
//---------------------------------------------------------------------
/// <summary>
/// Defines a continuity between two surfaces.
/// </summary>
public ref class BRep_CurveOn2Surfaces sealed
    : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_CurveOn2Surfaces_h
public:
    Include_BRep_CurveOn2Surfaces_h
#endif

public:
    BRep_CurveOn2Surfaces(::BRep_CurveOn2Surfaces* nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    BRep_CurveOn2Surfaces(::BRep_CurveOn2Surfaces& nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    property ::BRep_CurveOn2Surfaces* NativeInstance
    {
        ::BRep_CurveOn2Surfaces* get()
        {
            return static_cast<::BRep_CurveOn2Surfaces*>(_NativeInstance);
        }
    }

public:
    BRep_CurveOn2Surfaces(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2, Macad::Occt::GeomAbs_Shape C);
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsRegularity();
    /// <summary>
    /// A curve on two surfaces (continuity).
    /// </summary>
    bool IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
    /// <summary>
    /// Raises an error.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    Macad::Occt::Geom_Surface^ Surface();
    Macad::Occt::Geom_Surface^ Surface2();
    Macad::Occt::TopLoc_Location^ Location2();
    Macad::Occt::GeomAbs_Shape Continuity();
    void Continuity(Macad::Occt::GeomAbs_Shape C);
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_CurveOn2Surfaces^ CreateDowncasted(::BRep_CurveOn2Surfaces* instance);
}; // class BRep_CurveOn2Surfaces

//---------------------------------------------------------------------
//  Class  BRep_CurveOnSurface
//---------------------------------------------------------------------
/// <summary>
/// Representation  of a  curve   by a   curve  in the
/// parametric space of a surface.
/// </summary>
public ref class BRep_CurveOnSurface
    : public Macad::Occt::BRep_GCurve
{

#ifdef Include_BRep_CurveOnSurface_h
public:
    Include_BRep_CurveOnSurface_h
#endif

protected:
    BRep_CurveOnSurface(InitMode init)
        : Macad::Occt::BRep_GCurve( init )
    {}

public:
    BRep_CurveOnSurface(::BRep_CurveOnSurface* nativeInstance)
        : Macad::Occt::BRep_GCurve( nativeInstance )
    {}

    BRep_CurveOnSurface(::BRep_CurveOnSurface& nativeInstance)
        : Macad::Occt::BRep_GCurve( nativeInstance )
    {}

    property ::BRep_CurveOnSurface* NativeInstance
    {
        ::BRep_CurveOnSurface* get()
        {
            return static_cast<::BRep_CurveOnSurface*>(_NativeInstance);
        }
    }

public:
    BRep_CurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    void SetUVPoints(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    void UVPoints(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
    /// <summary>
    /// Computes the point at parameter U.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsCurveOnSurface();
    /// <summary>
    /// A curve in the parametric space of a surface.
    /// </summary>
    bool IsCurveOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    Macad::Occt::Geom_Surface^ Surface();
    Macad::Occt::Geom2d_Curve^ PCurve();
    void PCurve(Macad::Occt::Geom2d_Curve^ C);
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Recomputes any derived data after a modification.
    /// This is called when the range is modified.
    /// </summary>
    void Update();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_CurveOnSurface^ CreateDowncasted(::BRep_CurveOnSurface* instance);
}; // class BRep_CurveOnSurface

//---------------------------------------------------------------------
//  Class  BRep_CurveOnClosedSurface
//---------------------------------------------------------------------
/// <summary>
/// Representation  of a    curve by two  pcurves   on
/// a closed surface.
/// </summary>
public ref class BRep_CurveOnClosedSurface sealed
    : public Macad::Occt::BRep_CurveOnSurface
{

#ifdef Include_BRep_CurveOnClosedSurface_h
public:
    Include_BRep_CurveOnClosedSurface_h
#endif

public:
    BRep_CurveOnClosedSurface(::BRep_CurveOnClosedSurface* nativeInstance)
        : Macad::Occt::BRep_CurveOnSurface( nativeInstance )
    {}

    BRep_CurveOnClosedSurface(::BRep_CurveOnClosedSurface& nativeInstance)
        : Macad::Occt::BRep_CurveOnSurface( nativeInstance )
    {}

    property ::BRep_CurveOnClosedSurface* NativeInstance
    {
        ::BRep_CurveOnClosedSurface* get()
        {
            return static_cast<::BRep_CurveOnClosedSurface*>(_NativeInstance);
        }
    }

public:
    BRep_CurveOnClosedSurface(Macad::Occt::Geom2d_Curve^ PC1, Macad::Occt::Geom2d_Curve^ PC2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::GeomAbs_Shape C);
    void SetUVPoints2(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    void UVPoints2(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsCurveOnClosedSurface();
    /// <summary>
    /// Returns True
    /// </summary>
    bool IsRegularity();
    /// <summary>
    /// A curve on two surfaces (continuity).
    /// </summary>
    bool IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2);
    Macad::Occt::Geom2d_Curve^ PCurve2();
    /// <summary>
    /// Returns Surface()
    /// </summary>
    Macad::Occt::Geom_Surface^ Surface2();
    /// <summary>
    /// Returns Location()
    /// </summary>
    Macad::Occt::TopLoc_Location^ Location2();
    Macad::Occt::GeomAbs_Shape Continuity();
    void Continuity(Macad::Occt::GeomAbs_Shape C);
    void PCurve2(Macad::Occt::Geom2d_Curve^ C);
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Recomputes any derived data after a modification.
    /// This is called when the range is modified.
    /// </summary>
    void Update();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_CurveOnClosedSurface^ CreateDowncasted(::BRep_CurveOnClosedSurface* instance);
}; // class BRep_CurveOnClosedSurface

//---------------------------------------------------------------------
//  Class  BRep_PointOnCurve
//---------------------------------------------------------------------
/// <summary>
/// Representation by a parameter on a 3D curve.
/// </summary>
public ref class BRep_PointOnCurve sealed
    : public Macad::Occt::BRep_PointRepresentation
{

#ifdef Include_BRep_PointOnCurve_h
public:
    Include_BRep_PointOnCurve_h
#endif

public:
    BRep_PointOnCurve(::BRep_PointOnCurve* nativeInstance)
        : Macad::Occt::BRep_PointRepresentation( nativeInstance )
    {}

    BRep_PointOnCurve(::BRep_PointOnCurve& nativeInstance)
        : Macad::Occt::BRep_PointRepresentation( nativeInstance )
    {}

    property ::BRep_PointOnCurve* NativeInstance
    {
        ::BRep_PointOnCurve* get()
        {
            return static_cast<::BRep_PointOnCurve*>(_NativeInstance);
        }
    }

public:
    BRep_PointOnCurve(double P, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Returns True
    /// </summary>
    bool IsPointOnCurve();
    bool IsPointOnCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L);
    Macad::Occt::Geom_Curve^ Curve();
    void Curve(Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_PointOnCurve^ CreateDowncasted(::BRep_PointOnCurve* instance);
}; // class BRep_PointOnCurve

//---------------------------------------------------------------------
//  Class  BRep_PointsOnSurface
//---------------------------------------------------------------------
/// <summary>
/// Root for points on surface.
/// </summary>
public ref class BRep_PointsOnSurface
    : public Macad::Occt::BRep_PointRepresentation
{

#ifdef Include_BRep_PointsOnSurface_h
public:
    Include_BRep_PointsOnSurface_h
#endif

protected:
    BRep_PointsOnSurface(InitMode init)
        : Macad::Occt::BRep_PointRepresentation( init )
    {}

public:
    BRep_PointsOnSurface(::BRep_PointsOnSurface* nativeInstance)
        : Macad::Occt::BRep_PointRepresentation( nativeInstance )
    {}

    BRep_PointsOnSurface(::BRep_PointsOnSurface& nativeInstance)
        : Macad::Occt::BRep_PointRepresentation( nativeInstance )
    {}

    property ::BRep_PointsOnSurface* NativeInstance
    {
        ::BRep_PointsOnSurface* get()
        {
            return static_cast<::BRep_PointsOnSurface*>(_NativeInstance);
        }
    }

public:
    Macad::Occt::Geom_Surface^ Surface();
    void Surface(Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_PointsOnSurface^ CreateDowncasted(::BRep_PointsOnSurface* instance);
}; // class BRep_PointsOnSurface

//---------------------------------------------------------------------
//  Class  BRep_PointOnCurveOnSurface
//---------------------------------------------------------------------
/// <summary>
/// Representation by   a parameter on  a curve   on a
/// surface.
/// </summary>
public ref class BRep_PointOnCurveOnSurface sealed
    : public Macad::Occt::BRep_PointsOnSurface
{

#ifdef Include_BRep_PointOnCurveOnSurface_h
public:
    Include_BRep_PointOnCurveOnSurface_h
#endif

public:
    BRep_PointOnCurveOnSurface(::BRep_PointOnCurveOnSurface* nativeInstance)
        : Macad::Occt::BRep_PointsOnSurface( nativeInstance )
    {}

    BRep_PointOnCurveOnSurface(::BRep_PointOnCurveOnSurface& nativeInstance)
        : Macad::Occt::BRep_PointsOnSurface( nativeInstance )
    {}

    property ::BRep_PointOnCurveOnSurface* NativeInstance
    {
        ::BRep_PointOnCurveOnSurface* get()
        {
            return static_cast<::BRep_PointOnCurveOnSurface*>(_NativeInstance);
        }
    }

public:
    BRep_PointOnCurveOnSurface(double P, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Returns True
    /// </summary>
    bool IsPointOnCurveOnSurface();
    bool IsPointOnCurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    Macad::Occt::Geom2d_Curve^ PCurve();
    void PCurve(Macad::Occt::Geom2d_Curve^ C);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_PointOnCurveOnSurface^ CreateDowncasted(::BRep_PointOnCurveOnSurface* instance);
}; // class BRep_PointOnCurveOnSurface

//---------------------------------------------------------------------
//  Class  BRep_PointOnSurface
//---------------------------------------------------------------------
/// <summary>
/// Representation by two parameters on a surface.
/// </summary>
public ref class BRep_PointOnSurface sealed
    : public Macad::Occt::BRep_PointsOnSurface
{

#ifdef Include_BRep_PointOnSurface_h
public:
    Include_BRep_PointOnSurface_h
#endif

public:
    BRep_PointOnSurface(::BRep_PointOnSurface* nativeInstance)
        : Macad::Occt::BRep_PointsOnSurface( nativeInstance )
    {}

    BRep_PointOnSurface(::BRep_PointOnSurface& nativeInstance)
        : Macad::Occt::BRep_PointsOnSurface( nativeInstance )
    {}

    property ::BRep_PointOnSurface* NativeInstance
    {
        ::BRep_PointOnSurface* get()
        {
            return static_cast<::BRep_PointOnSurface*>(_NativeInstance);
        }
    }

public:
    BRep_PointOnSurface(double P1, double P2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    bool IsPointOnSurface();
    bool IsPointOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    double Parameter2();
    void Parameter2(double P);
    static Macad::Occt::BRep_PointOnSurface^ CreateDowncasted(::BRep_PointOnSurface* instance);
}; // class BRep_PointOnSurface

//---------------------------------------------------------------------
//  Class  BRep_Polygon3D
//---------------------------------------------------------------------
/// <summary>
/// Representation by a 3D polygon.
/// </summary>
public ref class BRep_Polygon3D sealed
    : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_Polygon3D_h
public:
    Include_BRep_Polygon3D_h
#endif

public:
    BRep_Polygon3D(::BRep_Polygon3D* nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    BRep_Polygon3D(::BRep_Polygon3D& nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    property ::BRep_Polygon3D* NativeInstance
    {
        ::BRep_Polygon3D* get()
        {
            return static_cast<::BRep_Polygon3D*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRep_Polygon3D(Poly_Polygon3D P, TopLoc_Location L, ) */
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsPolygon3D();
    /* Method skipped due to unknown mapping: Poly_Polygon3D Polygon3D() */
    /* Method skipped due to unknown mapping: void Polygon3D(Poly_Polygon3D P, ) */
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_Polygon3D^ CreateDowncasted(::BRep_Polygon3D* instance);
}; // class BRep_Polygon3D

//---------------------------------------------------------------------
//  Class  BRep_PolygonOnSurface
//---------------------------------------------------------------------
/// <summary>
/// Representation of a 2D polygon in the parametric
/// space of a surface.
/// </summary>
public ref class BRep_PolygonOnSurface
    : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_PolygonOnSurface_h
public:
    Include_BRep_PolygonOnSurface_h
#endif

protected:
    BRep_PolygonOnSurface(InitMode init)
        : Macad::Occt::BRep_CurveRepresentation( init )
    {}

public:
    BRep_PolygonOnSurface(::BRep_PolygonOnSurface* nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    BRep_PolygonOnSurface(::BRep_PolygonOnSurface& nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    property ::BRep_PolygonOnSurface* NativeInstance
    {
        ::BRep_PolygonOnSurface* get()
        {
            return static_cast<::BRep_PolygonOnSurface*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRep_PolygonOnSurface(Poly_Polygon2D P, Geom_Surface S, TopLoc_Location L, ) */
    /// <summary>
    /// A   2D polygon  representation  in the  parametric
    /// space of a surface.
    /// </summary>
    bool IsPolygonOnSurface();
    /// <summary>
    /// A   2D polygon  representation  in the  parametric
    /// space of a surface.
    /// </summary>
    bool IsPolygonOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L);
    Macad::Occt::Geom_Surface^ Surface();
    /* Method skipped due to unknown mapping: Poly_Polygon2D Polygon() */
    /* Method skipped due to unknown mapping: void Polygon(Poly_Polygon2D P, ) */
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_PolygonOnSurface^ CreateDowncasted(::BRep_PolygonOnSurface* instance);
}; // class BRep_PolygonOnSurface

//---------------------------------------------------------------------
//  Class  BRep_PolygonOnClosedSurface
//---------------------------------------------------------------------
/// <summary>
/// Representation by two 2d polygons in the parametric
/// space of a surface.
/// </summary>
public ref class BRep_PolygonOnClosedSurface sealed
    : public Macad::Occt::BRep_PolygonOnSurface
{

#ifdef Include_BRep_PolygonOnClosedSurface_h
public:
    Include_BRep_PolygonOnClosedSurface_h
#endif

public:
    BRep_PolygonOnClosedSurface(::BRep_PolygonOnClosedSurface* nativeInstance)
        : Macad::Occt::BRep_PolygonOnSurface( nativeInstance )
    {}

    BRep_PolygonOnClosedSurface(::BRep_PolygonOnClosedSurface& nativeInstance)
        : Macad::Occt::BRep_PolygonOnSurface( nativeInstance )
    {}

    property ::BRep_PolygonOnClosedSurface* NativeInstance
    {
        ::BRep_PolygonOnClosedSurface* get()
        {
            return static_cast<::BRep_PolygonOnClosedSurface*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRep_PolygonOnClosedSurface(Poly_Polygon2D P1, Poly_Polygon2D P2, Geom_Surface S, TopLoc_Location L, ) */
    /// <summary>
    /// returns True.
    /// </summary>
    bool IsPolygonOnClosedSurface();
    /* Method skipped due to unknown mapping: Poly_Polygon2D Polygon2() */
    /* Method skipped due to unknown mapping: void Polygon2(Poly_Polygon2D P, ) */
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_PolygonOnClosedSurface^ CreateDowncasted(::BRep_PolygonOnClosedSurface* instance);
}; // class BRep_PolygonOnClosedSurface

//---------------------------------------------------------------------
//  Class  BRep_PolygonOnTriangulation
//---------------------------------------------------------------------
/// <summary>
/// A representation by an array of nodes on a
/// triangulation.
/// </summary>
public ref class BRep_PolygonOnTriangulation
    : public Macad::Occt::BRep_CurveRepresentation
{

#ifdef Include_BRep_PolygonOnTriangulation_h
public:
    Include_BRep_PolygonOnTriangulation_h
#endif

protected:
    BRep_PolygonOnTriangulation(InitMode init)
        : Macad::Occt::BRep_CurveRepresentation( init )
    {}

public:
    BRep_PolygonOnTriangulation(::BRep_PolygonOnTriangulation* nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    BRep_PolygonOnTriangulation(::BRep_PolygonOnTriangulation& nativeInstance)
        : Macad::Occt::BRep_CurveRepresentation( nativeInstance )
    {}

    property ::BRep_PolygonOnTriangulation* NativeInstance
    {
        ::BRep_PolygonOnTriangulation* get()
        {
            return static_cast<::BRep_PolygonOnTriangulation*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRep_PolygonOnTriangulation(Poly_PolygonOnTriangulation P, Poly_Triangulation T, TopLoc_Location L, ) */
    /// <summary>
    /// returns True.
    /// </summary>
    bool IsPolygonOnTriangulation();
    /* Method skipped due to unknown mapping: bool IsPolygonOnTriangulation(Poly_Triangulation T, TopLoc_Location L, ) */
    /* Method skipped due to unknown mapping: void PolygonOnTriangulation(Poly_PolygonOnTriangulation P, ) */
    /* Method skipped due to unknown mapping: Poly_Triangulation Triangulation() */
    /* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation() */
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_PolygonOnTriangulation^ CreateDowncasted(::BRep_PolygonOnTriangulation* instance);
}; // class BRep_PolygonOnTriangulation

//---------------------------------------------------------------------
//  Class  BRep_PolygonOnClosedTriangulation
//---------------------------------------------------------------------
/// <summary>
/// A representation by two arrays of nodes on a
/// triangulation.
/// </summary>
public ref class BRep_PolygonOnClosedTriangulation sealed
    : public Macad::Occt::BRep_PolygonOnTriangulation
{

#ifdef Include_BRep_PolygonOnClosedTriangulation_h
public:
    Include_BRep_PolygonOnClosedTriangulation_h
#endif

public:
    BRep_PolygonOnClosedTriangulation(::BRep_PolygonOnClosedTriangulation* nativeInstance)
        : Macad::Occt::BRep_PolygonOnTriangulation( nativeInstance )
    {}

    BRep_PolygonOnClosedTriangulation(::BRep_PolygonOnClosedTriangulation& nativeInstance)
        : Macad::Occt::BRep_PolygonOnTriangulation( nativeInstance )
    {}

    property ::BRep_PolygonOnClosedTriangulation* NativeInstance
    {
        ::BRep_PolygonOnClosedTriangulation* get()
        {
            return static_cast<::BRep_PolygonOnClosedTriangulation*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRep_PolygonOnClosedTriangulation(Poly_PolygonOnTriangulation P1, Poly_PolygonOnTriangulation P2, Poly_Triangulation Tr, TopLoc_Location L, ) */
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsPolygonOnClosedTriangulation();
    /* Method skipped due to unknown mapping: void PolygonOnTriangulation2(Poly_PolygonOnTriangulation P2, ) */
    /* Method skipped due to unknown mapping: Poly_PolygonOnTriangulation PolygonOnTriangulation2() */
    /// <summary>
    /// Return a copy of this representation.
    /// </summary>
    Macad::Occt::BRep_CurveRepresentation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_PolygonOnClosedTriangulation^ CreateDowncasted(::BRep_PolygonOnClosedTriangulation* instance);
}; // class BRep_PolygonOnClosedTriangulation

//---------------------------------------------------------------------
//  Class  BRep_TEdge
//---------------------------------------------------------------------
/// <summary>
/// The TEdge from BRep is  inherited from  the  TEdge
/// from TopoDS. It contains the geometric data.
/// 
/// The TEdge contains :
/// 
/// * A tolerance.
/// 
/// * A same parameter flag.
/// 
/// * A same range flag.
/// 
/// * A Degenerated flag.
/// 
/// *  A  list   of curve representation.
/// </summary>
public ref class BRep_TEdge sealed
    : public Macad::Occt::TopoDS_TEdge
{

#ifdef Include_BRep_TEdge_h
public:
    Include_BRep_TEdge_h
#endif

public:
    BRep_TEdge(::BRep_TEdge* nativeInstance)
        : Macad::Occt::TopoDS_TEdge( nativeInstance )
    {}

    BRep_TEdge(::BRep_TEdge& nativeInstance)
        : Macad::Occt::TopoDS_TEdge( nativeInstance )
    {}

    property ::BRep_TEdge* NativeInstance
    {
        ::BRep_TEdge* get()
        {
            return static_cast<::BRep_TEdge*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty TEdge.
    /// </summary>
    BRep_TEdge();
    double Tolerance();
    void Tolerance(double T);
    /// <summary>
    /// Sets the tolerance  to the   max  of <T>  and  the
    /// current  tolerance.
    /// </summary>
    void UpdateTolerance(double T);
    bool SameParameter();
    void SameParameter(bool S);
    bool SameRange();
    void SameRange(bool S);
    bool Degenerated();
    void Degenerated(bool S);
    Macad::Occt::BRep_ListOfCurveRepresentation^ Curves();
    Macad::Occt::BRep_ListOfCurveRepresentation^ ChangeCurves();
    /// <summary>
    /// Returns a copy  of the  TShape  with no sub-shapes.
    /// </summary>
    Macad::Occt::TopoDS_TShape^ EmptyCopy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::BRep_TEdge^ CreateDowncasted(::BRep_TEdge* instance);
}; // class BRep_TEdge

}; // namespace Occt
}; // namespace Macad
