// Generated wrapper code for package BRepTools

#include "OcctPCH.h"
#include "BRepTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "NCollection.h"
#include "BRepTools.h"
#include "TopoDS.h"
#include "Bnd.h"
#include "TopTools.h"
#include "Message.h"
#include "BRep.h"
#include "Geom.h"
#include "Geom2d.h"
#include "TopAbs.h"
#include "ShapeCustom.h"
#include "BRepOffset.h"
#include "TopLoc.h"
#include "gp.h"
#include "GeomAbs.h"
#include "ShapeBuild.h"


//---------------------------------------------------------------------
//  Class  BRepTools_MapOfVertexPnt2d
//---------------------------------------------------------------------

Macad::Occt::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d()
	: BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_MapOfVertexPnt2d();
}

Macad::Occt::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepTools_MapOfVertexPnt2d(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d(int theNbBuckets)
	: BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_MapOfVertexPnt2d(theNbBuckets, 0L);
}

Macad::Occt::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d(Macad::Occt::BRepTools_MapOfVertexPnt2d^ theOther)
	: BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_MapOfVertexPnt2d(*(::BRepTools_MapOfVertexPnt2d*)theOther->NativeInstance);
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

bool Macad::Occt::BRepTools_MapOfVertexPnt2d::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::BRepTools_MapOfVertexPnt2d::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::BRepTools_MapOfVertexPnt2d::Clear(bool doReleaseMemory)
{
	((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepTools_MapOfVertexPnt2d::Clear()
{
	((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Clear(true);
}

void Macad::Occt::BRepTools_MapOfVertexPnt2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::BRepTools_MapOfVertexPnt2d::Size()
{
	return ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  BRepTools
//---------------------------------------------------------------------

Macad::Occt::BRepTools::BRepTools()
	: BaseClass<::BRepTools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools();
}

Macad::Occt::BRepTools::BRepTools(Macad::Occt::BRepTools^ parameter1)
	: BaseClass<::BRepTools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools(*(::BRepTools*)parameter1->NativeInstance);
}

void Macad::Occt::BRepTools::UVBounds(Macad::Occt::TopoDS_Face^ F, double% UMin, double% UMax, double% VMin, double% VMax)
{
	pin_ptr<double> pp_UMin = &UMin;
	pin_ptr<double> pp_UMax = &UMax;
	pin_ptr<double> pp_VMin = &VMin;
	pin_ptr<double> pp_VMax = &VMax;
	::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(Standard_Real*)pp_UMin, *(Standard_Real*)pp_UMax, *(Standard_Real*)pp_VMin, *(Standard_Real*)pp_VMax);
}

void Macad::Occt::BRepTools::UVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W, double% UMin, double% UMax, double% VMin, double% VMax)
{
	pin_ptr<double> pp_UMin = &UMin;
	pin_ptr<double> pp_UMax = &UMax;
	pin_ptr<double> pp_VMin = &VMin;
	pin_ptr<double> pp_VMax = &VMax;
	::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, *(Standard_Real*)pp_UMin, *(Standard_Real*)pp_UMax, *(Standard_Real*)pp_VMin, *(Standard_Real*)pp_VMax);
}

void Macad::Occt::BRepTools::UVBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E, double% UMin, double% UMax, double% VMin, double% VMax)
{
	pin_ptr<double> pp_UMin = &UMin;
	pin_ptr<double> pp_UMax = &UMax;
	pin_ptr<double> pp_VMin = &VMin;
	pin_ptr<double> pp_VMax = &VMax;
	::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_UMin, *(Standard_Real*)pp_UMax, *(Standard_Real*)pp_VMin, *(Standard_Real*)pp_VMax);
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
	return ::BRepTools::Triangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theLinDefl, theToCheckFreeEdges);
}

bool Macad::Occt::BRepTools::Triangulation(Macad::Occt::TopoDS_Shape^ theShape, double theLinDefl)
{
	return ::BRepTools::Triangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theLinDefl, false);
}

bool Macad::Occt::BRepTools::LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx, bool theToSetAsActive)
{
	return ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, theToSetAsActive, ::opencascade::handle<::OSD_FileSystem>());
}

bool Macad::Occt::BRepTools::LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
	return ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, false, ::opencascade::handle<::OSD_FileSystem>());
}

bool Macad::Occt::BRepTools::LoadTriangulation(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, -1, false, ::opencascade::handle<::OSD_FileSystem>());
}

bool Macad::Occt::BRepTools::UnloadTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
	return ::BRepTools::UnloadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx);
}

bool Macad::Occt::BRepTools::UnloadTriangulation(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ::BRepTools::UnloadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, -1);
}

bool Macad::Occt::BRepTools::ActivateTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx, bool theToActivateStrictly)
{
	return ::BRepTools::ActivateTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, theToActivateStrictly);
}

bool Macad::Occt::BRepTools::ActivateTriangulation(Macad::Occt::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
	return ::BRepTools::ActivateTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, false);
}

bool Macad::Occt::BRepTools::LoadAllTriangulations(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ::BRepTools::LoadAllTriangulations(*(::TopoDS_Shape*)theShape->NativeInstance, ::opencascade::handle<::OSD_FileSystem>());
}

bool Macad::Occt::BRepTools::UnloadAllTriangulations(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ::BRepTools::UnloadAllTriangulations(*(::TopoDS_Shape*)theShape->NativeInstance);
}

bool Macad::Occt::BRepTools::Compare(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	return ::BRepTools::Compare(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

bool Macad::Occt::BRepTools::Compare(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
	return ::BRepTools::Compare(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
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
	return ::BRepTools::IsReallyClosed(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepTools::DetectClosedness(Macad::Occt::TopoDS_Face^ theFace, bool% theUclosed, bool% theVclosed)
{
	pin_ptr<bool> pp_theUclosed = &theUclosed;
	pin_ptr<bool> pp_theVclosed = &theVclosed;
	::BRepTools::DetectClosedness(*(::TopoDS_Face*)theFace->NativeInstance, *(Standard_Boolean*)pp_theUclosed, *(Standard_Boolean*)pp_theVclosed);
}

bool Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, Macad::Occt::Message_ProgressRange^ theProgress)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theProgress->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion, Macad::Occt::Message_ProgressRange^ theProgress)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theProgress->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BRepTools::Write(Macad::Occt::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, Macad::Occt::TopTools_FormatVersion theVersion)
{
	const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
	return ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, ::Message_ProgressRange());
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
}

bool Macad::Occt::BRepTools::Read(Macad::Occt::TopoDS_Shape^ Sh, System::String^ File, Macad::Occt::BRep_Builder^ B, Macad::Occt::Message_ProgressRange^ theProgress)
{
	const char* sz_File = (char*)(void*)Marshal::StringToHGlobalAnsi(File);
	return ::BRepTools::Read(*(::TopoDS_Shape*)Sh->NativeInstance, sz_File, *(::BRep_Builder*)B->NativeInstance, *(::Message_ProgressRange*)theProgress->NativeInstance);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_File);
}

bool Macad::Occt::BRepTools::Read(Macad::Occt::TopoDS_Shape^ Sh, System::String^ File, Macad::Occt::BRep_Builder^ B)
{
	const char* sz_File = (char*)(void*)Marshal::StringToHGlobalAnsi(File);
	return ::BRepTools::Read(*(::TopoDS_Shape*)Sh->NativeInstance, sz_File, *(::BRep_Builder*)B->NativeInstance, ::Message_ProgressRange());
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_File);
}

double Macad::Occt::BRepTools::EvalAndUpdateTol(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::Geom_Curve^ theC3d, Macad::Occt::Geom2d_Curve^ theC2d, Macad::Occt::Geom_Surface^ theS, double theF, double theL)
{
	Handle(::Geom_Curve) h_theC3d = theC3d->NativeInstance;
	Handle(::Geom_Surface) h_theS = theS->NativeInstance;
	return ::BRepTools::EvalAndUpdateTol(*(::TopoDS_Edge*)theE->NativeInstance, h_theC3d, Handle(::Geom2d_Curve)(theC2d->NativeInstance), h_theS, theF, theL);
	theC3d->NativeInstance = h_theC3d.get();
	theS->NativeInstance = h_theS.get();
}

Macad::Occt::TopAbs_Orientation Macad::Occt::BRepTools::OriEdgeInFace(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace)
{
	return (Macad::Occt::TopAbs_Orientation)::BRepTools::OriEdgeInFace(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
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

Macad::Occt::BRepTools_Modification::BRepTools_Modification(Macad::Occt::BRepTools_Modification^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

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
	return ((::BRepTools_Modification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRepTools_Modification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_Modification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepTools_Modification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_Modification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::BRepTools_Modification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_Modification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepTools_Modification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_Modification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_Modification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepTools_Modification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}


Macad::Occt::BRepTools_Modification^ Macad::Occt::BRepTools_Modification::CreateDowncasted(::BRepTools_Modification* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::BRepTools_GTrsfModification)))
		return Macad::Occt::BRepTools_GTrsfModification::CreateDowncasted((::BRepTools_GTrsfModification*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepTools_NurbsConvertModification)))
		return Macad::Occt::BRepTools_NurbsConvertModification::CreateDowncasted((::BRepTools_NurbsConvertModification*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepTools_TrsfModification)))
		return Macad::Occt::BRepTools_TrsfModification::CreateDowncasted((::BRepTools_TrsfModification*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeCustom_Modification)))
		return Macad::Occt::ShapeCustom_Modification::CreateDowncasted((::ShapeCustom_Modification*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepOffset_SimpleOffset)))
		return Macad::Occt::BRepOffset_SimpleOffset::CreateDowncasted((::BRepOffset_SimpleOffset*)instance);

	return gcnew Macad::Occt::BRepTools_Modification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_GTrsfModification
//---------------------------------------------------------------------

Macad::Occt::BRepTools_GTrsfModification::BRepTools_GTrsfModification(Macad::Occt::gp_GTrsf^ T)
	: Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepTools_GTrsfModification(*(::gp_GTrsf*)T->NativeInstance);
}

Macad::Occt::BRepTools_GTrsfModification::BRepTools_GTrsfModification(Macad::Occt::BRepTools_GTrsfModification^ parameter1)
	: Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepTools_GTrsfModification(*(::BRepTools_GTrsfModification*)parameter1->NativeInstance);
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
	return ((::BRepTools_GTrsfModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRepTools_GTrsfModification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_GTrsfModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepTools_GTrsfModification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_GTrsfModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::BRepTools_GTrsfModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_GTrsfModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepTools_GTrsfModification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_GTrsfModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_GTrsfModification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepTools_GTrsfModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
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

Macad::Occt::BRepTools_History::BRepTools_History(Macad::Occt::BRepTools_History^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepTools_History(*(::BRepTools_History*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepTools_History::IsSupportedType(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ::BRepTools_History::IsSupportedType(*(::TopoDS_Shape*)theShape->NativeInstance);
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
	*_result =  (::TopTools_ListOfShape)((::BRepTools_History*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theInitial->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepTools_History::Modified(Macad::Occt::TopoDS_Shape^ theInitial)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepTools_History*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theInitial->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepTools_History::IsRemoved(Macad::Occt::TopoDS_Shape^ theInitial)
{
	return ((::BRepTools_History*)_NativeInstance)->IsRemoved(*(::TopoDS_Shape*)theInitial->NativeInstance);
}

bool Macad::Occt::BRepTools_History::HasGenerated()
{
	return ((::BRepTools_History*)_NativeInstance)->HasGenerated();
}

bool Macad::Occt::BRepTools_History::HasModified()
{
	return ((::BRepTools_History*)_NativeInstance)->HasModified();
}

bool Macad::Occt::BRepTools_History::HasRemoved()
{
	return ((::BRepTools_History*)_NativeInstance)->HasRemoved();
}

void Macad::Occt::BRepTools_History::Merge(Macad::Occt::BRepTools_History^ theHistory23)
{
	Handle(::BRepTools_History) h_theHistory23 = theHistory23->NativeInstance;
	((::BRepTools_History*)_NativeInstance)->Merge(h_theHistory23);
	theHistory23->NativeInstance = h_theHistory23.get();
}


Macad::Occt::BRepTools_History^ Macad::Occt::BRepTools_History::CreateDowncasted(::BRepTools_History* instance)
{
	return gcnew Macad::Occt::BRepTools_History( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_Modifier
//---------------------------------------------------------------------

Macad::Occt::BRepTools_Modifier::BRepTools_Modifier(bool theMutableInput)
	: BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_Modifier(theMutableInput);
}

Macad::Occt::BRepTools_Modifier::BRepTools_Modifier(Macad::Occt::TopoDS_Shape^ S)
	: BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_Modifier(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BRepTools_Modifier::BRepTools_Modifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_Modification^ M)
	: BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
	Handle(::BRepTools_Modification) h_M = M->NativeInstance;
	_NativeInstance = new ::BRepTools_Modifier(*(::TopoDS_Shape*)S->NativeInstance, h_M);
	M->NativeInstance = h_M.get();
}

Macad::Occt::BRepTools_Modifier::BRepTools_Modifier(Macad::Occt::BRepTools_Modifier^ parameter1)
	: BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_Modifier(*(::BRepTools_Modifier*)parameter1->NativeInstance);
}

void Macad::Occt::BRepTools_Modifier::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepTools_Modifier*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepTools_Modifier::Perform(Macad::Occt::BRepTools_Modification^ M, Macad::Occt::Message_ProgressRange^ theProgress)
{
	Handle(::BRepTools_Modification) h_M = M->NativeInstance;
	((::BRepTools_Modifier*)_NativeInstance)->Perform(h_M, *(::Message_ProgressRange*)theProgress->NativeInstance);
	M->NativeInstance = h_M.get();
}

void Macad::Occt::BRepTools_Modifier::Perform(Macad::Occt::BRepTools_Modification^ M)
{
	Handle(::BRepTools_Modification) h_M = M->NativeInstance;
	((::BRepTools_Modifier*)_NativeInstance)->Perform(h_M, ::Message_ProgressRange());
	M->NativeInstance = h_M.get();
}

bool Macad::Occt::BRepTools_Modifier::IsDone()
{
	return ((::BRepTools_Modifier*)_NativeInstance)->IsDone();
}

bool Macad::Occt::BRepTools_Modifier::IsMutableInput()
{
	return ((::BRepTools_Modifier*)_NativeInstance)->IsMutableInput();
}

void Macad::Occt::BRepTools_Modifier::SetMutableInput(bool theMutableInput)
{
	((::BRepTools_Modifier*)_NativeInstance)->SetMutableInput(theMutableInput);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_Modifier::ModifiedShape(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepTools_Modifier*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepTools_NurbsConvertModification
//---------------------------------------------------------------------

Macad::Occt::BRepTools_NurbsConvertModification::BRepTools_NurbsConvertModification()
	: Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepTools_NurbsConvertModification();
}

Macad::Occt::BRepTools_NurbsConvertModification::BRepTools_NurbsConvertModification(Macad::Occt::BRepTools_NurbsConvertModification^ parameter1)
	: Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepTools_NurbsConvertModification(*(::BRepTools_NurbsConvertModification*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepTools_NurbsConvertModification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_NurbsConvertModification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepTools_NurbsConvertModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepTools_NurbsConvertModification::GetUpdatedEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepTools_NurbsConvertModification*)_NativeInstance)->GetUpdatedEdges();
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

Macad::Occt::BRepTools_ReShape::BRepTools_ReShape(Macad::Occt::BRepTools_ReShape^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepTools_ReShape(*(::BRepTools_ReShape*)parameter1->NativeInstance);
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
	return ((::BRepTools_ReShape*)_NativeInstance)->IsRecorded(*(::TopoDS_Shape*)shape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_ReShape::Value(Macad::Occt::TopoDS_Shape^ shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepTools_ReShape*)_NativeInstance)->Value(*(::TopoDS_Shape*)shape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::BRepTools_ReShape::Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh, bool last)
{
	return ((::BRepTools_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, last);
}

int Macad::Occt::BRepTools_ReShape::Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh)
{
	return ((::BRepTools_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, false);
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

bool Macad::Occt::BRepTools_ReShape::ModeConsiderLocation()
{
	return ((::BRepTools_ReShape*)_NativeInstance)->ModeConsiderLocation();
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
	pin_ptr<Macad::Occt::Pnt> pp_theNewPos = &theNewPos;
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::BRepTools_ReShape*)_NativeInstance)->CopyVertex(*(::TopoDS_Vertex*)theV->NativeInstance, *(gp_Pnt*)pp_theNewPos, aTol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::BRepTools_ReShape::IsNewShape(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ((::BRepTools_ReShape*)_NativeInstance)->IsNewShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

Macad::Occt::BRepTools_History^ Macad::Occt::BRepTools_ReShape::History()
{
	Handle(::BRepTools_History) _result;
	_result = ((::BRepTools_ReShape*)_NativeInstance)->History();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_History::CreateDowncasted( _result.get());
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
	: BaseClass<::BRepTools_PurgeLocations>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_PurgeLocations();
}

Macad::Occt::BRepTools_PurgeLocations::BRepTools_PurgeLocations(Macad::Occt::BRepTools_PurgeLocations^ parameter1)
	: BaseClass<::BRepTools_PurgeLocations>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_PurgeLocations(*(::BRepTools_PurgeLocations*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepTools_PurgeLocations::Perform(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ((::BRepTools_PurgeLocations*)_NativeInstance)->Perform(*(::TopoDS_Shape*)theShape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_PurgeLocations::GetResult()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepTools_PurgeLocations*)_NativeInstance)->GetResult();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepTools_PurgeLocations::IsDone()
{
	return ((::BRepTools_PurgeLocations*)_NativeInstance)->IsDone();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_PurgeLocations::ModifiedShape(Macad::Occt::TopoDS_Shape^ theInitShape)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}




//---------------------------------------------------------------------
//  Class  BRepTools_Quilt
//---------------------------------------------------------------------

Macad::Occt::BRepTools_Quilt::BRepTools_Quilt()
	: BaseClass<::BRepTools_Quilt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_Quilt();
}

Macad::Occt::BRepTools_Quilt::BRepTools_Quilt(Macad::Occt::BRepTools_Quilt^ parameter1)
	: BaseClass<::BRepTools_Quilt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_Quilt(*(::BRepTools_Quilt*)parameter1->NativeInstance);
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
	return ((::BRepTools_Quilt*)_NativeInstance)->IsCopied(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepTools_Quilt::Copy(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepTools_Quilt*)_NativeInstance)->Copy(*(::TopoDS_Shape*)S->NativeInstance);
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

Macad::Occt::BRepTools_ShapeSet::BRepTools_ShapeSet(Macad::Occt::BRepTools_ShapeSet^ parameter1)
	: Macad::Occt::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_ShapeSet(*(::BRepTools_ShapeSet*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepTools_ShapeSet::IsWithTriangles()
{
	return ((::BRepTools_ShapeSet*)_NativeInstance)->IsWithTriangles();
}

bool Macad::Occt::BRepTools_ShapeSet::IsWithNormals()
{
	return ((::BRepTools_ShapeSet*)_NativeInstance)->IsWithNormals();
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

void Macad::Occt::BRepTools_ShapeSet::AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
{
	((::BRepTools_ShapeSet*)_NativeInstance)->AddShapes(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

void Macad::Occt::BRepTools_ShapeSet::Check(Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepTools_ShapeSet*)_NativeInstance)->Check((::TopAbs_ShapeEnum)T, *(::TopoDS_Shape*)S->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepTools_Substitution
//---------------------------------------------------------------------

Macad::Occt::BRepTools_Substitution::BRepTools_Substitution()
	: BaseClass<::BRepTools_Substitution>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_Substitution();
}

Macad::Occt::BRepTools_Substitution::BRepTools_Substitution(Macad::Occt::BRepTools_Substitution^ parameter1)
	: BaseClass<::BRepTools_Substitution>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_Substitution(*(::BRepTools_Substitution*)parameter1->NativeInstance);
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
	return ((::BRepTools_Substitution*)_NativeInstance)->IsCopied(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepTools_Substitution::Copy(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepTools_Substitution*)_NativeInstance)->Copy(*(::TopoDS_Shape*)S->NativeInstance);
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

Macad::Occt::BRepTools_TrsfModification::BRepTools_TrsfModification(Macad::Occt::BRepTools_TrsfModification^ parameter1)
	: Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepTools_TrsfModification(*(::BRepTools_TrsfModification*)parameter1->NativeInstance);
}

Macad::Occt::Trsf Macad::Occt::BRepTools_TrsfModification::Trsf()
{
	return Macad::Occt::Trsf(((::BRepTools_TrsfModification*)_NativeInstance)->Trsf());
}

bool Macad::Occt::BRepTools_TrsfModification::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::BRepTools_TrsfModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRepTools_TrsfModification::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_TrsfModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepTools_TrsfModification::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_TrsfModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::BRepTools_TrsfModification::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_TrsfModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepTools_TrsfModification::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepTools_TrsfModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepTools_TrsfModification::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepTools_TrsfModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}


Macad::Occt::BRepTools_TrsfModification^ Macad::Occt::BRepTools_TrsfModification::CreateDowncasted(::BRepTools_TrsfModification* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeCustom_TrsfModification)))
		return Macad::Occt::ShapeCustom_TrsfModification::CreateDowncasted((::ShapeCustom_TrsfModification*)instance);

	return gcnew Macad::Occt::BRepTools_TrsfModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_WireExplorer
//---------------------------------------------------------------------

Macad::Occt::BRepTools_WireExplorer::BRepTools_WireExplorer()
	: BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_WireExplorer();
}

Macad::Occt::BRepTools_WireExplorer::BRepTools_WireExplorer(Macad::Occt::TopoDS_Wire^ W)
	: BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_WireExplorer(*(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepTools_WireExplorer::BRepTools_WireExplorer(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F)
	: BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_WireExplorer(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::BRepTools_WireExplorer::BRepTools_WireExplorer(Macad::Occt::BRepTools_WireExplorer^ parameter1)
	: BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepTools_WireExplorer(*(::BRepTools_WireExplorer*)parameter1->NativeInstance);
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
	return ((::BRepTools_WireExplorer*)_NativeInstance)->More();
}

void Macad::Occt::BRepTools_WireExplorer::Next()
{
	((::BRepTools_WireExplorer*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepTools_WireExplorer::Current()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepTools_WireExplorer*)_NativeInstance)->Current();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopAbs_Orientation Macad::Occt::BRepTools_WireExplorer::Orientation()
{
	return (Macad::Occt::TopAbs_Orientation)((::BRepTools_WireExplorer*)_NativeInstance)->Orientation();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepTools_WireExplorer::CurrentVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepTools_WireExplorer*)_NativeInstance)->CurrentVertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

void Macad::Occt::BRepTools_WireExplorer::Clear()
{
	((::BRepTools_WireExplorer*)_NativeInstance)->Clear();
}



