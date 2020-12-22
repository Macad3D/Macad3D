// Generated wrapper code for package ShapeProcess

#include "OcctPCH.h"
#include "ShapeProcess.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "ShapeProcess.h"
#include "Standard.h"
#include "TCollection.h"
#include "Message.h"
#include "TopoDS.h"
#include "TopTools.h"
#include "ShapeExtend.h"
#include "TopAbs.h"
#include "ShapeBuild.h"
#include "BRepTools.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  ShapeProcess_Operator
//---------------------------------------------------------------------

Macad::Occt::ShapeProcess_Operator::ShapeProcess_Operator(Macad::Occt::ShapeProcess_Operator^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::ShapeProcess_Operator::ShapeProcess_Operator()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::ShapeProcess_Operator::Perform(Macad::Occt::ShapeProcess_Context^ context)
{
	Handle(::ShapeProcess_Context) h_context = context->NativeInstance;
	return ((::ShapeProcess_Operator*)_NativeInstance)->Perform(h_context);
	context->NativeInstance = h_context.get();
}


Macad::Occt::ShapeProcess_Operator^ Macad::Occt::ShapeProcess_Operator::CreateDowncasted(::ShapeProcess_Operator* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeProcess_UOperator)))
		return Macad::Occt::ShapeProcess_UOperator::CreateDowncasted((::ShapeProcess_UOperator*)instance);

	return gcnew Macad::Occt::ShapeProcess_Operator( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeProcess_Context
//---------------------------------------------------------------------

Macad::Occt::ShapeProcess_Context::ShapeProcess_Context()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeProcess_Context();
}

Macad::Occt::ShapeProcess_Context::ShapeProcess_Context(System::String^ file, System::String^ scope)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_file = (char*)(void*)Marshal::StringToHGlobalAnsi(file);
	const char* sz_scope = (char*)(void*)Marshal::StringToHGlobalAnsi(scope);
	NativeInstance = new ::ShapeProcess_Context(sz_file, sz_scope);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_file);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_scope);
}

Macad::Occt::ShapeProcess_Context::ShapeProcess_Context(System::String^ file)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_file = (char*)(void*)Marshal::StringToHGlobalAnsi(file);
	NativeInstance = new ::ShapeProcess_Context(sz_file, "");
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_file);
}

Macad::Occt::ShapeProcess_Context::ShapeProcess_Context(Macad::Occt::ShapeProcess_Context^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeProcess_Context(*(::ShapeProcess_Context*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeProcess_Context::Init(System::String^ file, System::String^ scope)
{
	const char* sz_file = (char*)(void*)Marshal::StringToHGlobalAnsi(file);
	const char* sz_scope = (char*)(void*)Marshal::StringToHGlobalAnsi(scope);
	return ((::ShapeProcess_Context*)_NativeInstance)->Init(sz_file, sz_scope);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_file);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_scope);
}

bool Macad::Occt::ShapeProcess_Context::Init(System::String^ file)
{
	const char* sz_file = (char*)(void*)Marshal::StringToHGlobalAnsi(file);
	return ((::ShapeProcess_Context*)_NativeInstance)->Init(sz_file, "");
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_file);
}

void Macad::Occt::ShapeProcess_Context::SetScope(System::String^ scope)
{
	const char* sz_scope = (char*)(void*)Marshal::StringToHGlobalAnsi(scope);
	((::ShapeProcess_Context*)_NativeInstance)->SetScope(sz_scope);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_scope);
}

void Macad::Occt::ShapeProcess_Context::UnSetScope()
{
	((::ShapeProcess_Context*)_NativeInstance)->UnSetScope();
}

bool Macad::Occt::ShapeProcess_Context::IsParamSet(System::String^ param)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	return ((::ShapeProcess_Context*)_NativeInstance)->IsParamSet(sz_param);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

bool Macad::Occt::ShapeProcess_Context::GetReal(System::String^ param, double% val)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	pin_ptr<double> pp_val = &val;
	return ((::ShapeProcess_Context*)_NativeInstance)->GetReal(sz_param, *(Standard_Real*)pp_val);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

bool Macad::Occt::ShapeProcess_Context::GetInteger(System::String^ param, int% val)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	pin_ptr<int> pp_val = &val;
	return ((::ShapeProcess_Context*)_NativeInstance)->GetInteger(sz_param, *(Standard_Integer*)pp_val);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

bool Macad::Occt::ShapeProcess_Context::GetBoolean(System::String^ param, bool% val)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	pin_ptr<bool> pp_val = &val;
	return ((::ShapeProcess_Context*)_NativeInstance)->GetBoolean(sz_param, *(Standard_Boolean*)pp_val);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

bool Macad::Occt::ShapeProcess_Context::GetString(System::String^ param, Macad::Occt::TCollection_AsciiString^ val)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	return ((::ShapeProcess_Context*)_NativeInstance)->GetString(sz_param, *(::TCollection_AsciiString*)val->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

double Macad::Occt::ShapeProcess_Context::RealVal(System::String^ param, double def)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	return ((::ShapeProcess_Context*)_NativeInstance)->RealVal(sz_param, def);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

int Macad::Occt::ShapeProcess_Context::IntegerVal(System::String^ param, int def)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	return ((::ShapeProcess_Context*)_NativeInstance)->IntegerVal(sz_param, def);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

bool Macad::Occt::ShapeProcess_Context::BooleanVal(System::String^ param, bool def)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	return ((::ShapeProcess_Context*)_NativeInstance)->BooleanVal(sz_param, def);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

System::String^ Macad::Occt::ShapeProcess_Context::StringVal(System::String^ param, System::String^ def)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	const char* sz_def = (char*)(void*)Marshal::StringToHGlobalAnsi(def);
	Standard_CString _result;
	_result = ((::ShapeProcess_Context*)_NativeInstance)->StringVal(sz_param, sz_def);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_def);
	return gcnew System::String(_result);
}

void Macad::Occt::ShapeProcess_Context::SetMessenger(Macad::Occt::Message_Messenger^ messenger)
{
	Handle(::Message_Messenger) h_messenger = messenger->NativeInstance;
	((::ShapeProcess_Context*)_NativeInstance)->SetMessenger(h_messenger);
	messenger->NativeInstance = h_messenger.get();
}

Macad::Occt::Message_Messenger^ Macad::Occt::ShapeProcess_Context::Messenger()
{
	Handle(::Message_Messenger) _result;
	_result = ((::ShapeProcess_Context*)_NativeInstance)->Messenger();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Messenger::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeProcess_Context::SetTraceLevel(int tracelev)
{
	((::ShapeProcess_Context*)_NativeInstance)->SetTraceLevel(tracelev);
}

int Macad::Occt::ShapeProcess_Context::TraceLevel()
{
	return ((::ShapeProcess_Context*)_NativeInstance)->TraceLevel();
}


Macad::Occt::ShapeProcess_Context^ Macad::Occt::ShapeProcess_Context::CreateDowncasted(::ShapeProcess_Context* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeProcess_ShapeContext)))
		return Macad::Occt::ShapeProcess_ShapeContext::CreateDowncasted((::ShapeProcess_ShapeContext*)instance);

	return gcnew Macad::Occt::ShapeProcess_Context( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeProcess_ShapeContext
//---------------------------------------------------------------------

Macad::Occt::ShapeProcess_ShapeContext::ShapeProcess_ShapeContext(System::String^ file, System::String^ seq)
	: Macad::Occt::ShapeProcess_Context(BaseClass::InitMode::Uninitialized)
{
	const char* sz_file = (char*)(void*)Marshal::StringToHGlobalAnsi(file);
	const char* sz_seq = (char*)(void*)Marshal::StringToHGlobalAnsi(seq);
	NativeInstance = new ::ShapeProcess_ShapeContext(sz_file, sz_seq);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_file);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_seq);
}

Macad::Occt::ShapeProcess_ShapeContext::ShapeProcess_ShapeContext(System::String^ file)
	: Macad::Occt::ShapeProcess_Context(BaseClass::InitMode::Uninitialized)
{
	const char* sz_file = (char*)(void*)Marshal::StringToHGlobalAnsi(file);
	NativeInstance = new ::ShapeProcess_ShapeContext(sz_file, "");
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_file);
}

Macad::Occt::ShapeProcess_ShapeContext::ShapeProcess_ShapeContext(Macad::Occt::TopoDS_Shape^ S, System::String^ file, System::String^ seq)
	: Macad::Occt::ShapeProcess_Context(BaseClass::InitMode::Uninitialized)
{
	const char* sz_file = (char*)(void*)Marshal::StringToHGlobalAnsi(file);
	const char* sz_seq = (char*)(void*)Marshal::StringToHGlobalAnsi(seq);
	NativeInstance = new ::ShapeProcess_ShapeContext(*(::TopoDS_Shape*)S->NativeInstance, sz_file, sz_seq);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_file);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_seq);
}

Macad::Occt::ShapeProcess_ShapeContext::ShapeProcess_ShapeContext(Macad::Occt::TopoDS_Shape^ S, System::String^ file)
	: Macad::Occt::ShapeProcess_Context(BaseClass::InitMode::Uninitialized)
{
	const char* sz_file = (char*)(void*)Marshal::StringToHGlobalAnsi(file);
	NativeInstance = new ::ShapeProcess_ShapeContext(*(::TopoDS_Shape*)S->NativeInstance, sz_file, "");
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_file);
}

Macad::Occt::ShapeProcess_ShapeContext::ShapeProcess_ShapeContext(Macad::Occt::ShapeProcess_ShapeContext^ parameter1)
	: Macad::Occt::ShapeProcess_Context(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeProcess_ShapeContext(*(::ShapeProcess_ShapeContext*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeProcess_ShapeContext::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcess_ShapeContext::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::ShapeProcess_ShapeContext*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcess_ShapeContext::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::ShapeProcess_ShapeContext*)_NativeInstance)->Result();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeShape^ Macad::Occt::ShapeProcess_ShapeContext::Map()
{
	::TopTools_DataMapOfShapeShape* _result = new ::TopTools_DataMapOfShapeShape();
	*_result =  (::TopTools_DataMapOfShapeShape)((::ShapeProcess_ShapeContext*)_NativeInstance)->Map();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeShape(_result);
}

Macad::Occt::ShapeExtend_MsgRegistrator^ Macad::Occt::ShapeProcess_ShapeContext::Messages()
{
	Handle(::ShapeExtend_MsgRegistrator) _result;
	_result = ((::ShapeProcess_ShapeContext*)_NativeInstance)->Messages();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_MsgRegistrator::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeProcess_ShapeContext::SetDetalisation(Macad::Occt::TopAbs_ShapeEnum level)
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->SetDetalisation((::TopAbs_ShapeEnum)level);
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::ShapeProcess_ShapeContext::GetDetalisation()
{
	return (Macad::Occt::TopAbs_ShapeEnum)((::ShapeProcess_ShapeContext*)_NativeInstance)->GetDetalisation();
}

void Macad::Occt::ShapeProcess_ShapeContext::SetResult(Macad::Occt::TopoDS_Shape^ S)
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->SetResult(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::ShapeProcess_ShapeContext::RecordModification(Macad::Occt::TopTools_DataMapOfShapeShape^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg)
{
	Handle(::ShapeExtend_MsgRegistrator) h_msg = msg->NativeInstance;
	((::ShapeProcess_ShapeContext*)_NativeInstance)->RecordModification(*(::TopTools_DataMapOfShapeShape*)repl->NativeInstance, h_msg);
	msg->NativeInstance = h_msg.get();
}

void Macad::Occt::ShapeProcess_ShapeContext::RecordModification(Macad::Occt::TopTools_DataMapOfShapeShape^ repl)
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->RecordModification(*(::TopTools_DataMapOfShapeShape*)repl->NativeInstance, 0);
}

void Macad::Occt::ShapeProcess_ShapeContext::RecordModification(Macad::Occt::ShapeBuild_ReShape^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg)
{
	Handle(::ShapeBuild_ReShape) h_repl = repl->NativeInstance;
	Handle(::ShapeExtend_MsgRegistrator) h_msg = msg->NativeInstance;
	((::ShapeProcess_ShapeContext*)_NativeInstance)->RecordModification(h_repl, h_msg);
	repl->NativeInstance = h_repl.get();
	msg->NativeInstance = h_msg.get();
}

void Macad::Occt::ShapeProcess_ShapeContext::RecordModification(Macad::Occt::ShapeBuild_ReShape^ repl)
{
	Handle(::ShapeBuild_ReShape) h_repl = repl->NativeInstance;
	((::ShapeProcess_ShapeContext*)_NativeInstance)->RecordModification(h_repl);
	repl->NativeInstance = h_repl.get();
}

void Macad::Occt::ShapeProcess_ShapeContext::RecordModification(Macad::Occt::TopoDS_Shape^ sh, Macad::Occt::BRepTools_Modifier^ repl, Macad::Occt::ShapeExtend_MsgRegistrator^ msg)
{
	Handle(::ShapeExtend_MsgRegistrator) h_msg = msg->NativeInstance;
	((::ShapeProcess_ShapeContext*)_NativeInstance)->RecordModification(*(::TopoDS_Shape*)sh->NativeInstance, *(::BRepTools_Modifier*)repl->NativeInstance, h_msg);
	msg->NativeInstance = h_msg.get();
}

void Macad::Occt::ShapeProcess_ShapeContext::RecordModification(Macad::Occt::TopoDS_Shape^ sh, Macad::Occt::BRepTools_Modifier^ repl)
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->RecordModification(*(::TopoDS_Shape*)sh->NativeInstance, *(::BRepTools_Modifier*)repl->NativeInstance, 0);
}

void Macad::Occt::ShapeProcess_ShapeContext::AddMessage(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Message_Msg^ msg, Macad::Occt::Message_Gravity gravity)
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->AddMessage(*(::TopoDS_Shape*)S->NativeInstance, *(::Message_Msg*)msg->NativeInstance, (::Message_Gravity)gravity);
}

void Macad::Occt::ShapeProcess_ShapeContext::AddMessage(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Message_Msg^ msg)
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->AddMessage(*(::TopoDS_Shape*)S->NativeInstance, *(::Message_Msg*)msg->NativeInstance, Message_Warning);
}

bool Macad::Occt::ShapeProcess_ShapeContext::GetContinuity(System::String^ param, Macad::Occt::GeomAbs_Shape% val)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	pin_ptr<Macad::Occt::GeomAbs_Shape> pp_val = &val;
	return ((::ShapeProcess_ShapeContext*)_NativeInstance)->GetContinuity(sz_param, *(::GeomAbs_Shape*)pp_val);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ShapeProcess_ShapeContext::ContinuityVal(System::String^ param, Macad::Occt::GeomAbs_Shape def)
{
	const char* sz_param = (char*)(void*)Marshal::StringToHGlobalAnsi(param);
	return (Macad::Occt::GeomAbs_Shape)((::ShapeProcess_ShapeContext*)_NativeInstance)->ContinuityVal(sz_param, (::GeomAbs_Shape)def);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_param);
}

void Macad::Occt::ShapeProcess_ShapeContext::PrintStatistics()
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->PrintStatistics();
}

void Macad::Occt::ShapeProcess_ShapeContext::SetNonManifold(bool theNonManifold)
{
	((::ShapeProcess_ShapeContext*)_NativeInstance)->SetNonManifold(theNonManifold);
}

bool Macad::Occt::ShapeProcess_ShapeContext::IsNonManifold()
{
	return ((::ShapeProcess_ShapeContext*)_NativeInstance)->IsNonManifold();
}


Macad::Occt::ShapeProcess_ShapeContext^ Macad::Occt::ShapeProcess_ShapeContext::CreateDowncasted(::ShapeProcess_ShapeContext* instance)
{
	return gcnew Macad::Occt::ShapeProcess_ShapeContext( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeProcess_UOperator
//---------------------------------------------------------------------

Macad::Occt::ShapeProcess_UOperator::ShapeProcess_UOperator(Macad::Occt::ShapeProcess_UOperator^ parameter1)
	: Macad::Occt::ShapeProcess_Operator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeProcess_UOperator(*(::ShapeProcess_UOperator*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeProcess_UOperator::Perform(Macad::Occt::ShapeProcess_Context^ context)
{
	Handle(::ShapeProcess_Context) h_context = context->NativeInstance;
	return ((::ShapeProcess_UOperator*)_NativeInstance)->Perform(h_context);
	context->NativeInstance = h_context.get();
}


Macad::Occt::ShapeProcess_UOperator^ Macad::Occt::ShapeProcess_UOperator::CreateDowncasted(::ShapeProcess_UOperator* instance)
{
	return gcnew Macad::Occt::ShapeProcess_UOperator( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeProcess_OperLibrary
//---------------------------------------------------------------------

Macad::Occt::ShapeProcess_OperLibrary::ShapeProcess_OperLibrary()
	: BaseClass<::ShapeProcess_OperLibrary>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeProcess_OperLibrary();
}

Macad::Occt::ShapeProcess_OperLibrary::ShapeProcess_OperLibrary(Macad::Occt::ShapeProcess_OperLibrary^ parameter1)
	: BaseClass<::ShapeProcess_OperLibrary>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeProcess_OperLibrary(*(::ShapeProcess_OperLibrary*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeProcess_OperLibrary::Init()
{
	::ShapeProcess_OperLibrary::Init();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcess_OperLibrary::ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map, Macad::Occt::ShapeExtend_MsgRegistrator^ msg, bool theMutableInput)
{
	Handle(::ShapeProcess_ShapeContext) h_context = context->NativeInstance;
	Handle(::BRepTools_Modification) h_M = M->NativeInstance;
	Handle(::ShapeExtend_MsgRegistrator) h_msg = msg->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeProcess_OperLibrary::ApplyModifier(*(::TopoDS_Shape*)S->NativeInstance, h_context, h_M, *(::TopTools_DataMapOfShapeShape*)map->NativeInstance, h_msg, theMutableInput);
	context->NativeInstance = h_context.get();
	M->NativeInstance = h_M.get();
	msg->NativeInstance = h_msg.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcess_OperLibrary::ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map, Macad::Occt::ShapeExtend_MsgRegistrator^ msg)
{
	Handle(::ShapeProcess_ShapeContext) h_context = context->NativeInstance;
	Handle(::BRepTools_Modification) h_M = M->NativeInstance;
	Handle(::ShapeExtend_MsgRegistrator) h_msg = msg->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeProcess_OperLibrary::ApplyModifier(*(::TopoDS_Shape*)S->NativeInstance, h_context, h_M, *(::TopTools_DataMapOfShapeShape*)map->NativeInstance, h_msg, false);
	context->NativeInstance = h_context.get();
	M->NativeInstance = h_M.get();
	msg->NativeInstance = h_msg.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcess_OperLibrary::ApplyModifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::ShapeProcess_ShapeContext^ context, Macad::Occt::BRepTools_Modification^ M, Macad::Occt::TopTools_DataMapOfShapeShape^ map)
{
	Handle(::ShapeProcess_ShapeContext) h_context = context->NativeInstance;
	Handle(::BRepTools_Modification) h_M = M->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeProcess_OperLibrary::ApplyModifier(*(::TopoDS_Shape*)S->NativeInstance, h_context, h_M, *(::TopTools_DataMapOfShapeShape*)map->NativeInstance, 0, false);
	context->NativeInstance = h_context.get();
	M->NativeInstance = h_M.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  ShapeProcess
//---------------------------------------------------------------------

Macad::Occt::ShapeProcess::ShapeProcess()
	: BaseClass<::ShapeProcess>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeProcess();
}

Macad::Occt::ShapeProcess::ShapeProcess(Macad::Occt::ShapeProcess^ parameter1)
	: BaseClass<::ShapeProcess>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeProcess(*(::ShapeProcess*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeProcess::RegisterOperator(System::String^ name, Macad::Occt::ShapeProcess_Operator^ op)
{
	const char* sz_name = (char*)(void*)Marshal::StringToHGlobalAnsi(name);
	Handle(::ShapeProcess_Operator) h_op = op->NativeInstance;
	return ::ShapeProcess::RegisterOperator(sz_name, h_op);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_name);
	op->NativeInstance = h_op.get();
}

bool Macad::Occt::ShapeProcess::FindOperator(System::String^ name, Macad::Occt::ShapeProcess_Operator^ op)
{
	const char* sz_name = (char*)(void*)Marshal::StringToHGlobalAnsi(name);
	Handle(::ShapeProcess_Operator) h_op = op->NativeInstance;
	return ::ShapeProcess::FindOperator(sz_name, h_op);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_name);
	op->NativeInstance = h_op.get();
}

bool Macad::Occt::ShapeProcess::Perform(Macad::Occt::ShapeProcess_Context^ context, System::String^ seq)
{
	Handle(::ShapeProcess_Context) h_context = context->NativeInstance;
	const char* sz_seq = (char*)(void*)Marshal::StringToHGlobalAnsi(seq);
	return ::ShapeProcess::Perform(h_context, sz_seq);
	context->NativeInstance = h_context.get();
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_seq);
}



