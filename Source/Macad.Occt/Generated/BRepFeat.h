// Generated wrapper code for package BRepFeat

#pragma once

#include "BOPAlgo.h"
#include "BRepBuilderAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepFeat_StatusError
//---------------------------------------------------------------------
/// <summary>
/// Describes the error.
/// </summary>
public enum class BRepFeat_StatusError
{
    OK = 0,
    BadDirect = 1,
    BadIntersect = 2,
    EmptyBaryCurve = 3,
    EmptyCutResult = 4,
    FalseSide = 5,
    IncDirection = 6,
    IncSlidFace = 7,
    IncParameter = 8,
    IncTypes = 9,
    IntervalOverlap = 10,
    InvFirstShape = 11,
    InvOption = 12,
    InvShape = 13,
    LocOpeNotDone = 14,
    LocOpeInvNotDone = 15,
    NoExtFace = 16,
    NoFaceProf = 17,
    NoGluer = 18,
    NoIntersectF = 19,
    NoIntersectU = 20,
    NoParts = 21,
    NoProjPt = 22,
    NotInitialized = 23,
    NotYetImplemented = 24,
    NullRealTool = 25,
    NullToolF = 26,
    NullToolU = 27
}; // enum  class BRepFeat_StatusError

//---------------------------------------------------------------------
//  Enum  BRepFeat_PerfSelection
//---------------------------------------------------------------------
/// <summary>
/// To declare the type of selection semantics for local operation Perform methods
/// -   NoSelection
/// -   SelectionFU - selection of a face up to which a
/// local operation will be performed
/// -   SelectionU - selection of a point up to which a
/// local operation will be performed
/// -   SelectionSh - selection of a shape on which a
/// local operation will be performed
/// -   SelectionShU - selection of a shape up to which a
/// local operation will be performed.
/// </summary>
public enum class BRepFeat_PerfSelection
{
    NoSelection = 0,
    SelectionFU = 1,
    SelectionU = 2,
    SelectionSh = 3,
    SelectionShU = 4
}; // enum  class BRepFeat_PerfSelection

//---------------------------------------------------------------------
//  Enum  BRepFeat_Status
//---------------------------------------------------------------------
public enum class BRepFeat_Status
{
    NoError = 0,
    InvalidPlacement = 1,
    HoleTooLong = 2
}; // enum  class BRepFeat_Status

//---------------------------------------------------------------------
//  Class  BRepFeat
//---------------------------------------------------------------------
/// <summary>
/// BRepFeat is necessary for the
/// creation and manipulation of both form and mechanical features in a
/// Boundary Representation framework. Form features can be depressions or
/// protrusions and include the following types:
/// -          Cylinder
/// -          Draft Prism
/// -          Prism
/// -          Revolved feature
/// -          Pipe
/// Depending on whether you wish to make a depression or a protrusion,
/// you can choose your operation type between the following:
/// - removing matter (a Boolean cut: Fuse setting 0)
/// - adding matter (Boolean fusion: Fuse setting 1)
/// The semantics of form feature creation is based on the
/// construction of shapes:
/// -          for a certain length in a certain direction
/// -          up to a limiting face
/// -          from a limiting face at a height
/// -          above and/or below a plane
/// The shape defining the construction of a feature can be either a
/// supporting edge or a concerned area of a face.
/// In case of supporting edge, this contour can be attached to a face
/// of the basis shape by binding. When the contour is bound to this face,
/// the information that the contour will slide on the face becomes
/// available to the relevant class methods. In case of the concerned
/// area of a face, you could, for example, cut it out and move it at
/// a different height, which will define the limiting face of a
/// protrusion or depression. Topological definition with local
/// operations of this sort makes calculations simpler and faster
/// than a global operation. The latter would entail a second phase of
/// removing unwanted matter to get the same result.
/// Mechanical features include ribs - protrusions - and grooves (or
/// slots) - depressions along planar (linear) surfaces or revolution surfaces.
/// The semantics of mechanical features is based on giving
/// thickness to a contour. This thickness can either be unilateral
/// - on one side of the contour - or bilateral - on both sides. As in
/// the semantics of form features, the thickness is defined by
/// construction of shapes in specific contexts.
/// However, in case of mechanical features, development contexts
/// differ. Here they include extrusion:
/// -          to a limiting face of the basis shape
/// -          to or from a limiting plane
/// -          to a height.
/// </summary>
public ref class BRepFeat sealed
    : public Macad::Occt::BaseClass<::BRepFeat>
{

#ifdef Include_BRepFeat_h
public:
    Include_BRepFeat_h
#endif

public:
    BRepFeat(::BRepFeat* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFeat>( nativeInstance, true )
    {}

    BRepFeat(::BRepFeat& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFeat>( &nativeInstance, false )
    {}

    property ::BRepFeat* NativeInstance
    {
        ::BRepFeat* get()
        {
            return static_cast<::BRepFeat*>(_NativeInstance);
        }
    }

public:
    BRepFeat();
    static void SampleEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TColgp_SequenceOfPnt^ Pt);
    static void Barycenter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Pnt% Pt);
    static double ParametricBarycenter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// Ori = True taking account the orientation
    /// </summary>
    static void ParametricMinMax(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C, double% prmin, double% prmax, double% prbmin, double% prbmax, bool% flag, bool Ori);
    /// <summary>
    /// Ori = True taking account the orientation
    /// </summary>
    static void ParametricMinMax(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Geom_Curve^ C, double% prmin, double% prmax, double% prbmin, double% prbmax, bool% flag);
    static bool IsInside(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2);
    /* Method skipped due to unknown mapping: bool IsInOut(BRepTopAdaptor_FClass2d FC, Geom2dAdaptor_Curve AC, ) */
    static void FaceUntil(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Face^ F);
    static Macad::Occt::TopoDS_Solid^ Tool(Macad::Occt::TopoDS_Shape^ SRef, Macad::Occt::TopoDS_Face^ Fac, Macad::Occt::TopAbs_Orientation Orf);
    /// <summary>
    /// Prints the Error description of the State <St> as a String on
    /// the Stream <S> and returns <S>.
    /// </summary>
    static System::IO::TextWriter^ Print(Macad::Occt::BRepFeat_StatusError SE, System::IO::TextWriter^ S);
}; // class BRepFeat

//---------------------------------------------------------------------
//  Class  BRepFeat_Builder
//---------------------------------------------------------------------
/// <summary>
/// Provides a basic tool to implement features topological
/// operations. The main goal of the algorithm is to perform
/// the result of the operation according to the
/// kept parts of the tool.
/// Input data: a) DS;
/// b) The kept parts of the tool;
/// If the map of the kept parts of the tool
/// is not filled boolean operation of the
/// given type will be performed;
/// c) Operation required.
/// Steps: a) Fill myShapes, myRemoved maps;
/// b) Rebuild edges and faces;
/// c) Build images of the object;
/// d) Build the result of the operation.
/// Result: Result shape of the operation required.
/// </summary>
public ref class BRepFeat_Builder
    : public Macad::Occt::BOPAlgo_BOP
{

#ifdef Include_BRepFeat_Builder_h
public:
    Include_BRepFeat_Builder_h
#endif

protected:
    BRepFeat_Builder(InitMode init)
        : Macad::Occt::BOPAlgo_BOP( init )
    {}

public:
    BRepFeat_Builder(::BRepFeat_Builder* nativeInstance)
        : Macad::Occt::BOPAlgo_BOP( nativeInstance )
    {}

    BRepFeat_Builder(::BRepFeat_Builder& nativeInstance)
        : Macad::Occt::BOPAlgo_BOP( nativeInstance )
    {}

    property ::BRepFeat_Builder* NativeInstance
    {
        ::BRepFeat_Builder* get()
        {
            return static_cast<::BRepFeat_Builder*>(_NativeInstance);
        }
    }

public:
    BRepFeat_Builder();
    /// <summary>
    /// Clears internal fields and arguments.
    /// </summary>
    void Clear();
    /// <summary>
    /// Initializes the object of local boolean operation.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Initializes the arguments of local boolean operation.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopoDS_Shape^ theTool);
    /// <summary>
    /// Sets the operation of local boolean operation.
    /// If theFuse = 0 than the operation is CUT, otherwise FUSE.
    /// </summary>
    void SetOperation(int theFuse);
    /// <summary>
    /// Sets the operation of local boolean operation.
    /// If theFlag = TRUE it means that no selection of parts
    /// of the tool is needed, t.e. no second part. In that case
    /// if theFuse = 0 than operation is COMMON, otherwise CUT21.
    /// If theFlag = FALSE SetOperation(theFuse) function  is called.
    /// </summary>
    void SetOperation(int theFuse, bool theFlag);
    /// <summary>
    /// Collects parts of the tool.
    /// </summary>
    void PartsOfTool(Macad::Occt::TopTools_ListOfShape^ theLT);
    /// <summary>
    /// Initializes parts of the tool for second step of algorithm.
    /// Collects shapes and all sub-shapes into myShapes map.
    /// </summary>
    void KeepParts(Macad::Occt::TopTools_ListOfShape^ theIm);
    /// <summary>
    /// Adds shape theS and all its sub-shapes into myShapes map.
    /// </summary>
    void KeepPart(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Main function to build the result of the
    /// local operation required.
    /// </summary>
    void PerformResult(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Main function to build the result of the
    /// local operation required.
    /// </summary>
    void PerformResult();
    /// <summary>
    /// Rebuilds faces in accordance with the kept parts of the tool.
    /// </summary>
    void RebuildFaces();
    /// <summary>
    /// Rebuilds edges in accordance with the kept parts of the tool.
    /// </summary>
    void RebuildEdge(Macad::Occt::TopoDS_Shape^ theE, Macad::Occt::TopoDS_Face^ theF, Macad::Occt::TopTools_MapOfShape^ theME, Macad::Occt::TopTools_ListOfShape^ aLEIm);
    /// <summary>
    /// Collects the images of the object, that contains in
    /// the images of the tool.
    /// </summary>
    void CheckSolidImages();
    /// <summary>
    /// Collects the removed parts of the tool into myRemoved map.
    /// </summary>
    void FillRemoved();
    /// <summary>
    /// Adds the shape S and its sub-shapes into myRemoved map.
    /// </summary>
    void FillRemoved(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::TopTools_MapOfShape^ theM);
}; // class BRepFeat_Builder

//---------------------------------------------------------------------
//  Class  BRepFeat_Form
//---------------------------------------------------------------------
/// <summary>
/// Provides general functions to build form features.
/// Form features can be depressions or protrusions and include the following types:
/// -          Cylinder
/// -          Draft Prism
/// -          Prism
/// -          Revolved feature
/// -          Pipe
/// In each case, you have a choice of operation type between the following:
/// -          removing matter (a Boolean cut: Fuse setting 0)
/// -          adding matter (Boolean fusion: Fuse setting 1)
/// The semantics of form feature creation is based on the construction of shapes:
/// -      along a length
/// -      up to a limiting face
/// -      from a limiting face to a  height
/// -      above and/or below a plane
/// The shape defining construction of the feature can be either the
/// supporting edge or the concerned area of a face.
/// In case of the supporting edge, this contour can be attached to a
/// face of the basis shape by binding. When the contour is bound to this
/// face, the information that the contour will slide on the face
/// becomes available to the relevant class methods. In case of the
/// concerned area of a face, you could, for example, cut it out and
/// move it to a different height which will define the limiting face of a
/// protrusion or depression.
/// Topological definition with local operations of this sort makes
/// calculations simpler and faster than a global operation. The latter
/// would entail a second phase of removing unwanted matter to get the same result.
/// </summary>
public ref class BRepFeat_Form
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFeat_Form_h
public:
    Include_BRepFeat_Form_h
#endif

protected:
    BRepFeat_Form(InitMode init)
        : Macad::Occt::BRepBuilderAPI_MakeShape( init )
    {}

public:
    BRepFeat_Form(::BRepFeat_Form* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepFeat_Form(::BRepFeat_Form& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepFeat_Form* NativeInstance
    {
        ::BRepFeat_Form* get()
        {
            return static_cast<::BRepFeat_Form*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// returns the list of generated Faces.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
    /// <summary>
    /// returns a list of the created faces
    /// from the shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list  of shapes created  at the bottom  of
    /// the created form.  It may be an empty list.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ FirstShape();
    /// <summary>
    /// Returns  the list of shapes  created at the top of the
    /// created form.  It may be an empty list.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ LastShape();
    /// <summary>
    /// Returns a list of the limiting and glueing edges
    /// generated by the feature. These edges did not originally
    /// exist in the basis shape.
    /// The list provides the information necessary for
    /// subsequent addition of fillets. It may be an empty list.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ NewEdges();
    /// <summary>
    /// Returns a list of the tangent edges among the limiting
    /// and glueing edges generated by the feature. These
    /// edges did not originally exist in the basis shape and are
    /// tangent to the face against which the feature is built.
    /// The list provides the information necessary for
    /// subsequent addition of fillets. It may be an empty list.
    /// If an edge is tangent, no fillet is possible, and the edge
    /// must subsequently be removed if you want to add a fillet.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ TgtEdges();
    /// <summary>
    /// Initializes the topological construction if the basis shape is present.
    /// </summary>
    void BasisShapeValid();
    /// <summary>
    /// Initializes the topological construction if the generated shape S is present.
    /// </summary>
    void GeneratedShapeValid();
    /// <summary>
    /// Initializes the topological construction if the shape is
    /// present from the specified integer on.
    /// </summary>
    void ShapeFromValid();
    /// <summary>
    /// Initializes the topological construction if the shape is
    /// present until the specified integer.
    /// </summary>
    void ShapeUntilValid();
    /// <summary>
    /// Initializes the topological construction if the glued face is present.
    /// </summary>
    void GluedFacesValid();
    /// <summary>
    /// Initializes the topological construction if the sketch face
    /// is present. If the sketch face is inside the basis shape,
    /// local operations such as glueing can be performed.
    /// </summary>
    void SketchFaceValid();
    /// <summary>
    /// Initializes the topological construction if the selected face is present.
    /// </summary>
    void PerfSelectionValid();
    /* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
    Macad::Occt::Geom_Curve^ BarycCurve();
    Macad::Occt::BRepFeat_StatusError CurrentStatusError();
}; // class BRepFeat_Form

//---------------------------------------------------------------------
//  Class  BRepFeat_Gluer
//---------------------------------------------------------------------
/// <summary>
/// One of the most significant aspects
/// of BRepFeat functionality is the use of local operations as opposed
/// to global ones. In a global operation, you would first
/// construct a form of the type you wanted in your final feature, and
/// then remove matter so that it could fit into your initial basis object.
/// In a local operation, however, you specify the domain of the feature
/// construction with aspects of the shape on which the feature is being
/// created. These semantics are expressed in terms of a member
/// shape of the basis shape from which - or up to which - matter will be
/// added or removed. As a result, local operations make calculations
/// simpler and faster than global operations.
/// Glueing uses wires or edges of a face in the basis shape. These are
/// to become a part of the feature. They are first cut out and then
/// projected to a plane outside or inside the basis shape. By
/// rebuilding the initial shape incorporating the edges and the
/// faces of the tool, protrusion features can be constructed.
/// </summary>
public ref class BRepFeat_Gluer sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFeat_Gluer_h
public:
    Include_BRepFeat_Gluer_h
#endif

public:
    BRepFeat_Gluer(::BRepFeat_Gluer* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepFeat_Gluer(::BRepFeat_Gluer& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepFeat_Gluer* NativeInstance
    {
        ::BRepFeat_Gluer* get()
        {
            return static_cast<::BRepFeat_Gluer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an empty constructor
    /// </summary>
    BRepFeat_Gluer();
    /// <summary>
    /// Initializes the shapes to be glued, the new shape
    /// Snew and the basis shape Sbase.
    /// </summary>
    BRepFeat_Gluer(Macad::Occt::TopoDS_Shape^ Snew, Macad::Occt::TopoDS_Shape^ Sbase);
    /// <summary>
    /// Initializes the new shape Snew and the basis shape
    /// Sbase for the local glueing operation.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ Snew, Macad::Occt::TopoDS_Shape^ Sbase);
    /// <summary>
    /// Defines a contact between Fnew on the new shape
    /// Snew and Fbase on the basis shape Sbase. Informs
    /// other methods that Fnew in the new shape Snew is
    /// connected to the face Fbase in the basis shape Sbase.
    /// The contact faces of the glued shape must not have
    /// parts outside the contact faces of the basis shape.
    /// This indicates that glueing is possible.
    /// </summary>
    void Bind(Macad::Occt::TopoDS_Face^ Fnew, Macad::Occt::TopoDS_Face^ Fbase);
    /// <summary>
    /// nforms other methods that the edge Enew in the new
    /// shape is the same as the edge Ebase in the basis
    /// shape and is therefore attached to the basis shape. This
    /// indicates that glueing is possible.
    /// </summary>
    void Bind(Macad::Occt::TopoDS_Edge^ Enew, Macad::Occt::TopoDS_Edge^ Ebase);
    /* Method skipped due to unknown mapping: LocOpe_Operation OpeType() */
    /// <summary>
    /// Returns the basis shape of the compound shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ BasisShape();
    /// <summary>
    /// Returns the resulting compound shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ GluedShape();
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
    /// returns the status of the Face after
    /// the shape creation.
    /// </summary>
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ F);
    /// <summary>
    /// returns the list of generated Faces.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
}; // class BRepFeat_Gluer

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeCylindricalHole
//---------------------------------------------------------------------
/// <summary>
/// Provides a tool to make cylindrical holes on a shape.
/// </summary>
public ref class BRepFeat_MakeCylindricalHole sealed
    : public Macad::Occt::BRepFeat_Builder
{

#ifdef Include_BRepFeat_MakeCylindricalHole_h
public:
    Include_BRepFeat_MakeCylindricalHole_h
#endif

public:
    BRepFeat_MakeCylindricalHole(::BRepFeat_MakeCylindricalHole* nativeInstance)
        : Macad::Occt::BRepFeat_Builder( nativeInstance )
    {}

    BRepFeat_MakeCylindricalHole(::BRepFeat_MakeCylindricalHole& nativeInstance)
        : Macad::Occt::BRepFeat_Builder( nativeInstance )
    {}

    property ::BRepFeat_MakeCylindricalHole* NativeInstance
    {
        ::BRepFeat_MakeCylindricalHole* get()
        {
            return static_cast<::BRepFeat_MakeCylindricalHole*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    BRepFeat_MakeCylindricalHole();
    /// <summary>
    /// Sets the axis of the hole(s).
    /// </summary>
    void Init(Macad::Occt::Ax1 Axis);
    /// <summary>
    /// Sets the shape and  axis on which hole(s)  will be
    /// performed.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 Axis);
    /// <summary>
    /// Performs every  hole of    radius  <Radius>.  This
    /// command  has the  same effect as   a cut operation
    /// with an  infinite cylinder   defined by the  given
    /// axis and <Radius>.
    /// </summary>
    void Perform(double Radius);
    /// <summary>
    /// Performs every  hole  of  radius  <Radius> located
    /// between PFrom  and  PTo  on the  given  axis.   If
    /// <WithControl> is set  to Standard_False no control
    /// are  done  on   the  resulting  shape   after  the
    /// operation is performed.
    /// </summary>
    void Perform(double Radius, double PFrom, double PTo, bool WithControl);
    /// <summary>
    /// Performs every  hole  of  radius  <Radius> located
    /// between PFrom  and  PTo  on the  given  axis.   If
    /// <WithControl> is set  to Standard_False no control
    /// are  done  on   the  resulting  shape   after  the
    /// operation is performed.
    /// </summary>
    void Perform(double Radius, double PFrom, double PTo);
    /// <summary>
    /// Performs the first hole of radius <Radius>, in the
    /// direction of  the defined axis. First hole signify
    /// first encountered after the origin of the axis. If
    /// <WithControl> is set  to Standard_False no control
    /// are  done  on   the  resulting  shape   after  the
    /// operation is performed.
    /// </summary>
    void PerformThruNext(double Radius, bool WithControl);
    /// <summary>
    /// Performs the first hole of radius <Radius>, in the
    /// direction of  the defined axis. First hole signify
    /// first encountered after the origin of the axis. If
    /// <WithControl> is set  to Standard_False no control
    /// are  done  on   the  resulting  shape   after  the
    /// operation is performed.
    /// </summary>
    void PerformThruNext(double Radius);
    /// <summary>
    /// Performs every  hole of   radius  <Radius> located
    /// after  the   origin  of   the given    axis.    If
    /// <WithControl> is  set to Standard_False no control
    /// are done   on   the  resulting  shape   after  the
    /// operation is performed.
    /// </summary>
    void PerformUntilEnd(double Radius, bool WithControl);
    /// <summary>
    /// Performs every  hole of   radius  <Radius> located
    /// after  the   origin  of   the given    axis.    If
    /// <WithControl> is  set to Standard_False no control
    /// are done   on   the  resulting  shape   after  the
    /// operation is performed.
    /// </summary>
    void PerformUntilEnd(double Radius);
    /// <summary>
    /// Performs a  blind   hole of radius    <Radius> and
    /// length <Length>.  The length is  measured from the
    /// origin of the given  axis. If <WithControl> is set
    /// to  Standard_False no  control  are done after the
    /// operation is performed.
    /// </summary>
    void PerformBlind(double Radius, double Length, bool WithControl);
    /// <summary>
    /// Performs a  blind   hole of radius    <Radius> and
    /// length <Length>.  The length is  measured from the
    /// origin of the given  axis. If <WithControl> is set
    /// to  Standard_False no  control  are done after the
    /// operation is performed.
    /// </summary>
    void PerformBlind(double Radius, double Length);
    /// <summary>
    /// Returns the status after a hole is performed.
    /// </summary>
    Macad::Occt::BRepFeat_Status Status();
    /// <summary>
    /// Builds the    resulting shape  (redefined     from
    /// MakeShape). Invalidates the  given parts  of tools
    /// if  any,   and performs the  result   of the local
    /// operation.
    /// </summary>
    void Build();
}; // class BRepFeat_MakeCylindricalHole

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeDPrism
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build draft
/// prism topologies from basis shape surfaces. These can be depressions or protrusions.
/// The semantics of draft prism feature creation is based on the
/// construction of shapes:
/// -          along a length
/// -          up to a limiting face
/// -          from a limiting face to a height.
/// The shape defining construction of the draft prism feature can be
/// either the supporting edge or the concerned area of a face.
/// In case of the supporting edge, this contour can be attached to a
/// face of the basis shape by binding. When the contour is bound to this
/// face, the information that the contour will slide on the face
/// becomes available to the relevant class methods.
/// In case of the concerned area of a face, you could, for example, cut
/// it out and move it to a different height which will define the
/// limiting face of a protrusion or depression.
/// </summary>
public ref class BRepFeat_MakeDPrism sealed
    : public Macad::Occt::BRepFeat_Form
{

#ifdef Include_BRepFeat_MakeDPrism_h
public:
    Include_BRepFeat_MakeDPrism_h
#endif

public:
    BRepFeat_MakeDPrism(::BRepFeat_MakeDPrism* nativeInstance)
        : Macad::Occt::BRepFeat_Form( nativeInstance )
    {}

    BRepFeat_MakeDPrism(::BRepFeat_MakeDPrism& nativeInstance)
        : Macad::Occt::BRepFeat_Form( nativeInstance )
    {}

    property ::BRepFeat_MakeDPrism* NativeInstance
    {
        ::BRepFeat_MakeDPrism* get()
        {
            return static_cast<::BRepFeat_MakeDPrism*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A face Pbase is selected in the shape
    /// Sbase to serve as the basis for the draft prism. The
    /// draft will be defined by the angle Angle and Fuse offers a choice between:
    /// - removing matter with a Boolean cut using the setting 0
    /// - adding matter with Boolean fusion using the setting 1.
    /// The sketch face Skface serves to determine the type of
    /// operation. If it is inside the basis shape, a local
    /// operation such as glueing can be performed.
    /// Initializes the draft prism class
    /// </summary>
    BRepFeat_MakeDPrism(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Face^ Pbase, Macad::Occt::TopoDS_Face^ Skface, double Angle, int Fuse, bool Modify);
    BRepFeat_MakeDPrism();
    /// <summary>
    /// Initializes this algorithm for building draft prisms along surfaces.
    /// A face Pbase is selected in the basis shape Sbase to
    /// serve as the basis from the draft prism. The draft will be
    /// defined by the angle Angle and Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting 0
    /// -   adding matter with Boolean fusion using the setting  1.
    /// The sketch face Skface serves to determine the type of
    /// operation. If it is inside the basis shape, a local
    /// operation such as glueing can be performed.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Face^ Pbase, Macad::Occt::TopoDS_Face^ Skface, double Angle, int Fuse, bool Modify);
    /// <summary>
    /// Indicates that the edge <E> will slide on the face
    /// <OnFace>.
    /// Raises ConstructionError if the  face does not belong to the
    /// basis shape, or the edge to the prismed shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
    void Perform(double Height);
    void Perform(Macad::Occt::TopoDS_Shape^ Until);
    /// <summary>
    /// Assigns one of the following semantics
    /// -   to a height Height
    /// -   to a face Until
    /// -   from a face From to a height Until.
    /// Reconstructs the feature topologically according to the semantic option chosen.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until);
    /// <summary>
    /// Realizes a semi-infinite prism, limited by the position of the prism base.
    /// </summary>
    void PerformUntilEnd();
    /// <summary>
    /// Realizes a semi-infinite prism, limited by the face Funtil.
    /// </summary>
    void PerformFromEnd(Macad::Occt::TopoDS_Shape^ FUntil);
    /// <summary>
    /// Builds an infinite prism. The infinite descendants will not be kept in the result.
    /// </summary>
    void PerformThruAll();
    /// <summary>
    /// Assigns both a limiting shape, Until from
    /// TopoDS_Shape, and a height, Height at which to stop
    /// generation of the prism feature.
    /// </summary>
    void PerformUntilHeight(Macad::Occt::TopoDS_Shape^ Until, double Height);
    /* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
    Macad::Occt::Geom_Curve^ BarycCurve();
    /// <summary>
    /// Determination of TopEdges and LatEdges.
    /// sig = 1 -> TopEdges = FirstShape of the DPrism
    /// sig = 2 -> TOpEdges = LastShape of the DPrism
    /// </summary>
    void BossEdges(int sig);
    /// <summary>
    /// Returns the list of TopoDS Edges of the top of the boss.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ TopEdges();
    /// <summary>
    /// Returns the list of TopoDS Edges of the bottom of the boss.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ LatEdges();
}; // class BRepFeat_MakeDPrism

//---------------------------------------------------------------------
//  Class  BRepFeat_RibSlot
//---------------------------------------------------------------------
/// <summary>
/// Provides functions to build mechanical features.
/// Mechanical features include ribs - protrusions and grooves (or slots) - depressions along
/// planar (linear) surfaces or revolution surfaces. The semantics of mechanical features is built
/// around giving thickness to a contour. This thickness can either be unilateral - on one side
/// of the contour - or bilateral - on both sides.
/// As in the semantics of form features, the thickness is defined by construction of shapes
/// in specific contexts. The development contexts differ, however,in case of mechanical features.
/// Here they include extrusion:
/// -   to a limiting face of the basis shape
/// -   to or from a limiting plane
/// -   to a height.
/// </summary>
public ref class BRepFeat_RibSlot
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFeat_RibSlot_h
public:
    Include_BRepFeat_RibSlot_h
#endif

protected:
    BRepFeat_RibSlot(InitMode init)
        : Macad::Occt::BRepBuilderAPI_MakeShape( init )
    {}

public:
    BRepFeat_RibSlot(::BRepFeat_RibSlot* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepFeat_RibSlot(::BRepFeat_RibSlot& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepFeat_RibSlot* NativeInstance
    {
        ::BRepFeat_RibSlot* get()
        {
            return static_cast<::BRepFeat_RibSlot*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns true if F a TopoDS_Shape of type edge or face has been deleted.
    /// </summary>
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ F);
    /// <summary>
    /// Returns the list of generated Faces F. This list may be empty.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
    /// <summary>
    /// Returns a list TopTools_ListOfShape of the faces S created in the shape.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list  of shapes created  at the bottom  of
    /// the created form.  It may be an empty list.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ FirstShape();
    /// <summary>
    /// Returns  the list of shapes  created at the top of the
    /// created form.  It may be an empty list.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ LastShape();
    /// <summary>
    /// Returns a list of the limiting and glueing faces
    /// generated by the feature. These faces did not originally exist in the basis shape.
    /// The list provides the information necessary for
    /// subsequent addition of a draft to a face. It may be an empty list.
    /// If a face has tangent edges, no draft is possible, and the tangent edges must
    /// subsequently be removed if you want to add a draft to the face.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ FacesForDraft();
    /// <summary>
    /// Returns a list of the limiting and glueing edges
    /// generated by the feature. These edges did not originally exist in the basis shape.
    /// The list provides the information necessary for
    /// subsequent addition of fillets. It may be an empty list.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ NewEdges();
    /// <summary>
    /// Returns a list of the tangent edges among the
    /// limiting and glueing edges generated by the
    /// feature. These edges did not originally exist in
    /// the basis shape and are tangent to the face
    /// against which the feature is built.
    /// The list provides the information necessary for
    /// subsequent addition of fillets. It may be an empty list.
    /// If an edge is tangent, no fillet is possible, and
    /// the edge must subsequently be removed if you want to add a fillet.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ TgtEdges();
    static double IntPar(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P);
    static Macad::Occt::TopoDS_Face^ ChoiceOfFaces(Macad::Occt::TopTools_ListOfShape^ faces, Macad::Occt::Geom_Curve^ cc, double par, double bnd, Macad::Occt::Geom_Plane^ Pln);
    Macad::Occt::BRepFeat_StatusError CurrentStatusError();
}; // class BRepFeat_RibSlot

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeLinearForm
//---------------------------------------------------------------------
/// <summary>
/// Builds a rib or a groove along a developable, planar surface.
/// The semantics of mechanical features is built around
/// giving thickness to a contour. This thickness can either
/// be symmetrical - on one side of the contour - or
/// dissymmetrical - on both sides. As in the semantics of
/// form features, the thickness is defined by construction of
/// shapes in specific contexts.
/// The development contexts differ, however, in case of
/// mechanical features. Here they include extrusion:
/// -   to a limiting face of the basis shape
/// -   to or from a limiting plane
/// -   to a height.
/// </summary>
public ref class BRepFeat_MakeLinearForm sealed
    : public Macad::Occt::BRepFeat_RibSlot
{

#ifdef Include_BRepFeat_MakeLinearForm_h
public:
    Include_BRepFeat_MakeLinearForm_h
#endif

public:
    BRepFeat_MakeLinearForm(::BRepFeat_MakeLinearForm* nativeInstance)
        : Macad::Occt::BRepFeat_RibSlot( nativeInstance )
    {}

    BRepFeat_MakeLinearForm(::BRepFeat_MakeLinearForm& nativeInstance)
        : Macad::Occt::BRepFeat_RibSlot( nativeInstance )
    {}

    property ::BRepFeat_MakeLinearForm* NativeInstance
    {
        ::BRepFeat_MakeLinearForm* get()
        {
            return static_cast<::BRepFeat_MakeLinearForm*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// initializes the linear form class
    /// </summary>
    BRepFeat_MakeLinearForm();
    /// <summary>
    /// contour W, a shape Sbase and a
    /// plane P are initialized to serve as the basic
    /// elements in the construction of the rib or groove.
    /// Direction and Direction1 give The vectors for
    /// defining the direction(s) in which thickness will be built up.
    /// Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the
    /// setting 0 in case of the groove
    /// -   adding matter with Boolean fusion using the
    /// setting 1 in case of the rib.
    /// </summary>
    BRepFeat_MakeLinearForm(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ P, Macad::Occt::Vec Direction, Macad::Occt::Vec Direction1, int Fuse, bool Modify);
    /// <summary>
    /// Initializes this construction algorithm.
    /// A contour W, a shape Sbase and a plane P are
    /// initialized to serve as the basic elements in the
    /// construction of the rib or groove. The vectors for
    /// defining the direction(s) in which thickness will be built
    /// up are given by Direction and Direction1.
    /// Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting
    /// 0 in case of the groove
    /// -   adding matter with Boolean fusion using the setting 1
    /// in case of the rib.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ P, Macad::Occt::Vec Direction, Macad::Occt::Vec Direction1, int Fuse, bool Modify);
    /// <summary>
    /// Indicates that the edge <E> will slide on the face
    /// <OnFace>.
    /// Raises ConstructionError if the  face does not belong to the
    /// basis shape, or the edge to the prismed shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
    /// <summary>
    /// Performs a prism from the wire to the plane along the
    /// basis shape Sbase. Reconstructs the feature topologically.
    /// </summary>
    void Perform();
    bool Propagate(Macad::Occt::TopTools_ListOfShape^ L, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt FPoint, Macad::Occt::Pnt LPoint, bool% falseside);
}; // class BRepFeat_MakeLinearForm

//---------------------------------------------------------------------
//  Class  BRepFeat_MakePipe
//---------------------------------------------------------------------
/// <summary>
/// Constructs compound shapes with pipe
/// features. These can be depressions or protrusions.
/// The semantics of pipe feature creation is based on the construction of shapes:
/// -   along a length
/// -   up to a limiting face
/// -   from a limiting face to a height.
/// The shape defining construction of the pipe feature can be either the supporting edge or
/// the concerned area of a face.
/// In case of the supporting edge, this contour
/// can be attached to a face of the basis shape
/// by binding. When the contour is bound to this
/// face, the information that the contour will
/// slide on the face becomes available to the relevant class methods.
/// In case of the concerned area of a face, you
/// could, for example, cut it out and move it to a
/// different height which will define the limiting
/// face of a protrusion or depression.
/// </summary>
public ref class BRepFeat_MakePipe sealed
    : public Macad::Occt::BRepFeat_Form
{

#ifdef Include_BRepFeat_MakePipe_h
public:
    Include_BRepFeat_MakePipe_h
#endif

public:
    BRepFeat_MakePipe(::BRepFeat_MakePipe* nativeInstance)
        : Macad::Occt::BRepFeat_Form( nativeInstance )
    {}

    BRepFeat_MakePipe(::BRepFeat_MakePipe& nativeInstance)
        : Macad::Occt::BRepFeat_Form( nativeInstance )
    {}

    property ::BRepFeat_MakePipe* NativeInstance
    {
        ::BRepFeat_MakePipe* get()
        {
            return static_cast<::BRepFeat_MakePipe*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// initializes the pipe class.
    /// </summary>
    BRepFeat_MakePipe();
    /// <summary>
    /// A face Pbase is selected in the
    /// shape Sbase to serve as the basis for the
    /// pipe. It will be defined by the wire Spine.
    /// Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting 0
    /// -   adding matter with Boolean fusion using the setting 1.
    /// The sketch face Skface serves to determine
    /// the type of operation. If it is inside the basis
    /// shape, a local operation such as glueing can be performed.
    /// </summary>
    BRepFeat_MakePipe(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::TopoDS_Wire^ Spine, int Fuse, bool Modify);
    /// <summary>
    /// Initializes this algorithm for adding pipes to shapes.
    /// A face Pbase is selected in the shape Sbase to
    /// serve as the basis for the pipe. It will be defined by the wire Spine.
    /// Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting 0
    /// -   adding matter with Boolean fusion using the setting 1.
    /// The sketch face Skface serves to determine
    /// the type of operation. If it is inside the basis
    /// shape, a local operation such as glueing can be performed.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::TopoDS_Wire^ Spine, int Fuse, bool Modify);
    /// <summary>
    /// Indicates that the edge <E> will slide on the face
    /// <OnFace>. Raises ConstructionError  if the  face does not belong to the
    /// basis shape, or the edge to the prismed shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
    void Perform();
    void Perform(Macad::Occt::TopoDS_Shape^ Until);
    /// <summary>
    /// Assigns one of the following semantics
    /// -   to a face Until
    /// -   from a face From to a height Until.
    /// Reconstructs the feature topologically according to the semantic option chosen.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until);
    /* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
    Macad::Occt::Geom_Curve^ BarycCurve();
}; // class BRepFeat_MakePipe

//---------------------------------------------------------------------
//  Class  BRepFeat_MakePrism
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build prism features.
/// These can be depressions or protrusions.
/// The semantics of prism feature creation is
/// based on the construction of shapes:
/// -   along a length
/// -   up to a limiting face
/// -   from a limiting face to a height.
/// The shape defining construction of the prism feature can be
/// either the supporting edge or the concerned area of a face.
/// In case of the supporting edge, this contour
/// can be attached to a face of the basis shape by
/// binding. When the contour is bound to this face,
/// the information that the contour will slide on the
/// face becomes available to the relevant class methods.
/// In case of the concerned area of a face, you
/// could, for example, cut it out and move it to a
/// different height which will define the limiting
/// face of a protrusion or depression.
/// </summary>
public ref class BRepFeat_MakePrism sealed
    : public Macad::Occt::BRepFeat_Form
{

#ifdef Include_BRepFeat_MakePrism_h
public:
    Include_BRepFeat_MakePrism_h
#endif

public:
    BRepFeat_MakePrism(::BRepFeat_MakePrism* nativeInstance)
        : Macad::Occt::BRepFeat_Form( nativeInstance )
    {}

    BRepFeat_MakePrism(::BRepFeat_MakePrism& nativeInstance)
        : Macad::Occt::BRepFeat_Form( nativeInstance )
    {}

    property ::BRepFeat_MakePrism* NativeInstance
    {
        ::BRepFeat_MakePrism* get()
        {
            return static_cast<::BRepFeat_MakePrism*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Builds a prism by projecting a
    /// wire along the face of a shape. Initializes the prism class.
    /// </summary>
    BRepFeat_MakePrism();
    /// <summary>
    /// Builds a prism by projecting a
    /// wire along the face of a shape. a face Pbase is selected in
    /// the shape Sbase to serve as the basis for
    /// the prism. The orientation of the prism will
    /// be defined by the vector Direction.
    /// Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting 0
    /// -   adding matter with Boolean fusion using the setting 1.
    /// The sketch face Skface serves to determine
    /// the type of operation. If it is inside the basis
    /// shape, a local operation such as glueing can be performed.
    /// Exceptions
    /// Standard_ConstructionError if the face
    /// does not belong to the basis or the prism shape.
    /// </summary>
    BRepFeat_MakePrism(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Dir Direction, int Fuse, bool Modify);
    /// <summary>
    /// Initializes this algorithm for building prisms along surfaces.
    /// A face Pbase is selected in the shape Sbase
    /// to serve as the basis for the prism. The
    /// orientation of the prism will be defined by the vector Direction.
    /// Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting 0
    /// -   adding matter with Boolean fusion using the setting 1.
    /// The sketch face Skface serves to determine
    /// the type of operation. If it is inside the basis
    /// shape, a local operation such as glueing can be performed.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Dir Direction, int Fuse, bool Modify);
    /// <summary>
    /// Indicates that the edge <E> will slide on the face
    /// <OnFace>. Raises ConstructionError if the  face does not belong to the
    /// basis shape, or the edge to the prismed shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
    void Perform(double Length);
    void Perform(Macad::Occt::TopoDS_Shape^ Until);
    /// <summary>
    /// Assigns one of the following semantics
    /// -   to a height Length
    /// -   to a face Until
    /// -   from a face From to a height Until.
    /// Reconstructs the feature topologically according to the semantic option chosen.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until);
    /// <summary>
    /// Realizes a semi-infinite prism, limited by the
    /// position of the prism base. All other faces extend infinitely.
    /// </summary>
    void PerformUntilEnd();
    /// <summary>
    /// Realizes a semi-infinite prism, limited by the face Funtil.
    /// </summary>
    void PerformFromEnd(Macad::Occt::TopoDS_Shape^ FUntil);
    /// <summary>
    /// Builds an infinite prism. The infinite descendants will not be kept in the result.
    /// </summary>
    void PerformThruAll();
    /// <summary>
    /// Assigns both a limiting shape, Until from
    /// TopoDS_Shape, and a height, Length at which to stop generation of the prism feature.
    /// </summary>
    void PerformUntilHeight(Macad::Occt::TopoDS_Shape^ Until, double Length);
    /* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
    /// <summary>
    /// Generates a curve along the center of mass of the primitive.
    /// </summary>
    Macad::Occt::Geom_Curve^ BarycCurve();
}; // class BRepFeat_MakePrism

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeRevol
//---------------------------------------------------------------------
/// <summary>
/// Describes functions to build revolved shells from basis shapes.
/// </summary>
public ref class BRepFeat_MakeRevol sealed
    : public Macad::Occt::BRepFeat_Form
{

#ifdef Include_BRepFeat_MakeRevol_h
public:
    Include_BRepFeat_MakeRevol_h
#endif

public:
    BRepFeat_MakeRevol(::BRepFeat_MakeRevol* nativeInstance)
        : Macad::Occt::BRepFeat_Form( nativeInstance )
    {}

    BRepFeat_MakeRevol(::BRepFeat_MakeRevol& nativeInstance)
        : Macad::Occt::BRepFeat_Form( nativeInstance )
    {}

    property ::BRepFeat_MakeRevol* NativeInstance
    {
        ::BRepFeat_MakeRevol* get()
        {
            return static_cast<::BRepFeat_MakeRevol*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// initializes the revolved shell class.
    /// </summary>
    BRepFeat_MakeRevol();
    /// <summary>
    /// a face Pbase is selected in the
    /// shape Sbase to serve as the basis for the
    /// revolved shell. The revolution will be defined
    /// by the axis Axis and Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting 0
    /// -   adding matter with Boolean fusion using the setting 1.
    /// The sketch face Skface serves to determine
    /// the type of operation. If it is inside the basis
    /// shape, a local operation such as glueing can be performed.
    /// </summary>
    BRepFeat_MakeRevol(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Ax1 Axis, int Fuse, bool Modify);
    void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Shape^ Pbase, Macad::Occt::TopoDS_Face^ Skface, Macad::Occt::Ax1 Axis, int Fuse, bool Modify);
    /// <summary>
    /// Indicates that the edge <E> will slide on the face
    /// <OnFace>. Raises ConstructionError if the  face does not belong to the
    /// basis shape, or the edge to the prismed shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
    void Perform(double Angle);
    void Perform(Macad::Occt::TopoDS_Shape^ Until);
    /// <summary>
    /// Reconstructs the feature topologically.
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Shape^ From, Macad::Occt::TopoDS_Shape^ Until);
    /// <summary>
    /// Builds an infinite shell. The infinite descendants
    /// will not be kept in the result.
    /// </summary>
    void PerformThruAll();
    /// <summary>
    /// Assigns both a limiting shape, Until from
    /// TopoDS_Shape, and an angle, Angle at
    /// which to stop generation of the revolved shell feature.
    /// </summary>
    void PerformUntilAngle(Macad::Occt::TopoDS_Shape^ Until, double Angle);
    /* Method skipped due to unknown mapping: void Curves(TColGeom_SequenceOfCurve S, ) */
    Macad::Occt::Geom_Curve^ BarycCurve();
}; // class BRepFeat_MakeRevol

//---------------------------------------------------------------------
//  Class  BRepFeat_MakeRevolutionForm
//---------------------------------------------------------------------
/// <summary>
/// MakeRevolutionForm Generates a surface of
/// revolution in the feature as it slides along a
/// revolved face in the basis shape.
/// The semantics of mechanical features is built
/// around giving thickness to a contour. This
/// thickness can either be unilateral - on one side
/// of the contour - or bilateral - on both sides. As
/// in the semantics of form features, the thickness
/// is defined by construction of shapes in specific contexts.
/// The development contexts differ, however,in
/// case of mechanical features. Here they include extrusion:
/// -   to a limiting face of the basis shape
/// -   to or from a limiting plane
/// -   to a height.
/// </summary>
public ref class BRepFeat_MakeRevolutionForm sealed
    : public Macad::Occt::BRepFeat_RibSlot
{

#ifdef Include_BRepFeat_MakeRevolutionForm_h
public:
    Include_BRepFeat_MakeRevolutionForm_h
#endif

public:
    BRepFeat_MakeRevolutionForm(::BRepFeat_MakeRevolutionForm* nativeInstance)
        : Macad::Occt::BRepFeat_RibSlot( nativeInstance )
    {}

    BRepFeat_MakeRevolutionForm(::BRepFeat_MakeRevolutionForm& nativeInstance)
        : Macad::Occt::BRepFeat_RibSlot( nativeInstance )
    {}

    property ::BRepFeat_MakeRevolutionForm* NativeInstance
    {
        ::BRepFeat_MakeRevolutionForm* get()
        {
            return static_cast<::BRepFeat_MakeRevolutionForm*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// initializes the linear form class.
    /// </summary>
    BRepFeat_MakeRevolutionForm();
    /// <summary>
    /// a contour W, a shape Sbase and a plane P are initialized to serve as
    /// the basic elements in the construction of the rib or groove. The axis Axis of the
    /// revolved surface in the basis shape defines the feature's axis of revolution.
    /// Height1 and Height2 may be used as limits to the construction of the feature.
    /// Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting 0 in case of the groove
    /// -   adding matter with Boolean fusion using the setting 1 in case of the rib.
    /// </summary>
    BRepFeat_MakeRevolutionForm(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Ax1 Axis, double Height1, double Height2, int Fuse, bool% Sliding);
    /// <summary>
    /// Initializes this construction algorithm
    /// A contour W, a shape Sbase and a plane P are initialized to serve as the basic elements
    /// in the construction of the rib or groove. The axis Axis of the revolved surface in the basis
    /// shape defines the feature's axis of revolution. Height1 and Height2 may be
    /// used as limits to the construction of the feature.
    /// Fuse offers a choice between:
    /// -   removing matter with a Boolean cut using the setting 0 in case of the groove
    /// -   adding matter with Boolean fusion using the setting 1 in case of the rib.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ Sbase, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Ax1 Axis, double Height1, double Height2, int Fuse, bool% Sliding);
    /// <summary>
    /// Indicates that the edge <E> will slide on the face
    /// <OnFace>. Raises ConstructionError  if the  face does not belong to the
    /// basis shape, or the edge to the prismed shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ OnFace);
    /// <summary>
    /// Performs a prism from the wire to the plane
    /// along the basis shape S. Reconstructs the feature topologically.
    /// </summary>
    void Perform();
    bool Propagate(Macad::Occt::TopTools_ListOfShape^ L, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt FPoint, Macad::Occt::Pnt LPoint, bool% falseside);
}; // class BRepFeat_MakeRevolutionForm

//---------------------------------------------------------------------
//  Class  BRepFeat_SplitShape
//---------------------------------------------------------------------
/// <summary>
/// One of the most significant aspects of BRepFeat functionality is the use of local
/// operations as opposed to global ones. In a global operation, you would first construct a
/// form of the type you wanted in your final feature, and then remove matter so that it could
/// fit into your initial basis object. In a local operation, however, you specify the domain of
/// the feature construction with aspects of the shape on which the feature is being created.
/// These semantics are expressed in terms of a member shape of the basis shape from which -
/// or up to which - matter will be added or removed. As a result, local operations make
/// calculations simpler and faster than global operations.
/// In BRepFeat, the semantics of local operations define features constructed from a contour or a
/// part of the basis shape referred to as the tool. In a SplitShape object, wires or edges of a
/// face in the basis shape to be used as a part of the feature are cut out and projected to a plane
/// outside or inside the basis shape. By rebuilding the initial shape incorporating the edges and
/// the faces of the tool, protrusion or depression features can be constructed.
/// </summary>
public ref class BRepFeat_SplitShape sealed
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepFeat_SplitShape_h
public:
    Include_BRepFeat_SplitShape_h
#endif

public:
    BRepFeat_SplitShape(::BRepFeat_SplitShape* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepFeat_SplitShape(::BRepFeat_SplitShape& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepFeat_SplitShape* NativeInstance
    {
        ::BRepFeat_SplitShape* get()
        {
            return static_cast<::BRepFeat_SplitShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BRepFeat_SplitShape();
    /// <summary>
    /// Creates the process  with the shape <S>.
    /// </summary>
    BRepFeat_SplitShape(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Add splitting edges or wires for whole initial shape
    /// without additional specification edge->face, edge->edge
    /// This method puts edge on the corresponding faces from initial shape
    /// </summary>
    bool Add(Macad::Occt::TopTools_SequenceOfShape^ theEdges);
    /// <summary>
    /// Initializes the process on the shape <S>.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Set the flag of check internal intersections
    /// default value is True (to check)
    /// </summary>
    void SetCheckInterior(bool ToCheckInterior);
    /// <summary>
    /// Adds the wire <W> on the face <F>.
    /// Raises NoSuchObject  if <F> does not belong to the original shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Adds the edge <E> on the face <F>.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Adds the compound <Comp> on the face <F>. The
    /// compound <Comp> must consist of edges lying on the
    /// face <F>. If edges are geometrically connected,
    /// they must be connected topologically, i.e. they
    /// must share common vertices.
    /// 
    /// Raises NoSuchObject  if <F> does not belong to the original shape.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Compound^ Comp, Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Adds the edge <E> on the existing edge <EOn>.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Edge^ EOn);
    /// <summary>
    /// Returns  the faces   which  are the  left of   the
    /// projected wires.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ DirectLeft();
    /// <summary>
    /// Returns the faces of the "left" part on the shape.
    /// (It  is build   from  DirectLeft,  with  the faces
    /// connected to this set, and so on...).
    /// Raises NotDone if IsDone returns <Standard_False>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Left();
    /// <summary>
    /// Returns the faces of the "right" part on the shape.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Right();
    /// <summary>
    /// Builds the cut and the resulting faces and edges as well.
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the cut and the resulting faces and edges as well.
    /// </summary>
    void Build();
    /// <summary>
    /// Returns true if the shape has been deleted.
    /// </summary>
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the list of generated Faces.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ F);
}; // class BRepFeat_SplitShape

}; // namespace Occt
}; // namespace Macad
