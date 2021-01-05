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
	bool Perform(Macad::Occt::ShapeProcess_Context^ context, Macad::Occt::Message_ProgressRange^ theProgress);
	bool Perform(Macad::Occt::ShapeProcess_Context^ context);
}; // class ShapeProcess_Operator

//---------------------------------------------------------------------
//  Class  ShapeProcess_Context
//---------------------------------------------------------------------
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
	ShapeProcess_Context();
	ShapeProcess_Context(System::String^ file, System::String^ scope);
	ShapeProcess_Context(System::String^ file);
	ShapeProcess_Context(Macad::Occt::ShapeProcess_Context^ parameter1);
	bool Init(System::String^ file, System::String^ scope);
	bool Init(System::String^ file);
	/* Method skipped due to unknown mapping: Resource_Manager LoadResourceManager(Standard_CString file, ) */
	/* Method skipped due to unknown mapping: Resource_Manager ResourceManager() */
	void SetScope(System::String^ scope);
	void UnSetScope();
	bool IsParamSet(System::String^ param);
	bool GetReal(System::String^ param, double% val);
	bool GetInteger(System::String^ param, int% val);
	bool GetBoolean(System::String^ param, bool% val);
	bool GetString(System::String^ param, Macad::Occt::TCollection_AsciiString^ val);
	double RealVal(System::String^ param, double def);
	int IntegerVal(System::String^ param, int def);
	bool BooleanVal(System::String^ param, bool def);
	System::String^ StringVal(System::String^ param, System::String^ def);
	void SetMessenger(Macad::Occt::Message_Messenger^ messenger);
	Macad::Occt::Message_Messenger^ Messenger();
	void SetTraceLevel(int tracelev);
	int TraceLevel();
}; // class ShapeProcess_Context

//---------------------------------------------------------------------
//  Class  ShapeProcess_ShapeContext
//---------------------------------------------------------------------
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
	ShapeProcess_ShapeContext(Macad::Occt::TopoDS_Shape^ S, System::String^ file, System::String^ seq);
	ShapeProcess_ShapeContext(Macad::Occt::TopoDS_Shape^ S, System::String^ file);
	ShapeProcess_ShapeContext(Macad::Occt::ShapeProcess_ShapeContext^ parameter1);
	void Init(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ Shape();
	Macad::Occt::TopoDS_Shape^ Result();
	Macad::Occt::TopTools_DataMapOfShapeShape^ Map();
	Macad::Occt::ShapeExtend_MsgRegistrator^ Messages();
	void SetDetalisation(Macad::Occt::TopAbs_ShapeEnum level);
	Macad::Occt::TopAbs_ShapeEnum GetDetalisation();
	void SetResult(Macad::Occt::TopoDS_Shape^ S);
	void RecordModification(Macad::Occt::TopTools_DataMapOfShapeShape^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg);
	void RecordModification(Macad::Occt::TopTools_DataMapOfShapeShape^ repl);
	void RecordModification(Macad::Occt::ShapeBuild_ReShape^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg);
	void RecordModification(Macad::Occt::ShapeBuild_ReShape^ repl);
	void RecordModification(Macad::Occt::TopoDS_Shape^ sh, Macad::Occt::BRepTools_Modifier^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg);
	void RecordModification(Macad::Occt::TopoDS_Shape^ sh, Macad::Occt::BRepTools_Modifier^ repl);
	void AddMessage(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Message_Msg^ msg, Macad::Occt::Message_Gravity gravity);
	void AddMessage(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Message_Msg^ msg);
	bool GetContinuity(System::String^ param, Macad::Occt::GeomAbs_Shape% val);
	Macad::Occt::GeomAbs_Shape ContinuityVal(System::String^ param, Macad::Occt::GeomAbs_Shape def);
	void PrintStatistics();
	void SetNonManifold(bool theNonManifold);
	bool IsNonManifold();
}; // class ShapeProcess_ShapeContext

//---------------------------------------------------------------------
//  Class  ShapeProcess_UOperator
//---------------------------------------------------------------------
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
	bool Perform(Macad::Occt::ShapeProcess_Context^ context, Macad::Occt::Message_ProgressRange^ theProgress);
	bool Perform(Macad::Occt::ShapeProcess_Context^ context);
}; // class ShapeProcess_UOperator

//---------------------------------------------------------------------
//  Class  ShapeProcess_OperLibrary
//---------------------------------------------------------------------
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
	static void Init();
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map, Macad::Occt::ShapeExtend_MsgRegistrator^ msg, bool theMutableInput);
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map, Macad::Occt::ShapeExtend_MsgRegistrator^ msg);
	static Macad::Occt::TopoDS_Shape^ ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map);
}; // class ShapeProcess_OperLibrary

//---------------------------------------------------------------------
//  Class  ShapeProcess
//---------------------------------------------------------------------
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
	static bool RegisterOperator(System::String^ name, Macad::Occt::ShapeProcess_Operator^ op);
	static bool FindOperator(System::String^ name, Macad::Occt::ShapeProcess_Operator^ op);
	static bool Perform(Macad::Occt::ShapeProcess_Context^ context, System::String^ seq, Macad::Occt::Message_ProgressRange^ theProgress);
	static bool Perform(Macad::Occt::ShapeProcess_Context^ context, System::String^ seq);
}; // class ShapeProcess

}; // namespace Occt
}; // namespace Macad
