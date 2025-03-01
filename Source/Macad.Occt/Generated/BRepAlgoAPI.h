// Generated wrapper code for package BRepAlgoAPI

#pragma once

#include "BRepBuilderAPI.h"
#include "BOPAlgo.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Algo
//---------------------------------------------------------------------
/// <summary>
/// Provides the root interface for the API algorithms
/// </summary>
public ref class BRepAlgoAPI_Algo
    : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepAlgoAPI_Algo_h
public:
    Include_BRepAlgoAPI_Algo_h
#endif

protected:
    BRepAlgoAPI_Algo(InitMode init)
        : Macad::Occt::BRepBuilderAPI_MakeShape( init )
    {}

public:
    BRepAlgoAPI_Algo(::BRepAlgoAPI_Algo* nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    BRepAlgoAPI_Algo(::BRepAlgoAPI_Algo& nativeInstance)
        : Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
    {}

    property ::BRepAlgoAPI_Algo* NativeInstance
    {
        ::BRepAlgoAPI_Algo* get()
        {
            return static_cast<::BRepAlgoAPI_Algo*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns a shape built by the shape construction algorithm.
    /// Does not check if the shape is built.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
}; // class BRepAlgoAPI_Algo

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BuilderAlgo
//---------------------------------------------------------------------
/// <summary>
/// The class contains API level of the General Fuse algorithm.<br>
/// 
/// Additionally to the options defined in the base class, the algorithm has
/// the following options:<br>
/// - *Safe processing mode* - allows to avoid modification of the input
/// shapes during the operation (by default it is off);
/// - *Gluing options* - allows to speed up the calculation of the intersections
/// on the special cases, in which some sub-shapes are coinciding.
/// - *Disabling the check for inverted solids* - Disables/Enables the check of the input solids
/// for inverted status (holes in the space). The default value is TRUE,
/// i.e. the check is performed. Setting this flag to FALSE for inverted
/// solids, most likely will lead to incorrect results.
/// - *Disabling history collection* - allows disabling the collection of the history
/// of shapes modifications during the operation.
/// 
/// It returns the following Error statuses:<br>
/// - 0 - in case of success;<br>
/// - *BOPAlgo_AlertTooFewArguments* - in case there are no enough arguments to perform the
/// operation;<br>
/// - *BOPAlgo_AlertIntersectionFailed* - in case the intersection of the arguments has failed;<br>
/// - *BOPAlgo_AlertBuilderFailed* - in case building of the result shape has failed.<br>
/// 
/// Warnings statuses from underlying DS Filler and Builder algorithms
/// are collected in the report.
/// 
/// The class provides possibility to simplify the resulting shape by unification
/// of the tangential edges and faces. It is performed by the method *SimplifyResult*.
/// See description of this method for more details.
/// 
/// </summary>
public ref class BRepAlgoAPI_BuilderAlgo
    : public Macad::Occt::BRepAlgoAPI_Algo
{

#ifdef Include_BRepAlgoAPI_BuilderAlgo_h
public:
    Include_BRepAlgoAPI_BuilderAlgo_h
#endif

protected:
    BRepAlgoAPI_BuilderAlgo(InitMode init)
        : Macad::Occt::BRepAlgoAPI_Algo( init )
    {}

public:
    BRepAlgoAPI_BuilderAlgo(::BRepAlgoAPI_BuilderAlgo* nativeInstance)
        : Macad::Occt::BRepAlgoAPI_Algo( nativeInstance )
    {}

    BRepAlgoAPI_BuilderAlgo(::BRepAlgoAPI_BuilderAlgo& nativeInstance)
        : Macad::Occt::BRepAlgoAPI_Algo( nativeInstance )
    {}

    property ::BRepAlgoAPI_BuilderAlgo* NativeInstance
    {
        ::BRepAlgoAPI_BuilderAlgo* get()
        {
            return static_cast<::BRepAlgoAPI_BuilderAlgo*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name Constructors
    /// Empty constructor
    BRepAlgoAPI_BuilderAlgo();
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_BuilderAlgo(BOPAlgo_PaveFiller thePF, ) */
    /// <summary>
    /// </summary>
    /// @name Setting/Getting data for the algorithm
    /// Sets the arguments
    void SetArguments(Macad::Occt::TopTools_ListOfShape^ theLS);
    /// <summary>
    /// Gets the arguments
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Arguments();
    /// <summary>
    /// </summary>
    /// @name Setting options
    /// Sets the flag that defines the mode of treatment.
    /// In non-destructive mode the argument shapes are not modified. Instead
    /// a copy of a sub-shape is created in the result if it is needed to be updated.
    void SetNonDestructive(bool theFlag);
    /// <summary>
    /// Returns the flag that defines the mode of treatment.
    /// In non-destructive mode the argument shapes are not modified. Instead
    /// a copy of a sub-shape is created in the result if it is needed to be updated.
    /// </summary>
    bool NonDestructive();
    /// <summary>
    /// Sets the glue option for the algorithm,
    /// which allows increasing performance of the intersection
    /// of the input shapes.
    /// </summary>
    void SetGlue(Macad::Occt::BOPAlgo_GlueEnum theGlue);
    /// <summary>
    /// Returns the glue option of the algorithm
    /// </summary>
    Macad::Occt::BOPAlgo_GlueEnum Glue();
    /// <summary>
    /// Enables/Disables the check of the input solids for inverted status
    /// </summary>
    void SetCheckInverted(bool theCheck);
    /// <summary>
    /// Returns the flag defining whether the check for input solids on inverted status
    /// should be performed or not.
    /// </summary>
    bool CheckInverted();
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the algorithm
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the algorithm
    void Build();
    /// <summary>
    /// </summary>
    /// @name Result simplification
    /// Simplification of the result shape is performed by the means of
    /// *ShapeUpgrade_UnifySameDomain* algorithm. The result of the operation will
    /// be overwritten with the simplified result.
    /// 
    /// The simplification is performed without creation of the Internal shapes,
    /// i.e. shapes connections will never be broken.
    /// 
    /// Simplification is performed on the whole result shape. Thus, if the input
    /// shapes contained connected tangent edges or faces unmodified during the operation
    /// they will also be unified.
    /// 
    /// After simplification, the History of result simplification is merged into the main
    /// history of operation. So, it is taken into account when asking for Modified,
    /// Generated and Deleted shapes.
    /// 
    /// Some options of the main operation are passed into the Unifier:
    /// - Fuzzy tolerance of the operation is given to the Unifier as the linear tolerance.
    /// - Non destructive mode here controls the safe input mode in Unifier.
    /// 
    /// <param name="theUnifyEdges">
    /// Controls the edges unification. TRUE by default.
    /// </param>
    /// <param name="theUnifyFaces">
    /// Controls the faces unification. TRUE by default.
    /// </param>
    /// <param name="theAngularTol">
    /// Angular criteria for tangency of edges and faces.
    /// Precision::Angular() by default.
    /// </param>
    void SimplifyResult(bool theUnifyEdges, bool theUnifyFaces, double theAngularTol);
    /// <summary>
    /// </summary>
    /// @name Result simplification
    /// Simplification of the result shape is performed by the means of
    /// *ShapeUpgrade_UnifySameDomain* algorithm. The result of the operation will
    /// be overwritten with the simplified result.
    /// 
    /// The simplification is performed without creation of the Internal shapes,
    /// i.e. shapes connections will never be broken.
    /// 
    /// Simplification is performed on the whole result shape. Thus, if the input
    /// shapes contained connected tangent edges or faces unmodified during the operation
    /// they will also be unified.
    /// 
    /// After simplification, the History of result simplification is merged into the main
    /// history of operation. So, it is taken into account when asking for Modified,
    /// Generated and Deleted shapes.
    /// 
    /// Some options of the main operation are passed into the Unifier:
    /// - Fuzzy tolerance of the operation is given to the Unifier as the linear tolerance.
    /// - Non destructive mode here controls the safe input mode in Unifier.
    /// 
    /// <param name="theUnifyEdges">
    /// Controls the edges unification. TRUE by default.
    /// </param>
    /// <param name="theUnifyFaces">
    /// Controls the faces unification. TRUE by default.
    /// </param>
    /// <param name="theAngularTol">
    /// Angular criteria for tangency of edges and faces.
    /// Precision::Angular() by default.
    /// </param>
    void SimplifyResult(bool theUnifyEdges, bool theUnifyFaces);
    /// <summary>
    /// </summary>
    /// @name Result simplification
    /// Simplification of the result shape is performed by the means of
    /// *ShapeUpgrade_UnifySameDomain* algorithm. The result of the operation will
    /// be overwritten with the simplified result.
    /// 
    /// The simplification is performed without creation of the Internal shapes,
    /// i.e. shapes connections will never be broken.
    /// 
    /// Simplification is performed on the whole result shape. Thus, if the input
    /// shapes contained connected tangent edges or faces unmodified during the operation
    /// they will also be unified.
    /// 
    /// After simplification, the History of result simplification is merged into the main
    /// history of operation. So, it is taken into account when asking for Modified,
    /// Generated and Deleted shapes.
    /// 
    /// Some options of the main operation are passed into the Unifier:
    /// - Fuzzy tolerance of the operation is given to the Unifier as the linear tolerance.
    /// - Non destructive mode here controls the safe input mode in Unifier.
    /// 
    /// <param name="theUnifyEdges">
    /// Controls the edges unification. TRUE by default.
    /// </param>
    /// <param name="theUnifyFaces">
    /// Controls the faces unification. TRUE by default.
    /// </param>
    /// <param name="theAngularTol">
    /// Angular criteria for tangency of edges and faces.
    /// Precision::Angular() by default.
    /// </param>
    void SimplifyResult(bool theUnifyEdges);
    /// <summary>
    /// </summary>
    /// @name Result simplification
    /// Simplification of the result shape is performed by the means of
    /// *ShapeUpgrade_UnifySameDomain* algorithm. The result of the operation will
    /// be overwritten with the simplified result.
    /// 
    /// The simplification is performed without creation of the Internal shapes,
    /// i.e. shapes connections will never be broken.
    /// 
    /// Simplification is performed on the whole result shape. Thus, if the input
    /// shapes contained connected tangent edges or faces unmodified during the operation
    /// they will also be unified.
    /// 
    /// After simplification, the History of result simplification is merged into the main
    /// history of operation. So, it is taken into account when asking for Modified,
    /// Generated and Deleted shapes.
    /// 
    /// Some options of the main operation are passed into the Unifier:
    /// - Fuzzy tolerance of the operation is given to the Unifier as the linear tolerance.
    /// - Non destructive mode here controls the safe input mode in Unifier.
    /// 
    /// <param name="theUnifyEdges">
    /// Controls the edges unification. TRUE by default.
    /// </param>
    /// <param name="theUnifyFaces">
    /// Controls the faces unification. TRUE by default.
    /// </param>
    /// <param name="theAngularTol">
    /// Angular criteria for tangency of edges and faces.
    /// Precision::Angular() by default.
    /// </param>
    void SimplifyResult();
    /// <summary>
    /// </summary>
    /// @name History support
    /// Returns the shapes modified from the shape <theS>.
    /// If any, the list will contain only those splits of the
    /// given shape, contained in the result.
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Returns the list  of shapes generated from the shape <theS>.
    /// In frames of Boolean Operations algorithms only Edges and Faces
    /// could have Generated elements, as only they produce new elements
    /// during intersection:
    /// - Edges can generate new vertices;
    /// - Faces can generate new edges and vertices.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Checks if the shape <theS> has been completely removed from the result,
    /// i.e. the result does not contain the shape itself and any of its splits.
    /// Returns TRUE if the shape has been deleted.
    /// </summary>
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ aS);
    /// <summary>
    /// Returns true if any of the input shapes has been modified during operation.
    /// </summary>
    bool HasModified();
    /// <summary>
    /// Returns true if any of the input shapes has generated shapes during operation.
    /// </summary>
    bool HasGenerated();
    /// <summary>
    /// Returns true if any of the input shapes has been deleted during operation.
    /// Normally, General Fuse operation should not have Deleted elements,
    /// but all derived operation can have.
    /// </summary>
    bool HasDeleted();
    /// <summary>
    /// </summary>
    /// @name Enabling/Disabling the history collection.
    /// Allows disabling the history collection
    void SetToFillHistory(bool theHistFlag);
    /// <summary>
    /// Returns flag of history availability
    /// </summary>
    bool HasHistory();
    /// <summary>
    /// </summary>
    /// @name Getting the section edges
    /// Returns a list of section edges.
    /// The edges represent the result of intersection between arguments of operation.
    Macad::Occt::TopTools_ListOfShape^ SectionEdges();
    /* Method skipped due to unknown mapping: BOPAlgo_PaveFiller DSFiller() */
    /// <summary>
    /// Returns the Building tool
    /// </summary>
    Macad::Occt::BOPAlgo_Builder^ Builder();
    /// <summary>
    /// History tool
    /// </summary>
    Macad::Occt::BRepTools_History^ History();
}; // class BRepAlgoAPI_BuilderAlgo

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BooleanOperation
//---------------------------------------------------------------------
/// <summary>
/// The root API class for performing Boolean Operations on arbitrary shapes.
/// 
/// The arguments of the operation are divided in two groups - *Objects* and *Tools*.
/// Each group can contain any number of shapes, but each shape should be valid
/// in terms of *BRepCheck_Analyzer* and *BOPAlgo_ArgumentAnalyzer*.
/// The algorithm builds the splits of the given arguments using the intersection
/// results and combines the result of Boolean Operation of given type:
/// - *FUSE* - union of two groups of objects;
/// - *COMMON* - intersection of two groups of objects;
/// - *CUT* - subtraction of one group from the other;
/// - *SECTION* - section edges and vertices of all arguments;
/// 
/// The rules for the arguments and type of the operation are the following:
/// - For Boolean operation *FUSE* all arguments should have equal dimensions;
/// - For Boolean operation *CUT* the minimal dimension of *Tools* should not be
/// less than the maximal dimension of *Objects*;
/// - For Boolean operation *COMMON* the arguments can have any dimension.
/// - For Boolean operation *SECTION* the arguments can be of any type.
/// 
/// Additionally to the errors of the base class the algorithm returns
/// the following Errors:<br>
/// - *BOPAlgo_AlertBOPNotSet* - in case the type of Boolean Operation is not set.<br>
/// </summary>
public ref class BRepAlgoAPI_BooleanOperation
    : public Macad::Occt::BRepAlgoAPI_BuilderAlgo
{

#ifdef Include_BRepAlgoAPI_BooleanOperation_h
public:
    Include_BRepAlgoAPI_BooleanOperation_h
#endif

protected:
    BRepAlgoAPI_BooleanOperation(InitMode init)
        : Macad::Occt::BRepAlgoAPI_BuilderAlgo( init )
    {}

public:
    BRepAlgoAPI_BooleanOperation(::BRepAlgoAPI_BooleanOperation* nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BuilderAlgo( nativeInstance )
    {}

    BRepAlgoAPI_BooleanOperation(::BRepAlgoAPI_BooleanOperation& nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BuilderAlgo( nativeInstance )
    {}

    property ::BRepAlgoAPI_BooleanOperation* NativeInstance
    {
        ::BRepAlgoAPI_BooleanOperation* get()
        {
            return static_cast<::BRepAlgoAPI_BooleanOperation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name Constructors
    /// Empty constructor
    BRepAlgoAPI_BooleanOperation();
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_BooleanOperation(BOPAlgo_PaveFiller thePF, ) */
    /// <summary>
    /// </summary>
    /// @name Setting/getting arguments
    /// Returns the first argument involved in this Boolean operation.
    /// Obsolete
    Macad::Occt::TopoDS_Shape^ Shape1();
    /// <summary>
    /// Returns the second argument involved in this Boolean operation.
    /// Obsolete
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape2();
    /// <summary>
    /// Sets the Tool arguments
    /// </summary>
    void SetTools(Macad::Occt::TopTools_ListOfShape^ theLS);
    /// <summary>
    /// Returns the Tools arguments
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Tools();
    /// <summary>
    /// </summary>
    /// @name Setting/Getting the type of Boolean operation
    /// Sets the type of Boolean operation
    void SetOperation(Macad::Occt::BOPAlgo_Operation theBOP);
    /// <summary>
    /// Returns the type of Boolean Operation
    /// </summary>
    Macad::Occt::BOPAlgo_Operation Operation();
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the Boolean operation.
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the Boolean operation.
    void Build();
}; // class BRepAlgoAPI_BooleanOperation

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Check
//---------------------------------------------------------------------
/// <summary>
/// The class Check provides a diagnostic tool for checking the validity
/// of the single shape or couple of shapes.
/// The shapes are checked on:
/// - Topological validity;
/// - Small edges;
/// - Self-interference;
/// - Validity for Boolean operation of certain type (for couple of shapes only).
/// 
/// The class provides two ways of checking shape(-s)
/// 1. Constructors
/// BRepAlgoAPI_Check aCh(theS);
/// Standard_Boolean isValid = aCh.IsValid();
/// 2. Methods SetData and Perform
/// BRepAlgoAPI_Check aCh;
/// aCh.SetData(theS1, theS2, BOPAlgo_FUSE, Standard_False);
/// aCh.Perform();
/// Standard_Boolean isValid = aCh.IsValid();
/// 
/// </summary>
public ref class BRepAlgoAPI_Check sealed
    : public Macad::Occt::BOPAlgo_Options
{

#ifdef Include_BRepAlgoAPI_Check_h
public:
    Include_BRepAlgoAPI_Check_h
#endif

public:
    BRepAlgoAPI_Check(::BRepAlgoAPI_Check* nativeInstance)
        : Macad::Occt::BOPAlgo_Options( nativeInstance )
    {}

    BRepAlgoAPI_Check(::BRepAlgoAPI_Check& nativeInstance)
        : Macad::Occt::BOPAlgo_Options( nativeInstance )
    {}

    property ::BRepAlgoAPI_Check* NativeInstance
    {
        ::BRepAlgoAPI_Check* get()
        {
            return static_cast<::BRepAlgoAPI_Check*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name Constructors
    /// Empty constructor.
    BRepAlgoAPI_Check();
    /// <summary>
    /// Constructor for checking single shape.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS  - the shape to check;
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Constructor for checking single shape.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS  - the shape to check;
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI);
    /// <summary>
    /// Constructor for checking single shape.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS  - the shape to check;
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE);
    /// <summary>
    /// Constructor for checking single shape.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS  - the shape to check;
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Constructor for checking the couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Constructor for checking the couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI);
    /// <summary>
    /// Constructor for checking the couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE);
    /// <summary>
    /// Constructor for checking the couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp);
    /// <summary>
    /// Constructor for checking the couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// theRange  - parameter to use progress indicator
    /// </param>
    BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2);
    /// <summary>
    /// </summary>
    /// @name Initializing the algorithm
    /// Initializes the algorithm with single shape.
    /// 
    /// <param name="in]">
    /// theS  - the shape to check;
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    void SetData(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI);
    /// <summary>
    /// </summary>
    /// @name Initializing the algorithm
    /// Initializes the algorithm with single shape.
    /// 
    /// <param name="in]">
    /// theS  - the shape to check;
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    void SetData(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE);
    /// <summary>
    /// </summary>
    /// @name Initializing the algorithm
    /// Initializes the algorithm with single shape.
    /// 
    /// <param name="in]">
    /// theS  - the shape to check;
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    void SetData(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Initializes the algorithm with couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    void SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI);
    /// <summary>
    /// Initializes the algorithm with couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    void SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE);
    /// <summary>
    /// Initializes the algorithm with couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    void SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp);
    /// <summary>
    /// Initializes the algorithm with couple of shapes.
    /// Additionally to the validity checks of each given shape,
    /// the types of the given shapes will be checked on validity
    /// for Boolean operation of given type.
    /// 
    /// </summary>
    /// <param name="in]">
    /// theS1  - the first shape to check;
    /// </param>
    /// <param name="in]">
    /// theS2  - the second shape to check;
    /// </param>
    /// <param name="in]">
    /// theOp  - the type of Boolean Operation for which the validity
    /// of given shapes should be checked.
    /// </param>
    /// <param name="in]">
    /// bTestSE  - flag which specifies whether to check the shape
    /// on small edges or not; by default it is set to TRUE;
    /// </param>
    /// <param name="in]">
    /// bTestSI  - flag which specifies whether to check the shape
    /// on self-interference or not; by default it is set to TRUE;
    /// </param>
    void SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2);
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the check.
    void Perform(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the check.
    void Perform();
    /// <summary>
    /// </summary>
    /// @name Getting the results.
    /// Shows whether shape(s) valid or not.
    bool IsValid();
    /* Method skipped due to unknown mapping: BOPAlgo_ListOfCheckResult Result() */
}; // class BRepAlgoAPI_Check

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Common
//---------------------------------------------------------------------
/// <summary>
/// The class provides Boolean common operation
/// between arguments and tools (Boolean Intersection).
/// </summary>
public ref class BRepAlgoAPI_Common sealed
    : public Macad::Occt::BRepAlgoAPI_BooleanOperation
{

#ifdef Include_BRepAlgoAPI_Common_h
public:
    Include_BRepAlgoAPI_Common_h
#endif

public:
    BRepAlgoAPI_Common(::BRepAlgoAPI_Common* nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
    {}

    BRepAlgoAPI_Common(::BRepAlgoAPI_Common& nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
    {}

    property ::BRepAlgoAPI_Common* NativeInstance
    {
        ::BRepAlgoAPI_Common* get()
        {
            return static_cast<::BRepAlgoAPI_Common*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BRepAlgoAPI_Common();
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Common(BOPAlgo_PaveFiller PF, ) */
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  -argument
    /// <S2>  -tool
    /// <anOperation> - the type of the operation
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Common(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  -argument
    /// <S2>  -tool
    /// <anOperation> - the type of the operation
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Common(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Common(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller PF, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Common(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller PF, Message_ProgressRange theRange, ) */
}; // class BRepAlgoAPI_Common

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Cut
//---------------------------------------------------------------------
/// <summary>
/// The class Cut provides Boolean cut operation
/// between arguments and tools (Boolean Subtraction).
/// </summary>
public ref class BRepAlgoAPI_Cut sealed
    : public Macad::Occt::BRepAlgoAPI_BooleanOperation
{

#ifdef Include_BRepAlgoAPI_Cut_h
public:
    Include_BRepAlgoAPI_Cut_h
#endif

public:
    BRepAlgoAPI_Cut(::BRepAlgoAPI_Cut* nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
    {}

    BRepAlgoAPI_Cut(::BRepAlgoAPI_Cut& nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
    {}

    property ::BRepAlgoAPI_Cut* NativeInstance
    {
        ::BRepAlgoAPI_Cut* get()
        {
            return static_cast<::BRepAlgoAPI_Cut*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BRepAlgoAPI_Cut();
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Cut(BOPAlgo_PaveFiller PF, ) */
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  -argument
    /// <S2>  -tool
    /// <anOperation> - the type of the operation
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Cut(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  -argument
    /// <S2>  -tool
    /// <anOperation> - the type of the operation
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Cut(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Cut(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, bool bFWD, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Cut(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, bool bFWD, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Cut(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, bool bFWD, Message_ProgressRange theRange, ) */
}; // class BRepAlgoAPI_Cut

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Defeaturing
//---------------------------------------------------------------------
/// <summary>
/// The BRepAlgoAPI_Defeaturing algorithm is the API algorithm intended for
/// removal of the unwanted parts from the shape. The unwanted parts
/// (or features) can be holes, protrusions, gaps, chamfers, fillets etc.
/// The shape itself is not modified, the new shape is built as the result.
/// 
/// The actual removal of the features from the shape is performed by
/// the low-level *BOPAlgo_RemoveFeatures* tool. So the defeaturing algorithm
/// has the same options, input data requirements, limitations as the
/// low-level algorithm.
/// 
/// <b>Input data</b>
/// 
/// Currently, only the shapes of type SOLID, COMPSOLID, and COMPOUND of Solids
/// are supported. And only the FACEs can be removed from the shape.
/// 
/// On the input the algorithm accepts the shape itself and the
/// features which have to be removed. It does not matter how the features
/// are given. It could be the separate faces or the collections
/// of faces. The faces should belong to the initial shape, and those that
/// do not belong will be ignored.
/// 
/// <b>Options</b>
/// 
/// The algorithm has the following options:
/// - History support;
/// 
/// and the options available from base class:
/// - Error/Warning reporting system;
/// - Parallel processing mode.
/// 
/// Please note that the other options of the base class are not supported
/// here and will have no effect.
/// 
/// For the details on the available options please refer to the description
/// of *BOPAlgo_RemoveFeatures* algorithm.
/// 
/// <b>Limitations</b>
/// 
/// The defeaturing algorithm has the same limitations as *BOPAlgo_RemoveFeatures*
/// algorithm.
/// 
/// <b>Example</b>
/// 
/// Here is the example of usage of the algorithm:
/// ~~~~
/// TopoDS_Shape aSolid = ...;               // Input shape to remove the features from
/// TopTools_ListOfShape aFeatures = ...;    // Features to remove from the shape
/// Standard_Boolean bRunParallel = ...;     // Parallel processing mode
/// Standard_Boolean isHistoryNeeded = ...;  // History support
/// 
/// BRepAlgoAPI_Defeaturing aDF;             // De-Featuring algorithm
/// aDF.SetShape(aSolid);                    // Set the shape
/// aDF.AddFacesToRemove(aFaces);            // Add faces to remove
/// aDF.SetRunParallel(bRunParallel);        // Define the processing mode (parallel or single)
/// aDF.SetToFillHistory(isHistoryNeeded);   // Define whether to track the shapes modifications
/// aDF.Build();                             // Perform the operation
/// if (!aDF.IsDone())                       // Check for the errors
/// {
/// // error treatment
/// Standard_SStream aSStream;
/// aDF.DumpErrors(aSStream);
/// return;
/// }
/// if (aDF.HasWarnings())                   // Check for the warnings
/// {
/// // warnings treatment
/// Standard_SStream aSStream;
/// aDF.DumpWarnings(aSStream);
/// }
/// const TopoDS_Shape& aResult = aDF.Shape(); // Result shape
/// ~~~~
/// 
/// The algorithm preserves the type of the input shape in the result shape. Thus,
/// if the input shape is a COMPSOLID, the resulting solids will also be put into a COMPSOLID.
/// 
/// </summary>
public ref class BRepAlgoAPI_Defeaturing sealed
    : public Macad::Occt::BRepAlgoAPI_Algo
{

#ifdef Include_BRepAlgoAPI_Defeaturing_h
public:
    Include_BRepAlgoAPI_Defeaturing_h
#endif

public:
    BRepAlgoAPI_Defeaturing(::BRepAlgoAPI_Defeaturing* nativeInstance)
        : Macad::Occt::BRepAlgoAPI_Algo( nativeInstance )
    {}

    BRepAlgoAPI_Defeaturing(::BRepAlgoAPI_Defeaturing& nativeInstance)
        : Macad::Occt::BRepAlgoAPI_Algo( nativeInstance )
    {}

    property ::BRepAlgoAPI_Defeaturing* NativeInstance
    {
        ::BRepAlgoAPI_Defeaturing* get()
        {
            return static_cast<::BRepAlgoAPI_Defeaturing*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name Constructors
    /// Empty constructor
    BRepAlgoAPI_Defeaturing();
    /// <summary>
    /// </summary>
    /// @name Setting input data for the algorithm
    /// Sets the shape for processing.
    /// <param name="in]">
    /// theShape  The shape to remove the features from.
    /// It should either be the SOLID, COMPSOLID or COMPOUND of Solids.
    /// </param>
    void SetShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Returns the input shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ InputShape();
    /// <summary>
    /// Adds the features to remove from the input shape.
    /// </summary>
    /// <param name="in]">
    /// theFace  The shape to extract the faces for removal.
    /// </param>
    void AddFaceToRemove(Macad::Occt::TopoDS_Shape^ theFace);
    /// <summary>
    /// Adds the faces to remove from the input shape.
    /// </summary>
    /// <param name="in]">
    /// theFaces  The list of shapes to extract the faces for removal.
    /// </param>
    void AddFacesToRemove(Macad::Occt::TopTools_ListOfShape^ theFaces);
    /// <summary>
    /// Returns the list of faces which have been requested for removal
    /// from the input shape.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ FacesToRemove();
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the operation
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the operation
    void Build();
    /// <summary>
    /// </summary>
    /// @name History Methods
    /// Defines whether to track the modification of the shapes or not.
    void SetToFillHistory(bool theFlag);
    /// <summary>
    /// Returns whether the history was requested or not.
    /// </summary>
    bool HasHistory();
    /// <summary>
    /// Returns the list of shapes modified from the shape <theS> during the operation.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Returns the list of shapes generated from the shape <theS> during the operation.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Returns true if the shape <theS> has been deleted during the operation.
    /// It means that the shape has no any trace in the result.
    /// Otherwise it returns false.
    /// </summary>
    bool IsDeleted(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Returns true if any of the input shapes has been modified during operation.
    /// </summary>
    bool HasModified();
    /// <summary>
    /// Returns true if any of the input shapes has generated shapes during operation.
    /// </summary>
    bool HasGenerated();
    /// <summary>
    /// Returns true if any of the input shapes has been deleted during operation.
    /// </summary>
    bool HasDeleted();
    /// <summary>
    /// Returns the History of shapes modifications
    /// </summary>
    Macad::Occt::BRepTools_History^ History();
}; // class BRepAlgoAPI_Defeaturing

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Fuse
//---------------------------------------------------------------------
/// <summary>
/// The class provides Boolean fusion operation
/// between arguments and tools  (Boolean Union).
/// </summary>
public ref class BRepAlgoAPI_Fuse sealed
    : public Macad::Occt::BRepAlgoAPI_BooleanOperation
{

#ifdef Include_BRepAlgoAPI_Fuse_h
public:
    Include_BRepAlgoAPI_Fuse_h
#endif

public:
    BRepAlgoAPI_Fuse(::BRepAlgoAPI_Fuse* nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
    {}

    BRepAlgoAPI_Fuse(::BRepAlgoAPI_Fuse& nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
    {}

    property ::BRepAlgoAPI_Fuse* NativeInstance
    {
        ::BRepAlgoAPI_Fuse* get()
        {
            return static_cast<::BRepAlgoAPI_Fuse*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BRepAlgoAPI_Fuse();
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Fuse(BOPAlgo_PaveFiller PF, ) */
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  -argument
    /// <S2>  -tool
    /// <anOperation> - the type of the operation
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Fuse(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  -argument
    /// <S2>  -tool
    /// <anOperation> - the type of the operation
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Fuse(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Fuse(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Fuse(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, Message_ProgressRange theRange, ) */
}; // class BRepAlgoAPI_Fuse

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Section
//---------------------------------------------------------------------
/// <summary>
/// The algorithm is to build a Section operation between arguments and tools.
/// The result of Section operation consists of vertices and edges.
/// The result of Section operation contains:
/// 1. new vertices that are subjects of V/V, E/E, E/F, F/F interferences
/// 2. vertices that are subjects of V/E, V/F interferences
/// 3. new edges that are subjects of F/F interferences
/// 4. edges that are Common Blocks
/// </summary>
public ref class BRepAlgoAPI_Section sealed
    : public Macad::Occt::BRepAlgoAPI_BooleanOperation
{

#ifdef Include_BRepAlgoAPI_Section_h
public:
    Include_BRepAlgoAPI_Section_h
#endif

public:
    BRepAlgoAPI_Section(::BRepAlgoAPI_Section* nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
    {}

    BRepAlgoAPI_Section(::BRepAlgoAPI_Section& nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BooleanOperation( nativeInstance )
    {}

    property ::BRepAlgoAPI_Section* NativeInstance
    {
        ::BRepAlgoAPI_Section* get()
        {
            return static_cast<::BRepAlgoAPI_Section*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BRepAlgoAPI_Section();
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Section(BOPAlgo_PaveFiller PF, ) */
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  -argument
    /// <S2>  -tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, bool PerformNow);
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  -argument
    /// <S2>  -tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Section(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, bool PerformNow, ) */
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Section(TopoDS_Shape S1, TopoDS_Shape S2, BOPAlgo_PaveFiller aDSF, bool PerformNow, ) */
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  - argument
    /// <Pl>  - tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Pln Pl, bool PerformNow);
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  - argument
    /// <Pl>  - tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Pln Pl);
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  - argument
    /// <Sf>  - tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Geom_Surface^ Sf, bool PerformNow);
    /// <summary>
    /// Constructor with two shapes
    /// <S1>  - argument
    /// <Sf>  - tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Geom_Surface^ Sf);
    /// <summary>
    /// Constructor with two shapes
    /// <Sf>  - argument
    /// <S2>  - tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf, Macad::Occt::TopoDS_Shape^ S2, bool PerformNow);
    /// <summary>
    /// Constructor with two shapes
    /// <Sf>  - argument
    /// <S2>  - tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf, Macad::Occt::TopoDS_Shape^ S2);
    /// <summary>
    /// Constructor with two shapes
    /// <Sf1>  - argument
    /// <Sf2>  - tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf1, Macad::Occt::Geom_Surface^ Sf2, bool PerformNow);
    /// <summary>
    /// Constructor with two shapes
    /// <Sf1>  - argument
    /// <Sf2>  - tool
    /// <PerformNow> - the flag:
    /// if <PerformNow>=True - the algorithm is performed immediately
    /// Obsolete
    /// </summary>
    BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf1, Macad::Occt::Geom_Surface^ Sf2);
    /// <summary>
    /// initialize the argument
    /// <S1>  - argument
    /// Obsolete
    /// </summary>
    void Init1(Macad::Occt::TopoDS_Shape^ S1);
    /// <summary>
    /// initialize the argument
    /// <Pl>  - argument
    /// Obsolete
    /// </summary>
    void Init1(Macad::Occt::Pln Pl);
    /// <summary>
    /// initialize the argument
    /// <Sf>  - argument
    /// Obsolete
    /// </summary>
    void Init1(Macad::Occt::Geom_Surface^ Sf);
    /// <summary>
    /// initialize the tool
    /// <S2>  - tool
    /// Obsolete
    /// </summary>
    void Init2(Macad::Occt::TopoDS_Shape^ S2);
    /// <summary>
    /// initialize the tool
    /// <Pl>  - tool
    /// Obsolete
    /// </summary>
    void Init2(Macad::Occt::Pln Pl);
    /// <summary>
    /// initialize the tool
    /// <Sf>  - tool
    /// Obsolete
    /// </summary>
    void Init2(Macad::Occt::Geom_Surface^ Sf);
    void Approximation(bool B);
    /// <summary>
    /// Indicates whether the P-Curve should be (or not)
    /// performed on the argument.
    /// By default, no parametric 2D curve (pcurve) is defined for the
    /// edges of the result.
    /// If ComputePCurve1 equals true, further computations performed
    /// to attach an P-Curve in the parametric space of the argument
    /// to the constructed edges.
    /// Obsolete
    /// </summary>
    void ComputePCurveOn1(bool B);
    /// <summary>
    /// Indicates whether the P-Curve should be (or not)
    /// performed on the tool.
    /// By default, no parametric 2D curve (pcurve) is defined for the
    /// edges of the result.
    /// If ComputePCurve1 equals true, further computations performed
    /// to attach an P-Curve in the parametric space of the tool
    /// to the constructed edges.
    /// Obsolete
    /// </summary>
    void ComputePCurveOn2(bool B);
    /// <summary>
    /// Performs the algorithm
    /// Filling interference Data Structure (if it is necessary)
    /// Building the result of the operation.
    /// </summary>
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Performs the algorithm
    /// Filling interference Data Structure (if it is necessary)
    /// Building the result of the operation.
    /// </summary>
    void Build();
    /// <summary>
    /// get the face of the first part giving section edge <E>.
    /// Returns True on the 3 following conditions :
    /// 1/ <E> is an edge returned by the Shape() metwod.
    /// 2/ First part of section performed is a shape.
    /// 3/ <E> is built on a intersection curve (i.e <E>
    /// is not the result of common edges)
    /// When False, F remains untouched.
    /// Obsolete
    /// </summary>
    bool HasAncestorFaceOn1(Macad::Occt::TopoDS_Shape^ E, Macad::Occt::TopoDS_Shape^ F);
    /// <summary>
    /// Identifies the ancestor faces of
    /// the intersection edge E resulting from the last
    /// computation performed in this framework, that is, the faces of
    /// the two original shapes on which the edge E lies:
    /// -      HasAncestorFaceOn1 gives the ancestor face in the first shape, and
    /// -      HasAncestorFaceOn2 gives the ancestor face in the second shape.
    /// These functions return true if an ancestor face F is found, or false if not.
    /// An ancestor face is identifiable for the edge E if the following
    /// conditions are satisfied:
    /// -  the first part on which this algorithm performed its
    /// last computation is a shape, that is, it was not given as
    /// a surface or a plane at the time of construction of this
    /// algorithm or at a later time by the Init1 function,
    /// - E is one of the elementary edges built by the
    /// last computation of this section algorithm.
    /// To use these functions properly, you have to test the returned
    /// Boolean value before using the ancestor face: F is significant
    /// only if the returned Boolean value equals true.
    /// Obsolete
    /// </summary>
    bool HasAncestorFaceOn2(Macad::Occt::TopoDS_Shape^ E, Macad::Occt::TopoDS_Shape^ F);
}; // class BRepAlgoAPI_Section

//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Splitter
//---------------------------------------------------------------------
/// <summary>
/// The class contains API level of the **Splitter** algorithm,
/// which allows splitting a group of arbitrary shapes by the
/// other group of arbitrary shapes.<br>
/// The arguments of the operation are divided on two groups:<br>
/// *Objects* - shapes that will be split;<br>
/// *Tools*   - shapes by which the *Objects* will be split.<br>
/// The result of the operation contains only the split parts
/// of the shapes from the group of *Objects*.<br>
/// The split parts of the shapes from the group of *Tools* are excluded
/// from the result.<br>
/// The shapes can be split by the other shapes from the same group
/// (in case these shapes are interfering).
/// 
/// The class is a General Fuse based algorithm. Thus, all options
/// of the General Fuse algorithm such as Fuzzy mode, safe processing mode,
/// parallel processing mode, gluing mode and history support are also
/// available in this algorithm.<br>
/// There is no requirement on the existence of the *Tools* shapes.
/// And if there are no *Tools* shapes, the result of the splitting
/// operation will be equivalent to the General Fuse result.
/// 
/// The algorithm returns the following Error statuses:<br>
/// - 0 - in case of success;<br>
/// - *BOPAlgo_AlertTooFewArguments*    - in case there is no enough arguments for the
/// operation;<br>
/// - *BOPAlgo_AlertIntersectionFailed* - in case the Intersection of the arguments has failed;<br>
/// - *BOPAlgo_AlertBuilderFailed*      - in case the Building of the result has failed.
/// </summary>
public ref class BRepAlgoAPI_Splitter sealed
    : public Macad::Occt::BRepAlgoAPI_BuilderAlgo
{

#ifdef Include_BRepAlgoAPI_Splitter_h
public:
    Include_BRepAlgoAPI_Splitter_h
#endif

public:
    BRepAlgoAPI_Splitter(::BRepAlgoAPI_Splitter* nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BuilderAlgo( nativeInstance )
    {}

    BRepAlgoAPI_Splitter(::BRepAlgoAPI_Splitter& nativeInstance)
        : Macad::Occt::BRepAlgoAPI_BuilderAlgo( nativeInstance )
    {}

    property ::BRepAlgoAPI_Splitter* NativeInstance
    {
        ::BRepAlgoAPI_Splitter* get()
        {
            return static_cast<::BRepAlgoAPI_Splitter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name Constructors
    /// Empty constructor
    BRepAlgoAPI_Splitter();
    /* Method skipped due to unknown mapping: void BRepAlgoAPI_Splitter(BOPAlgo_PaveFiller thePF, ) */
    /// <summary>
    /// </summary>
    /// @name Setters/Getters for the Tools
    /// Sets the Tool arguments
    void SetTools(Macad::Occt::TopTools_ListOfShape^ theLS);
    /// <summary>
    /// Returns the Tool arguments
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Tools();
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the Split operation.
    /// Performs the intersection of the argument shapes (both objects and tools)
    /// and splits objects by the tools.
    void Build(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the Split operation.
    /// Performs the intersection of the argument shapes (both objects and tools)
    /// and splits objects by the tools.
    void Build();
}; // class BRepAlgoAPI_Splitter

}; // namespace Occt
}; // namespace Macad
