// Generated wrapper code for package ShapeProcessAPI

#include "OcctPCH.h"
#include "ShapeProcessAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "ShapeProcessAPI.h"
#include "ShapeProcess.h"
#include "TopoDS.h"
#include "TopAbs.h"
#include "Message.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  ShapeProcessAPI_ApplySequence
//---------------------------------------------------------------------

Macad::Occt::ShapeProcessAPI_ApplySequence::ShapeProcessAPI_ApplySequence(System::String^ rscName, System::String^ seqName)
	: BaseClass<::ShapeProcessAPI_ApplySequence>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_rscName = (char*)(void*)Marshal::StringToHGlobalAnsi(rscName);
	const char* sz_seqName = (char*)(void*)Marshal::StringToHGlobalAnsi(seqName);
	_NativeInstance = new ::ShapeProcessAPI_ApplySequence(sz_rscName, sz_seqName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_rscName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_seqName);
}

Macad::Occt::ShapeProcessAPI_ApplySequence::ShapeProcessAPI_ApplySequence(System::String^ rscName)
	: BaseClass<::ShapeProcessAPI_ApplySequence>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_rscName = (char*)(void*)Marshal::StringToHGlobalAnsi(rscName);
	_NativeInstance = new ::ShapeProcessAPI_ApplySequence(sz_rscName, "");
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_rscName);
}

Macad::Occt::ShapeProcessAPI_ApplySequence::ShapeProcessAPI_ApplySequence(Macad::Occt::ShapeProcessAPI_ApplySequence^ parameter1)
	: BaseClass<::ShapeProcessAPI_ApplySequence>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeProcessAPI_ApplySequence(*(::ShapeProcessAPI_ApplySequence*)parameter1->NativeInstance);
}

Macad::Occt::ShapeProcess_ShapeContext^ Macad::Occt::ShapeProcessAPI_ApplySequence::Context()
{
	Handle(::ShapeProcess_ShapeContext) _result;
	_result = ((::ShapeProcessAPI_ApplySequence*)_NativeInstance)->Context();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeProcess_ShapeContext::CreateDowncasted( _result.get());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcessAPI_ApplySequence::PrepareShape(Macad::Occt::TopoDS_Shape^ shape, bool fillmap, Macad::Occt::TopAbs_ShapeEnum until, Macad::Occt::Message_ProgressRange^ theProgress)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeProcessAPI_ApplySequence*)_NativeInstance)->PrepareShape(*(::TopoDS_Shape*)shape->NativeInstance, fillmap, (::TopAbs_ShapeEnum)until, *(::Message_ProgressRange*)theProgress->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcessAPI_ApplySequence::PrepareShape(Macad::Occt::TopoDS_Shape^ shape, bool fillmap, Macad::Occt::TopAbs_ShapeEnum until)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeProcessAPI_ApplySequence*)_NativeInstance)->PrepareShape(*(::TopoDS_Shape*)shape->NativeInstance, fillmap, (::TopAbs_ShapeEnum)until, ::Message_ProgressRange());
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcessAPI_ApplySequence::PrepareShape(Macad::Occt::TopoDS_Shape^ shape, bool fillmap)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeProcessAPI_ApplySequence*)_NativeInstance)->PrepareShape(*(::TopoDS_Shape*)shape->NativeInstance, fillmap, TopAbs_SHAPE, ::Message_ProgressRange());
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeProcessAPI_ApplySequence::PrepareShape(Macad::Occt::TopoDS_Shape^ shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeProcessAPI_ApplySequence*)_NativeInstance)->PrepareShape(*(::TopoDS_Shape*)shape->NativeInstance, false, TopAbs_SHAPE, ::Message_ProgressRange());
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::ShapeProcessAPI_ApplySequence::ClearMap()
{
	((::ShapeProcessAPI_ApplySequence*)_NativeInstance)->ClearMap();
}

Macad::Occt::TopTools_DataMapOfShapeShape^ Macad::Occt::ShapeProcessAPI_ApplySequence::Map()
{
	::TopTools_DataMapOfShapeShape* _result = new ::TopTools_DataMapOfShapeShape();
	*_result =  (::TopTools_DataMapOfShapeShape)((::ShapeProcessAPI_ApplySequence*)_NativeInstance)->Map();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeShape(_result);
}

void Macad::Occt::ShapeProcessAPI_ApplySequence::PrintPreparationResult()
{
	((::ShapeProcessAPI_ApplySequence*)_NativeInstance)->PrintPreparationResult();
}



