// Generated wrapper code for package BRepAlgoAPI

#include "OcctPCH.h"
#include "BRepAlgoAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "TopTools.h"
#include "BOPAlgo.h"
#include "Message.h"
#include "BRepTools.h"
#include "gp.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Algo
//---------------------------------------------------------------------

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepAlgoAPI_Algo::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepAlgoAPI_Algo*)_NativeInstance)->Shape();
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

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetArguments(Macad::Occt::TopTools_ListOfShape^ theLS)
{
    ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetArguments(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::Arguments()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Arguments();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetNonDestructive(bool theFlag)
{
    ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetNonDestructive(theFlag);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::NonDestructive()
{
    bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->NonDestructive();
    return _result;
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetGlue(Macad::Occt::BOPAlgo_GlueEnum theGlue)
{
    ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetGlue((::BOPAlgo_GlueEnum)theGlue);
}

Macad::Occt::BOPAlgo_GlueEnum Macad::Occt::BRepAlgoAPI_BuilderAlgo::Glue()
{
    ::BOPAlgo_GlueEnum _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Glue();
    return (Macad::Occt::BOPAlgo_GlueEnum)_result;
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetCheckInverted(bool theCheck)
{
    ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetCheckInverted(theCheck);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::CheckInverted()
{
    bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->CheckInverted();
    return _result;
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::Build()
{
    ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Build(::Message_ProgressRange());
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
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::Generated(Macad::Occt::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::IsDeleted(Macad::Occt::TopoDS_Shape^ aS)
{
    bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)aS->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::HasModified()
{
    bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasModified();
    return _result;
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::HasGenerated()
{
    bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasGenerated();
    return _result;
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::HasDeleted()
{
    bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasDeleted();
    return _result;
}

void Macad::Occt::BRepAlgoAPI_BuilderAlgo::SetToFillHistory(bool theHistFlag)
{
    ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetToFillHistory(theHistFlag);
}

bool Macad::Occt::BRepAlgoAPI_BuilderAlgo::HasHistory()
{
    bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasHistory();
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::SectionEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SectionEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::BOPAlgo_Builder^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::Builder()
{
    const ::BOPAlgo_Builder* _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Builder();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BOPAlgo_Builder((::BOPAlgo_Builder*)_result);
}

Macad::Occt::BRepTools_History^ Macad::Occt::BRepAlgoAPI_BuilderAlgo::History()
{
    Handle(::BRepTools_History) _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->History();
    return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_History::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BooleanOperation
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_BooleanOperation::BRepAlgoAPI_BooleanOperation()
    : Macad::Occt::BRepAlgoAPI_BuilderAlgo(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_BooleanOperation();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepAlgoAPI_BooleanOperation::Shape1()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Shape1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepAlgoAPI_BooleanOperation::Shape2()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Shape2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepAlgoAPI_BooleanOperation::SetTools(Macad::Occt::TopTools_ListOfShape^ theLS)
{
    ((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->SetTools(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_BooleanOperation::Tools()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Tools();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepAlgoAPI_BooleanOperation::SetOperation(Macad::Occt::BOPAlgo_Operation theBOP)
{
    ((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->SetOperation((::BOPAlgo_Operation)theBOP);
}

Macad::Occt::BOPAlgo_Operation Macad::Occt::BRepAlgoAPI_BooleanOperation::Operation()
{
    ::BOPAlgo_Operation _result = ((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Operation();
    return (Macad::Occt::BOPAlgo_Operation)_result;
}

void Macad::Occt::BRepAlgoAPI_BooleanOperation::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_BooleanOperation::Build()
{
    ((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Build(::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Check
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check()
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check();
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI, Macad::Occt::Message_ProgressRange^ theRange)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, bTestSI, *(::Message_ProgressRange*)theRange->NativeInstance);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, bTestSI, ::Message_ProgressRange());
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS, bool bTestSE)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, true, ::Message_ProgressRange());
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, true, true, ::Message_ProgressRange());
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI, Macad::Occt::Message_ProgressRange^ theRange)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, bTestSI, *(::Message_ProgressRange*)theRange->NativeInstance);
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, bTestSI, ::Message_ProgressRange());
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp, bool bTestSE)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, true, ::Message_ProgressRange());
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::BOPAlgo_Operation theOp)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, true, true, ::Message_ProgressRange());
}

Macad::Occt::BRepAlgoAPI_Check::BRepAlgoAPI_Check(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2)
    : Macad::Occt::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, BOPAlgo_UNKNOWN, true, true, ::Message_ProgressRange());
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

void Macad::Occt::BRepAlgoAPI_Check::Perform(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepAlgoAPI_Check*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Check::Perform()
{
    ((::BRepAlgoAPI_Check*)_NativeInstance)->Perform(::Message_ProgressRange());
}

bool Macad::Occt::BRepAlgoAPI_Check::IsValid()
{
    bool _result = ((::BRepAlgoAPI_Check*)_NativeInstance)->IsValid();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Common
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Common::BRepAlgoAPI_Common()
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Common();
}

Macad::Occt::BRepAlgoAPI_Common::BRepAlgoAPI_Common(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Common(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(::Message_ProgressRange*)theRange->NativeInstance);
}

Macad::Occt::BRepAlgoAPI_Common::BRepAlgoAPI_Common(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Common(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, ::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Cut
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut()
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Cut();
}

Macad::Occt::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Cut(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(::Message_ProgressRange*)theRange->NativeInstance);
}

Macad::Occt::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Cut(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, ::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Defeaturing
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Defeaturing::BRepAlgoAPI_Defeaturing()
    : Macad::Occt::BRepAlgoAPI_Algo(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Defeaturing();
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::SetShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->SetShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepAlgoAPI_Defeaturing::InputShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->InputShape();
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
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->FacesToRemove();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::Build()
{
    ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Build(::Message_ProgressRange());
}

void Macad::Occt::BRepAlgoAPI_Defeaturing::SetToFillHistory(bool theFlag)
{
    ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->SetToFillHistory(theFlag);
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::HasHistory()
{
    bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasHistory();
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_Defeaturing::Modified(Macad::Occt::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_Defeaturing::Generated(Macad::Occt::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::IsDeleted(Macad::Occt::TopoDS_Shape^ theS)
{
    bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::HasModified()
{
    bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasModified();
    return _result;
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::HasGenerated()
{
    bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasGenerated();
    return _result;
}

bool Macad::Occt::BRepAlgoAPI_Defeaturing::HasDeleted()
{
    bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasDeleted();
    return _result;
}

Macad::Occt::BRepTools_History^ Macad::Occt::BRepAlgoAPI_Defeaturing::History()
{
    Handle(::BRepTools_History) _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->History();
    return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_History::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Fuse
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse()
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Fuse();
}

Macad::Occt::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Message_ProgressRange^ theRange)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Fuse(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(::Message_ProgressRange*)theRange->NativeInstance);
}

Macad::Occt::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Fuse(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, ::Message_ProgressRange());
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
    _NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, Handle(::Geom_Surface)(Sf->NativeInstance), PerformNow);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::Geom_Surface^ Sf)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, Handle(::Geom_Surface)(Sf->NativeInstance), true);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf, Macad::Occt::TopoDS_Shape^ S2, bool PerformNow)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Section(Handle(::Geom_Surface)(Sf->NativeInstance), *(::TopoDS_Shape*)S2->NativeInstance, PerformNow);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf, Macad::Occt::TopoDS_Shape^ S2)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Section(Handle(::Geom_Surface)(Sf->NativeInstance), *(::TopoDS_Shape*)S2->NativeInstance, true);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf1, Macad::Occt::Geom_Surface^ Sf2, bool PerformNow)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Section(Handle(::Geom_Surface)(Sf1->NativeInstance), Handle(::Geom_Surface)(Sf2->NativeInstance), PerformNow);
}

Macad::Occt::BRepAlgoAPI_Section::BRepAlgoAPI_Section(Macad::Occt::Geom_Surface^ Sf1, Macad::Occt::Geom_Surface^ Sf2)
    : Macad::Occt::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Section(Handle(::Geom_Surface)(Sf1->NativeInstance), Handle(::Geom_Surface)(Sf2->NativeInstance), true);
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
    ((::BRepAlgoAPI_Section*)_NativeInstance)->Init1(Handle(::Geom_Surface)(Sf->NativeInstance));
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
    ((::BRepAlgoAPI_Section*)_NativeInstance)->Init2(Handle(::Geom_Surface)(Sf->NativeInstance));
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

void Macad::Occt::BRepAlgoAPI_Section::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepAlgoAPI_Section*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Section::Build()
{
    ((::BRepAlgoAPI_Section*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool Macad::Occt::BRepAlgoAPI_Section::HasAncestorFaceOn1(Macad::Occt::TopoDS_Shape^ E, Macad::Occt::TopoDS_Shape^ F)
{
    bool _result = ((::BRepAlgoAPI_Section*)_NativeInstance)->HasAncestorFaceOn1(*(::TopoDS_Shape*)E->NativeInstance, *(::TopoDS_Shape*)F->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepAlgoAPI_Section::HasAncestorFaceOn2(Macad::Occt::TopoDS_Shape^ E, Macad::Occt::TopoDS_Shape^ F)
{
    bool _result = ((::BRepAlgoAPI_Section*)_NativeInstance)->HasAncestorFaceOn2(*(::TopoDS_Shape*)E->NativeInstance, *(::TopoDS_Shape*)F->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Splitter
//---------------------------------------------------------------------

Macad::Occt::BRepAlgoAPI_Splitter::BRepAlgoAPI_Splitter()
    : Macad::Occt::BRepAlgoAPI_BuilderAlgo(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAlgoAPI_Splitter();
}

void Macad::Occt::BRepAlgoAPI_Splitter::SetTools(Macad::Occt::TopTools_ListOfShape^ theLS)
{
    ((::BRepAlgoAPI_Splitter*)_NativeInstance)->SetTools(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepAlgoAPI_Splitter::Tools()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_Splitter*)_NativeInstance)->Tools();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepAlgoAPI_Splitter::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepAlgoAPI_Splitter*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepAlgoAPI_Splitter::Build()
{
    ((::BRepAlgoAPI_Splitter*)_NativeInstance)->Build(::Message_ProgressRange());
}


