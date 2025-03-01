// Generated wrapper code for package BOPAlgo

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BOPAlgo_Operation
//---------------------------------------------------------------------
public enum class BOPAlgo_Operation
{
    COMMON = 0,
    FUSE = 1,
    CUT = 2,
    CUT21 = 3,
    SECTION = 4,
    UNKNOWN = 5
}; // enum  class BOPAlgo_Operation

//---------------------------------------------------------------------
//  Enum  BOPAlgo_GlueEnum
//---------------------------------------------------------------------
/// <summary>
/// The Enumeration describes an additional option for the algorithms
/// in the Boolean Component such as General Fuse, Boolean operations,
/// Section, Maker Volume, Splitter and Cells Builder algorithms.<br>
/// 
/// The Gluing options have been designed to speed up the computation
/// of the interference among arguments of the operations on special cases,
/// in which the arguments may be overlapping but do not have real intersections
/// between their sub-shapes.<br>
/// 
/// This option cannot be used on the shapes having real intersections,
/// like intersection vertex between edges, or intersection vertex between
/// edge and a face or intersection line between faces.<br>
/// 
/// There are two possibilities of overlapping shapes:<br>
/// 1. The shapes can be partially coinciding - the faces do not have
/// intersection curves, but overlapping. The faces of such arguments will
/// be split during the operation;<br>
/// 2. The shapes can be fully coinciding - there should be no partial
/// overlapping of the faces, thus no intersection of type EDGE/FACE at all.
/// In such cases the faces will not be split during the operation.<br>
/// 
/// Even though there are no real intersections on such cases without Gluing options the algorithm
/// will still intersect the sub-shapes of the arguments with interfering bounding boxes.<br>
/// 
/// The performance improvement in gluing mode is achieved by excluding
/// the most time consuming computations according to the given Gluing parameter:<br>
/// 1. Computation of FACE/FACE intersections for partial coincidence;<br>
/// 2. And computation of VERTEX/FACE, EDGE/FACE and FACE/FACE intersections for full
/// coincidence.<br>
/// 
/// By setting the Gluing option for the operation user should guarantee
/// that the arguments are really coinciding. The algorithms do not check this itself.
/// Setting inappropriate option for the operation is likely to lead to incorrect result.<br>
/// 
/// There are following items in the enumeration:<br>
/// **BOPAlgo_GlueOff** - default value for the algorithms, Gluing is switched off;<br>
/// **BOPAlgo_GlueShift** - Glue option for shapes with partial coincidence;<br>
/// **BOPAlgo_GlueFull** - Glue option for shapes with full coincidence.
/// 
/// </summary>
public enum class BOPAlgo_GlueEnum
{
    GlueOff = 0,
    GlueShift = 1,
    GlueFull = 2
}; // enum  class BOPAlgo_GlueEnum

//---------------------------------------------------------------------
//  Class  BOPAlgo_Options
//---------------------------------------------------------------------
/// <summary>
/// The class provides the following options for the algorithms in Boolean Component:
/// - *Memory allocation tool* - tool for memory allocations;
/// - *Error and warning reporting* - allows recording warnings and errors occurred
/// during the operation.
/// Error means that the algorithm has failed.
/// - *Parallel processing mode* - provides the possibility to perform operation in parallel mode;
/// - *Fuzzy tolerance* - additional tolerance for the operation to detect
/// touching or coinciding cases;
/// - *Using the Oriented Bounding Boxes* - Allows using the Oriented Bounding Boxes of the shapes
/// for filtering the intersections.
/// 
/// </summary>
public ref class BOPAlgo_Options
    : public Macad::Occt::BaseClass<::BOPAlgo_Options>
{

#ifdef Include_BOPAlgo_Options_h
public:
    Include_BOPAlgo_Options_h
#endif

protected:
    BOPAlgo_Options(InitMode init)
        : Macad::Occt::BaseClass<::BOPAlgo_Options>( init )
    {}

public:
    BOPAlgo_Options(::BOPAlgo_Options* nativeInstance)
        : Macad::Occt::BaseClass<::BOPAlgo_Options>( nativeInstance, true )
    {}

    BOPAlgo_Options(::BOPAlgo_Options& nativeInstance)
        : Macad::Occt::BaseClass<::BOPAlgo_Options>( &nativeInstance, false )
    {}

    property ::BOPAlgo_Options* NativeInstance
    {
        ::BOPAlgo_Options* get()
        {
            return static_cast<::BOPAlgo_Options*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BOPAlgo_Options();
    /// <summary>
    /// Constructor with allocator
    /// </summary>
    BOPAlgo_Options(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /// <summary>
    /// Returns allocator
    /// </summary>
    Macad::Occt::NCollection_BaseAllocator^ Allocator();
    /// <summary>
    /// Clears all warnings and errors, and any data cached by the algorithm.
    /// User defined options are not cleared.
    /// </summary>
    void Clear();
    /* Method skipped due to unknown mapping: void AddError(Message_Alert theAlert, ) */
    /* Method skipped due to unknown mapping: void AddWarning(Message_Alert theAlert, ) */
    /// <summary>
    /// Returns true if algorithm has failed
    /// </summary>
    bool HasErrors();
    /* Method skipped due to unknown mapping: bool HasError(Standard_Type theType, ) */
    /// <summary>
    /// Returns true if algorithm has generated some warning alerts
    /// </summary>
    bool HasWarnings();
    /* Method skipped due to unknown mapping: bool HasWarning(Standard_Type theType, ) */
    /// <summary>
    /// Returns report collecting all errors and warnings
    /// </summary>
    Macad::Occt::Message_Report^ GetReport();
    /// <summary>
    /// Dumps the error status into the given stream
    /// </summary>
    void DumpErrors(System::IO::TextWriter^ theOS);
    /// <summary>
    /// Dumps the warning statuses into the given stream
    /// </summary>
    void DumpWarnings(System::IO::TextWriter^ theOS);
    /// <summary>
    /// Clears the warnings of the algorithm
    /// </summary>
    void ClearWarnings();
    /// <summary>
    /// Gets the global parallel mode
    /// </summary>
    static bool GetParallelMode();
    /// <summary>
    /// Sets the global parallel mode
    /// </summary>
    static void SetParallelMode(bool theNewMode);
    /// <summary>
    /// Set the flag of parallel processing
    /// if <theFlag> is true  the parallel processing is switched on
    /// if <theFlag> is false the parallel processing is switched off
    /// </summary>
    void SetRunParallel(bool theFlag);
    /// <summary>
    /// Returns the flag of parallel processing
    /// </summary>
    bool RunParallel();
    /// <summary>
    /// Sets the additional tolerance
    /// </summary>
    void SetFuzzyValue(double theFuzz);
    /// <summary>
    /// Returns the additional tolerance
    /// </summary>
    double FuzzyValue();
    /// <summary>
    /// Enables/Disables the usage of OBB
    /// </summary>
    void SetUseOBB(bool theUseOBB);
    /// <summary>
    /// Returns the flag defining usage of OBB
    /// </summary>
    bool UseOBB();
}; // class BOPAlgo_Options

//---------------------------------------------------------------------
//  Class  BOPAlgo_Algo
//---------------------------------------------------------------------
/// <summary>
/// The class provides the root interface for the algorithms in Boolean Component.<br>
/// </summary>
public ref class BOPAlgo_Algo
    : public Macad::Occt::BOPAlgo_Options
{

#ifdef Include_BOPAlgo_Algo_h
public:
    Include_BOPAlgo_Algo_h
#endif

protected:
    BOPAlgo_Algo(InitMode init)
        : Macad::Occt::BOPAlgo_Options( init )
    {}

public:
    BOPAlgo_Algo(::BOPAlgo_Algo* nativeInstance)
        : Macad::Occt::BOPAlgo_Options( nativeInstance )
    {}

    BOPAlgo_Algo(::BOPAlgo_Algo& nativeInstance)
        : Macad::Occt::BOPAlgo_Options( nativeInstance )
    {}

    property ::BOPAlgo_Algo* NativeInstance
    {
        ::BOPAlgo_Algo* get()
        {
            return static_cast<::BOPAlgo_Algo*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The main method to implement the operation
    /// Providing the range allows to enable Progress indicator User break functionalities.
    /// </summary>
    void Perform(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// The main method to implement the operation
    /// Providing the range allows to enable Progress indicator User break functionalities.
    /// </summary>
    void Perform();
}; // class BOPAlgo_Algo

//---------------------------------------------------------------------
//  Class  BOPAlgo_BuilderShape
//---------------------------------------------------------------------
/// <summary>
/// Root class for algorithms that has shape as result.
/// 
/// The class provides the History mechanism, which allows
/// tracking the modification of the input shapes during
/// the operation. It uses the *BRepTools_History* tool
/// as a storer for history objects.
/// </summary>
public ref class BOPAlgo_BuilderShape
    : public Macad::Occt::BOPAlgo_Algo
{

#ifdef Include_BOPAlgo_BuilderShape_h
public:
    Include_BOPAlgo_BuilderShape_h
#endif

protected:
    BOPAlgo_BuilderShape(InitMode init)
        : Macad::Occt::BOPAlgo_Algo( init )
    {}

public:
    BOPAlgo_BuilderShape(::BOPAlgo_BuilderShape* nativeInstance)
        : Macad::Occt::BOPAlgo_Algo( nativeInstance )
    {}

    BOPAlgo_BuilderShape(::BOPAlgo_BuilderShape& nativeInstance)
        : Macad::Occt::BOPAlgo_Algo( nativeInstance )
    {}

    property ::BOPAlgo_BuilderShape* NativeInstance
    {
        ::BOPAlgo_BuilderShape* get()
        {
            return static_cast<::BOPAlgo_BuilderShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name Getting the result
    /// Returns the result of algorithm
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// </summary>
    /// @name History methods
    /// Returns the list of shapes Modified from the shape theS.
    Macad::Occt::TopTools_ListOfShape^ Modified(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Returns the list of shapes Generated from the shape theS.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ theS);
    /// <summary>
    /// Returns true if the shape theS has been deleted.
    /// In this case the shape will have no Modified elements,
    /// but can have Generated elements.
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
    /// History Tool
    /// </summary>
    Macad::Occt::BRepTools_History^ History();
    /// <summary>
    /// </summary>
    /// @name Enabling/Disabling the history collection.
    /// Allows disabling the history collection
    void SetToFillHistory(bool theHistFlag);
    /// <summary>
    /// Returns flag of history availability
    /// </summary>
    bool HasHistory();
}; // class BOPAlgo_BuilderShape

//---------------------------------------------------------------------
//  Class  BOPAlgo_Builder
//---------------------------------------------------------------------
/// <summary>
/// 
/// The class is a General Fuse algorithm - base algorithm for the
/// algorithms in the Boolean Component. Its main purpose is to build
/// the split parts of the argument shapes from which the result of
/// the operations is combined.<br>
/// The result of the General Fuse algorithm itself is a compound
/// containing all split parts of the arguments. <br>
/// 
/// Additionally to the options of the base classes, the algorithm has
/// the following options:<br>
/// - *Safe processing mode* - allows to avoid modification of the input
/// shapes during the operation (by default it is off);<br>
/// - *Gluing options* - allows to speed up the calculation of the intersections
/// on the special cases, in which some sub-shapes are coinciding.<br>
/// - *Disabling the check for inverted solids* - Disables/Enables the check of the input solids
/// for inverted status (holes in the space). The default value is TRUE,
/// i.e. the check is performed. Setting this flag to FALSE for inverted
/// solids, most likely will lead to incorrect results.
/// 
/// The algorithm returns the following warnings:
/// - *BOPAlgo_AlertUnableToOrientTheShape* - in case the check on the orientation of the split
/// shape
/// to match the orientation of the original shape has
/// failed.
/// 
/// The algorithm returns the following Error statuses:
/// - *BOPAlgo_AlertTooFewArguments* - in case there are no enough arguments to perform the
/// operation;
/// - *BOPAlgo_AlertNoFiller* - in case the intersection tool has not been created;
/// - *BOPAlgo_AlertIntersectionFailed* - in case the intersection of the arguments has failed;
/// - *BOPAlgo_AlertBuilderFailed* - in case building splits of arguments has failed with some
/// unexpected error.
/// 
/// </summary>
public ref class BOPAlgo_Builder
    : public Macad::Occt::BOPAlgo_BuilderShape
{

#ifdef Include_BOPAlgo_Builder_h
public:
    Include_BOPAlgo_Builder_h
#endif

protected:
    BOPAlgo_Builder(InitMode init)
        : Macad::Occt::BOPAlgo_BuilderShape( init )
    {}

public:
    BOPAlgo_Builder(::BOPAlgo_Builder* nativeInstance)
        : Macad::Occt::BOPAlgo_BuilderShape( nativeInstance )
    {}

    BOPAlgo_Builder(::BOPAlgo_Builder& nativeInstance)
        : Macad::Occt::BOPAlgo_BuilderShape( nativeInstance )
    {}

    property ::BOPAlgo_Builder* NativeInstance
    {
        ::BOPAlgo_Builder* get()
        {
            return static_cast<::BOPAlgo_Builder*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    BOPAlgo_Builder();
    BOPAlgo_Builder(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /// <summary>
    /// Clears the content of the algorithm.
    /// </summary>
    void Clear();
    /* Method skipped due to unknown mapping: BOPAlgo_PaveFiller PPaveFiller() */
    /* Method skipped due to unknown mapping: BOPDS_DS PDS() */
    /* Method skipped due to unknown mapping: IntTools_Context Context() */
    /// <summary>
    /// </summary>
    /// @name Arguments
    /// Adds the argument to the operation.
    void AddArgument(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Sets the list of arguments for the operation.
    /// </summary>
    void SetArguments(Macad::Occt::TopTools_ListOfShape^ theLS);
    /// <summary>
    /// Returns the list of arguments.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Arguments();
    /// <summary>
    /// </summary>
    /// @name Options
    /// Sets the flag that defines the mode of treatment.
    /// In non-destructive mode the argument shapes are not modified. Instead
    /// a copy of a sub-shape is created in the result if it is needed to be updated.
    /// This flag is taken into account if internal PaveFiller is used only.
    /// In the case of calling PerformWithFiller the corresponding flag of that PaveFiller
    /// is in force.
    void SetNonDestructive(bool theFlag);
    /// <summary>
    /// Returns the flag that defines the mode of treatment.
    /// In non-destructive mode the argument shapes are not modified. Instead
    /// a copy of a sub-shape is created in the result if it is needed to be updated.
    /// </summary>
    bool NonDestructive();
    /// <summary>
    /// Sets the glue option for the algorithm
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
    /// Performs the operation.
    /// The intersection will be performed also.
    void Perform(Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// </summary>
    /// @name Performing the operation
    /// Performs the operation.
    /// The intersection will be performed also.
    void Perform();
    /* Method skipped due to unknown mapping: void PerformWithFiller(BOPAlgo_PaveFiller theFiller, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void PerformWithFiller(BOPAlgo_PaveFiller theFiller, Message_ProgressRange theRange, ) */
    /// <summary>
    /// </summary>
    /// @name BOPs on open solids
    /// Builds the result shape according to the given states for the objects
    /// and tools. These states can be unambiguously converted into the Boolean operation type.
    /// Thus, it performs the Boolean operation on the given groups of shapes.
    /// 
    /// The result is built basing on the result of Builder operation (GF or any other).
    /// The only condition for the Builder is that the splits of faces should be created
    /// and classified relatively solids.
    /// 
    /// The method uses classification approach for choosing the faces which will
    /// participate in building the result shape:
    /// - All faces from each group having the given state for the opposite group
    /// will be taken into result.
    /// 
    /// Such approach shows better results (in comparison with BOPAlgo_BuilderSolid approach)
    /// when working with open solids. However, the result may not be always
    /// correct on such data (at least, not as expected) as the correct classification
    /// of the faces relatively open solids is not always possible and may vary
    /// depending on the chosen classification point on the face.
    /// 
    /// History is not created for the solids in this method.
    /// 
    /// To avoid pollution of the report of Builder algorithm, there is a possibility to pass
    /// the different report to collect the alerts of the method only. But, if the new report
    /// is not given, the Builder report will be used.
    /// So, even if Builder passed without any errors, but some error has been stored into its report
    /// in this method, for the following calls the Builder report must be cleared.
    /// 
    /// The method may set the following errors:
    /// - BOPAlgo_AlertBuilderFailed - Building operation has not been performed yet or failed;
    /// - BOPAlgo_AlertBOPNotSet - invalid BOP type is given (COMMON/FUSE/CUT/CUT21 are supported);
    /// - BOPAlgo_AlertTooFewArguments - arguments are not given;
    /// - BOPAlgo_AlertUnknownShape - the shape is unknown for the operation.
    /// 
    /// Parameters:
    /// <param name="theObjects">
    ///     - The group of Objects for BOP;
    /// </param>
    /// <param name="theObjState">
    ///    - State for objects faces to pass into result;
    /// </param>
    /// <param name="theTools">
    ///       - The group of Tools for BOP;
    /// </param>
    /// <param name="theToolsState">
    ///  - State for tools faces to pass into result;
    /// </param>
    /// <param name="theReport">
    ///      - The alternative report to avoid pollution of the main one.
    /// </param>
    void BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopAbs_State theObjState, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::TopAbs_State theToolsState, Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::Message_Report^ theReport);
    /// <summary>
    /// </summary>
    /// @name BOPs on open solids
    /// Builds the result shape according to the given states for the objects
    /// and tools. These states can be unambiguously converted into the Boolean operation type.
    /// Thus, it performs the Boolean operation on the given groups of shapes.
    /// 
    /// The result is built basing on the result of Builder operation (GF or any other).
    /// The only condition for the Builder is that the splits of faces should be created
    /// and classified relatively solids.
    /// 
    /// The method uses classification approach for choosing the faces which will
    /// participate in building the result shape:
    /// - All faces from each group having the given state for the opposite group
    /// will be taken into result.
    /// 
    /// Such approach shows better results (in comparison with BOPAlgo_BuilderSolid approach)
    /// when working with open solids. However, the result may not be always
    /// correct on such data (at least, not as expected) as the correct classification
    /// of the faces relatively open solids is not always possible and may vary
    /// depending on the chosen classification point on the face.
    /// 
    /// History is not created for the solids in this method.
    /// 
    /// To avoid pollution of the report of Builder algorithm, there is a possibility to pass
    /// the different report to collect the alerts of the method only. But, if the new report
    /// is not given, the Builder report will be used.
    /// So, even if Builder passed without any errors, but some error has been stored into its report
    /// in this method, for the following calls the Builder report must be cleared.
    /// 
    /// The method may set the following errors:
    /// - BOPAlgo_AlertBuilderFailed - Building operation has not been performed yet or failed;
    /// - BOPAlgo_AlertBOPNotSet - invalid BOP type is given (COMMON/FUSE/CUT/CUT21 are supported);
    /// - BOPAlgo_AlertTooFewArguments - arguments are not given;
    /// - BOPAlgo_AlertUnknownShape - the shape is unknown for the operation.
    /// 
    /// Parameters:
    /// <param name="theObjects">
    ///     - The group of Objects for BOP;
    /// </param>
    /// <param name="theObjState">
    ///    - State for objects faces to pass into result;
    /// </param>
    /// <param name="theTools">
    ///       - The group of Tools for BOP;
    /// </param>
    /// <param name="theToolsState">
    ///  - State for tools faces to pass into result;
    /// </param>
    /// <param name="theReport">
    ///      - The alternative report to avoid pollution of the main one.
    /// </param>
    void BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopAbs_State theObjState, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::TopAbs_State theToolsState, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// Builds the result of Boolean operation of given type
    /// basing on the result of Builder operation (GF or any other).
    /// 
    /// The method converts the given type of operation into the states
    /// for the objects and tools required for their face to pass into result
    /// and performs the call to the same method, but with states instead
    /// of operation type.
    /// 
    /// The conversion looks as follows:
    /// - COMMON is built from the faces of objects located IN any of the tools
    /// and vice versa.
    /// - FUSE   is built from the faces OUT of all given shapes;
    /// - CUT    is built from the faces of the objects OUT of the tools and
    /// faces of the tools located IN solids of the objects.
    /// 
    /// </summary>
    /// <param name="theObjects">
    ///   - The group of Objects for BOP;
    /// </param>
    /// <param name="theTools">
    ///     - The group of Tools for BOP;
    /// </param>
    /// <param name="theOperation">
    /// - The BOP type;
    /// </param>
    /// <param name="theRange">
    ///     - The parameter to progressIndicator
    /// </param>
    /// <param name="theReport">
    ///    - The alternative report to avoid pollution of the global one.
    /// </param>
    void BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::BOPAlgo_Operation theOperation, Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::Message_Report^ theReport);
    /// <summary>
    /// Builds the result of Boolean operation of given type
    /// basing on the result of Builder operation (GF or any other).
    /// 
    /// The method converts the given type of operation into the states
    /// for the objects and tools required for their face to pass into result
    /// and performs the call to the same method, but with states instead
    /// of operation type.
    /// 
    /// The conversion looks as follows:
    /// - COMMON is built from the faces of objects located IN any of the tools
    /// and vice versa.
    /// - FUSE   is built from the faces OUT of all given shapes;
    /// - CUT    is built from the faces of the objects OUT of the tools and
    /// faces of the tools located IN solids of the objects.
    /// 
    /// </summary>
    /// <param name="theObjects">
    ///   - The group of Objects for BOP;
    /// </param>
    /// <param name="theTools">
    ///     - The group of Tools for BOP;
    /// </param>
    /// <param name="theOperation">
    /// - The BOP type;
    /// </param>
    /// <param name="theRange">
    ///     - The parameter to progressIndicator
    /// </param>
    /// <param name="theReport">
    ///    - The alternative report to avoid pollution of the global one.
    /// </param>
    void BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::BOPAlgo_Operation theOperation, Macad::Occt::Message_ProgressRange^ theRange);
    /// <summary>
    /// </summary>
    /// @name Images/Origins
    /// Returns the map of images.
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Images();
    /// <summary>
    /// Returns the map of origins.
    /// </summary>
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Origins();
    /// <summary>
    /// Returns the map of Same Domain (SD) shapes - coinciding shapes
    /// from different arguments.
    /// </summary>
    Macad::Occt::TopTools_DataMapOfShapeShape^ ShapesSD();
}; // class BOPAlgo_Builder

//---------------------------------------------------------------------
//  Class  BOPAlgo_ToolsProvider
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary class providing API to operate tool arguments.
/// </summary>
public ref class BOPAlgo_ToolsProvider
    : public Macad::Occt::BOPAlgo_Builder
{

#ifdef Include_BOPAlgo_ToolsProvider_h
public:
    Include_BOPAlgo_ToolsProvider_h
#endif

protected:
    BOPAlgo_ToolsProvider(InitMode init)
        : Macad::Occt::BOPAlgo_Builder( init )
    {}

public:
    BOPAlgo_ToolsProvider(::BOPAlgo_ToolsProvider* nativeInstance)
        : Macad::Occt::BOPAlgo_Builder( nativeInstance )
    {}

    BOPAlgo_ToolsProvider(::BOPAlgo_ToolsProvider& nativeInstance)
        : Macad::Occt::BOPAlgo_Builder( nativeInstance )
    {}

    property ::BOPAlgo_ToolsProvider* NativeInstance
    {
        ::BOPAlgo_ToolsProvider* get()
        {
            return static_cast<::BOPAlgo_ToolsProvider*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BOPAlgo_ToolsProvider();
    BOPAlgo_ToolsProvider(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /// <summary>
    /// Clears internal fields and arguments
    /// </summary>
    void Clear();
    /// <summary>
    /// Adds Tool argument of the operation
    /// </summary>
    void AddTool(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Adds the Tool arguments of the operation
    /// </summary>
    void SetTools(Macad::Occt::TopTools_ListOfShape^ theShapes);
    /// <summary>
    /// Returns the Tool arguments of the operation
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Tools();
}; // class BOPAlgo_ToolsProvider

//---------------------------------------------------------------------
//  Class  BOPAlgo_BOP
//---------------------------------------------------------------------
/// <summary>
/// 
/// The class represents the Building part of the Boolean Operations
/// algorithm.<br>
/// The arguments of the algorithms are divided in two groups - *Objects*
/// and *Tools*.<br>
/// The algorithm builds the splits of the given arguments using the intersection
/// results and combines the result of Boolean Operation of given type:<br>
/// - *FUSE* - union of two groups of objects;<br>
/// - *COMMON* - intersection of two groups of objects;<br>
/// - *CUT* - subtraction of one group from the other.<br>
/// 
/// The rules for the arguments and type of the operation are the following:<br>
/// - For Boolean operation *FUSE* all arguments should have equal dimensions;<br>
/// - For Boolean operation *CUT* the minimal dimension of *Tools* should not be
/// less than the maximal dimension of *Objects*;<br>
/// - For Boolean operation *COMMON* the arguments can have any dimension.<br>
/// 
/// The class is a General Fuse based algorithm. Thus, all options
/// of the General Fuse algorithm such as Fuzzy mode, safe processing mode,
/// parallel processing mode, gluing mode and history support are also
/// available in this algorithm.<br>
/// 
/// Additionally to the Warnings of the parent class the algorithm returns
/// the following warnings:
/// - *BOPAlgo_AlertEmptyShape* - in case some of the input shapes are empty shapes.
/// 
/// Additionally to Errors of the parent class the algorithm returns
/// the following Error statuses:
/// - *BOPAlgo_AlertBOPIsNotSet* - in case the type of Boolean operation is not set;
/// - *BOPAlgo_AlertBOPNotAllowed* - in case the operation of given type is not allowed on
/// given inputs;
/// - *BOPAlgo_AlertSolidBuilderFailed* - in case the BuilderSolid algorithm failed to
/// produce the Fused solid.
/// 
/// </summary>
public ref class BOPAlgo_BOP
    : public Macad::Occt::BOPAlgo_ToolsProvider
{

#ifdef Include_BOPAlgo_BOP_h
public:
    Include_BOPAlgo_BOP_h
#endif

protected:
    BOPAlgo_BOP(InitMode init)
        : Macad::Occt::BOPAlgo_ToolsProvider( init )
    {}

public:
    BOPAlgo_BOP(::BOPAlgo_BOP* nativeInstance)
        : Macad::Occt::BOPAlgo_ToolsProvider( nativeInstance )
    {}

    BOPAlgo_BOP(::BOPAlgo_BOP& nativeInstance)
        : Macad::Occt::BOPAlgo_ToolsProvider( nativeInstance )
    {}

    property ::BOPAlgo_BOP* NativeInstance
    {
        ::BOPAlgo_BOP* get()
        {
            return static_cast<::BOPAlgo_BOP*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BOPAlgo_BOP();
    BOPAlgo_BOP(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    /// <summary>
    /// Clears internal fields and arguments
    /// </summary>
    void Clear();
    void SetOperation(Macad::Occt::BOPAlgo_Operation theOperation);
    Macad::Occt::BOPAlgo_Operation Operation();
    void Perform(Macad::Occt::Message_ProgressRange^ theRange);
    void Perform();
}; // class BOPAlgo_BOP

//---------------------------------------------------------------------
//  Class  BOPAlgo_Tools
//---------------------------------------------------------------------
/// <summary>
/// Provides tools used in the intersection part of Boolean operations
/// </summary>
public ref class BOPAlgo_Tools sealed
    : public Macad::Occt::BaseClass<::BOPAlgo_Tools>
{

#ifdef Include_BOPAlgo_Tools_h
public:
    Include_BOPAlgo_Tools_h
#endif

public:
    BOPAlgo_Tools(::BOPAlgo_Tools* nativeInstance)
        : Macad::Occt::BaseClass<::BOPAlgo_Tools>( nativeInstance, true )
    {}

    BOPAlgo_Tools(::BOPAlgo_Tools& nativeInstance)
        : Macad::Occt::BaseClass<::BOPAlgo_Tools>( &nativeInstance, false )
    {}

    property ::BOPAlgo_Tools* NativeInstance
    {
        ::BOPAlgo_Tools* get()
        {
            return static_cast<::BOPAlgo_Tools*>(_NativeInstance);
        }
    }

public:
    BOPAlgo_Tools();
    /* Method skipped due to unknown mapping: void FillMap(BOPDS_PaveBlock thePB1, int theF, BOPDS_IndexedDataMapOfPaveBlockListOfInteger theMILI, NCollection_BaseAllocator theAllocator, ) */
    /* Method skipped due to unknown mapping: void PerformCommonBlocks(BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock theMBlocks, NCollection_BaseAllocator theAllocator, BOPDS_DS theDS, IntTools_Context theContext, ) */
    /* Method skipped due to unknown mapping: void PerformCommonBlocks(BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock theMBlocks, NCollection_BaseAllocator theAllocator, BOPDS_DS theDS, IntTools_Context theContext, ) */
    /* Method skipped due to unknown mapping: void PerformCommonBlocks(BOPDS_IndexedDataMapOfPaveBlockListOfInteger theMBlocks, NCollection_BaseAllocator theAllocator, BOPDS_DS pDS, IntTools_Context theContext, ) */
    /* Method skipped due to unknown mapping: void PerformCommonBlocks(BOPDS_IndexedDataMapOfPaveBlockListOfInteger theMBlocks, NCollection_BaseAllocator theAllocator, BOPDS_DS pDS, IntTools_Context theContext, ) */
    /* Method skipped due to unknown mapping: double ComputeToleranceOfCB(BOPDS_CommonBlock theCB, BOPDS_DS theDS, IntTools_Context theContext, ) */
    /// <summary>
    /// Creates planar wires from the given edges.<br>
    /// The input edges are expected to be planar. And for the performance
    /// sake the method does not check if the edges are really planar.<br>
    /// Thus, the result wires will also be not planar if the input edges are not planar.<br>
    /// The edges may be not shared, but the resulting wires will be sharing the
    /// coinciding parts and intersecting parts.<br>
    /// The output wires may be non-manifold and contain free and multi-connected vertices.<br>
    /// Parameters:
    /// <theEdges> - input edges;<br>
    /// <theWires> - output wires;<br>
    /// <theShared> - boolean flag which defines whether the input edges are already
    /// shared or have to be intersected;<br>
    /// <theAngTol> - the angular tolerance which will be used for distinguishing
    /// the planes in which the edges are located. Default value is
    /// 1.e-8 which is used for intersection of planes in IntTools_FaceFace.<br>
    /// Method returns the following error statuses:<br>
    /// 0 - in case of success (at least one wire has been built);<br>
    /// 1 - in case there are no edges in the given shape;<br>
    /// 2 - sharing of the edges has failed.<br>
    /// </summary>
    static int EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires, bool theShared, double theAngTol);
    /// <summary>
    /// Creates planar wires from the given edges.<br>
    /// The input edges are expected to be planar. And for the performance
    /// sake the method does not check if the edges are really planar.<br>
    /// Thus, the result wires will also be not planar if the input edges are not planar.<br>
    /// The edges may be not shared, but the resulting wires will be sharing the
    /// coinciding parts and intersecting parts.<br>
    /// The output wires may be non-manifold and contain free and multi-connected vertices.<br>
    /// Parameters:
    /// <theEdges> - input edges;<br>
    /// <theWires> - output wires;<br>
    /// <theShared> - boolean flag which defines whether the input edges are already
    /// shared or have to be intersected;<br>
    /// <theAngTol> - the angular tolerance which will be used for distinguishing
    /// the planes in which the edges are located. Default value is
    /// 1.e-8 which is used for intersection of planes in IntTools_FaceFace.<br>
    /// Method returns the following error statuses:<br>
    /// 0 - in case of success (at least one wire has been built);<br>
    /// 1 - in case there are no edges in the given shape;<br>
    /// 2 - sharing of the edges has failed.<br>
    /// </summary>
    static int EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires, bool theShared);
    /// <summary>
    /// Creates planar wires from the given edges.<br>
    /// The input edges are expected to be planar. And for the performance
    /// sake the method does not check if the edges are really planar.<br>
    /// Thus, the result wires will also be not planar if the input edges are not planar.<br>
    /// The edges may be not shared, but the resulting wires will be sharing the
    /// coinciding parts and intersecting parts.<br>
    /// The output wires may be non-manifold and contain free and multi-connected vertices.<br>
    /// Parameters:
    /// <theEdges> - input edges;<br>
    /// <theWires> - output wires;<br>
    /// <theShared> - boolean flag which defines whether the input edges are already
    /// shared or have to be intersected;<br>
    /// <theAngTol> - the angular tolerance which will be used for distinguishing
    /// the planes in which the edges are located. Default value is
    /// 1.e-8 which is used for intersection of planes in IntTools_FaceFace.<br>
    /// Method returns the following error statuses:<br>
    /// 0 - in case of success (at least one wire has been built);<br>
    /// 1 - in case there are no edges in the given shape;<br>
    /// 2 - sharing of the edges has failed.<br>
    /// </summary>
    static int EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires);
    /// <summary>
    /// Creates planar faces from given planar wires.<br>
    /// The method does not check if the wires are really planar.<br>
    /// The input wires may be non-manifold but should be shared.<br>
    /// The wires located in the same planes and included into other wires will create
    /// holes in the faces built from outer wires.<br>
    /// The tolerance values of the input shapes may be modified during the operation
    /// due to projection of the edges on the planes for creation of 2D curves.<br>
    /// Parameters:
    /// <theWires> - the given wires;<br>
    /// <theFaces> - the output faces;<br>
    /// <theAngTol> - the angular tolerance for distinguishing the planes in which
    /// the wires are located. Default value is 1.e-8 which is used
    /// for intersection of planes in IntTools_FaceFace.<br>
    /// Method returns TRUE in case of success, i.e. at least one face has been built.<br>
    /// </summary>
    static bool WiresToFaces(Macad::Occt::TopoDS_Shape^ theWires, Macad::Occt::TopoDS_Shape^ theFaces, double theAngTol);
    /// <summary>
    /// Creates planar faces from given planar wires.<br>
    /// The method does not check if the wires are really planar.<br>
    /// The input wires may be non-manifold but should be shared.<br>
    /// The wires located in the same planes and included into other wires will create
    /// holes in the faces built from outer wires.<br>
    /// The tolerance values of the input shapes may be modified during the operation
    /// due to projection of the edges on the planes for creation of 2D curves.<br>
    /// Parameters:
    /// <theWires> - the given wires;<br>
    /// <theFaces> - the output faces;<br>
    /// <theAngTol> - the angular tolerance for distinguishing the planes in which
    /// the wires are located. Default value is 1.e-8 which is used
    /// for intersection of planes in IntTools_FaceFace.<br>
    /// Method returns TRUE in case of success, i.e. at least one face has been built.<br>
    /// </summary>
    static bool WiresToFaces(Macad::Occt::TopoDS_Shape^ theWires, Macad::Occt::TopoDS_Shape^ theFaces);
    /// <summary>
    /// Finds chains of intersecting vertices
    /// </summary>
    static void IntersectVertices(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theVertices, double theFuzzyValue, Macad::Occt::TopTools_ListOfListOfShape^ theChains);
    /* Method skipped due to unknown mapping: void ClassifyFaces(TopTools_ListOfShape theFaces, TopTools_ListOfShape theSolids, bool theRunParallel, IntTools_Context theContext, TopTools_IndexedDataMapOfShapeListOfShape theInParts, TopTools_DataMapOfShapeBox theShapeBoxMap, TopTools_DataMapOfShapeListOfShape theSolidsIF, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void ClassifyFaces(TopTools_ListOfShape theFaces, TopTools_ListOfShape theSolids, bool theRunParallel, IntTools_Context theContext, TopTools_IndexedDataMapOfShapeListOfShape theInParts, TopTools_DataMapOfShapeBox theShapeBoxMap, TopTools_DataMapOfShapeListOfShape theSolidsIF, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void ClassifyFaces(TopTools_ListOfShape theFaces, TopTools_ListOfShape theSolids, bool theRunParallel, IntTools_Context theContext, TopTools_IndexedDataMapOfShapeListOfShape theInParts, TopTools_DataMapOfShapeBox theShapeBoxMap, TopTools_DataMapOfShapeListOfShape theSolidsIF, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void ClassifyFaces(TopTools_ListOfShape theFaces, TopTools_ListOfShape theSolids, bool theRunParallel, IntTools_Context theContext, TopTools_IndexedDataMapOfShapeListOfShape theInParts, TopTools_DataMapOfShapeBox theShapeBoxMap, TopTools_DataMapOfShapeListOfShape theSolidsIF, Message_ProgressRange theRange, ) */
    /* Method skipped due to unknown mapping: void FillInternals(TopTools_ListOfShape theSolids, TopTools_ListOfShape theParts, TopTools_DataMapOfShapeListOfShape theImages, IntTools_Context theContext, ) */
    /// <summary>
    /// Computes the transformation needed to move the objects
    /// to the given point to increase the quality of computations.
    /// Returns true if the objects are located far from the given point
    /// (relatively given criteria), false otherwise.
    /// </summary>
    /// <param name="theBox1">
    /// the AABB of the first object
    /// </param>
    /// <param name="theBox2">
    /// the AABB of the second object
    /// </param>
    /// <param name="theTrsf">
    /// the computed transformation
    /// </param>
    /// <param name="thePoint">
    /// the Point to compute transformation to
    /// </param>
    /// <param name="theCriteria">
    /// the Criteria to check whether thranformation is required
    /// </param>
    static bool TrsfToPoint(Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, Macad::Occt::Trsf% theTrsf, Macad::Occt::Pnt thePoint, double theCriteria);
    /// <summary>
    /// Computes the transformation needed to move the objects
    /// to the given point to increase the quality of computations.
    /// Returns true if the objects are located far from the given point
    /// (relatively given criteria), false otherwise.
    /// </summary>
    /// <param name="theBox1">
    /// the AABB of the first object
    /// </param>
    /// <param name="theBox2">
    /// the AABB of the second object
    /// </param>
    /// <param name="theTrsf">
    /// the computed transformation
    /// </param>
    /// <param name="thePoint">
    /// the Point to compute transformation to
    /// </param>
    /// <param name="theCriteria">
    /// the Criteria to check whether thranformation is required
    /// </param>
    static bool TrsfToPoint(Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, Macad::Occt::Trsf% theTrsf, Macad::Occt::Pnt thePoint);
    /// <summary>
    /// Computes the transformation needed to move the objects
    /// to the given point to increase the quality of computations.
    /// Returns true if the objects are located far from the given point
    /// (relatively given criteria), false otherwise.
    /// </summary>
    /// <param name="theBox1">
    /// the AABB of the first object
    /// </param>
    /// <param name="theBox2">
    /// the AABB of the second object
    /// </param>
    /// <param name="theTrsf">
    /// the computed transformation
    /// </param>
    /// <param name="thePoint">
    /// the Point to compute transformation to
    /// </param>
    /// <param name="theCriteria">
    /// the Criteria to check whether thranformation is required
    /// </param>
    static bool TrsfToPoint(Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, Macad::Occt::Trsf% theTrsf);
}; // class BOPAlgo_Tools

}; // namespace Occt
}; // namespace Macad
