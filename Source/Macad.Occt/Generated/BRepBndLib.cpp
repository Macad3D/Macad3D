// Generated wrapper code for package BRepBndLib

#include "OcctPCH.h"
#include "BRepBndLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Bnd.h"


//---------------------------------------------------------------------
//  Class  BRepBndLib
//---------------------------------------------------------------------

Macad::Occt::BRepBndLib::BRepBndLib()
    : Macad::Occt::BaseClass<::BRepBndLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBndLib();
}

void Macad::Occt::BRepBndLib::Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation)
{
    ::BRepBndLib::Add(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, useTriangulation);
}

void Macad::Occt::BRepBndLib::Add(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B)
{
    ::BRepBndLib::Add(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, true);
}

void Macad::Occt::BRepBndLib::AddClose(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B)
{
    ::BRepBndLib::AddClose(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BRepBndLib::AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation, bool useShapeTolerance)
{
    ::BRepBndLib::AddOptimal(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, useTriangulation, useShapeTolerance);
}

void Macad::Occt::BRepBndLib::AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B, bool useTriangulation)
{
    ::BRepBndLib::AddOptimal(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, useTriangulation, false);
}

void Macad::Occt::BRepBndLib::AddOptimal(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Bnd_Box^ B)
{
    ::BRepBndLib::AddOptimal(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, true, false);
}

void Macad::Occt::BRepBndLib::AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed, bool theIsOptimal, bool theIsShapeToleranceUsed)
{
    ::BRepBndLib::AddOBB(*(::TopoDS_Shape*)theS->NativeInstance, *(::Bnd_OBB*)theOBB->NativeInstance, theIsTriangulationUsed, theIsOptimal, theIsShapeToleranceUsed);
}

void Macad::Occt::BRepBndLib::AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed, bool theIsOptimal)
{
    ::BRepBndLib::AddOBB(*(::TopoDS_Shape*)theS->NativeInstance, *(::Bnd_OBB*)theOBB->NativeInstance, theIsTriangulationUsed, theIsOptimal, true);
}

void Macad::Occt::BRepBndLib::AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB, bool theIsTriangulationUsed)
{
    ::BRepBndLib::AddOBB(*(::TopoDS_Shape*)theS->NativeInstance, *(::Bnd_OBB*)theOBB->NativeInstance, theIsTriangulationUsed, false, true);
}

void Macad::Occt::BRepBndLib::AddOBB(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::Bnd_OBB^ theOBB)
{
    ::BRepBndLib::AddOBB(*(::TopoDS_Shape*)theS->NativeInstance, *(::Bnd_OBB*)theOBB->NativeInstance, true, false, true);
}


