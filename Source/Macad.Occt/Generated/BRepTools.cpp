// Generated wrapper code for package BRepTools

#include "OcctPCH.h"
#include "BRepTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopoDS.h"
#include "TColgp.h"
#include "Bnd.h"
#include "TopTools.h"
#include "Message.h"
#include "BRep.h"
#include "Geom.h"
#include "Geom2d.h"
#include "TopAbs.h"
#include "TopLoc.h"
#include "gp.h"
#include "GeomAbs.h"
#include "ShapeBuild.h"


//---------------------------------------------------------------------
//  Class  BRepTools_MapOfVertexPnt2d
//---------------------------------------------------------------------

Macad::Occt::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d()
    : Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_MapOfVertexPnt2d();
}

Macad::Occt::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_MapOfVertexPnt2d(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_MapOfVertexPnt2d(theNbBuckets, 0L);
}

void Macad::Occt::BRepTools_MapOfVertexPnt2d::Exchange(Macad::Occt::BRepTools_MapOfVertexPnt2d^ theOther)
{
    ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Exchange(*(::BRepTools_MapOfVertexPnt2d*)theOther->NativeInstance);
}

Macad::Occt::BRepTools_MapOfVertexPnt2d^ Macad::Occt::BRepTools_MapOfVertexPnt2d::Assign(Macad::Occt::BRepTools_MapOfVertexPnt2d^ theOther)
{
    ::BRepTools_MapOfVertexPnt2d* _result = new ::BRepTools_MapOfVertexPnt2d();
    *_result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Assign(*(::BRepTools_MapOfVertexPnt2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepTools_MapOfVertexPnt2d(_result);
}

void Macad::Occt::BRepTools_MapOfVertexPnt2d::ReSize(int N)
{
    ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::BRepTools_MapOfVertexPnt2d::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColgp_SequenceOfPnt2d^ theItem)
{
    bool _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColgp_SequenceOfPnt2d*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::BRepTools_MapOfVertexPnt2d::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColgp_SequenceOfPnt2d^ theItem)
{
    ::TColgp_SequenceOfPnt2d* _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColgp_SequenceOfPnt2d*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

bool Macad::Occt::BRepTools_MapOfVertexPnt2d::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepTools_MapOfVertexPnt2d::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::BRepTools_MapOfVertexPnt2d::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TColgp_SequenceOfPnt2d* _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d((::TColgp_SequenceOfPnt2d*)_result);
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::BRepTools_MapOfVertexPnt2d::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = (::TColgp_SequenceOfPnt2d)((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::BRepTools_MapOfVertexPnt2d::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt2d* _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::BRepTools_MapOfVertexPnt2d::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

void Macad::Occt::BRepTools_MapOfVertexPnt2d::Clear(bool doReleaseMemory)
{
    ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepTools_MapOfVertexPnt2d::Clear()
{
    ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepTools_MapOfVertexPnt2d::Size()
{
    int _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepTools_MapOfVertexPnt2d::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepTools_MapOfVertexPnt2d::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepTools_MapOfVertexPnt2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_MapOfVertexPnt2d::Iterator();
}

bool Macad::Occt::BRepTools_MapOfVertexPnt2d::Iterator::More()
{
    bool _result = ((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepTools_MapOfVertexPnt2d::Iterator::Next()
{
    ((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::BRepTools_MapOfVertexPnt2d::Iterator::Value()
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = (::TColgp_SequenceOfPnt2d)((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::BRepTools_MapOfVertexPnt2d::Iterator::ChangeValue()
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = ((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_MapOfVertexPnt2d::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepTools
//---------------------------------------------------------------------

Macad::Occt::BRepTools::BRepTools()
    : Macad::Occt::BaseClass<::BRepTools>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools();
}

void Macad::Occt::BRepTools::UVBounds(Macad::Occt::TopoDS_Face^ F, double% UMin, double% UMax, double% VMin, double% VMax)
{
    pin_ptr<double> pp_UMin = &UMin;
    pin_ptr<double> pp_UMax = &UMax;
    pin_ptr<double> pp_VMin = &VMin;
    pin_ptr<double> pp_VMax = &VMax;
    ::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(double*)pp_UMin, *(double*)pp_UMax, *(double*)pp_VMin, *(double*)pp_VMax);
}

void Macad::Occt::BRepTools::UVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W, double% UMin, double% UMax, double% VMin, double% VMax)
{
    pin_ptr<double> pp_UMin = &UMin;
    pin_ptr<double> pp_UMax = &UMax;
    pin_ptr<double> pp_VMin = &VMin;
    pin_ptr<double> pp_VMax = &VMax;
    ::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, *(double*)pp_UMin, *(double*)pp_UMax, *(double*)pp_VMin, *(double*)pp_VMax);
}

void Macad::Occt::BRepTools::UVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E, double% UMin, double% UMax, double% VMin, double% VMax)
{
    pin_ptr<double> pp_UMin = &UMin;
    pin_ptr<double> pp_UMax = &UMax;
    pin_ptr<double> pp_VMin = &VMin;
    pin_ptr<double> pp_VMax = &VMax;
    ::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_UMin, *(double*)pp_UMax, *(double*)pp_VMin, *(double*)pp_VMax);
}

void Macad::Occt::BRepTools::AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Bnd_Box2d^ B)
{
    ::BRepTools::AddUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BRepTools::AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W, Macad::Occt::Bnd_Box2d^ B)
{
    ::BRepTools::AddUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BRepTools::AddUVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Bnd_Box2d^ B)
{
    ::BRepTools::AddUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_Vertex^ V)
{
    ::BRepTools::Update(*(::TopoDS_Vertex*)V->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_Edge^ E)
{
    ::BRepTools::Update(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_Wire^ W)
{
    ::BRepTools::Update(*(::TopoDS_Wire*)W->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_Face^ F)
{
    ::BRepTools::Update(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_Shell^ S)
{
    ::BRepTools::Update(*(::TopoDS_Shell*)S->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_Solid^ S)
{
    ::BRepTools::Update(*(::TopoDS_Solid*)S->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_CompSolid^ C)
{
    ::BRepTools::Update(*(::TopoDS_CompSolid*)C->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_Compound^ C)
{
    ::BRepTools::Update(*(::TopoDS_Compound*)C->NativeInstance);
}

void Macad::Occt::BRepTools::Update(Macad::Occt::TopoDS_Shape^ S)
{
    ::BRepTools::Update(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepTools::UpdateFaceUVPoints(Macad::Occt::TopoDS_Face^ theF)
{
    ::BRepTools::UpdateFaceUVPoints(*(::TopoDS_Face*)theF->NativeInstance);
}

void Macad::Occt::BRepTools::Clean(Macad::Occt::TopoDS_Shape^ theShape, bool theForce)
{
    ::BRepTools::Clean(*(::TopoDS_Shape*)theShape->NativeInstance, theForce);
}

void Macad::Occt::BRepTools::Clean(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::BRepTools::Clean(*(::TopoDS_Shape*)theShape->NativeInstance, false);
}

void Macad::Occt::BRepTools::CleanGeometry(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::BRepTools::CleanGeometry(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::BRepTools::RemoveUnusedPCurves(Macad::Occt::TopoDS_Shape^ S)
{
    ::BRepTools::RemoveUnusedPCurves(*(::TopoDS_Shape*)S->NativeInstance);
}

bool Macad::Occt::BRepTools::Triangulation(Macad::Occt::TopoDS_Shape^ theShape, double theLinDefl, bool theToCheckFreeEdges)
{
    bool _result = ::BRepTools::Triangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theLinDefl, theToCheckFreeEdges);
    return _result;
}

bool Macad::Occt::BRepTools::Triangulation(Macad::Occt::TopoDS_Shape^ theShape, double theLinDefl)
{
    bool _result = ::BRepTools::Triangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theLinDefl, false);
    return _result;
}

bool Macad::Occt::BRepTools::LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx, bool theToSetAsActive)
{
    bool _result = ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, theToSetAsActive, ::opencascade::handle<::OSD_FileSystem>());
    return _result;
}

bool Macad::Occt::BRepTools::LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
    bool _result = ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, false, ::opencascade::handle<::OSD_FileSystem>());
    return _result;
}

bool Macad::Occt::BRepTools::LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, -1, false, ::opencascade::handle<::OSD_FileSystem>());
    return _result;
}

bool Macad::Occt::BRepTools::UnloadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
    bool _result = ::BRepTools::UnloadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx);
    return _result;
}

bool Macad::Occt::BRepTools::UnloadTriangulation(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools::UnloadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, -1);
    return _result;
}

bool Macad::Occt::BRepTools::ActivateTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx, bool theToActivateStrictly)
{
    bool _result = ::BRepTools::ActivateTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, theToActivateStrictly);
    return _result;
}

bool Macad::Occt::BRepTools::ActivateTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
    bool _result = ::BRepTools::ActivateTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, false);
    return _result;
}

bool Macad::Occt::BRepTools::LoadAllTriangulations(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools::LoadAllTriangulations(*(::TopoDS_Shape*)theShape->NativeInstance, ::opencascade::handle<::OSD_FileSystem>());
    return _result;
}

bool Macad::Occt::BRepTools::UnloadAllTriangulations(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools::UnloadAllTriangulations(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepTools::Compare(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
    bool _result = ::BRepTools::Compare(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepTools::Compare(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
    bool _result = ::BRepTools::Compare(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepTools::OuterWire(Macad::Occt::TopoDS_Face^ F)
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = ::BRepTools::OuterWire(*(::TopoDS_Face*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

void Macad::Occt::BRepTools::Map3DEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M)
{
    ::BRepTools::Map3DEdges(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance);
}

bool Macad::Occt::BRepTools::IsReallyClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    bool _result = ::BRepTools::IsReallyClosed(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

void Macad::Occt::BRepTools::DetectClosedness(Macad::Occt::TopoDS_Face^ theFace, bool% theUclosed, bool% theVclosed)
{
    pin_ptr<bool> pp_theUclosed = &theUclosed;
    pin_ptr<bool> pp_theVclosed = &theVclosed;
    ::BRepTools::DetectClosedness(*(::TopoDS_Face*)theFace->NativeInstance, *(bool*)pp_theUclosed, *(bool*)pp_theVclosed);
}

void Macad::Occt::BRepTools::Dump(Macad::Occt::TopoDS_Shape^ Sh, System::IO::TextWriter^ S)
{
    std::ostringstream oss_S;
    ::BRepTools::Dump(*(::TopoDS_Shape*)Sh->NativeInstance, oss_S);
    S->Write(gcnew System::String(oss_S.str().c_str()));
}

void Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_theStream;
    ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, *(::Message_ProgressRange*)theProgress->NativeInstance);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, ::Message_ProgressRange());
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_theStream;
    ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theProgress->NativeInstance);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion)
{
    std::ostringstream oss_theStream;
    ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, ::Message_ProgressRange());
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

bool Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theProgress)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theProgress->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theProgress)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theProgress->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool Macad::Occt::BRepTools::Read(Macad::Occt::TopoDS_Shape^ Sh, System::String^ File, Macad::Occt::BRep_Builder^ B, Macad::Occt::Message_ProgressRange^ theProgress)
{
    const char* sz_File = (char*)(void*)Marshal::StringToHGlobalAnsi(File);
    bool _result = ::BRepTools::Read(*(::TopoDS_Shape*)Sh->NativeInstance, sz_File, *(::BRep_Builder*)B->NativeInstance, *(::Message_ProgressRange*)theProgress->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_File);
    return _result;
}

bool Macad::Occt::BRepTools::Read(Macad::Occt::TopoDS_Shape^ Sh, System::String^ File, Macad::Occt::BRep_Builder^ B)
{
    const char* sz_File = (char*)(void*)Marshal::StringToHGlobalAnsi(File);
    bool _result = ::BRepTools::Read(*(::TopoDS_Shape*)Sh->NativeInstance, sz_File, *(::BRep_Builder*)B->NativeInstance, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_File);
    return _result;
}

double Macad::Occt::BRepTools::EvalAndUpdateTol(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::Geom_Curve^ theC3d, Macad::Occt::Geom2d_Curve^ theC2d, Macad::Occt::Geom_Surface^ theS, double theF, double theL)
{
    double _result = ::BRepTools::EvalAndUpdateTol(*(::TopoDS_Edge*)theE->NativeInstance, Handle(::Geom_Curve)(theC3d->NativeInstance), Handle(::Geom2d_Curve)(theC2d->NativeInstance), Handle(::Geom_Surface)(theS->NativeInstance), theF, theL);
    return _result;
}

Macad::Occt::TopAbs_Orientation Macad::Occt::BRepTools::OriEdgeInFace(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace)
{
    ::TopAbs_Orientation _result = ::BRepTools::OriEdgeInFace(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
    return (Macad::Occt::TopAbs_Orientation)_result;
}

void Macad::Occt::BRepTools::RemoveInternals(Macad::Occt::TopoDS_Shape^ theS, bool theForce)
{
    ::BRepTools::RemoveInternals(*(::TopoDS_Shape*)theS->NativeInstance, theForce);
}

void Macad::Occt::BRepTools::RemoveInternals(Macad::Occt::TopoDS_Shape^ theS)
{
    ::BRepTools::RemoveInternals(*(::TopoDS_Shape*)theS->NativeInstance, false);
}

void Macad::Occt::BRepTools::CheckLocations(Macad::Occt::TopoDS_Shape^ theS, Macad::Occt::TopTools_ListOfShape^ theProblemShapes)
{
    ::BRepTools::CheckLocations(*(::TopoDS_Shape*)theS->NativeInstance, *(::TopTools_ListOfShape*)theProblemShapes->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRepTools_Modification
//---------------------------------------------------------------------

Macad::Occt::BRepTools_Modification::BRepTools_Modification()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::BRepTools_Modification::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    pin_ptr<bool> pp_RevWires = &RevWires;
    pin_ptr<bool> pp_RevFace = &RevFace;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol, *(bool*)pp_RevWires, *(bool*)pp_RevFace);
    S->NativeInstance = h_S.get();
    return _result;
}

bool Macad::Occt::BRepTools_Modification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
    Handle(::Geom_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool Macad::Occt::BRepTools_Modification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Tol);
    return _result;
}

bool Macad::Occt::BRepTools_Modification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool Macad::Occt::BRepTools_Modification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_P, *(double*)pp_Tol);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_Modification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_Modification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::BRepTools_Modification^ Macad::Occt::BRepTools_Modification::CreateDowncasted(::BRepTools_Modification* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepTools_CopyModification)))
        return Macad::Occt::BRepTools_CopyModification::CreateDowncasted((::BRepTools_CopyModification*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepTools_GTrsfModification)))
        return Macad::Occt::BRepTools_GTrsfModification::CreateDowncasted((::BRepTools_GTrsfModification*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepTools_TrsfModification)))
        return Macad::Occt::BRepTools_TrsfModification::CreateDowncasted((::BRepTools_TrsfModification*)instance);
    
    return gcnew Macad::Occt::BRepTools_Modification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_CopyModification
//---------------------------------------------------------------------

Macad::Occt::BRepTools_CopyModification::BRepTools_CopyModification(bool theCopyGeom, bool theCopyMesh)
    : Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_CopyModification(theCopyGeom, theCopyMesh);
}

Macad::Occt::BRepTools_CopyModification::BRepTools_CopyModification(bool theCopyGeom)
    : Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_CopyModification(theCopyGeom, true);
}

Macad::Occt::BRepTools_CopyModification::BRepTools_CopyModification()
    : Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_CopyModification(true, true);
}

bool Macad::Occt::BRepTools_CopyModification::NewSurface(Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::Geom_Surface^ theSurf, Macad::Occt::TopLoc_Location^ theLoc, double% theTol, bool% theRevWires, bool% theRevFace)
{
    Handle(::Geom_Surface) h_theSurf = theSurf->NativeInstance;
    pin_ptr<double> pp_theTol = &theTol;
    pin_ptr<bool> pp_theRevWires = &theRevWires;
    pin_ptr<bool> pp_theRevFace = &theRevFace;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)theFace->NativeInstance, h_theSurf, *(::TopLoc_Location*)theLoc->NativeInstance, *(double*)pp_theTol, *(bool*)pp_theRevWires, *(bool*)pp_theRevFace);
    theSurf->NativeInstance = h_theSurf.get();
    return _result;
}

bool Macad::Occt::BRepTools_CopyModification::NewCurve(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::Geom_Curve^ theCurve, Macad::Occt::TopLoc_Location^ theLoc, double% theTol)
{
    Handle(::Geom_Curve) h_theCurve = theCurve->NativeInstance;
    pin_ptr<double> pp_theTol = &theTol;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)theEdge->NativeInstance, h_theCurve, *(::TopLoc_Location*)theLoc->NativeInstance, *(double*)pp_theTol);
    theCurve->NativeInstance = h_theCurve.get();
    return _result;
}

bool Macad::Occt::BRepTools_CopyModification::NewPoint(Macad::Occt::TopoDS_Vertex^ theVertex, Macad::Occt::Pnt% thePnt, double% theTol)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    pin_ptr<double> pp_theTol = &theTol;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)theVertex->NativeInstance, *(gp_Pnt*)pp_thePnt, *(double*)pp_theTol);
    return _result;
}

bool Macad::Occt::BRepTools_CopyModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theNewEdge, Macad::Occt::TopoDS_Face^ theNewFace, Macad::Occt::Geom2d_Curve^ theCurve, double% theTol)
{
    Handle(::Geom2d_Curve) h_theCurve = theCurve->NativeInstance;
    pin_ptr<double> pp_theTol = &theTol;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance, *(::TopoDS_Edge*)theNewEdge->NativeInstance, *(::TopoDS_Face*)theNewFace->NativeInstance, h_theCurve, *(double*)pp_theTol);
    theCurve->NativeInstance = h_theCurve.get();
    return _result;
}

bool Macad::Occt::BRepTools_CopyModification::NewParameter(Macad::Occt::TopoDS_Vertex^ theVertex, Macad::Occt::TopoDS_Edge^ theEdge, double% thePnt, double% theTol)
{
    pin_ptr<double> pp_thePnt = &thePnt;
    pin_ptr<double> pp_theTol = &theTol;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)theVertex->NativeInstance, *(::TopoDS_Edge*)theEdge->NativeInstance, *(double*)pp_thePnt, *(double*)pp_theTol);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_CopyModification::Continuity(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2, Macad::Occt::TopoDS_Edge^ theNewEdge, Macad::Occt::TopoDS_Face^ theNewFace1, Macad::Occt::TopoDS_Face^ theNewFace2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_CopyModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace1->NativeInstance, *(::TopoDS_Face*)theFace2->NativeInstance, *(::TopoDS_Edge*)theNewEdge->NativeInstance, *(::TopoDS_Face*)theNewFace1->NativeInstance, *(::TopoDS_Face*)theNewFace2->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::BRepTools_CopyModification^ Macad::Occt::BRepTools_CopyModification::CreateDowncasted(::BRepTools_CopyModification* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepTools_NurbsConvertModification)))
        return Macad::Occt::BRepTools_NurbsConvertModification::CreateDowncasted((::BRepTools_NurbsConvertModification*)instance);
    
    return gcnew Macad::Occt::BRepTools_CopyModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_GTrsfModification
//---------------------------------------------------------------------

Macad::Occt::BRepTools_GTrsfModification::BRepTools_GTrsfModification(Macad::Occt::gp_GTrsf^ T)
    : Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_GTrsfModification(*(::gp_GTrsf*)T->NativeInstance);
}

Macad::Occt::gp_GTrsf^ Macad::Occt::BRepTools_GTrsfModification::GTrsf()
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = ((::BRepTools_GTrsfModification*)_NativeInstance)->GTrsf();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

bool Macad::Occt::BRepTools_GTrsfModification::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    pin_ptr<bool> pp_RevWires = &RevWires;
    pin_ptr<bool> pp_RevFace = &RevFace;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol, *(bool*)pp_RevWires, *(bool*)pp_RevFace);
    S->NativeInstance = h_S.get();
    return _result;
}

bool Macad::Occt::BRepTools_GTrsfModification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
    Handle(::Geom_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool Macad::Occt::BRepTools_GTrsfModification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Tol);
    return _result;
}

bool Macad::Occt::BRepTools_GTrsfModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool Macad::Occt::BRepTools_GTrsfModification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_P, *(double*)pp_Tol);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_GTrsfModification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::BRepTools_GTrsfModification^ Macad::Occt::BRepTools_GTrsfModification::CreateDowncasted(::BRepTools_GTrsfModification* instance)
{
    return gcnew Macad::Occt::BRepTools_GTrsfModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_History
//---------------------------------------------------------------------

Macad::Occt::BRepTools_History::BRepTools_History()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_History();
}

bool Macad::Occt::BRepTools_History::IsSupportedType(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools_History::IsSupportedType(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

void Macad::Occt::BRepTools_History::AddGenerated(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theGenerated)
{
    ((::BRepTools_History*)_NativeInstance)->AddGenerated(*(::TopoDS_Shape*)theInitial->NativeInstance, *(::TopoDS_Shape*)theGenerated->NativeInstance);
}

void Macad::Occt::BRepTools_History::AddModified(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theModified)
{
    ((::BRepTools_History*)_NativeInstance)->AddModified(*(::TopoDS_Shape*)theInitial->NativeInstance, *(::TopoDS_Shape*)theModified->NativeInstance);
}

void Macad::Occt::BRepTools_History::Remove(Macad::Occt::TopoDS_Shape^ theRemoved)
{
    ((::BRepTools_History*)_NativeInstance)->Remove(*(::TopoDS_Shape*)theRemoved->NativeInstance);
}

void Macad::Occt::BRepTools_History::ReplaceGenerated(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theGenerated)
{
    ((::BRepTools_History*)_NativeInstance)->ReplaceGenerated(*(::TopoDS_Shape*)theInitial->NativeInstance, *(::TopoDS_Shape*)theGenerated->NativeInstance);
}

void Macad::Occt::BRepTools_History::ReplaceModified(Macad::Occt::TopoDS_Shape^ theInitial, Macad::Occt::TopoDS_Shape^ theModified)
{
    ((::BRepTools_History*)_NativeInstance)->ReplaceModified(*(::TopoDS_Shape*)theInitial->NativeInstance, *(::TopoDS_Shape*)theModified->NativeInstance);
}

void Macad::Occt::BRepTools_History::Clear()
{
    ((::BRepTools_History*)_NativeInstance)->Clear();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepTools_History::Generated(Macad::Occt::TopoDS_Shape^ theInitial)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepTools_History*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theInitial->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepTools_History::Modified(Macad::Occt::TopoDS_Shape^ theInitial)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepTools_History*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theInitial->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepTools_History::IsRemoved(Macad::Occt::TopoDS_Shape^ theInitial)
{
    bool _result = ((::BRepTools_History*)_NativeInstance)->IsRemoved(*(::TopoDS_Shape*)theInitial->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepTools_History::HasGenerated()
{
    bool _result = ((::BRepTools_History*)_NativeInstance)->HasGenerated();
    return _result;
}

bool Macad::Occt::BRepTools_History::HasModified()
{
    bool _result = ((::BRepTools_History*)_NativeInstance)->HasModified();
    return _result;
}

bool Macad::Occt::BRepTools_History::HasRemoved()
{
    bool _result = ((::BRepTools_History*)_NativeInstance)->HasRemoved();
    return _result;
}

void Macad::Occt::BRepTools_History::Merge(Macad::Occt::BRepTools_History^ theHistory23)
{
    ((::BRepTools_History*)_NativeInstance)->Merge(Handle(::BRepTools_History)(theHistory23->NativeInstance));
}

void Macad::Occt::BRepTools_History::Dump(System::IO::TextWriter^ theS)
{
    std::ostringstream oss_theS;
    ((::BRepTools_History*)_NativeInstance)->Dump(oss_theS);
    theS->Write(gcnew System::String(oss_theS.str().c_str()));
}

Macad::Occt::BRepTools_History^ Macad::Occt::BRepTools_History::CreateDowncasted(::BRepTools_History* instance)
{
    return gcnew Macad::Occt::BRepTools_History( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_Modifier
//---------------------------------------------------------------------

Macad::Occt::BRepTools_Modifier::BRepTools_Modifier(bool theMutableInput)
    : Macad::Occt::BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Modifier(theMutableInput);
}

Macad::Occt::BRepTools_Modifier::BRepTools_Modifier()
    : Macad::Occt::BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Modifier(false);
}

Macad::Occt::BRepTools_Modifier::BRepTools_Modifier(Macad::Occt::TopoDS_Shape^ S)
    : Macad::Occt::BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Modifier(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BRepTools_Modifier::BRepTools_Modifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M)
    : Macad::Occt::BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Modifier(*(::TopoDS_Shape*)S->NativeInstance, Handle(::BRepTools_Modification)(M->NativeInstance));
}

void Macad::Occt::BRepTools_Modifier::Init(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepTools_Modifier*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepTools_Modifier::Perform(Macad::Occt::BRepTools_Modification^ M, Macad::Occt::Message_ProgressRange^ theProgress)
{
    ((::BRepTools_Modifier*)_NativeInstance)->Perform(Handle(::BRepTools_Modification)(M->NativeInstance), *(::Message_ProgressRange*)theProgress->NativeInstance);
}

void Macad::Occt::BRepTools_Modifier::Perform(Macad::Occt::BRepTools_Modification^ M)
{
    ((::BRepTools_Modifier*)_NativeInstance)->Perform(Handle(::BRepTools_Modification)(M->NativeInstance), ::Message_ProgressRange());
}

bool Macad::Occt::BRepTools_Modifier::IsDone()
{
    bool _result = ((::BRepTools_Modifier*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::BRepTools_Modifier::IsMutableInput()
{
    bool _result = ((::BRepTools_Modifier*)_NativeInstance)->IsMutableInput();
    return _result;
}

void Macad::Occt::BRepTools_Modifier::SetMutableInput(bool theMutableInput)
{
    ((::BRepTools_Modifier*)_NativeInstance)->SetMutableInput(theMutableInput);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_Modifier::ModifiedShape(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepTools_Modifier*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepTools_NurbsConvertModification
//---------------------------------------------------------------------

Macad::Occt::BRepTools_NurbsConvertModification::BRepTools_NurbsConvertModification()
    : Macad::Occt::BRepTools_CopyModification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_NurbsConvertModification();
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    pin_ptr<bool> pp_RevWires = &RevWires;
    pin_ptr<bool> pp_RevFace = &RevFace;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol, *(bool*)pp_RevWires, *(bool*)pp_RevFace);
    S->NativeInstance = h_S.get();
    return _result;
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
    Handle(::Geom_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Tol);
    return _result;
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_P, *(double*)pp_Tol);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_NurbsConvertModification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepTools_NurbsConvertModification::GetUpdatedEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepTools_NurbsConvertModification*)_NativeInstance)->GetUpdatedEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::BRepTools_NurbsConvertModification^ Macad::Occt::BRepTools_NurbsConvertModification::CreateDowncasted(::BRepTools_NurbsConvertModification* instance)
{
    return gcnew Macad::Occt::BRepTools_NurbsConvertModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_ReShape
//---------------------------------------------------------------------

Macad::Occt::BRepTools_ReShape::BRepTools_ReShape()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_ReShape();
}

void Macad::Occt::BRepTools_ReShape::Clear()
{
    ((::BRepTools_ReShape*)_NativeInstance)->Clear();
}

void Macad::Occt::BRepTools_ReShape::Remove(Macad::Occt::TopoDS_Shape^ shape)
{
    ((::BRepTools_ReShape*)_NativeInstance)->Remove(*(::TopoDS_Shape*)shape->NativeInstance);
}

void Macad::Occt::BRepTools_ReShape::Replace(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newshape)
{
    ((::BRepTools_ReShape*)_NativeInstance)->Replace(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newshape->NativeInstance);
}

bool Macad::Occt::BRepTools_ReShape::IsRecorded(Macad::Occt::TopoDS_Shape^ shape)
{
    bool _result = ((::BRepTools_ReShape*)_NativeInstance)->IsRecorded(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_ReShape::Value(Macad::Occt::TopoDS_Shape^ shape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->Value(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::BRepTools_ReShape::Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh, bool last)
{
    int _result = ((::BRepTools_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, last);
    return _result;
}

int Macad::Occt::BRepTools_ReShape::Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh)
{
    int _result = ((::BRepTools_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, false);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_ReShape::Apply(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theUntil)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)theShape->NativeInstance, (::TopAbs_ShapeEnum)theUntil);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_ReShape::Apply(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)theShape->NativeInstance, TopAbs_SHAPE);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepTools_ReShape::CopyVertex(Macad::Occt::TopoDS_Vertex^ theV, double theTol)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->CopyVertex(*(::TopoDS_Vertex*)theV->NativeInstance, theTol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepTools_ReShape::CopyVertex(Macad::Occt::TopoDS_Vertex^ theV)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->CopyVertex(*(::TopoDS_Vertex*)theV->NativeInstance, -1.);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepTools_ReShape::CopyVertex(Macad::Occt::TopoDS_Vertex^ theV, Macad::Occt::Pnt theNewPos, double aTol)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    pin_ptr<Macad::Occt::Pnt> pp_theNewPos = &theNewPos;
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->CopyVertex(*(::TopoDS_Vertex*)theV->NativeInstance, *(gp_Pnt*)pp_theNewPos, aTol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::BRepTools_ReShape::IsNewShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepTools_ReShape*)_NativeInstance)->IsNewShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

Macad::Occt::BRepTools_History^ Macad::Occt::BRepTools_ReShape::History()
{
    Handle(::BRepTools_History) _result = ((::BRepTools_ReShape*)_NativeInstance)->History();
    return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_History::CreateDowncasted(_result.get());
}

Macad::Occt::BRepTools_ReShape^ Macad::Occt::BRepTools_ReShape::CreateDowncasted(::BRepTools_ReShape* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::ShapeBuild_ReShape)))
        return Macad::Occt::ShapeBuild_ReShape::CreateDowncasted((::ShapeBuild_ReShape*)instance);
    
    return gcnew Macad::Occt::BRepTools_ReShape( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_PurgeLocations
//---------------------------------------------------------------------

Macad::Occt::BRepTools_PurgeLocations::BRepTools_PurgeLocations()
    : Macad::Occt::BaseClass<::BRepTools_PurgeLocations>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_PurgeLocations();
}

bool Macad::Occt::BRepTools_PurgeLocations::Perform(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepTools_PurgeLocations*)_NativeInstance)->Perform(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_PurgeLocations::GetResult()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepTools_PurgeLocations*)_NativeInstance)->GetResult();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepTools_PurgeLocations::IsDone()
{
    bool _result = ((::BRepTools_PurgeLocations*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepTools_Quilt
//---------------------------------------------------------------------

Macad::Occt::BRepTools_Quilt::BRepTools_Quilt()
    : Macad::Occt::BaseClass<::BRepTools_Quilt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Quilt();
}

void Macad::Occt::BRepTools_Quilt::Bind(Macad::Occt::TopoDS_Edge^ Eold, Macad::Occt::TopoDS_Edge^ Enew)
{
    ((::BRepTools_Quilt*)_NativeInstance)->Bind(*(::TopoDS_Edge*)Eold->NativeInstance, *(::TopoDS_Edge*)Enew->NativeInstance);
}

void Macad::Occt::BRepTools_Quilt::Bind(Macad::Occt::TopoDS_Vertex^ Vold, Macad::Occt::TopoDS_Vertex^ Vnew)
{
    ((::BRepTools_Quilt*)_NativeInstance)->Bind(*(::TopoDS_Vertex*)Vold->NativeInstance, *(::TopoDS_Vertex*)Vnew->NativeInstance);
}

void Macad::Occt::BRepTools_Quilt::Add(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepTools_Quilt*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance);
}

bool Macad::Occt::BRepTools_Quilt::IsCopied(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ((::BRepTools_Quilt*)_NativeInstance)->IsCopied(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_Quilt::Copy(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepTools_Quilt*)_NativeInstance)->Copy(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_Quilt::Shells()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepTools_Quilt*)_NativeInstance)->Shells();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepTools_ShapeSet
//---------------------------------------------------------------------

Macad::Occt::BRepTools_ShapeSet::BRepTools_ShapeSet(bool theWithTriangles, bool theWithNormals)
    : Macad::Occt::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(theWithTriangles, theWithNormals);
}

Macad::Occt::BRepTools_ShapeSet::BRepTools_ShapeSet(bool theWithTriangles)
    : Macad::Occt::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(theWithTriangles, false);
}

Macad::Occt::BRepTools_ShapeSet::BRepTools_ShapeSet()
    : Macad::Occt::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(true, false);
}

Macad::Occt::BRepTools_ShapeSet::BRepTools_ShapeSet(Macad::Occt::BRep_Builder^ theBuilder, bool theWithTriangles, bool theWithNormals)
    : Macad::Occt::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(*(::BRep_Builder*)theBuilder->NativeInstance, theWithTriangles, theWithNormals);
}

Macad::Occt::BRepTools_ShapeSet::BRepTools_ShapeSet(Macad::Occt::BRep_Builder^ theBuilder, bool theWithTriangles)
    : Macad::Occt::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(*(::BRep_Builder*)theBuilder->NativeInstance, theWithTriangles, false);
}

Macad::Occt::BRepTools_ShapeSet::BRepTools_ShapeSet(Macad::Occt::BRep_Builder^ theBuilder)
    : Macad::Occt::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(*(::BRep_Builder*)theBuilder->NativeInstance, true, false);
}

bool Macad::Occt::BRepTools_ShapeSet::IsWithTriangles()
{
    bool _result = ((::BRepTools_ShapeSet*)_NativeInstance)->IsWithTriangles();
    return _result;
}

bool Macad::Occt::BRepTools_ShapeSet::IsWithNormals()
{
    bool _result = ((::BRepTools_ShapeSet*)_NativeInstance)->IsWithNormals();
    return _result;
}

void Macad::Occt::BRepTools_ShapeSet::SetWithTriangles(bool theWithTriangles)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->SetWithTriangles(theWithTriangles);
}

void Macad::Occt::BRepTools_ShapeSet::SetWithNormals(bool theWithNormals)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->SetWithNormals(theWithNormals);
}

void Macad::Occt::BRepTools_ShapeSet::Clear()
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->Clear();
}

void Macad::Occt::BRepTools_ShapeSet::AddGeometry(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->AddGeometry(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepTools_ShapeSet::DumpGeometry(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpGeometry(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::DumpGeometry(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpGeometry(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WriteGeometry(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteGeometry(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->AddShapes(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

void Macad::Occt::BRepTools_ShapeSet::Check(Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->Check((::TopAbs_ShapeEnum)T, *(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS, bool Compact, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, Compact, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS, bool Compact)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, Compact, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, true, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::DumpPolygon3D(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpPolygon3D(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS, bool Compact, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, Compact, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS, bool Compact)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, Compact, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, true, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::DumpTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpTriangulation(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS, bool Compact, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, Compact, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS, bool Compact)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, Compact, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, true, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::BRepTools_ShapeSet::DumpPolygonOnTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpPolygonOnTriangulation(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  BRepTools_Substitution
//---------------------------------------------------------------------

Macad::Occt::BRepTools_Substitution::BRepTools_Substitution()
    : Macad::Occt::BaseClass<::BRepTools_Substitution>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Substitution();
}

void Macad::Occt::BRepTools_Substitution::Clear()
{
    ((::BRepTools_Substitution*)_NativeInstance)->Clear();
}

void Macad::Occt::BRepTools_Substitution::Substitute(Macad::Occt::TopoDS_Shape^ OldShape, Macad::Occt::TopTools_ListOfShape^ NewShapes)
{
    ((::BRepTools_Substitution*)_NativeInstance)->Substitute(*(::TopoDS_Shape*)OldShape->NativeInstance, *(::TopTools_ListOfShape*)NewShapes->NativeInstance);
}

void Macad::Occt::BRepTools_Substitution::Build(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepTools_Substitution*)_NativeInstance)->Build(*(::TopoDS_Shape*)S->NativeInstance);
}

bool Macad::Occt::BRepTools_Substitution::IsCopied(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ((::BRepTools_Substitution*)_NativeInstance)->IsCopied(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepTools_Substitution::Copy(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepTools_Substitution*)_NativeInstance)->Copy(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepTools_TrsfModification
//---------------------------------------------------------------------

Macad::Occt::BRepTools_TrsfModification::BRepTools_TrsfModification(Macad::Occt::Trsf T)
    : Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Trsf> pp_T = &T;
    NativeInstance = new ::BRepTools_TrsfModification(*(gp_Trsf*)pp_T);
}

Macad::Occt::Trsf Macad::Occt::BRepTools_TrsfModification::Trsf()
{
    ::gp_Trsf _nativeResult = ((::BRepTools_TrsfModification*)_NativeInstance)->Trsf();
    return Macad::Occt::Trsf(_nativeResult);
}

bool Macad::Occt::BRepTools_TrsfModification::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    pin_ptr<bool> pp_RevWires = &RevWires;
    pin_ptr<bool> pp_RevFace = &RevFace;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol, *(bool*)pp_RevWires, *(bool*)pp_RevFace);
    S->NativeInstance = h_S.get();
    return _result;
}

bool Macad::Occt::BRepTools_TrsfModification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
    Handle(::Geom_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool Macad::Occt::BRepTools_TrsfModification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Tol);
    return _result;
}

bool Macad::Occt::BRepTools_TrsfModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool Macad::Occt::BRepTools_TrsfModification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_P, *(double*)pp_Tol);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_TrsfModification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_TrsfModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::BRepTools_TrsfModification^ Macad::Occt::BRepTools_TrsfModification::CreateDowncasted(::BRepTools_TrsfModification* instance)
{
    return gcnew Macad::Occt::BRepTools_TrsfModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_WireExplorer
//---------------------------------------------------------------------

Macad::Occt::BRepTools_WireExplorer::BRepTools_WireExplorer()
    : Macad::Occt::BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_WireExplorer();
}

Macad::Occt::BRepTools_WireExplorer::BRepTools_WireExplorer(Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_WireExplorer(*(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepTools_WireExplorer::BRepTools_WireExplorer(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_WireExplorer(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepTools_WireExplorer::Init(Macad::Occt::TopoDS_Wire^ W)
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance);
}

void Macad::Occt::BRepTools_WireExplorer::Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepTools_WireExplorer::Init(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, double UMin, double UMax, double VMin, double VMax)
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, UMin, UMax, VMin, VMax);
}

bool Macad::Occt::BRepTools_WireExplorer::More()
{
    bool _result = ((::BRepTools_WireExplorer*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepTools_WireExplorer::Next()
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepTools_WireExplorer::Current()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepTools_WireExplorer*)_NativeInstance)->Current();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopAbs_Orientation Macad::Occt::BRepTools_WireExplorer::Orientation()
{
    ::TopAbs_Orientation _result = ((::BRepTools_WireExplorer*)_NativeInstance)->Orientation();
    return (Macad::Occt::TopAbs_Orientation)_result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepTools_WireExplorer::CurrentVertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepTools_WireExplorer*)_NativeInstance)->CurrentVertex();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

void Macad::Occt::BRepTools_WireExplorer::Clear()
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Clear();
}


