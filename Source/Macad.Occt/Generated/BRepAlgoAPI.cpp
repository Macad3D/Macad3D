// Generated wrapper code for package BRepAlgoAPI

#include "OcctPCH.h"
#include "BRepAlgoAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "BRepAlgoAPI.h"
#include "TopoDS.h"
#include "BOPAlgo.h"
#include "TopTools.h"
#include "Standard.h"
#include "BRepTools.h"
#include "gp.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Algo
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Algo::BRepAlgoAPI_Algo(Macad::Occt::BRepAlgoAPI_Algo^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Algo(*(::BRepAlgoAPI_Algo*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepAlgoAPI_Algo::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepAlgoAPI_Algo*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BuilderAlgo
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_BuilderAlgo::BRepAlgoAPI_BuilderAlgo()
	: Macad::Occt::BRepAlgoAPI_Algo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_BuilderAlgo();
}

Macad::Occt::BRepAlgoAPI_BuilderAlgo::BRepAlgoAPI_BuilderAlgo(Macad::Occt::BRepAlgoAPI_BuilderAlgo^ parameter1)
	: Macad::Occt::BRepAlgoAPI_Algo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_BuilderAlgo(*(::BRepAlgoAPI_BuilderAlgo*)parameter1->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetArguments(Macad::Occt::TopTools_ListOfShape^ theLS)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetArguments(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::Arguments()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Arguments();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetNonDestructive(bool theFlag)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetNonDestructive(theFlag);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::NonDestructive()
{
	return ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->NonDestructive();
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetGlue(Macad::Occt::BOPAlgo_GlueEnum theGlue)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetGlue((::BOPAlgo_GlueEnum)theGlue);
}

Macad::Occt::BOPAlgo_GlueEnum Macad::Occt::BRepAlgoAPI_BuilderAlgo::Glue()
{
	return (Macad::Occt::BOPAlgo_GlueEnum)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Glue();
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetCheckInverted(bool theCheck)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetCheckInverted(theCheck);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::CheckInverted()
{
	return ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->CheckInverted();
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::Build()
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Build();
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SimplifyResult(bool theUnifyEdges, bool theUnifyFaces, double theAngularTol)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SimplifyResult(theUnifyEdges, theUnifyFaces, theAngularTol);
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SimplifyResult(bool theUnifyEdges, bool theUnifyFaces)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SimplifyResult(theUnifyEdges, theUnifyFaces, ::Precision::Angular());
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SimplifyResult(bool theUnifyEdges)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SimplifyResult(theUnifyEdges, true, ::Precision::Angular());
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SimplifyResult()
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SimplifyResult(true, true, ::Precision::Angular());
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::Modified(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::Generated(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::IsDeleted(Macad::Occt::TopoDS_Shape^ aS)
{
	return ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)aS->NativeInstance);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::HasModified()
{
	return ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasModified();
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::HasGenerated()
{
	return ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasGenerated();
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::HasDeleted()
{
	return ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasDeleted();
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetToFillHistory(bool theHistFlag)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetToFillHistory(theHistFlag);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::HasHistory()
{
	return ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasHistory();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::SectionEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SectionEdges();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::BRepTools_History^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::History()
{
	Handle(::BRepTools_History) _result;
	_result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->History();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_History::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BooleanOperation
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_BooleanOperation::BRepAlgoAPI_BooleanOperation()
	: Macad::Occt::BRepAlgoAPI_BuilderAlgo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_BooleanOperation();
}

Macad::Occt::BRepAlgoAPI_BooleanOperation::BRepAlgoAPI_BooleanOperation(Macad::Occt::BRepAlgoAPI_BooleanOperation^ parameter1)
	: Macad::Occt::BRepAlgoAPI_BuilderAlgo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_BooleanOperation(*(::BRepAlgoAPI_BooleanOperation*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepAlgoAPI_BooleanOperation::Shape1()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Shape1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepAlgoAPI_BooleanOperation::Shape2()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Shape2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepAlgoAPI_BooleanOperation::SetTools(Macad::Occt::TopTools_ListOfShape^ theLS)
{
	((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->SetTools(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BooleanOperation::Tools()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Tools();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepAlgoAPI_BooleanOperation::SetOperation(Macad::Occt::BOPAlgo_Operation theBOP)
{
	((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->SetOperation((::BOPAlgo_Operation)theBOP);
}

Macad::Occt::BOPAlgo_Operation Macad::Occt::BRepAlgoAPI_BooleanOperation::Operation()
{
	return (Macad::Occt::BOPAlgo_Operation)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Operation();
}

void Macad::Occt::BRepAlgoAPI_BooleanOperation::Build()
{
	((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Build();
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Check
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check()
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check();
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, bTestSI);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, true);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, true, true);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, bTestSI);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, true);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, true, true);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, BOPAlgo_UNKNOWN, true, true);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::BRepAlgoAPI_Check^ parameter1)
	: Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::BRepAlgoAPI_Check*)parameter1->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Check::SetData(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, bTestSI);
}

void Macad::Occt::BRepAlgoAPI_Check::SetData(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, true);
}

void Macad::Occt::BRepAlgoAPI_Check::SetData(Macad::Occt::TopoDS_Shape^ theS)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS->NativeInstance, true, true);
}

void Macad::Occt::BRepAlgoAPI_Check::SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, bTestSI);
}

void Macad::Occt::BRepAlgoAPI_Check::SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, true);
}

void Macad::Occt::BRepAlgoAPI_Check::SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, true, true);
}

void Macad::Occt::BRepAlgoAPI_Check::SetData(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, BOPAlgo_UNKNOWN, true, true);
}

void Macad::Occt::BRepAlgoAPI_Check::Perform()
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepAlgoAPI_Check::IsValid()
{
	return ((::BRepAlgoAPI_Check*)_NativeInstance)->IsValid();
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Common
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Common::BRepAlgoAPI_Common()
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Common();
}

Macad::Occt::BRepAlgoAPI_Common::BRepAlgoAPI_Common(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Common(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

Macad::Occt::BRepAlgoAPI_Common::BRepAlgoAPI_Common(Macad::Occt::BRepAlgoAPI_Common^ parameter1)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Common(*(::BRepAlgoAPI_Common*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Cut
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut()
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Cut();
}

Macad::Occt::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Cut(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

Macad::Occt::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut(Macad::Occt::BRepAlgoAPI_Cut^ parameter1)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Cut(*(::BRepAlgoAPI_Cut*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Defeaturing
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Defeaturing::BRepAlgoAPI_Defeaturing()
	: Macad::Occt::BRepAlgoAPI_Algo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Defeaturing();
}

Macad::Occt::BRepAlgoAPI_Defeaturing::BRepAlgoAPI_Defeaturing(Macad::Occt::BRepAlgoAPI_Defeaturing^ parameter1)
	: Macad::Occt::BRepAlgoAPI_Algo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Defeaturing(*(::BRepAlgoAPI_Defeaturing*)parameter1->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::SetShape(Macad::Occt::TopoDS_Shape^ theShape)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->SetShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepAlgoAPI_Defeaturing::InputShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->InputShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::AddFaceToRemove(Macad::Occt::TopoDS_Shape^ theFace)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->AddFaceToRemove(*(::TopoDS_Shape*)theFace->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::AddFacesToRemove(Macad::Occt::TopTools_ListOfShape^ theFaces)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->AddFacesToRemove(*(::TopTools_ListOfShape*)theFaces->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_Defeaturing::FacesToRemove()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->FacesToRemove();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::Build()
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Build();
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::SetToFillHistory(bool theFlag)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->SetToFillHistory(theFlag);
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::HasHistory()
{
	return ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasHistory();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_Defeaturing::Modified(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_Defeaturing::Generated(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::IsDeleted(Macad::Occt::TopoDS_Shape^ theS)
{
	return ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)theS->NativeInstance);
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::HasModified()
{
	return ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasModified();
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::HasGenerated()
{
	return ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasGenerated();
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::HasDeleted()
{
	return ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasDeleted();
}

Macad::Occt::BRepTools_History^ Macad::Occt::BRepAlgoAPI_Defeaturing::History()
{
	Handle(::BRepTools_History) _result;
	_result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->History();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_History::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Fuse
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse()
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Fuse();
}

Macad::Occt::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Fuse(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

Macad::Occt::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse(Macad::Occt::BRepAlgoAPI_Fuse^ parameter1)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Fuse(*(::BRepAlgoAPI_Fuse*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Section
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section()
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section();
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, bool PerformNow)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, PerformNow);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, true);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Pln Pl, bool PerformNow)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, *(gp_Pln*)pp_Pl, PerformNow);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Pln Pl)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, *(gp_Pln*)pp_Pl, true);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Geom_Surface^ Sf, bool PerformNow)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_Sf = Sf->NativeInstance;
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, h_Sf, PerformNow);
	Sf->NativeInstance = h_Sf.get();
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Geom_Surface^ Sf)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_Sf = Sf->NativeInstance;
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, h_Sf, true);
	Sf->NativeInstance = h_Sf.get();
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf, Macad::Occt::TopoDS_Shape^ S2, bool PerformNow)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_Sf = Sf->NativeInstance;
	_NativeInstance = new ::BRepAlgoAPI_Section(h_Sf, *(::TopoDS_Shape*)S2->NativeInstance, PerformNow);
	Sf->NativeInstance = h_Sf.get();
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf, Macad::Occt::TopoDS_Shape^ S2)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_Sf = Sf->NativeInstance;
	_NativeInstance = new ::BRepAlgoAPI_Section(h_Sf, *(::TopoDS_Shape*)S2->NativeInstance, true);
	Sf->NativeInstance = h_Sf.get();
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf1, Macad::Occt::Geom_Surface^ Sf2, bool PerformNow)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_Sf1 = Sf1->NativeInstance;
	Handle(::Geom_Surface) h_Sf2 = Sf2->NativeInstance;
	_NativeInstance = new ::BRepAlgoAPI_Section(h_Sf1, h_Sf2, PerformNow);
	Sf1->NativeInstance = h_Sf1.get();
	Sf2->NativeInstance = h_Sf2.get();
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf1, Macad::Occt::Geom_Surface^ Sf2)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_Sf1 = Sf1->NativeInstance;
	Handle(::Geom_Surface) h_Sf2 = Sf2->NativeInstance;
	_NativeInstance = new ::BRepAlgoAPI_Section(h_Sf1, h_Sf2, true);
	Sf1->NativeInstance = h_Sf1.get();
	Sf2->NativeInstance = h_Sf2.get();
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::BRepAlgoAPI_Section^ parameter1)
	: Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::BRepAlgoAPI_Section*)parameter1->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Section::Init1(Macad::Occt::TopoDS_Shape^ S1)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init1(*(::TopoDS_Shape*)S1->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Section::Init1(Macad::Occt::Pln Pl)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init1(*(gp_Pln*)pp_Pl);
}

void Macad::Occt::BRepAlgoAPI_Section::Init1(Macad::Occt::Geom_Surface^ Sf)
{
	Handle(::Geom_Surface) h_Sf = Sf->NativeInstance;
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init1(h_Sf);
	Sf->NativeInstance = h_Sf.get();
}

void Macad::Occt::BRepAlgoAPI_Section::Init2(Macad::Occt::TopoDS_Shape^ S2)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init2(*(::TopoDS_Shape*)S2->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Section::Init2(Macad::Occt::Pln Pl)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init2(*(gp_Pln*)pp_Pl);
}

void Macad::Occt::BRepAlgoAPI_Section::Init2(Macad::Occt::Geom_Surface^ Sf)
{
	Handle(::Geom_Surface) h_Sf = Sf->NativeInstance;
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init2(h_Sf);
	Sf->NativeInstance = h_Sf.get();
}

void Macad::Occt::BRepAlgoAPI_Section::Approximation(bool B)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Approximation(B);
}

void Macad::Occt::BRepAlgoAPI_Section::ComputePCurveOn1(bool B)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->ComputePCurveOn1(B);
}

void Macad::Occt::BRepAlgoAPI_Section::ComputePCurveOn2(bool B)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->ComputePCurveOn2(B);
}

void Macad::Occt::BRepAlgoAPI_Section::Build()
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Build();
}

bool Macad::Occt::BRepAlgoAPI_Section::HasAncestorFaceOn1(Macad::Occt::TopoDS_Shape^ E, Macad::Occt::TopoDS_Shape^ F)
{
	return ((::BRepAlgoAPI_Section*)_NativeInstance)->HasAncestorFaceOn1(*(::TopoDS_Shape*)E->NativeInstance, *(::TopoDS_Shape*)F->NativeInstance);
}

bool Macad::Occt::BRepAlgoAPI_Section::HasAncestorFaceOn2(Macad::Occt::TopoDS_Shape^ E, Macad::Occt::TopoDS_Shape^ F)
{
	return ((::BRepAlgoAPI_Section*)_NativeInstance)->HasAncestorFaceOn2(*(::TopoDS_Shape*)E->NativeInstance, *(::TopoDS_Shape*)F->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Splitter
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Splitter::BRepAlgoAPI_Splitter()
	: Macad::Occt::BRepAlgoAPI_BuilderAlgo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Splitter();
}

Macad::Occt::BRepAlgoAPI_Splitter::BRepAlgoAPI_Splitter(Macad::Occt::BRepAlgoAPI_Splitter^ parameter1)
	: Macad::Occt::BRepAlgoAPI_BuilderAlgo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Splitter(*(::BRepAlgoAPI_Splitter*)parameter1->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Splitter::SetTools(Macad::Occt::TopTools_ListOfShape^ theLS)
{
	((::BRepAlgoAPI_Splitter*)_NativeInstance)->SetTools(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_Splitter::Tools()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepAlgoAPI_Splitter*)_NativeInstance)->Tools();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepAlgoAPI_Splitter::Build()
{
	((::BRepAlgoAPI_Splitter*)_NativeInstance)->Build();
}



