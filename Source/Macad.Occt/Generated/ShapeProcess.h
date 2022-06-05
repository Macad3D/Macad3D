// Generated wrapper code for package ShapeProcess

#pragma once

#include "ShapeProcess.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ShapeProcess_Operator
//---------------------------------------------------------------------
/// <summary>
/// Abstract Operator class providing a tool to
/// perform an operation on Context
/// </summary>
public ref class ShapeProcess_Operator : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeProcess_Operator_h
public:
	Include_ShapeProcess_Operator_h
#endif

protected:
	ShapeProcess_Operator(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	ShapeProcess_Operator(::ShapeProcess_Operator* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeProcess_Operator(::ShapeProcess_Operator& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeProcess_Operator* NativeInstance
	{
		::ShapeProcess_Operator* get()
		{
			return static_cast<::ShapeProcess_Operator*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeProcess_Operator^ CreateDowncasted(::ShapeProcess_Operator* instance);

public:
	ShapeProcess_Operator(Macad::Occt::ShapeProcess_Operator^ parameter1);
	ShapeProcess_Operator();
	/// <summary>
	/// Performs operation and eventually records
	/// changes in the context
	/// </summary>
	bool Perform(Macad::Occt::ShapeProcess_Context^ context, Macad::Occt::Message_ProgressRange^ theProgress);
	/// <summary>
	/// Performs operation and eventually records
	/// changes in the context
	/// </summary>
	bool Perform(Macad::Occt::ShapeProcess_Context^ context);
}; // class ShapeProcess_Operator

//---------------------------------------------------------------------
//  Class  ShapeProcess_Context
//---------------------------------------------------------------------
/// <summary>
/// Provides convenient interface to resource file
/// Allows to load resource file and get values of
/// attributes starting from some scope, for example
/// if scope is defined as "ToV4" and requested parameter
/// is "exec.op", value of "ToV4.exec.op" parameter from
/// the resource file will be returned
/// </summary>
public ref class ShapeProcess_Context : public Macad::Occt::Standard_Transient
{

#ifdef Include_ShapeProcess_Context_h
public:
	Include_ShapeProcess_Context_h
#endif

protected:
	ShapeProcess_Context(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	ShapeProcess_Context(::ShapeProcess_Context* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	ShapeProcess_Context(::ShapeProcess_Context& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::ShapeProcess_Context* NativeInstance
	{
		::ShapeProcess_Context* get()
		{
			return static_cast<::ShapeProcess_Context*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeProcess_Context^ CreateDowncasted(::ShapeProcess_Context* instance);

public:
	/// <summary>
	/// Creates an empty tool
	/// </summary>
	ShapeProcess_Context();
	/// <summary>
	/// Creates a new tool and initialises by name of
	/// resource file and (if specified) starting scope
	/// Calls method Init()
	/// </summary>
	ShapeProcess_Context(System::String^ file, System::String^ scope);
	/// <summary>
	/// Creates a new tool and initialises by name of
	/// resource file and (if specified) starting scope
	/// Calls method Init()
	/// </summary>
	ShapeProcess_Context(System::String^ file);
	ShapeProcess_Context(Macad::Occt::ShapeProcess_Context^ parameter1);
	/// <summary>
	/// Initialises a tool by loading resource file and
	/// (if specified) sets starting scope
	/// Returns False if resource file not found
	/// </summary>
	bool Init(System::String^ file, System::String^ scope);
	/// <summary>
	/// Initialises a tool by loading resource file and
	/// (if specified) sets starting scope
	/// Returns False if resource file not found
	/// </summary>
	bool Init(System::String^ file);
	/// <summary>
	/// Loading Resource_Manager object if this object not
	/// equal internal static Resource_Manager object or
	/// internal static Resource_Manager object is null
	/// </summary>
	/* Method skipped due to unknown mapping: Resource_Manager LoadResourceManager(Standard_CString file, ) */
	/// <summary>
	/// Returns internal Resource_Manager object
	/// </summary>
	/* Method skipped due to unknown mapping: Resource_Manager ResourceManager() */
	/// <summary>
	/// Set a new (sub)scope
	/// </summary>
	void SetScope(System::String^ scope);
	/// <summary>
	/// Go out of current scope
	/// </summary>
	void UnSetScope();
	/// <summary>
	/// Returns True if parameter is defined in the resource file
	/// </summary>
	bool IsParamSet(System::String^ param);
	bool GetReal(System::String^ param, double% val);
	bool GetInteger(System::String^ param, int% val);
	bool GetBoolean(System::String^ param, bool% val);
	/// <summary>
	/// Get value of parameter as being of specific type
	/// Returns False if parameter is not defined or has a wrong type
	/// </summary>
	bool GetString(System::String^ param, Macad::Occt::TCollection_AsciiString^ val);
	double RealVal(System::String^ param, double def);
	int IntegerVal(System::String^ param, int def);
	bool BooleanVal(System::String^ param, bool def);
	/// <summary>
	/// Get value of parameter as being of specific type
	/// If parameter is not defined or does not have expected
	/// type, returns default value as specified
	/// </summary>
	System::String^ StringVal(System::String^ param, System::String^ def);
	/// <summary>
	/// Sets Messenger used for outputting messages.
	/// </summary>
	void SetMessenger(Macad::Occt::Message_Messenger^ messenger);
	/// <summary>
	/// Returns Messenger used for outputting messages.
	/// </summary>
	Macad::Occt::Message_Messenger^ Messenger();
	/// <summary>
	/// Sets trace level used for outputting messages
	/// - 0: no trace at all
	/// - 1: errors
	/// - 2: errors and warnings
	/// - 3: all messages
	/// Default is 1 : Errors traced
	/// </summary>
	void SetTraceLevel(int tracelev);
	/// <summary>
	/// Returns trace level used for outputting messages.
	/// </summary>
	int TraceLevel();
}; // class ShapeProcess_Context

//---------------------------------------------------------------------
//  Class  ShapeProcess_ShapeContext
//---------------------------------------------------------------------
/// <summary>
/// Extends Context to handle shapes
/// Contains map of shape-shape, and messages
/// attached to shapes
/// </summary>
public ref class ShapeProcess_ShapeContext sealed : public Macad::Occt::ShapeProcess_Context
{

#ifdef Include_ShapeProcess_ShapeContext_h
public:
	Include_ShapeProcess_ShapeContext_h
#endif

public:
	ShapeProcess_ShapeContext(::ShapeProcess_ShapeContext* nativeInstance)
		: Macad::Occt::ShapeProcess_Context( nativeInstance )
	{}

	ShapeProcess_ShapeContext(::ShapeProcess_ShapeContext& nativeInstance)
		: Macad::Occt::ShapeProcess_Context( nativeInstance )
	{}

	property ::ShapeProcess_ShapeContext* NativeInstance
	{
		::ShapeProcess_ShapeContext* get()
		{
			return static_cast<::ShapeProcess_ShapeContext*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeProcess_ShapeContext^ CreateDowncasted(::ShapeProcess_ShapeContext* instance);

public:
	ShapeProcess_ShapeContext(System::String^ file, System::String^ seq);
	ShapeProcess_ShapeContext(System::String^ file);
	/// <summary>
	/// Initializes a tool by resource file and shape
	/// to be processed
	/// </summary>
	ShapeProcess_ShapeContext(Macad::Occt::TopoDS_Shape^ S, System::String^ file, System::String^ seq);
	/// <summary>
	/// Initializes a tool by resource file and shape
	/// to be processed
	/// </summary>
	ShapeProcess_ShapeContext(Macad::Occt::TopoDS_Shape^ S, System::String^ file);
	ShapeProcess_ShapeContext(Macad::Occt::ShapeProcess_ShapeContext^ parameter1);
	/// <summary>
	/// Initializes tool by a new shape and clears all results
	/// </summary>
	void Init(Macad::Occt::TopoDS_Shape^ S);
	/// <summary>
	/// Returns shape being processed
	/// </summary>
	Macad::Occt::TopoDS_Shape^ Shape();
	/// <summary>
	/// Returns current result
	/// </summary>
	Macad::Occt::TopoDS_Shape^ Result();
	/// <summary>
	/// Returns map of replacements shape -> shape
	/// This map is not recursive
	/// </summary>
	Macad::Occt::TopTools_DataMapOfShapeShape^ Map();
	Macad::Occt::ShapeExtend_MsgRegistrator^ Messages();
	void SetDetalisation(Macad::Occt::TopAbs_ShapeEnum level);
	/// <summary>
	/// Set and get value for detalisation level
	/// Only shapes of types from TopoDS_COMPOUND and until
	/// specified detalisation level will be recorded in maps
	/// To cancel mapping, use TopAbs_SHAPE
	/// To force full mapping, use TopAbs_VERTEX
	/// The default level is TopAbs_FACE
	/// </summary>
	Macad::Occt::TopAbs_ShapeEnum GetDetalisation();
	/// <summary>
	/// Sets a new result shape
	/// NOTE: this method should be used very carefully
	/// to keep consistency of modifications
	/// It is recommended to use RecordModification() methods
	/// with explicit definition of mapping from current
	/// result to a new one
	/// </summary>
	void SetResult(Macad::Occt::TopoDS_Shape^ S);
	void RecordModification(Macad::Occt::TopTools_DataMapOfShapeShape^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg);
	void RecordModification(Macad::Occt::TopTools_DataMapOfShapeShape^ repl);
	void RecordModification(Macad::Occt::ShapeBuild_ReShape^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg);
	void RecordModification(Macad::Occt::ShapeBuild_ReShape^ repl);
	/// <summary>
	/// Records modifications and resets result accordingly
	/// NOTE: modification of resulting shape should be explicitly
	/// defined in the maps along with modifications of subshapes
	/// 
	/// In the last function, sh is the shape on which Modifier
	/// was run. It can be different from the whole shape,
	/// but in that case result as a whole should be reset later
	/// either by call to SetResult(), or by another call to
	/// RecordModification() which contains mapping of current
	/// result to a new one explicitly
	/// </summary>
	void RecordModification(Macad::Occt::TopoDS_Shape^ sh, Macad::Occt::BRepTools_Modifier^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg);
	/// <summary>
	/// Records modifications and resets result accordingly
	/// NOTE: modification of resulting shape should be explicitly
	/// defined in the maps along with modifications of subshapes
	/// 
	/// In the last function, sh is the shape on which Modifier
	/// was run. It can be different from the whole shape,
	/// but in that case result as a whole should be reset later
	/// either by call to SetResult(), or by another call to
	/// RecordModification() which contains mapping of current
	/// result to a new one explicitly
	/// </summary>
	void RecordModification(Macad::Occt::TopoDS_Shape^ sh, Macad::Occt::BRepTools_Modifier^ repl);
	/// <summary>
	/// Record a message for shape S
	/// Shape S should be one of subshapes of original shape
	/// (or whole one), but not one of intermediate shapes
	/// Records only if Message() is not Null
	/// </summary>
	void AddMessage(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Message_Msg^ msg, Macad::Occt::Message_Gravity gravity);
	/// <summary>
	/// Record a message for shape S
	/// Shape S should be one of subshapes of original shape
	/// (or whole one), but not one of intermediate shapes
	/// Records only if Message() is not Null
	/// </summary>
	void AddMessage(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Message_Msg^ msg);
	/// <summary>
	/// Get value of parameter as being of the type GeomAbs_Shape
	/// Returns False if parameter is not defined or has a wrong type
	/// </summary>
	bool GetContinuity(System::String^ param, Macad::Occt::GeomAbs_Shape% val);
	/// <summary>
	/// Get value of parameter as being of the type GeomAbs_Shape
	/// If parameter is not defined or does not have expected
	/// type, returns default value as specified
	/// </summary>
	Macad::Occt::GeomAbs_Shape ContinuityVal(System::String^ param, Macad::Occt::GeomAbs_Shape def);
	/// <summary>
	/// Prints statistics on Shape Processing onto the current Messenger.
	/// </summary>
	void PrintStatistics();
	/// <summary>
	/// Set NonManifold flag
	/// </summary>
	void SetNonManifold(bool theNonManifold);
	/// <summary>
	/// Get NonManifold flag
	/// </summary>
	bool IsNonManifold();
}; // class ShapeProcess_ShapeContext

//---------------------------------------------------------------------
//  Class  ShapeProcess_UOperator
//---------------------------------------------------------------------
/// <summary>
/// Defines operator as container for static function
/// OperFunc. This allows user to create new operators
/// without creation of new classes
/// </summary>
public ref class ShapeProcess_UOperator sealed : public Macad::Occt::ShapeProcess_Operator
{

#ifdef Include_ShapeProcess_UOperator_h
public:
	Include_ShapeProcess_UOperator_h
#endif

public:
	ShapeProcess_UOperator(::ShapeProcess_UOperator* nativeInstance)
		: Macad::Occt::ShapeProcess_Operator( nativeInstance )
	{}

	ShapeProcess_UOperator(::ShapeProcess_UOperator& nativeInstance)
		: Macad::Occt::ShapeProcess_Operator( nativeInstance )
	{}

	property ::ShapeProcess_UOperator* NativeInstance
	{
		::ShapeProcess_UOperator* get()
		{
			return static_cast<::ShapeProcess_UOperator*>(_NativeInstance);
		}
	}

	static Macad::Occt::ShapeProcess_UOperator^ CreateDowncasted(::ShapeProcess_UOperator* instance);

public:
	ShapeProcess_UOperator(Macad::Occt::ShapeProcess_UOperator^ parameter1);
	/// <summary>
	/// Performs operation and records changes in the context
	/// </summary>
	bool Perform(Macad::Occt::ShapeProcess_Context^ context, Macad::Occt::Message_ProgressRange^ theProgress);
	/// <summary>
	/// Performs operation and records changes in the context
	/// </summary>
	bool Perform(Macad::Occt::ShapeProcess_Context^ context);
}; // class ShapeProcess_UOperator

//---------------------------------------------------------------------
//  Class  ShapeProcess_OperLibrary
//---------------------------------------------------------------------
/// <summary>
/// Provides a set of following operators
/// 
/// DirectFaces
/// FixShape
/// SameParameter
/// SetTolerance
/// SplitAngle
/// BSplineRestriction
/// ElementaryToRevolution
/// SurfaceToBSpline
/// ToBezier
/// SplitContinuity
/// SplitClosedFaces
/// FixWireGaps
/// FixFaceSize
/// DropSmallEdges
/// FixShape
/// SplitClosedEdges
/// </summary>
public ref class ShapeProcess_OperLibrary sealed : public BaseClass<::ShapeProcess_OperLibrary>
{

#ifdef Include_ShapeProcess_OperLibrary_h
public:
	Include_ShapeProcess_OperLibrary_h
#endif

public:
	ShapeProcess_OperLibrary(::ShapeProcess_OperLibrary* nativeInstance)
		: BaseClass<::ShapeProcess_OperLibrary>( nativeInstance, true )
	{}

	ShapeProcess_OperLibrary(::ShapeProcess_OperLibrary& nativeInstance)
		: BaseClass<::ShapeProcess_OperLibrary>( &nativeInstance, false )
	{}

	property ::ShapeProcess_OperLibrary* NativeInstance
	{
		::ShapeProcess_OperLibrary* get()
		{
			return static_cast<::ShapeProcess_OperLibrary*>(_NativeInstance);
		}
	}

public:
	ShapeProcess_OperLibrary();
	ShapeProcess_OperLibrary(Macad::Occt::ShapeProcess_OperLibrary^ parameter1);
	/// <summary>
	/// Registers all the operators
	/// </summary>
	static void Init();
	/// <summary>
	/// Applies BRepTools_Modification to a shape,
	/// taking into account sharing of components of compounds.
	/// if theMutableInput vat is set to true then input shape S
	/// can be modified during the modification process.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map, Macad::Occt::ShapeExtend_MsgRegistrator^ msg, bool theMutableInput);
	/// <summary>
	/// Applies BRepTools_Modification to a shape,
	/// taking into account sharing of components of compounds.
	/// if theMutableInput vat is set to true then input shape S
	/// can be modified during the modification process.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map, Macad::Occt::ShapeExtend_MsgRegistrator^ msg);
	/// <summary>
	/// Applies BRepTools_Modification to a shape,
	/// taking into account sharing of components of compounds.
	/// if theMutableInput vat is set to true then input shape S
	/// can be modified during the modification process.
	/// </summary>
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map);
}; // class ShapeProcess_OperLibrary

//---------------------------------------------------------------------
//  Class  ShapeProcess
//---------------------------------------------------------------------
/// <summary>
/// Shape Processing module
/// allows to define and apply general Shape Processing as a
/// customizable sequence of Shape Healing operators. The
/// customization is implemented via user-editable resource
/// file which defines sequence of operators to be executed
/// and their parameters.
/// </summary>
public ref class ShapeProcess sealed : public BaseClass<::ShapeProcess>
{

#ifdef Include_ShapeProcess_h
public:
	Include_ShapeProcess_h
#endif

public:
	ShapeProcess(::ShapeProcess* nativeInstance)
		: BaseClass<::ShapeProcess>( nativeInstance, true )
	{}

	ShapeProcess(::ShapeProcess& nativeInstance)
		: BaseClass<::ShapeProcess>( &nativeInstance, false )
	{}

	property ::ShapeProcess* NativeInstance
	{
		::ShapeProcess* get()
		{
			return static_cast<::ShapeProcess*>(_NativeInstance);
		}
	}

public:
	ShapeProcess();
	ShapeProcess(Macad::Occt::ShapeProcess^ parameter1);
	/// <summary>
	/// Registers operator to make it visible for Performer
	/// </summary>
	static bool RegisterOperator(System::String^ name, Macad::Occt::ShapeProcess_Operator^ op);
	/// <summary>
	/// Finds operator by its name
	/// </summary>
	static bool FindOperator(System::String^ name, Macad::Occt::ShapeProcess_Operator^ op);
	/// <summary>
	/// Performs a specified sequence of operators on Context
	/// Resource file and other data should be already loaded
	/// to Context (including description of sequence seq)
	/// </summary>
	static bool Perform(Macad::Occt::ShapeProcess_Context^ context, System::String^ seq, Macad::Occt::Message_ProgressRange^ theProgress);
	/// <summary>
	/// Performs a specified sequence of operators on Context
	/// Resource file and other data should be already loaded
	/// to Context (including description of sequence seq)
	/// </summary>
	static bool Perform(Macad::Occt::ShapeProcess_Context^ context, System::String^ seq);
}; // class ShapeProcess

}; // namespace Occt
}; // namespace Macad
