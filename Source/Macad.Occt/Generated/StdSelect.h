// Generated wrapper code for package StdSelect

#pragma once

#include "PrsMgr.h"
#include "SelectMgr.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  StdSelect_TypeOfEdge
//---------------------------------------------------------------------
/// <summary>
/// Provides values for different types of edges. These
/// values are used to filter edges in frameworks
/// inheriting StdSelect_EdgeFilter.
/// </summary>
public enum class StdSelect_TypeOfEdge
{
    AnyEdge = 0,
    Line = 1,
    Circle = 2
}; // enum  class StdSelect_TypeOfEdge

//---------------------------------------------------------------------
//  Enum  StdSelect_TypeOfFace
//---------------------------------------------------------------------
/// <summary>
/// Provides values for different types of faces. These
/// values are used to filter faces in frameworks inheriting
/// StdSelect_FaceFilter.
/// </summary>
public enum class StdSelect_TypeOfFace
{
    AnyFace = 0,
    Plane = 1,
    Cylinder = 2,
    Sphere = 3,
    Torus = 4,
    Revol = 5,
    Cone = 6
}; // enum  class StdSelect_TypeOfFace

//---------------------------------------------------------------------
//  Enum  StdSelect_TypeOfSelectionImage
//---------------------------------------------------------------------
/// <summary>
/// Type of output selection image.
/// </summary>
public enum class StdSelect_TypeOfSelectionImage
{
    NormalizedDepth = 0,
    NormalizedDepthInverted = 1,
    UnnormalizedDepth = 2,
    ColoredDetectedObject = 3,
    ColoredEntity = 4,
    ColoredEntityType = 5,
    ColoredOwner = 6,
    ColoredSelectionMode = 7,
    SurfaceNormal = 8
}; // enum  class StdSelect_TypeOfSelectionImage

//---------------------------------------------------------------------
//  Class  StdSelect
//---------------------------------------------------------------------
/// <summary>
/// The StdSelect package provides the following services
/// -   the definition of selection modes for topological shapes
/// -   the definition of several concrete filtertandard
/// Selection2d.ap classes
/// -   2D and 3D viewer selectors.
/// Note that each new Interactive Object must have all
/// its selection modes defined.
/// Standard Classes is useful to build
/// 3D Selectable Objects, and to process
/// 3D Selections:
/// 
/// - Implementation of View Selector for dynamic selection
/// in Views from V3d.
/// 
/// - Implementation of Tool class to decompose 3D BRep Objects
/// into sensitive Primitives for every desired mode of selection
/// (selection of vertex,edges,wires,faces,...)
/// 
/// -  Implementation of dedicated Sensitives Entities:
/// Text for 2D Views (linked to Specific 2D projectors.)
/// </summary>
public ref class StdSelect sealed
    : public Macad::Occt::BaseClass<::StdSelect>
{

#ifdef Include_StdSelect_h
public:
    Include_StdSelect_h
#endif

public:
    StdSelect(::StdSelect* nativeInstance)
        : Macad::Occt::BaseClass<::StdSelect>( nativeInstance, true )
    {}

    StdSelect(::StdSelect& nativeInstance)
        : Macad::Occt::BaseClass<::StdSelect>( &nativeInstance, false )
    {}

    property ::StdSelect* NativeInstance
    {
        ::StdSelect* get()
        {
            return static_cast<::StdSelect*>(_NativeInstance);
        }
    }

public:
    StdSelect();
    /// <summary>
    /// puts The same drawer in every BRepOwner Of SensitivePrimitive
    /// Used Only for hilight Of BRepOwner...
    /// </summary>
    static void SetDrawerForBRepOwner(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::Prs3d_Drawer^ aDrawer);
}; // class StdSelect

//---------------------------------------------------------------------
//  Class  StdSelect_Shape
//---------------------------------------------------------------------
/// <summary>
/// Presentable shape only for purpose of display for BRepOwner...
/// </summary>
public ref class StdSelect_Shape sealed
    : public Macad::Occt::PrsMgr_PresentableObject
{

#ifdef Include_StdSelect_Shape_h
public:
    Include_StdSelect_Shape_h
#endif

public:
    StdSelect_Shape(::StdSelect_Shape* nativeInstance)
        : Macad::Occt::PrsMgr_PresentableObject( nativeInstance )
    {}

    StdSelect_Shape(::StdSelect_Shape& nativeInstance)
        : Macad::Occt::PrsMgr_PresentableObject( nativeInstance )
    {}

    property ::StdSelect_Shape* NativeInstance
    {
        ::StdSelect_Shape* get()
        {
            return static_cast<::StdSelect_Shape*>(_NativeInstance);
        }
    }

public:
    StdSelect_Shape(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer);
    StdSelect_Shape(Macad::Occt::TopoDS_Shape^ theShape);
    void Compute(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Graphic3d_Structure^ thePrs, int theMode);
    Macad::Occt::TopoDS_Shape^ Shape();
    void Shape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::StdSelect_Shape^ CreateDowncasted(::StdSelect_Shape* instance);
}; // class StdSelect_Shape

//---------------------------------------------------------------------
//  Class  StdSelect_BRepOwner
//---------------------------------------------------------------------
/// <summary>
/// Defines Specific Owners for Sensitive Primitives
/// (Sensitive Segments,Circles...).
/// Used in Dynamic Selection Mechanism.
/// A BRepOwner has an Owner (the shape it represents)
/// and Users (One or More Transient entities).
/// The highlight-unhighlight methods are empty and
/// must be redefined by each User.
/// </summary>
public ref class StdSelect_BRepOwner sealed
    : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_StdSelect_BRepOwner_h
public:
    Include_StdSelect_BRepOwner_h
#endif

public:
    StdSelect_BRepOwner(::StdSelect_BRepOwner* nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    StdSelect_BRepOwner(::StdSelect_BRepOwner& nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    property ::StdSelect_BRepOwner* NativeInstance
    {
        ::StdSelect_BRepOwner* get()
        {
            return static_cast<::StdSelect_BRepOwner*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an owner specification framework defined
    /// by the priority aPriority.
    /// </summary>
    StdSelect_BRepOwner(int aPriority);
    /// <summary>
    /// Constructs an owner specification framework defined
    /// by the shape aShape and the priority aPriority.
    /// aShape and aPriority are stored in this framework. If
    /// more than one owner are detected during dynamic
    /// selection, the one with the highest priority is the one stored.
    /// </summary>
    StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, int aPriority, bool ComesFromDecomposition);
    /// <summary>
    /// Constructs an owner specification framework defined
    /// by the shape aShape and the priority aPriority.
    /// aShape and aPriority are stored in this framework. If
    /// more than one owner are detected during dynamic
    /// selection, the one with the highest priority is the one stored.
    /// </summary>
    StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, int aPriority);
    /// <summary>
    /// Constructs an owner specification framework defined
    /// by the shape aShape and the priority aPriority.
    /// aShape and aPriority are stored in this framework. If
    /// more than one owner are detected during dynamic
    /// selection, the one with the highest priority is the one stored.
    /// </summary>
    StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape);
    /// <summary>
    /// Constructs an owner specification framework defined
    /// by the shape aShape, the selectable object theOrigin
    /// and the priority aPriority.
    /// aShape, theOrigin and aPriority are stored in this
    /// framework. If more than one owner are detected
    /// during dynamic selection, the one with the highest
    /// priority is the one stored.
    /// </summary>
    StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin, int aPriority, bool FromDecomposition);
    /// <summary>
    /// Constructs an owner specification framework defined
    /// by the shape aShape, the selectable object theOrigin
    /// and the priority aPriority.
    /// aShape, theOrigin and aPriority are stored in this
    /// framework. If more than one owner are detected
    /// during dynamic selection, the one with the highest
    /// priority is the one stored.
    /// </summary>
    StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin, int aPriority);
    /// <summary>
    /// Constructs an owner specification framework defined
    /// by the shape aShape, the selectable object theOrigin
    /// and the priority aPriority.
    /// aShape, theOrigin and aPriority are stored in this
    /// framework. If more than one owner are detected
    /// during dynamic selection, the one with the highest
    /// priority is the one stored.
    /// </summary>
    StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin);
    /// <summary>
    /// returns False if no shape was set
    /// </summary>
    bool HasShape();
    /// <summary>
    /// Returns the shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Returns true if this framework has a highlight mode defined for it.
    /// </summary>
    bool HasHilightMode();
    /// <summary>
    /// Sets the highlight mode for this framework.
    /// This defines the type of display used to highlight the
    /// owner of the shape when it is detected by the selector.
    /// The default type of display is wireframe, defined by the index 0.
    /// </summary>
    void SetHilightMode(int theMode);
    /// <summary>
    /// Resets the higlight mode for this framework.
    /// This defines the type of display used to highlight the
    /// owner of the shape when it is detected by the selector.
    /// The default type of display is wireframe, defined by the index 0.
    /// </summary>
    void ResetHilightMode();
    /// <summary>
    /// Returns the highlight mode for this framework.
    /// This defines the type of display used to highlight the
    /// owner of the shape when it is detected by the selector.
    /// The default type of display is wireframe, defined by the index 0.
    /// </summary>
    int HilightMode();
    /// <summary>
    /// Returns true if an object with the selection mode
    /// aMode is highlighted in the presentation manager aPM.
    /// </summary>
    bool IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ aPM, int aMode);
    /// <summary>
    /// Returns true if an object with the selection mode
    /// aMode is highlighted in the presentation manager aPM.
    /// </summary>
    bool IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ aPM);
    void HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode);
    /// <summary>
    /// Removes highlighting from the type of shape
    /// identified the selection mode aMode in the presentation manager aPM.
    /// </summary>
    void Unhilight(Macad::Occt::PrsMgr_PresentationManager^ aPM, int aMode);
    /// <summary>
    /// Removes highlighting from the type of shape
    /// identified the selection mode aMode in the presentation manager aPM.
    /// </summary>
    void Unhilight(Macad::Occt::PrsMgr_PresentationManager^ aPM);
    /// <summary>
    /// Clears the presentation manager object aPM of all
    /// shapes with the selection mode aMode.
    /// </summary>
    void Clear(Macad::Occt::PrsMgr_PresentationManager^ aPM, int aMode);
    /// <summary>
    /// Clears the presentation manager object aPM of all
    /// shapes with the selection mode aMode.
    /// </summary>
    void Clear(Macad::Occt::PrsMgr_PresentationManager^ aPM);
    void SetLocation(Macad::Occt::TopLoc_Location^ aLoc);
    /// <summary>
    /// Implements immediate application of location transformation of parent object to dynamic
    /// highlight structure
    /// </summary>
    void UpdateHighlightTrsf(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::PrsMgr_PresentationManager^ theManager, int theDispMode);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::StdSelect_BRepOwner^ CreateDowncasted(::StdSelect_BRepOwner* instance);
}; // class StdSelect_BRepOwner

//---------------------------------------------------------------------
//  Class  StdSelect_BRepSelectionTool
//---------------------------------------------------------------------
/// <summary>
/// Tool to create specific selections (sets of primitives)
/// for Shapes from Topology.
/// These Selections may be used  in dynamic selection
/// Mechanism
/// Given a Shape and a mode of selection
/// (selection of vertices,
/// edges,faces ...) , This Tool Computes corresponding sensitive primitives,
/// puts them in an entity called Selection (see package SelectMgr) and returns it.
/// 
/// A Priority for the decomposed pickable objects can be given ;
/// by default There is A Preset Hierarchy:
/// Vertex             priority : 5
/// Edge               priority : 4
/// Wire               priority : 3
/// Face               priority : 2
/// Shell,solid,shape  priority : 1
/// the default priority in the following methods has no sense - it's only taken in account
/// when the user gives a value between 0 and 10.
/// IMPORTANT : This decomposition creates BRepEntityOwner instances (from StdSelect).
/// which are stored in the Sensitive Entities coming from The Decomposition.
/// 
/// the result of picking in a ViewerSelector return EntityOwner from SelectMgr;
/// to know what kind of object was picked :
/// 
/// ENTITY_OWNER -> Selectable() gives the selectableobject which
/// was decomposed into pickable elements.
/// Handle(StdSelect_BRepOwner)::DownCast(ENTITY_OWNER) -> Shape()
/// gives the real picked shape (edge,vertex,shape...)
/// </summary>
public ref class StdSelect_BRepSelectionTool sealed
    : public Macad::Occt::BaseClass<::StdSelect_BRepSelectionTool>
{

#ifdef Include_StdSelect_BRepSelectionTool_h
public:
    Include_StdSelect_BRepSelectionTool_h
#endif

public:
    StdSelect_BRepSelectionTool(::StdSelect_BRepSelectionTool* nativeInstance)
        : Macad::Occt::BaseClass<::StdSelect_BRepSelectionTool>( nativeInstance, true )
    {}

    StdSelect_BRepSelectionTool(::StdSelect_BRepSelectionTool& nativeInstance)
        : Macad::Occt::BaseClass<::StdSelect_BRepSelectionTool>( &nativeInstance, false )
    {}

    property ::StdSelect_BRepSelectionTool* NativeInstance
    {
        ::StdSelect_BRepSelectionTool* get()
        {
            return static_cast<::StdSelect_BRepSelectionTool*>(_NativeInstance);
        }
    }

public:
    StdSelect_BRepSelectionTool();
    /// <summary>
    /// Decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>.
    /// BrepOwners are created to store the identity of the picked shapes
    /// during the selection process.
    /// In those BRepOwners is also stored the original shape.
    /// But One can't get the selectable object which was decomposed to give
    /// the sensitive entities.
    /// maximal parameter is used for infinite objects, to limit the sensitive Domain....
    /// If AutoTriangulation = True, a Triangulation will be
    /// computed for faces which have no existing one.
    /// if AutoTriangulation = False the old algorithm will be
    /// called to compute sensitive entities on faces.
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter);
    /// <summary>
    /// Decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>.
    /// BrepOwners are created to store the identity of the picked shapes
    /// during the selection process.
    /// In those BRepOwners is also stored the original shape.
    /// But One can't get the selectable object which was decomposed to give
    /// the sensitive entities.
    /// maximal parameter is used for infinite objects, to limit the sensitive Domain....
    /// If AutoTriangulation = True, a Triangulation will be
    /// computed for faces which have no existing one.
    /// if AutoTriangulation = False the old algorithm will be
    /// called to compute sensitive entities on faces.
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge);
    /// <summary>
    /// Decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>.
    /// BrepOwners are created to store the identity of the picked shapes
    /// during the selection process.
    /// In those BRepOwners is also stored the original shape.
    /// But One can't get the selectable object which was decomposed to give
    /// the sensitive entities.
    /// maximal parameter is used for infinite objects, to limit the sensitive Domain....
    /// If AutoTriangulation = True, a Triangulation will be
    /// computed for faces which have no existing one.
    /// if AutoTriangulation = False the old algorithm will be
    /// called to compute sensitive entities on faces.
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority);
    /// <summary>
    /// Decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>.
    /// BrepOwners are created to store the identity of the picked shapes
    /// during the selection process.
    /// In those BRepOwners is also stored the original shape.
    /// But One can't get the selectable object which was decomposed to give
    /// the sensitive entities.
    /// maximal parameter is used for infinite objects, to limit the sensitive Domain....
    /// If AutoTriangulation = True, a Triangulation will be
    /// computed for faces which have no existing one.
    /// if AutoTriangulation = False the old algorithm will be
    /// called to compute sensitive entities on faces.
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation);
    /// <summary>
    /// Decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>.
    /// BrepOwners are created to store the identity of the picked shapes
    /// during the selection process.
    /// In those BRepOwners is also stored the original shape.
    /// But One can't get the selectable object which was decomposed to give
    /// the sensitive entities.
    /// maximal parameter is used for infinite objects, to limit the sensitive Domain....
    /// If AutoTriangulation = True, a Triangulation will be
    /// computed for faces which have no existing one.
    /// if AutoTriangulation = False the old algorithm will be
    /// called to compute sensitive entities on faces.
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle);
    /// <summary>
    /// Same  functionalities  ; the  only
    /// difference is that  the selectable object from which the
    /// selection comes is stored in each Sensitive EntityOwner;
    /// decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>
    /// The Major difference is that the known users are first inserted in the
    /// BRepOwners. the original shape is the last user...
    /// (see EntityOwner from SelectBasics and BrepOwner)...
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter);
    /// <summary>
    /// Same  functionalities  ; the  only
    /// difference is that  the selectable object from which the
    /// selection comes is stored in each Sensitive EntityOwner;
    /// decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>
    /// The Major difference is that the known users are first inserted in the
    /// BRepOwners. the original shape is the last user...
    /// (see EntityOwner from SelectBasics and BrepOwner)...
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge);
    /// <summary>
    /// Same  functionalities  ; the  only
    /// difference is that  the selectable object from which the
    /// selection comes is stored in each Sensitive EntityOwner;
    /// decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>
    /// The Major difference is that the known users are first inserted in the
    /// BRepOwners. the original shape is the last user...
    /// (see EntityOwner from SelectBasics and BrepOwner)...
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority);
    /// <summary>
    /// Same  functionalities  ; the  only
    /// difference is that  the selectable object from which the
    /// selection comes is stored in each Sensitive EntityOwner;
    /// decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>
    /// The Major difference is that the known users are first inserted in the
    /// BRepOwners. the original shape is the last user...
    /// (see EntityOwner from SelectBasics and BrepOwner)...
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation);
    /// <summary>
    /// Same  functionalities  ; the  only
    /// difference is that  the selectable object from which the
    /// selection comes is stored in each Sensitive EntityOwner;
    /// decomposition of <aShape> into sensitive entities following
    /// a mode of decomposition <aType>. These entities are stored in <aSelection>
    /// The Major difference is that the known users are first inserted in the
    /// BRepOwners. the original shape is the last user...
    /// (see EntityOwner from SelectBasics and BrepOwner)...
    /// </summary>
    static void Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle);
    /// <summary>
    /// Returns the standard priority of the shape aShap having the type aType.
    /// This priority is passed to a StdSelect_BRepOwner object.
    /// You can use the function Load to modify the
    /// selection priority of an owner to make one entity
    /// more selectable than another one.
    /// </summary>
    static int GetStandardPriority(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theType);
    /// <summary>
    /// Computes the sensitive primitives, stores them in the SelectMgr_Selection object, and returns
    /// this object.
    /// </summary>
    /// <param name="in]">
    /// theShape        shape to compute sensitive entities
    /// </param>
    /// <param name="in]">
    /// theOwner        selectable owner object
    /// </param>
    /// <param name="in]">
    /// theSelection    selection to append new sensitive entities
    /// </param>
    /// <param name="in]">
    /// theDeflection   linear deflection
    /// </param>
    /// <param name="in]">
    /// theDeflAngle    angular deflection
    /// </param>
    /// <param name="in]">
    /// theNbPOnEdge    sensitivity parameters for edges and wires
    /// </param>
    /// <param name="in]">
    /// theMaxiParam    sensitivity parameters for infinite objects (the default value is
    /// 500)
    /// </param>
    /// <param name="in]">
    /// theAutoTriang   flag to compute triangulation for the faces which have none
    /// </param>
    static void ComputeSensitive(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam, bool theAutoTriang);
    /// <summary>
    /// Computes the sensitive primitives, stores them in the SelectMgr_Selection object, and returns
    /// this object.
    /// </summary>
    /// <param name="in]">
    /// theShape        shape to compute sensitive entities
    /// </param>
    /// <param name="in]">
    /// theOwner        selectable owner object
    /// </param>
    /// <param name="in]">
    /// theSelection    selection to append new sensitive entities
    /// </param>
    /// <param name="in]">
    /// theDeflection   linear deflection
    /// </param>
    /// <param name="in]">
    /// theDeflAngle    angular deflection
    /// </param>
    /// <param name="in]">
    /// theNbPOnEdge    sensitivity parameters for edges and wires
    /// </param>
    /// <param name="in]">
    /// theMaxiParam    sensitivity parameters for infinite objects (the default value is
    /// 500)
    /// </param>
    /// <param name="in]">
    /// theAutoTriang   flag to compute triangulation for the faces which have none
    /// </param>
    static void ComputeSensitive(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam);
    /* Method skipped due to unknown mapping: bool GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, bool theAutoTriang, int theNbPOnEdge, double theMaxiParam, bool theInteriorFlag, ) */
    /* Method skipped due to unknown mapping: bool GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, bool theAutoTriang, int theNbPOnEdge, double theMaxiParam, bool theInteriorFlag, ) */
    /* Method skipped due to unknown mapping: bool GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, bool theAutoTriang, int theNbPOnEdge, double theMaxiParam, bool theInteriorFlag, ) */
    /* Method skipped due to unknown mapping: bool GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, bool theAutoTriang, int theNbPOnEdge, double theMaxiParam, bool theInteriorFlag, ) */
    /* Method skipped due to unknown mapping: bool GetSensitiveForFace(TopoDS_Face theFace, SelectMgr_EntityOwner theOwner, Select3D_EntitySequence theOutList, bool theAutoTriang, int theNbPOnEdge, double theMaxiParam, bool theInteriorFlag, ) */
    /// <summary>
    /// Creates a sensitive cylinder.
    /// </summary>
    /// <param name="in]">
    /// theSubfacesMap map of cylinder faces
    /// </param>
    /// <param name="in]">
    /// theOwner       selectable owner object
    /// </param>
    /// <param name="in]">
    /// theSelection   selection to append new sensitive entities
    /// </param>
    static bool GetSensitiveForCylinder(Macad::Occt::TopTools_IndexedMapOfShape^ theSubfacesMap, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection);
    /* Method skipped due to unknown mapping: void GetEdgeSensitive(TopoDS_Shape theShape, SelectMgr_EntityOwner theOwner, SelectMgr_Selection theSelection, double theDeflection, double theDeviationAngle, int theNbPOnEdge, double theMaxiParam, Select3D_SensitiveEntity theSensitive, ) */
    /// <summary>
    /// Traverses the selection given and pre-builds BVH trees for heavyweight
    /// sensitive entities containing more than BVH_PRIMITIVE_LIMIT (defined in .cxx file)
    /// sub-elements.
    /// </summary>
    static void PreBuildBVH(Macad::Occt::SelectMgr_Selection^ theSelection);
}; // class StdSelect_BRepSelectionTool

//---------------------------------------------------------------------
//  Class  StdSelect_EdgeFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define a filter to select a specific type of edge.
/// The types available include:
/// -   any edge
/// -   a linear edge
/// -   a circular edge.
/// </summary>
public ref class StdSelect_EdgeFilter sealed
    : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_StdSelect_EdgeFilter_h
public:
    Include_StdSelect_EdgeFilter_h
#endif

public:
    StdSelect_EdgeFilter(::StdSelect_EdgeFilter* nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    StdSelect_EdgeFilter(::StdSelect_EdgeFilter& nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    property ::StdSelect_EdgeFilter* NativeInstance
    {
        ::StdSelect_EdgeFilter* get()
        {
            return static_cast<::StdSelect_EdgeFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an edge filter object defined by the type of edge Edge.
    /// </summary>
    StdSelect_EdgeFilter(Macad::Occt::StdSelect_TypeOfEdge Edge);
    /// <summary>
    /// Sets the type of edge aNewType. aNewType is to be highlighted in selection.
    /// </summary>
    void SetType(Macad::Occt::StdSelect_TypeOfEdge aNewType);
    /// <summary>
    /// Returns the type of edge to be highlighted in selection.
    /// </summary>
    Macad::Occt::StdSelect_TypeOfEdge Type();
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
    bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
    static Macad::Occt::StdSelect_EdgeFilter^ CreateDowncasted(::StdSelect_EdgeFilter* instance);
}; // class StdSelect_EdgeFilter

//---------------------------------------------------------------------
//  Class  StdSelect_FaceFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define a filter to select a specific type of face.
/// The types available include:
/// -   any face
/// -   a planar face
/// -   a cylindrical face
/// -   a spherical face
/// -   a toroidal face
/// -   a revol face.
/// </summary>
public ref class StdSelect_FaceFilter sealed
    : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_StdSelect_FaceFilter_h
public:
    Include_StdSelect_FaceFilter_h
#endif

public:
    StdSelect_FaceFilter(::StdSelect_FaceFilter* nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    StdSelect_FaceFilter(::StdSelect_FaceFilter& nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    property ::StdSelect_FaceFilter* NativeInstance
    {
        ::StdSelect_FaceFilter* get()
        {
            return static_cast<::StdSelect_FaceFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a face filter object defined by the type of face aTypeOfFace.
    /// </summary>
    StdSelect_FaceFilter(Macad::Occt::StdSelect_TypeOfFace aTypeOfFace);
    /// <summary>
    /// Sets the type of face aNewType. aNewType is to be highlighted in selection.
    /// </summary>
    void SetType(Macad::Occt::StdSelect_TypeOfFace aNewType);
    /// <summary>
    /// Returns the type of face to be highlighted in selection.
    /// </summary>
    Macad::Occt::StdSelect_TypeOfFace Type();
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
    bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
    static Macad::Occt::StdSelect_FaceFilter^ CreateDowncasted(::StdSelect_FaceFilter* instance);
}; // class StdSelect_FaceFilter

//---------------------------------------------------------------------
//  Class  StdSelect_ShapeTypeFilter
//---------------------------------------------------------------------
/// <summary>
/// A filter framework which allows you to define a filter for a specific shape type.
/// </summary>
public ref class StdSelect_ShapeTypeFilter sealed
    : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_StdSelect_ShapeTypeFilter_h
public:
    Include_StdSelect_ShapeTypeFilter_h
#endif

public:
    StdSelect_ShapeTypeFilter(::StdSelect_ShapeTypeFilter* nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    StdSelect_ShapeTypeFilter(::StdSelect_ShapeTypeFilter& nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    property ::StdSelect_ShapeTypeFilter* NativeInstance
    {
        ::StdSelect_ShapeTypeFilter* get()
        {
            return static_cast<::StdSelect_ShapeTypeFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a filter object defined by the shape type aType.
    /// </summary>
    StdSelect_ShapeTypeFilter(Macad::Occt::TopAbs_ShapeEnum aType);
    /// <summary>
    /// Returns the type of shape selected by the filter.
    /// </summary>
    Macad::Occt::TopAbs_ShapeEnum Type();
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
    bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode);
    static Macad::Occt::StdSelect_ShapeTypeFilter^ CreateDowncasted(::StdSelect_ShapeTypeFilter* instance);
}; // class StdSelect_ShapeTypeFilter

}; // namespace Occt
}; // namespace Macad
