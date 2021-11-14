// Generated wrapper code for package BOPAlgo

#include "OcctPCH.h"
#include "BOPAlgo.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "BOPAlgo.h"
#include "BRepAlgoAPI.h"
#include "NCollection.h"
#include "Message.h"
#include "Standard.h"
#include "TopoDS.h"
#include "TopTools.h"
#include "BRepTools.h"
#include "TopAbs.h"
#include "BRepFeat.h"
#include "Bnd.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  BOPAlgo_Options
//---------------------------------------------------------------------

Macad::Occt::BOPAlgo_Options::BOPAlgo_Options()
	: BaseClass<::BOPAlgo_Options>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_Options();
}

Macad::Occt::BOPAlgo_Options::BOPAlgo_Options(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BOPAlgo_Options>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BOPAlgo_Options(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BOPAlgo_Options::BOPAlgo_Options(Macad::Occt::BOPAlgo_Options^ parameter1)
	: BaseClass<::BOPAlgo_Options>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_Options(*(::BOPAlgo_Options*)parameter1->NativeInstance);
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::BOPAlgo_Options::Allocator()
{
	Handle(::NCollection_BaseAllocator) _result;
	_result = ((::BOPAlgo_Options*)_NativeInstance)->Allocator();
	 return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted( _result.get());
}

void Macad::Occt::BOPAlgo_Options::Clear()
{
	((::BOPAlgo_Options*)_NativeInstance)->Clear();
}

void Macad::Occt::BOPAlgo_Options::AddError(Macad::Occt::Message_Alert^ theAlert)
{
	Handle(::Message_Alert) h_theAlert = theAlert->NativeInstance;
	((::BOPAlgo_Options*)_NativeInstance)->AddError(h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
}

void Macad::Occt::BOPAlgo_Options::AddWarning(Macad::Occt::Message_Alert^ theAlert)
{
	Handle(::Message_Alert) h_theAlert = theAlert->NativeInstance;
	((::BOPAlgo_Options*)_NativeInstance)->AddWarning(h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
}

bool Macad::Occt::BOPAlgo_Options::HasErrors()
{
	return ((::BOPAlgo_Options*)_NativeInstance)->HasErrors();
}

bool Macad::Occt::BOPAlgo_Options::HasWarnings()
{
	return ((::BOPAlgo_Options*)_NativeInstance)->HasWarnings();
}

Macad::Occt::Message_Report^ Macad::Occt::BOPAlgo_Options::GetReport()
{
	Handle(::Message_Report) _result;
	_result = ((::BOPAlgo_Options*)_NativeInstance)->GetReport();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Report::CreateDowncasted( _result.get());
}

void Macad::Occt::BOPAlgo_Options::ClearWarnings()
{
	((::BOPAlgo_Options*)_NativeInstance)->ClearWarnings();
}

bool Macad::Occt::BOPAlgo_Options::GetParallelMode()
{
	return ::BOPAlgo_Options::GetParallelMode();
}

void Macad::Occt::BOPAlgo_Options::SetParallelMode(bool theNewMode)
{
	::BOPAlgo_Options::SetParallelMode(theNewMode);
}

void Macad::Occt::BOPAlgo_Options::SetRunParallel(bool theFlag)
{
	((::BOPAlgo_Options*)_NativeInstance)->SetRunParallel(theFlag);
}

bool Macad::Occt::BOPAlgo_Options::RunParallel()
{
	return ((::BOPAlgo_Options*)_NativeInstance)->RunParallel();
}

void Macad::Occt::BOPAlgo_Options::SetFuzzyValue(double theFuzz)
{
	((::BOPAlgo_Options*)_NativeInstance)->SetFuzzyValue(theFuzz);
}

double Macad::Occt::BOPAlgo_Options::FuzzyValue()
{
	return ((::BOPAlgo_Options*)_NativeInstance)->FuzzyValue();
}

void Macad::Occt::BOPAlgo_Options::SetUseOBB(bool theUseOBB)
{
	((::BOPAlgo_Options*)_NativeInstance)->SetUseOBB(theUseOBB);
}

bool Macad::Occt::BOPAlgo_Options::UseOBB()
{
	return ((::BOPAlgo_Options*)_NativeInstance)->UseOBB();
}




//---------------------------------------------------------------------
//  Class  BOPAlgo_Algo
//---------------------------------------------------------------------

Macad::Occt::BOPAlgo_Algo::BOPAlgo_Algo(Macad::Occt::BOPAlgo_Algo^ parameter1)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::BOPAlgo_Algo::Perform(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BOPAlgo_Algo*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BOPAlgo_Algo::Perform()
{
	((::BOPAlgo_Algo*)_NativeInstance)->Perform(::Message_ProgressRange());
}




//---------------------------------------------------------------------
//  Class  BOPAlgo_BuilderShape
//---------------------------------------------------------------------

Macad::Occt::BOPAlgo_BuilderShape::BOPAlgo_BuilderShape(Macad::Occt::BOPAlgo_BuilderShape^ parameter1)
	: Macad::Occt::BOPAlgo_Algo(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BOPAlgo_BuilderShape::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BOPAlgo_BuilderShape*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BOPAlgo_BuilderShape::Modified(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BOPAlgo_BuilderShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BOPAlgo_BuilderShape::Generated(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BOPAlgo_BuilderShape*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BOPAlgo_BuilderShape::IsDeleted(Macad::Occt::TopoDS_Shape^ theS)
{
	return ((::BOPAlgo_BuilderShape*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)theS->NativeInstance);
}

bool Macad::Occt::BOPAlgo_BuilderShape::HasModified()
{
	return ((::BOPAlgo_BuilderShape*)_NativeInstance)->HasModified();
}

bool Macad::Occt::BOPAlgo_BuilderShape::HasGenerated()
{
	return ((::BOPAlgo_BuilderShape*)_NativeInstance)->HasGenerated();
}

bool Macad::Occt::BOPAlgo_BuilderShape::HasDeleted()
{
	return ((::BOPAlgo_BuilderShape*)_NativeInstance)->HasDeleted();
}

Macad::Occt::BRepTools_History^ Macad::Occt::BOPAlgo_BuilderShape::History()
{
	Handle(::BRepTools_History) _result;
	_result = ((::BOPAlgo_BuilderShape*)_NativeInstance)->History();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_History::CreateDowncasted( _result.get());
}

void Macad::Occt::BOPAlgo_BuilderShape::SetToFillHistory(bool theHistFlag)
{
	((::BOPAlgo_BuilderShape*)_NativeInstance)->SetToFillHistory(theHistFlag);
}

bool Macad::Occt::BOPAlgo_BuilderShape::HasHistory()
{
	return ((::BOPAlgo_BuilderShape*)_NativeInstance)->HasHistory();
}




//---------------------------------------------------------------------
//  Class  BOPAlgo_Builder
//---------------------------------------------------------------------

Macad::Occt::BOPAlgo_Builder::BOPAlgo_Builder()
	: Macad::Occt::BOPAlgo_BuilderShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_Builder();
}

Macad::Occt::BOPAlgo_Builder::BOPAlgo_Builder(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: Macad::Occt::BOPAlgo_BuilderShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BOPAlgo_Builder(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BOPAlgo_Builder::BOPAlgo_Builder(Macad::Occt::BOPAlgo_Builder^ parameter1)
	: Macad::Occt::BOPAlgo_BuilderShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_Builder(*(::BOPAlgo_Builder*)parameter1->NativeInstance);
}

void Macad::Occt::BOPAlgo_Builder::Clear()
{
	((::BOPAlgo_Builder*)_NativeInstance)->Clear();
}

void Macad::Occt::BOPAlgo_Builder::AddArgument(Macad::Occt::TopoDS_Shape^ theShape)
{
	((::BOPAlgo_Builder*)_NativeInstance)->AddArgument(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::BOPAlgo_Builder::SetArguments(Macad::Occt::TopTools_ListOfShape^ theLS)
{
	((::BOPAlgo_Builder*)_NativeInstance)->SetArguments(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BOPAlgo_Builder::Arguments()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BOPAlgo_Builder*)_NativeInstance)->Arguments();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BOPAlgo_Builder::SetNonDestructive(bool theFlag)
{
	((::BOPAlgo_Builder*)_NativeInstance)->SetNonDestructive(theFlag);
}

bool Macad::Occt::BOPAlgo_Builder::NonDestructive()
{
	return ((::BOPAlgo_Builder*)_NativeInstance)->NonDestructive();
}

void Macad::Occt::BOPAlgo_Builder::SetGlue(Macad::Occt::BOPAlgo_GlueEnum theGlue)
{
	((::BOPAlgo_Builder*)_NativeInstance)->SetGlue((::BOPAlgo_GlueEnum)theGlue);
}

Macad::Occt::BOPAlgo_GlueEnum Macad::Occt::BOPAlgo_Builder::Glue()
{
	return (Macad::Occt::BOPAlgo_GlueEnum)((::BOPAlgo_Builder*)_NativeInstance)->Glue();
}

void Macad::Occt::BOPAlgo_Builder::SetCheckInverted(bool theCheck)
{
	((::BOPAlgo_Builder*)_NativeInstance)->SetCheckInverted(theCheck);
}

bool Macad::Occt::BOPAlgo_Builder::CheckInverted()
{
	return ((::BOPAlgo_Builder*)_NativeInstance)->CheckInverted();
}

void Macad::Occt::BOPAlgo_Builder::Perform(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BOPAlgo_Builder*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BOPAlgo_Builder::Perform()
{
	((::BOPAlgo_Builder*)_NativeInstance)->Perform(::Message_ProgressRange());
}

void Macad::Occt::BOPAlgo_Builder::BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopAbs_State theObjState, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::TopAbs_State theToolsState, Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::Message_Report^ theReport)
{
	((::BOPAlgo_Builder*)_NativeInstance)->BuildBOP(*(::TopTools_ListOfShape*)theObjects->NativeInstance, (::TopAbs_State)theObjState, *(::TopTools_ListOfShape*)theTools->NativeInstance, (::TopAbs_State)theToolsState, *(::Message_ProgressRange*)theRange->NativeInstance, Handle(::Message_Report)(theReport->NativeInstance));
}

void Macad::Occt::BOPAlgo_Builder::BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopAbs_State theObjState, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::TopAbs_State theToolsState, Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BOPAlgo_Builder*)_NativeInstance)->BuildBOP(*(::TopTools_ListOfShape*)theObjects->NativeInstance, (::TopAbs_State)theObjState, *(::TopTools_ListOfShape*)theTools->NativeInstance, (::TopAbs_State)theToolsState, *(::Message_ProgressRange*)theRange->NativeInstance, 0);
}

void Macad::Occt::BOPAlgo_Builder::BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::BOPAlgo_Operation theOperation, Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::Message_Report^ theReport)
{
	((::BOPAlgo_Builder*)_NativeInstance)->BuildBOP(*(::TopTools_ListOfShape*)theObjects->NativeInstance, *(::TopTools_ListOfShape*)theTools->NativeInstance, (::BOPAlgo_Operation)theOperation, *(::Message_ProgressRange*)theRange->NativeInstance, Handle(::Message_Report)(theReport->NativeInstance));
}

void Macad::Occt::BOPAlgo_Builder::BuildBOP(Macad::Occt::TopTools_ListOfShape^ theObjects, Macad::Occt::TopTools_ListOfShape^ theTools, Macad::Occt::BOPAlgo_Operation theOperation, Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BOPAlgo_Builder*)_NativeInstance)->BuildBOP(*(::TopTools_ListOfShape*)theObjects->NativeInstance, *(::TopTools_ListOfShape*)theTools->NativeInstance, (::BOPAlgo_Operation)theOperation, *(::Message_ProgressRange*)theRange->NativeInstance, 0);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BOPAlgo_Builder::Images()
{
	::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
	*_result =  (::TopTools_DataMapOfShapeListOfShape)((::BOPAlgo_Builder*)_NativeInstance)->Images();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BOPAlgo_Builder::Origins()
{
	::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
	*_result =  (::TopTools_DataMapOfShapeListOfShape)((::BOPAlgo_Builder*)_NativeInstance)->Origins();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeShape^ Macad::Occt::BOPAlgo_Builder::ShapesSD()
{
	::TopTools_DataMapOfShapeShape* _result = new ::TopTools_DataMapOfShapeShape();
	*_result =  (::TopTools_DataMapOfShapeShape)((::BOPAlgo_Builder*)_NativeInstance)->ShapesSD();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeShape(_result);
}




//---------------------------------------------------------------------
//  Class  BOPAlgo_ToolsProvider
//---------------------------------------------------------------------

Macad::Occt::BOPAlgo_ToolsProvider::BOPAlgo_ToolsProvider()
	: Macad::Occt::BOPAlgo_Builder(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_ToolsProvider();
}

Macad::Occt::BOPAlgo_ToolsProvider::BOPAlgo_ToolsProvider(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: Macad::Occt::BOPAlgo_Builder(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BOPAlgo_ToolsProvider(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BOPAlgo_ToolsProvider::BOPAlgo_ToolsProvider(Macad::Occt::BOPAlgo_ToolsProvider^ parameter1)
	: Macad::Occt::BOPAlgo_Builder(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_ToolsProvider(*(::BOPAlgo_ToolsProvider*)parameter1->NativeInstance);
}

void Macad::Occt::BOPAlgo_ToolsProvider::Clear()
{
	((::BOPAlgo_ToolsProvider*)_NativeInstance)->Clear();
}

void Macad::Occt::BOPAlgo_ToolsProvider::AddTool(Macad::Occt::TopoDS_Shape^ theShape)
{
	((::BOPAlgo_ToolsProvider*)_NativeInstance)->AddTool(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::BOPAlgo_ToolsProvider::SetTools(Macad::Occt::TopTools_ListOfShape^ theShapes)
{
	((::BOPAlgo_ToolsProvider*)_NativeInstance)->SetTools(*(::TopTools_ListOfShape*)theShapes->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BOPAlgo_ToolsProvider::Tools()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BOPAlgo_ToolsProvider*)_NativeInstance)->Tools();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}




//---------------------------------------------------------------------
//  Class  BOPAlgo_BOP
//---------------------------------------------------------------------

Macad::Occt::BOPAlgo_BOP::BOPAlgo_BOP()
	: Macad::Occt::BOPAlgo_ToolsProvider(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_BOP();
}

Macad::Occt::BOPAlgo_BOP::BOPAlgo_BOP(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: Macad::Occt::BOPAlgo_ToolsProvider(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BOPAlgo_BOP(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BOPAlgo_BOP::BOPAlgo_BOP(Macad::Occt::BOPAlgo_BOP^ parameter1)
	: Macad::Occt::BOPAlgo_ToolsProvider(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_BOP(*(::BOPAlgo_BOP*)parameter1->NativeInstance);
}

void Macad::Occt::BOPAlgo_BOP::Clear()
{
	((::BOPAlgo_BOP*)_NativeInstance)->Clear();
}

void Macad::Occt::BOPAlgo_BOP::SetOperation(Macad::Occt::BOPAlgo_Operation theOperation)
{
	((::BOPAlgo_BOP*)_NativeInstance)->SetOperation((::BOPAlgo_Operation)theOperation);
}

Macad::Occt::BOPAlgo_Operation Macad::Occt::BOPAlgo_BOP::Operation()
{
	return (Macad::Occt::BOPAlgo_Operation)((::BOPAlgo_BOP*)_NativeInstance)->Operation();
}

void Macad::Occt::BOPAlgo_BOP::Perform(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BOPAlgo_BOP*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BOPAlgo_BOP::Perform()
{
	((::BOPAlgo_BOP*)_NativeInstance)->Perform(::Message_ProgressRange());
}




//---------------------------------------------------------------------
//  Class  BOPAlgo_Tools
//---------------------------------------------------------------------

Macad::Occt::BOPAlgo_Tools::BOPAlgo_Tools()
	: BaseClass<::BOPAlgo_Tools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_Tools();
}

Macad::Occt::BOPAlgo_Tools::BOPAlgo_Tools(Macad::Occt::BOPAlgo_Tools^ parameter1)
	: BaseClass<::BOPAlgo_Tools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BOPAlgo_Tools(*(::BOPAlgo_Tools*)parameter1->NativeInstance);
}

int Macad::Occt::BOPAlgo_Tools::EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires, bool theShared, double theAngTol)
{
	return ::BOPAlgo_Tools::EdgesToWires(*(::TopoDS_Shape*)theEdges->NativeInstance, *(::TopoDS_Shape*)theWires->NativeInstance, theShared, theAngTol);
}

int Macad::Occt::BOPAlgo_Tools::EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires, bool theShared)
{
	return ::BOPAlgo_Tools::EdgesToWires(*(::TopoDS_Shape*)theEdges->NativeInstance, *(::TopoDS_Shape*)theWires->NativeInstance, theShared, 1.0E-8);
}

int Macad::Occt::BOPAlgo_Tools::EdgesToWires(Macad::Occt::TopoDS_Shape^ theEdges, Macad::Occt::TopoDS_Shape^ theWires)
{
	return ::BOPAlgo_Tools::EdgesToWires(*(::TopoDS_Shape*)theEdges->NativeInstance, *(::TopoDS_Shape*)theWires->NativeInstance, false, 1.0E-8);
}

bool Macad::Occt::BOPAlgo_Tools::WiresToFaces(Macad::Occt::TopoDS_Shape^ theWires, Macad::Occt::TopoDS_Shape^ theFaces, double theAngTol)
{
	return ::BOPAlgo_Tools::WiresToFaces(*(::TopoDS_Shape*)theWires->NativeInstance, *(::TopoDS_Shape*)theFaces->NativeInstance, theAngTol);
}

bool Macad::Occt::BOPAlgo_Tools::WiresToFaces(Macad::Occt::TopoDS_Shape^ theWires, Macad::Occt::TopoDS_Shape^ theFaces)
{
	return ::BOPAlgo_Tools::WiresToFaces(*(::TopoDS_Shape*)theWires->NativeInstance, *(::TopoDS_Shape*)theFaces->NativeInstance, 1.0E-8);
}

void Macad::Occt::BOPAlgo_Tools::IntersectVertices(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theVertices, double theFuzzyValue, Macad::Occt::TopTools_ListOfListOfShape^ theChains)
{
	::BOPAlgo_Tools::IntersectVertices(*(::TopTools_IndexedDataMapOfShapeReal*)theVertices->NativeInstance, theFuzzyValue, *(::TopTools_ListOfListOfShape*)theChains->NativeInstance);
}

bool Macad::Occt::BOPAlgo_Tools::TrsfToPoint(Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, Macad::Occt::Trsf% theTrsf, Macad::Occt::Pnt thePoint, double theCriteria)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ::BOPAlgo_Tools::TrsfToPoint(*(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, *(gp_Trsf*)pp_theTrsf, *(gp_Pnt*)pp_thePoint, theCriteria);
}

bool Macad::Occt::BOPAlgo_Tools::TrsfToPoint(Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, Macad::Occt::Trsf% theTrsf, Macad::Occt::Pnt thePoint)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ::BOPAlgo_Tools::TrsfToPoint(*(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, *(gp_Trsf*)pp_theTrsf, *(gp_Pnt*)pp_thePoint, 1.0E+5);
}

bool Macad::Occt::BOPAlgo_Tools::TrsfToPoint(Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, Macad::Occt::Trsf% theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ::BOPAlgo_Tools::TrsfToPoint(*(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, *(gp_Trsf*)pp_theTrsf, ::gp_Pnt(0., 0., 0.), 1.0E+5);
}



