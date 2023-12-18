// Generated wrapper code for package TopExp

#include "OcctPCH.h"
#include "TopExp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "TopAbs.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  TopExp
//---------------------------------------------------------------------

Macad::Occt::TopExp::TopExp()
    : Macad::Occt::BaseClass<::TopExp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopExp();
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopTools_IndexedMapOfShape^ M)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)T, *(::TopTools_IndexedMapOfShape*)M->NativeInstance);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M, bool cumOri, bool cumLoc)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance, cumOri, cumLoc);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M, bool cumOri)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance, cumOri, true);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance, true, true);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ M, bool cumOri, bool cumLoc)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_MapOfShape*)M->NativeInstance, cumOri, cumLoc);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ M, bool cumOri)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_MapOfShape*)M->NativeInstance, cumOri, true);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ M)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_MapOfShape*)M->NativeInstance, true, true);
}

void Macad::Occt::TopExp::MapShapesAndAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M)
{
    ::TopExp::MapShapesAndAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance);
}

void Macad::Occt::TopExp::MapShapesAndUniqueAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M, bool useOrientation)
{
    ::TopExp::MapShapesAndUniqueAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance, useOrientation);
}

void Macad::Occt::TopExp::MapShapesAndUniqueAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M)
{
    ::TopExp::MapShapesAndUniqueAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance, false);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopExp::FirstVertex(Macad::Occt::TopoDS_Edge^ E, bool CumOri)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::TopExp::FirstVertex(*(::TopoDS_Edge*)E->NativeInstance, CumOri);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopExp::FirstVertex(Macad::Occt::TopoDS_Edge^ E)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::TopExp::FirstVertex(*(::TopoDS_Edge*)E->NativeInstance, false);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopExp::LastVertex(Macad::Occt::TopoDS_Edge^ E, bool CumOri)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::TopExp::LastVertex(*(::TopoDS_Edge*)E->NativeInstance, CumOri);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopExp::LastVertex(Macad::Occt::TopoDS_Edge^ E)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::TopExp::LastVertex(*(::TopoDS_Edge*)E->NativeInstance, false);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

void Macad::Occt::TopExp::Vertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast, bool CumOri)
{
    ::TopExp::Vertices(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance, CumOri);
}

void Macad::Occt::TopExp::Vertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast)
{
    ::TopExp::Vertices(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance, false);
}

void Macad::Occt::TopExp::Vertices(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast)
{
    ::TopExp::Vertices(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance);
}

bool Macad::Occt::TopExp::CommonVertex(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Vertex^ V)
{
    bool _result = ::TopExp::CommonVertex(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopExp_Explorer
//---------------------------------------------------------------------

Macad::Occt::TopExp_Explorer::TopExp_Explorer()
    : Macad::Occt::BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopExp_Explorer();
}

Macad::Occt::TopExp_Explorer::TopExp_Explorer(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind, Macad::Occt::TopAbs_ShapeEnum ToAvoid)
    : Macad::Occt::BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopExp_Explorer(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, (::TopAbs_ShapeEnum)ToAvoid);
}

Macad::Occt::TopExp_Explorer::TopExp_Explorer(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind)
    : Macad::Occt::BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopExp_Explorer(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, TopAbs_SHAPE);
}

void Macad::Occt::TopExp_Explorer::Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind, Macad::Occt::TopAbs_ShapeEnum ToAvoid)
{
    ((::TopExp_Explorer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, (::TopAbs_ShapeEnum)ToAvoid);
}

void Macad::Occt::TopExp_Explorer::Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind)
{
    ((::TopExp_Explorer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, TopAbs_SHAPE);
}

bool Macad::Occt::TopExp_Explorer::More()
{
    bool _result = ((::TopExp_Explorer*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopExp_Explorer::Next()
{
    ((::TopExp_Explorer*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopExp_Explorer::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopExp_Explorer*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopExp_Explorer::Current()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopExp_Explorer*)_NativeInstance)->Current();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopExp_Explorer::ReInit()
{
    ((::TopExp_Explorer*)_NativeInstance)->ReInit();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopExp_Explorer::ExploredShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopExp_Explorer*)_NativeInstance)->ExploredShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopExp_Explorer::Depth()
{
    int _result = ((::TopExp_Explorer*)_NativeInstance)->Depth();
    return _result;
}

void Macad::Occt::TopExp_Explorer::Clear()
{
    ((::TopExp_Explorer*)_NativeInstance)->Clear();
}


